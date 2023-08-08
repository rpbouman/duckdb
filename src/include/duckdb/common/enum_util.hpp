//-------------------------------------------------------------------------
// This file is automatically generated by scripts/generate_enum_util.py
// Do not edit this file manually, your changes will be overwritten
// If you want to exclude an enum from serialization, add it to the blacklist in the script
//
// Note: The generated code will only work properly if the enum is a top level item in the duckdb namespace
// If the enum is nested in a class, or in another namespace, the generated code will not compile.
// You should move the enum to the duckdb namespace, manually write a specialization or add it to the blacklist
//-------------------------------------------------------------------------


#pragma once

#include <stdint.h>
#include "duckdb/common/string.hpp"

namespace duckdb {

struct EnumUtil {
    // String -> Enum
    template <class T>
    static T FromString(const char *value) = delete;

    template <class T>
    static T FromString(const string &value) { return FromString<T>(value.c_str()); }

    // Enum -> String
    template <class T>
    static const char *ToChars(T value) = delete;

    template <class T>
    static string ToString(T value) { return string(ToChars<T>(value)); }
};

enum class AccessMode : uint8_t;

enum class AggregateHandling : uint8_t;

enum class AggregateOrderDependent : uint8_t;

enum class AggregateType : uint8_t;

enum class AlterForeignKeyType : uint8_t;

enum class AlterScalarFunctionType : uint8_t;

enum class AlterTableFunctionType : uint8_t;

enum class AlterTableType : uint8_t;

enum class AlterType : uint8_t;

enum class AlterViewType : uint8_t;

enum class AppenderType : uint8_t;

enum class ArrowDateTimeType : uint8_t;

enum class ArrowVariableSizeType : uint8_t;

enum class BindingMode : uint8_t;

enum class BitpackingMode : uint8_t;

enum class BlockState : uint8_t;

enum class CAPIResultSetType : uint8_t;

enum class CTEMaterialize : uint8_t;

enum class CatalogType : uint8_t;

enum class CheckpointAbort : uint8_t;

enum class ChunkInfoType : uint8_t;

enum class ColumnDataAllocatorType : uint8_t;

enum class ColumnDataScanProperties : uint8_t;

enum class ColumnSegmentType : uint8_t;

enum class CompressedMaterializationDirection : uint8_t;

enum class CompressionType : uint8_t;

enum class ConflictManagerMode : uint8_t;

enum class ConstraintType : uint8_t;

enum class DataFileType : uint8_t;

enum class DatePartSpecifier : uint8_t;

enum class DebugInitialize : uint8_t;

enum class DefaultOrderByNullType : uint8_t;

enum class DistinctType : uint8_t;

enum class ErrorType : uint16_t;

enum class ExceptionFormatValueType : uint8_t;

enum class ExplainOutputType : uint8_t;

enum class ExplainType : uint8_t;

enum class ExpressionClass : uint8_t;

enum class ExpressionType : uint8_t;

enum class ExtensionLoadResult : uint8_t;

enum class ExtraTypeInfoType : uint8_t;

enum class FileBufferType : uint8_t;

enum class FileCompressionType : uint8_t;

enum class FileGlobOptions : uint8_t;

enum class FileLockType : uint8_t;

enum class FilterPropagateResult : uint8_t;

enum class ForeignKeyType : uint8_t;

enum class FunctionNullHandling : uint8_t;

enum class FunctionSideEffects : uint8_t;

enum class IndexConstraintType : uint8_t;

enum class IndexType : uint8_t;

enum class InsertColumnOrder : uint8_t;

enum class InterruptMode : uint8_t;

enum class JoinRefType : uint8_t;

enum class JoinType : uint8_t;

enum class KeywordCategory : uint8_t;

enum class LoadType : uint8_t;

enum class LogicalOperatorType : uint8_t;

enum class LogicalTypeId : uint8_t;

enum class LookupResultType : uint8_t;

enum class MacroType : uint8_t;

enum class MapInvalidReason : uint8_t;

enum class NType : uint8_t;

enum class NewLineIdentifier : uint8_t;

enum class OnConflictAction : uint8_t;

enum class OnCreateConflict : uint8_t;

enum class OnEntryNotFound : uint8_t;

enum class OperatorFinalizeResultType : uint8_t;

enum class OperatorResultType : uint8_t;

enum class OptimizerType : uint32_t;

enum class OrderByNullType : uint8_t;

enum class OrderPreservationType : uint8_t;

enum class OrderType : uint8_t;

enum class OutputStream : uint8_t;

enum class ParseInfoType : uint8_t;

enum class ParserExtensionResultType : uint8_t;

enum class ParserMode : uint8_t;

enum class PartitionSortStage : uint8_t;

enum class PartitionedColumnDataType : uint8_t;

enum class PartitionedTupleDataType : uint8_t;

enum class PendingExecutionResult : uint8_t;

enum class PhysicalOperatorType : uint8_t;

enum class PhysicalType : uint8_t;

enum class PragmaType : uint8_t;

enum class PreparedParamType : uint8_t;

enum class ProfilerPrintFormat : uint8_t;

enum class QueryNodeType : uint8_t;

enum class QueryResultType : uint8_t;

enum class RelationType : uint8_t;

enum class ResultModifierType : uint8_t;

enum class SampleMethod : uint8_t;

enum class SequenceInfo : uint8_t;

enum class SetOperationType : uint8_t;

enum class SetScope : uint8_t;

enum class SetType : uint8_t;

enum class SimplifiedTokenType : uint8_t;

enum class SinkCombineResultType : uint8_t;

enum class SinkFinalizeType : uint8_t;

enum class SinkResultType : uint8_t;

enum class SourceResultType : uint8_t;

enum class StatementReturnType : uint8_t;

enum class StatementType : uint8_t;

enum class StatisticsType : uint8_t;

enum class StatsInfo : uint8_t;

enum class StrTimeSpecifier : uint8_t;

enum class SubqueryType : uint8_t;

enum class TableColumnType : uint8_t;

enum class TableFilterType : uint8_t;

enum class TableReferenceType : uint8_t;

enum class TableScanType : uint8_t;

enum class TaskExecutionMode : uint8_t;

enum class TaskExecutionResult : uint8_t;

enum class TimestampCastResult : uint8_t;

enum class TransactionType : uint8_t;

enum class TupleDataPinProperties : uint8_t;

enum class UndoFlags : uint32_t;

enum class UnionInvalidReason : uint8_t;

enum class VectorAuxiliaryDataType : uint8_t;

enum class VectorBufferType : uint8_t;

enum class VectorType : uint8_t;

enum class VerificationType : uint8_t;

enum class VerifyExistenceType : uint8_t;

enum class WALType : uint8_t;

enum class WindowAggregationMode : uint32_t;

enum class WindowBoundary : uint8_t;

enum class WithinCollection : uint8_t;


template<>
const char* EnumUtil::ToChars<AccessMode>(AccessMode value);

template<>
const char* EnumUtil::ToChars<AggregateHandling>(AggregateHandling value);

template<>
const char* EnumUtil::ToChars<AggregateOrderDependent>(AggregateOrderDependent value);

template<>
const char* EnumUtil::ToChars<AggregateType>(AggregateType value);

template<>
const char* EnumUtil::ToChars<AlterForeignKeyType>(AlterForeignKeyType value);

template<>
const char* EnumUtil::ToChars<AlterScalarFunctionType>(AlterScalarFunctionType value);

template<>
const char* EnumUtil::ToChars<AlterTableFunctionType>(AlterTableFunctionType value);

template<>
const char* EnumUtil::ToChars<AlterTableType>(AlterTableType value);

template<>
const char* EnumUtil::ToChars<AlterType>(AlterType value);

template<>
const char* EnumUtil::ToChars<AlterViewType>(AlterViewType value);

template<>
const char* EnumUtil::ToChars<AppenderType>(AppenderType value);

template<>
const char* EnumUtil::ToChars<ArrowDateTimeType>(ArrowDateTimeType value);

template<>
const char* EnumUtil::ToChars<ArrowVariableSizeType>(ArrowVariableSizeType value);

template<>
const char* EnumUtil::ToChars<BindingMode>(BindingMode value);

template<>
const char* EnumUtil::ToChars<BitpackingMode>(BitpackingMode value);

template<>
const char* EnumUtil::ToChars<BlockState>(BlockState value);

template<>
const char* EnumUtil::ToChars<CAPIResultSetType>(CAPIResultSetType value);

template<>
const char* EnumUtil::ToChars<CTEMaterialize>(CTEMaterialize value);

template<>
const char* EnumUtil::ToChars<CatalogType>(CatalogType value);

template<>
const char* EnumUtil::ToChars<CheckpointAbort>(CheckpointAbort value);

template<>
const char* EnumUtil::ToChars<ChunkInfoType>(ChunkInfoType value);

template<>
const char* EnumUtil::ToChars<ColumnDataAllocatorType>(ColumnDataAllocatorType value);

template<>
const char* EnumUtil::ToChars<ColumnDataScanProperties>(ColumnDataScanProperties value);

template<>
const char* EnumUtil::ToChars<ColumnSegmentType>(ColumnSegmentType value);

template<>
const char* EnumUtil::ToChars<CompressedMaterializationDirection>(CompressedMaterializationDirection value);

template<>
const char* EnumUtil::ToChars<CompressionType>(CompressionType value);

template<>
const char* EnumUtil::ToChars<ConflictManagerMode>(ConflictManagerMode value);

template<>
const char* EnumUtil::ToChars<ConstraintType>(ConstraintType value);

template<>
const char* EnumUtil::ToChars<DataFileType>(DataFileType value);

template<>
const char* EnumUtil::ToChars<DatePartSpecifier>(DatePartSpecifier value);

template<>
const char* EnumUtil::ToChars<DebugInitialize>(DebugInitialize value);

template<>
const char* EnumUtil::ToChars<DefaultOrderByNullType>(DefaultOrderByNullType value);

template<>
const char* EnumUtil::ToChars<DistinctType>(DistinctType value);

template<>
const char* EnumUtil::ToChars<ErrorType>(ErrorType value);

template<>
const char* EnumUtil::ToChars<ExceptionFormatValueType>(ExceptionFormatValueType value);

template<>
const char* EnumUtil::ToChars<ExplainOutputType>(ExplainOutputType value);

template<>
const char* EnumUtil::ToChars<ExplainType>(ExplainType value);

template<>
const char* EnumUtil::ToChars<ExpressionClass>(ExpressionClass value);

template<>
const char* EnumUtil::ToChars<ExpressionType>(ExpressionType value);

template<>
const char* EnumUtil::ToChars<ExtensionLoadResult>(ExtensionLoadResult value);

template<>
const char* EnumUtil::ToChars<ExtraTypeInfoType>(ExtraTypeInfoType value);

template<>
const char* EnumUtil::ToChars<FileBufferType>(FileBufferType value);

template<>
const char* EnumUtil::ToChars<FileCompressionType>(FileCompressionType value);

template<>
const char* EnumUtil::ToChars<FileGlobOptions>(FileGlobOptions value);

template<>
const char* EnumUtil::ToChars<FileLockType>(FileLockType value);

template<>
const char* EnumUtil::ToChars<FilterPropagateResult>(FilterPropagateResult value);

template<>
const char* EnumUtil::ToChars<ForeignKeyType>(ForeignKeyType value);

template<>
const char* EnumUtil::ToChars<FunctionNullHandling>(FunctionNullHandling value);

template<>
const char* EnumUtil::ToChars<FunctionSideEffects>(FunctionSideEffects value);

template<>
const char* EnumUtil::ToChars<IndexConstraintType>(IndexConstraintType value);

template<>
const char* EnumUtil::ToChars<IndexType>(IndexType value);

template<>
const char* EnumUtil::ToChars<InsertColumnOrder>(InsertColumnOrder value);

template<>
const char* EnumUtil::ToChars<InterruptMode>(InterruptMode value);

template<>
const char* EnumUtil::ToChars<JoinRefType>(JoinRefType value);

template<>
const char* EnumUtil::ToChars<JoinType>(JoinType value);

template<>
const char* EnumUtil::ToChars<KeywordCategory>(KeywordCategory value);

template<>
const char* EnumUtil::ToChars<LoadType>(LoadType value);

template<>
const char* EnumUtil::ToChars<LogicalOperatorType>(LogicalOperatorType value);

template<>
const char* EnumUtil::ToChars<LogicalTypeId>(LogicalTypeId value);

template<>
const char* EnumUtil::ToChars<LookupResultType>(LookupResultType value);

template<>
const char* EnumUtil::ToChars<MacroType>(MacroType value);

template<>
const char* EnumUtil::ToChars<MapInvalidReason>(MapInvalidReason value);

template<>
const char* EnumUtil::ToChars<NType>(NType value);

template<>
const char* EnumUtil::ToChars<NewLineIdentifier>(NewLineIdentifier value);

template<>
const char* EnumUtil::ToChars<OnConflictAction>(OnConflictAction value);

template<>
const char* EnumUtil::ToChars<OnCreateConflict>(OnCreateConflict value);

template<>
const char* EnumUtil::ToChars<OnEntryNotFound>(OnEntryNotFound value);

template<>
const char* EnumUtil::ToChars<OperatorFinalizeResultType>(OperatorFinalizeResultType value);

template<>
const char* EnumUtil::ToChars<OperatorResultType>(OperatorResultType value);

template<>
const char* EnumUtil::ToChars<OptimizerType>(OptimizerType value);

template<>
const char* EnumUtil::ToChars<OrderByNullType>(OrderByNullType value);

template<>
const char* EnumUtil::ToChars<OrderPreservationType>(OrderPreservationType value);

template<>
const char* EnumUtil::ToChars<OrderType>(OrderType value);

template<>
const char* EnumUtil::ToChars<OutputStream>(OutputStream value);

template<>
const char* EnumUtil::ToChars<ParseInfoType>(ParseInfoType value);

template<>
const char* EnumUtil::ToChars<ParserExtensionResultType>(ParserExtensionResultType value);

template<>
const char* EnumUtil::ToChars<ParserMode>(ParserMode value);

template<>
const char* EnumUtil::ToChars<PartitionSortStage>(PartitionSortStage value);

template<>
const char* EnumUtil::ToChars<PartitionedColumnDataType>(PartitionedColumnDataType value);

template<>
const char* EnumUtil::ToChars<PartitionedTupleDataType>(PartitionedTupleDataType value);

template<>
const char* EnumUtil::ToChars<PendingExecutionResult>(PendingExecutionResult value);

template<>
const char* EnumUtil::ToChars<PhysicalOperatorType>(PhysicalOperatorType value);

template<>
const char* EnumUtil::ToChars<PhysicalType>(PhysicalType value);

template<>
const char* EnumUtil::ToChars<PragmaType>(PragmaType value);

template<>
const char* EnumUtil::ToChars<PreparedParamType>(PreparedParamType value);

template<>
const char* EnumUtil::ToChars<ProfilerPrintFormat>(ProfilerPrintFormat value);

template<>
const char* EnumUtil::ToChars<QueryNodeType>(QueryNodeType value);

template<>
const char* EnumUtil::ToChars<QueryResultType>(QueryResultType value);

template<>
const char* EnumUtil::ToChars<RelationType>(RelationType value);

template<>
const char* EnumUtil::ToChars<ResultModifierType>(ResultModifierType value);

template<>
const char* EnumUtil::ToChars<SampleMethod>(SampleMethod value);

template<>
const char* EnumUtil::ToChars<SequenceInfo>(SequenceInfo value);

template<>
const char* EnumUtil::ToChars<SetOperationType>(SetOperationType value);

template<>
const char* EnumUtil::ToChars<SetScope>(SetScope value);

template<>
const char* EnumUtil::ToChars<SetType>(SetType value);

template<>
const char* EnumUtil::ToChars<SimplifiedTokenType>(SimplifiedTokenType value);

template<>
const char* EnumUtil::ToChars<SinkCombineResultType>(SinkCombineResultType value);

template<>
const char* EnumUtil::ToChars<SinkFinalizeType>(SinkFinalizeType value);

template<>
const char* EnumUtil::ToChars<SinkResultType>(SinkResultType value);

template<>
const char* EnumUtil::ToChars<SourceResultType>(SourceResultType value);

template<>
const char* EnumUtil::ToChars<StatementReturnType>(StatementReturnType value);

template<>
const char* EnumUtil::ToChars<StatementType>(StatementType value);

template<>
const char* EnumUtil::ToChars<StatisticsType>(StatisticsType value);

template<>
const char* EnumUtil::ToChars<StatsInfo>(StatsInfo value);

template<>
const char* EnumUtil::ToChars<StrTimeSpecifier>(StrTimeSpecifier value);

template<>
const char* EnumUtil::ToChars<SubqueryType>(SubqueryType value);

template<>
const char* EnumUtil::ToChars<TableColumnType>(TableColumnType value);

template<>
const char* EnumUtil::ToChars<TableFilterType>(TableFilterType value);

template<>
const char* EnumUtil::ToChars<TableReferenceType>(TableReferenceType value);

template<>
const char* EnumUtil::ToChars<TableScanType>(TableScanType value);

template<>
const char* EnumUtil::ToChars<TaskExecutionMode>(TaskExecutionMode value);

template<>
const char* EnumUtil::ToChars<TaskExecutionResult>(TaskExecutionResult value);

template<>
const char* EnumUtil::ToChars<TimestampCastResult>(TimestampCastResult value);

template<>
const char* EnumUtil::ToChars<TransactionType>(TransactionType value);

template<>
const char* EnumUtil::ToChars<TupleDataPinProperties>(TupleDataPinProperties value);

template<>
const char* EnumUtil::ToChars<UndoFlags>(UndoFlags value);

template<>
const char* EnumUtil::ToChars<UnionInvalidReason>(UnionInvalidReason value);

template<>
const char* EnumUtil::ToChars<VectorAuxiliaryDataType>(VectorAuxiliaryDataType value);

template<>
const char* EnumUtil::ToChars<VectorBufferType>(VectorBufferType value);

template<>
const char* EnumUtil::ToChars<VectorType>(VectorType value);

template<>
const char* EnumUtil::ToChars<VerificationType>(VerificationType value);

template<>
const char* EnumUtil::ToChars<VerifyExistenceType>(VerifyExistenceType value);

template<>
const char* EnumUtil::ToChars<WALType>(WALType value);

template<>
const char* EnumUtil::ToChars<WindowAggregationMode>(WindowAggregationMode value);

template<>
const char* EnumUtil::ToChars<WindowBoundary>(WindowBoundary value);

template<>
const char* EnumUtil::ToChars<WithinCollection>(WithinCollection value);


template<>
AccessMode EnumUtil::FromString<AccessMode>(const char *value);

template<>
AggregateHandling EnumUtil::FromString<AggregateHandling>(const char *value);

template<>
AggregateOrderDependent EnumUtil::FromString<AggregateOrderDependent>(const char *value);

template<>
AggregateType EnumUtil::FromString<AggregateType>(const char *value);

template<>
AlterForeignKeyType EnumUtil::FromString<AlterForeignKeyType>(const char *value);

template<>
AlterScalarFunctionType EnumUtil::FromString<AlterScalarFunctionType>(const char *value);

template<>
AlterTableFunctionType EnumUtil::FromString<AlterTableFunctionType>(const char *value);

template<>
AlterTableType EnumUtil::FromString<AlterTableType>(const char *value);

template<>
AlterType EnumUtil::FromString<AlterType>(const char *value);

template<>
AlterViewType EnumUtil::FromString<AlterViewType>(const char *value);

template<>
AppenderType EnumUtil::FromString<AppenderType>(const char *value);

template<>
ArrowDateTimeType EnumUtil::FromString<ArrowDateTimeType>(const char *value);

template<>
ArrowVariableSizeType EnumUtil::FromString<ArrowVariableSizeType>(const char *value);

template<>
BindingMode EnumUtil::FromString<BindingMode>(const char *value);

template<>
BitpackingMode EnumUtil::FromString<BitpackingMode>(const char *value);

template<>
BlockState EnumUtil::FromString<BlockState>(const char *value);

template<>
CAPIResultSetType EnumUtil::FromString<CAPIResultSetType>(const char *value);

template<>
CTEMaterialize EnumUtil::FromString<CTEMaterialize>(const char *value);

template<>
CatalogType EnumUtil::FromString<CatalogType>(const char *value);

template<>
CheckpointAbort EnumUtil::FromString<CheckpointAbort>(const char *value);

template<>
ChunkInfoType EnumUtil::FromString<ChunkInfoType>(const char *value);

template<>
ColumnDataAllocatorType EnumUtil::FromString<ColumnDataAllocatorType>(const char *value);

template<>
ColumnDataScanProperties EnumUtil::FromString<ColumnDataScanProperties>(const char *value);

template<>
ColumnSegmentType EnumUtil::FromString<ColumnSegmentType>(const char *value);

template<>
CompressedMaterializationDirection EnumUtil::FromString<CompressedMaterializationDirection>(const char *value);

template<>
CompressionType EnumUtil::FromString<CompressionType>(const char *value);

template<>
ConflictManagerMode EnumUtil::FromString<ConflictManagerMode>(const char *value);

template<>
ConstraintType EnumUtil::FromString<ConstraintType>(const char *value);

template<>
DataFileType EnumUtil::FromString<DataFileType>(const char *value);

template<>
DatePartSpecifier EnumUtil::FromString<DatePartSpecifier>(const char *value);

template<>
DebugInitialize EnumUtil::FromString<DebugInitialize>(const char *value);

template<>
DefaultOrderByNullType EnumUtil::FromString<DefaultOrderByNullType>(const char *value);

template<>
DistinctType EnumUtil::FromString<DistinctType>(const char *value);

template<>
ErrorType EnumUtil::FromString<ErrorType>(const char *value);

template<>
ExceptionFormatValueType EnumUtil::FromString<ExceptionFormatValueType>(const char *value);

template<>
ExplainOutputType EnumUtil::FromString<ExplainOutputType>(const char *value);

template<>
ExplainType EnumUtil::FromString<ExplainType>(const char *value);

template<>
ExpressionClass EnumUtil::FromString<ExpressionClass>(const char *value);

template<>
ExpressionType EnumUtil::FromString<ExpressionType>(const char *value);

template<>
ExtensionLoadResult EnumUtil::FromString<ExtensionLoadResult>(const char *value);

template<>
ExtraTypeInfoType EnumUtil::FromString<ExtraTypeInfoType>(const char *value);

template<>
FileBufferType EnumUtil::FromString<FileBufferType>(const char *value);

template<>
FileCompressionType EnumUtil::FromString<FileCompressionType>(const char *value);

template<>
FileGlobOptions EnumUtil::FromString<FileGlobOptions>(const char *value);

template<>
FileLockType EnumUtil::FromString<FileLockType>(const char *value);

template<>
FilterPropagateResult EnumUtil::FromString<FilterPropagateResult>(const char *value);

template<>
ForeignKeyType EnumUtil::FromString<ForeignKeyType>(const char *value);

template<>
FunctionNullHandling EnumUtil::FromString<FunctionNullHandling>(const char *value);

template<>
FunctionSideEffects EnumUtil::FromString<FunctionSideEffects>(const char *value);

template<>
IndexConstraintType EnumUtil::FromString<IndexConstraintType>(const char *value);

template<>
IndexType EnumUtil::FromString<IndexType>(const char *value);

template<>
InsertColumnOrder EnumUtil::FromString<InsertColumnOrder>(const char *value);

template<>
InterruptMode EnumUtil::FromString<InterruptMode>(const char *value);

template<>
JoinRefType EnumUtil::FromString<JoinRefType>(const char *value);

template<>
JoinType EnumUtil::FromString<JoinType>(const char *value);

template<>
KeywordCategory EnumUtil::FromString<KeywordCategory>(const char *value);

template<>
LoadType EnumUtil::FromString<LoadType>(const char *value);

template<>
LogicalOperatorType EnumUtil::FromString<LogicalOperatorType>(const char *value);

template<>
LogicalTypeId EnumUtil::FromString<LogicalTypeId>(const char *value);

template<>
LookupResultType EnumUtil::FromString<LookupResultType>(const char *value);

template<>
MacroType EnumUtil::FromString<MacroType>(const char *value);

template<>
MapInvalidReason EnumUtil::FromString<MapInvalidReason>(const char *value);

template<>
NType EnumUtil::FromString<NType>(const char *value);

template<>
NewLineIdentifier EnumUtil::FromString<NewLineIdentifier>(const char *value);

template<>
OnConflictAction EnumUtil::FromString<OnConflictAction>(const char *value);

template<>
OnCreateConflict EnumUtil::FromString<OnCreateConflict>(const char *value);

template<>
OnEntryNotFound EnumUtil::FromString<OnEntryNotFound>(const char *value);

template<>
OperatorFinalizeResultType EnumUtil::FromString<OperatorFinalizeResultType>(const char *value);

template<>
OperatorResultType EnumUtil::FromString<OperatorResultType>(const char *value);

template<>
OptimizerType EnumUtil::FromString<OptimizerType>(const char *value);

template<>
OrderByNullType EnumUtil::FromString<OrderByNullType>(const char *value);

template<>
OrderPreservationType EnumUtil::FromString<OrderPreservationType>(const char *value);

template<>
OrderType EnumUtil::FromString<OrderType>(const char *value);

template<>
OutputStream EnumUtil::FromString<OutputStream>(const char *value);

template<>
ParseInfoType EnumUtil::FromString<ParseInfoType>(const char *value);

template<>
ParserExtensionResultType EnumUtil::FromString<ParserExtensionResultType>(const char *value);

template<>
ParserMode EnumUtil::FromString<ParserMode>(const char *value);

template<>
PartitionSortStage EnumUtil::FromString<PartitionSortStage>(const char *value);

template<>
PartitionedColumnDataType EnumUtil::FromString<PartitionedColumnDataType>(const char *value);

template<>
PartitionedTupleDataType EnumUtil::FromString<PartitionedTupleDataType>(const char *value);

template<>
PendingExecutionResult EnumUtil::FromString<PendingExecutionResult>(const char *value);

template<>
PhysicalOperatorType EnumUtil::FromString<PhysicalOperatorType>(const char *value);

template<>
PhysicalType EnumUtil::FromString<PhysicalType>(const char *value);

template<>
PragmaType EnumUtil::FromString<PragmaType>(const char *value);

template<>
PreparedParamType EnumUtil::FromString<PreparedParamType>(const char *value);

template<>
ProfilerPrintFormat EnumUtil::FromString<ProfilerPrintFormat>(const char *value);

template<>
QueryNodeType EnumUtil::FromString<QueryNodeType>(const char *value);

template<>
QueryResultType EnumUtil::FromString<QueryResultType>(const char *value);

template<>
RelationType EnumUtil::FromString<RelationType>(const char *value);

template<>
ResultModifierType EnumUtil::FromString<ResultModifierType>(const char *value);

template<>
SampleMethod EnumUtil::FromString<SampleMethod>(const char *value);

template<>
SequenceInfo EnumUtil::FromString<SequenceInfo>(const char *value);

template<>
SetOperationType EnumUtil::FromString<SetOperationType>(const char *value);

template<>
SetScope EnumUtil::FromString<SetScope>(const char *value);

template<>
SetType EnumUtil::FromString<SetType>(const char *value);

template<>
SimplifiedTokenType EnumUtil::FromString<SimplifiedTokenType>(const char *value);

template<>
SinkCombineResultType EnumUtil::FromString<SinkCombineResultType>(const char *value);

template<>
SinkFinalizeType EnumUtil::FromString<SinkFinalizeType>(const char *value);

template<>
SinkResultType EnumUtil::FromString<SinkResultType>(const char *value);

template<>
SourceResultType EnumUtil::FromString<SourceResultType>(const char *value);

template<>
StatementReturnType EnumUtil::FromString<StatementReturnType>(const char *value);

template<>
StatementType EnumUtil::FromString<StatementType>(const char *value);

template<>
StatisticsType EnumUtil::FromString<StatisticsType>(const char *value);

template<>
StatsInfo EnumUtil::FromString<StatsInfo>(const char *value);

template<>
StrTimeSpecifier EnumUtil::FromString<StrTimeSpecifier>(const char *value);

template<>
SubqueryType EnumUtil::FromString<SubqueryType>(const char *value);

template<>
TableColumnType EnumUtil::FromString<TableColumnType>(const char *value);

template<>
TableFilterType EnumUtil::FromString<TableFilterType>(const char *value);

template<>
TableReferenceType EnumUtil::FromString<TableReferenceType>(const char *value);

template<>
TableScanType EnumUtil::FromString<TableScanType>(const char *value);

template<>
TaskExecutionMode EnumUtil::FromString<TaskExecutionMode>(const char *value);

template<>
TaskExecutionResult EnumUtil::FromString<TaskExecutionResult>(const char *value);

template<>
TimestampCastResult EnumUtil::FromString<TimestampCastResult>(const char *value);

template<>
TransactionType EnumUtil::FromString<TransactionType>(const char *value);

template<>
TupleDataPinProperties EnumUtil::FromString<TupleDataPinProperties>(const char *value);

template<>
UndoFlags EnumUtil::FromString<UndoFlags>(const char *value);

template<>
UnionInvalidReason EnumUtil::FromString<UnionInvalidReason>(const char *value);

template<>
VectorAuxiliaryDataType EnumUtil::FromString<VectorAuxiliaryDataType>(const char *value);

template<>
VectorBufferType EnumUtil::FromString<VectorBufferType>(const char *value);

template<>
VectorType EnumUtil::FromString<VectorType>(const char *value);

template<>
VerificationType EnumUtil::FromString<VerificationType>(const char *value);

template<>
VerifyExistenceType EnumUtil::FromString<VerifyExistenceType>(const char *value);

template<>
WALType EnumUtil::FromString<WALType>(const char *value);

template<>
WindowAggregationMode EnumUtil::FromString<WindowAggregationMode>(const char *value);

template<>
WindowBoundary EnumUtil::FromString<WindowBoundary>(const char *value);

template<>
WithinCollection EnumUtil::FromString<WithinCollection>(const char *value);


}
