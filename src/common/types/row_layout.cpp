//===----------------------------------------------------------------------===//
//                         DuckDB
//
// duckdb/common/types/row_layout.cpp
//
//
//===----------------------------------------------------------------------===//

#include "duckdb/common/types/row_layout.hpp"
#include "duckdb/planner/expression/bound_aggregate_expression.hpp"

namespace duckdb {

vector<AggregateObject> AggregateObject::CreateAggregateObjects(const vector<BoundAggregateExpression *> &bindings) {
	vector<AggregateObject> aggregates;
	for (auto &binding : bindings) {
		auto payload_size = binding->function.state_size();
#ifndef DUCKDB_ALLOW_UNDEFINED
		payload_size = RowLayout::Align(payload_size);
#endif
		aggregates.emplace_back(binding->function, binding->bind_info.get(), binding->children.size(), payload_size,
		                        binding->distinct, binding->return_type.InternalType(), binding->filter.get());
	}
	return aggregates;
}

RowLayout::RowLayout() : flag_width(0), data_width(0), aggr_width(0), row_width(0) {
}

void RowLayout::Initialize(vector<LogicalType> types_p, Aggregates aggregates_p) {
	offsets.clear();
	types = types_p;

	// Null mask at the front - 1 bit per value.
	flag_width = ValidityBytes::ValidityMaskSize(types.size());
	row_width = flag_width;

	// Data columns. No alignment required.
	for (const auto &type : types) {
		offsets.push_back(row_width);
		row_width += GetTypeIdSize(type.InternalType());
	}

	// Alignment padding for aggregates
#ifndef DUCKDB_ALLOW_UNDEFINED
	row_width = Align(row_width);
#endif
	data_width = row_width - flag_width;

	// Aggregate fields.
	aggregates = move(aggregates_p);
	for (auto &aggregate : aggregates) {
		offsets.push_back(row_width);
		row_width += aggregate.payload_size;
#ifndef DUCKDB_ALLOW_UNDEFINED
		D_ASSERT(aggregate.payload_size == Align(aggregate.payload_size));
#endif
	}
	aggr_width = row_width - data_width - flag_width;

	// Alignment padding for the next row
#ifndef DUCKDB_ALLOW_UNDEFINED
	row_width = Align(row_width);
#endif
}

void RowLayout::Initialize(vector<LogicalType> types_p) {
	Initialize(move(types_p), Aggregates());
}

void RowLayout::Initialize(Aggregates aggregates_p) {
	Initialize(vector<LogicalType>(), move(aggregates_p));
}

} // namespace duckdb
