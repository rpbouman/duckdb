//===----------------------------------------------------------------------===//
//                         DuckDB
//
// planner/expression_binder/group_binder.hpp
//
//
//===----------------------------------------------------------------------===//

#pragma once

#include "planner/expression_binder.hpp"
#include "common/unordered_map.hpp"
#include "common/unordered_set.hpp"

namespace duckdb {
class ConstantExpression;
class ColumnRefExpression;

//! The GROUP binder is responsible for binding expressions in the GROUP BY clause
class GroupBinder : public ExpressionBinder {
public:
	GroupBinder(Binder &binder, ClientContext &context, SelectNode &node, size_t group_index,
	            unordered_map<string, uint32_t> &alias_map, unordered_map<string, uint32_t> &group_alias_map);

	//! The unbound root expression
	unique_ptr<ParsedExpression> unbound_expression;
	//! The group index currently being bound
	uint32_t bind_index;

protected:
	BindResult BindExpression(ParsedExpression &expr, uint32_t depth, bool root_expression) override;

	BindResult BindSelectRef(uint32_t entry);
	BindResult BindColumnRef(ColumnRefExpression &expr);
	BindResult BindConstant(ConstantExpression &expr);

	SelectNode &node;
	unordered_map<string, uint32_t> &alias_map;
	unordered_map<string, uint32_t> &group_alias_map;
	unordered_set<uint32_t> used_aliases;

	size_t group_index;
};

} // namespace duckdb
