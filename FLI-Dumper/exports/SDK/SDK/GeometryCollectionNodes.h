
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: Chaos
/// dependency: CoreUObject
/// dependency: DataflowCore
/// dependency: Engine
/// dependency: FractureEngine
/// dependency: GeometryCollectionEngine
/// dependency: GeometryFramework

#pragma pack(push, 0x1)

/// Enum /Script/GeometryCollectionNodes.EFloatArrayToIntArrayFunctionEnum
/// Size: 0x01 (1 bytes)
enum class EFloatArrayToIntArrayFunctionEnum : uint8_t
{
	EFloatArrayToIntArrayFunctionEnum__Dataflow_FloatToInt_Function_Floor            = 0,
	EFloatArrayToIntArrayFunctionEnum__Dataflow_FloatToInt_Function_Ceil             = 1,
	EFloatArrayToIntArrayFunctionEnum__Dataflow_FloatToInt_Function_Round            = 2,
	EFloatArrayToIntArrayFunctionEnum__Dataflow_FloatToInt_Function_Truncate         = 3,
	EFloatArrayToIntArrayFunctionEnum__Dataflow_FloatToInt_NonZeroToIndex            = 4,
	EFloatArrayToIntArrayFunctionEnum__Dataflow_FloatToInt_ZeroToIndex               = 5,
	EFloatArrayToIntArrayFunctionEnum__Dataflow_Max                                  = 6
};

/// Enum /Script/GeometryCollectionNodes.ECompareOperation1Enum
/// Size: 0x01 (1 bytes)
enum class ECompareOperation1Enum : uint8_t
{
	ECompareOperation1Enum__Dataflow_Compare_Equal                                   = 0,
	ECompareOperation1Enum__Dataflow_Compare_Smaller                                 = 1,
	ECompareOperation1Enum__Dataflow_Compare_SmallerOrEqual                          = 2,
	ECompareOperation1Enum__Dataflow_Compare_Greater                                 = 3,
	ECompareOperation1Enum__Dataflow_Compare_GreaterOrEqual                          = 4,
	ECompareOperation1Enum__Dataflow_Max                                             = 5
};

/// Enum /Script/GeometryCollectionNodes.EStatisticsOperationEnum
/// Size: 0x01 (1 bytes)
enum class EStatisticsOperationEnum : uint8_t
{
	EStatisticsOperationEnum__Dataflow_EStatisticsOperationEnum_Min                  = 0,
	EStatisticsOperationEnum__Dataflow_EStatisticsOperationEnum_Max                  = 1,
	EStatisticsOperationEnum__Dataflow_EStatisticsOperationEnum_Mean                 = 2,
	EStatisticsOperationEnum__Dataflow_EStatisticsOperationEnum_Median               = 3,
	EStatisticsOperationEnum__Dataflow_EStatisticsOperationEnum_Mode                 = 4,
	EStatisticsOperationEnum__Dataflow_EStatisticsOperationEnum_Sum                  = 5,
	EStatisticsOperationEnum__Dataflow_Max                                           = 6
};

/// Enum /Script/GeometryCollectionNodes.EDataflowFieldFalloffType
/// Size: 0x01 (1 bytes)
enum class EDataflowFieldFalloffType : uint8_t
{
	EDataflowFieldFalloffType__Dataflow_FieldFalloffType_None                        = 0,
	EDataflowFieldFalloffType__Dataflow_FieldFalloffType_Linear                      = 1,
	EDataflowFieldFalloffType__Dataflow_FieldFalloffType_Inverse                     = 2,
	EDataflowFieldFalloffType__Dataflow_FieldFalloffType_Squared                     = 3,
	EDataflowFieldFalloffType__Dataflow_FieldFalloffType_Logarithmic                 = 4,
	EDataflowFieldFalloffType__Dataflow_Max                                          = 5
};

/// Enum /Script/GeometryCollectionNodes.EDataflowSetMaskConditionType
/// Size: 0x01 (1 bytes)
enum class EDataflowSetMaskConditionType : uint8_t
{
	EDataflowSetMaskConditionType__Dataflow_SetMaskConditionType_Always              = 0,
	EDataflowSetMaskConditionType__Dataflow_SetMaskConditionType_IFF_NOT_Interior    = 1,
	EDataflowSetMaskConditionType__Dataflow_SetMaskConditionType_IFF_NOT_Exterior    = 2,
	EDataflowSetMaskConditionType__Dataflow_Max                                      = 3
};

/// Enum /Script/GeometryCollectionNodes.EDataflowWaveFunctionType
/// Size: 0x01 (1 bytes)
enum class EDataflowWaveFunctionType : uint8_t
{
	EDataflowWaveFunctionType__Dataflow_WaveFunctionType_Cosine                      = 0,
	EDataflowWaveFunctionType__Dataflow_WaveFunctionType_Gaussian                    = 1,
	EDataflowWaveFunctionType__Dataflow_WaveFunctionType_Falloff                     = 2,
	EDataflowWaveFunctionType__Dataflow_WaveFunctionType_Decay                       = 3,
	EDataflowWaveFunctionType__Dataflow_Max                                          = 4
};

/// Enum /Script/GeometryCollectionNodes.EDataflowFloatFieldOperationType
/// Size: 0x01 (1 bytes)
enum class EDataflowFloatFieldOperationType : uint8_t
{
	EDataflowFloatFieldOperationType__Dataflow_FloatFieldOperationType_Multiply      = 0,
	EDataflowFloatFieldOperationType__Dataflow_FloatFieldFalloffType_Divide          = 1,
	EDataflowFloatFieldOperationType__Dataflow_FloatFieldFalloffType_Add             = 2,
	EDataflowFloatFieldOperationType__Dataflow_FloatFieldFalloffType_Substract       = 3,
	EDataflowFloatFieldOperationType__Dataflow_FloatFieldFalloffType_Min             = 4,
	EDataflowFloatFieldOperationType__Dataflow_FloatFieldFalloffType_Max             = 5,
	EDataflowFloatFieldOperationType__Dataflow_Max                                   = 6
};

/// Enum /Script/GeometryCollectionNodes.EDataflowVectorFieldOperationType
/// Size: 0x01 (1 bytes)
enum class EDataflowVectorFieldOperationType : uint8_t
{
	EDataflowVectorFieldOperationType__Dataflow_VectorFieldOperationType_Multiply    = 0,
	EDataflowVectorFieldOperationType__Dataflow_VectorFieldFalloffType_Divide        = 1,
	EDataflowVectorFieldOperationType__Dataflow_VectorFieldFalloffType_Add           = 2,
	EDataflowVectorFieldOperationType__Dataflow_VectorFieldFalloffType_Substract     = 3,
	EDataflowVectorFieldOperationType__Dataflow_VectorFieldFalloffType_CrossProduct  = 4,
	EDataflowVectorFieldOperationType__Dataflow_Max                                  = 5
};

/// Enum /Script/GeometryCollectionNodes.ESetMaterialOperationTypeEnum
/// Size: 0x01 (1 bytes)
enum class ESetMaterialOperationTypeEnum : uint8_t
{
	ESetMaterialOperationTypeEnum__Dataflow_SetMaterialOperationType_Add             = 0,
	ESetMaterialOperationTypeEnum__Dataflow_SetMaterialOperationType_Insert          = 1,
	ESetMaterialOperationTypeEnum__Dataflow_Max                                      = 2
};

/// Enum /Script/GeometryCollectionNodes.EConvexOverlapRemovalMethodEnum
/// Size: 0x01 (1 bytes)
enum class EConvexOverlapRemovalMethodEnum : uint8_t
{
	EConvexOverlapRemovalMethodEnum__Dataflow_EConvexOverlapRemovalMethod_None       = 0,
	EConvexOverlapRemovalMethodEnum__Dataflow_EConvexOverlapRemovalMethod_All        = 1,
	EConvexOverlapRemovalMethodEnum__Dataflow_EConvexOverlapRemovalMethod_OnlyClusters = 2,
	EConvexOverlapRemovalMethodEnum__Dataflow_EConvexOverlapRemovalMethod_OnlyClustersVsClusters = 3,
	EConvexOverlapRemovalMethodEnum__Dataflow_Max                                    = 4
};

/// Enum /Script/GeometryCollectionNodes.ENegativeSpaceSampleMethodDataflowEnum
/// Size: 0x01 (1 bytes)
enum class ENegativeSpaceSampleMethodDataflowEnum : uint8_t
{
	ENegativeSpaceSampleMethodDataflowEnum__Uniform                                  = 0,
	ENegativeSpaceSampleMethodDataflowEnum__VoxelSearch                              = 1
};

/// Enum /Script/GeometryCollectionNodes.EClusterSizeMethodEnum
/// Size: 0x01 (1 bytes)
enum class EClusterSizeMethodEnum : uint8_t
{
	EClusterSizeMethodEnum__Dataflow_ClusterSizeMethod_ByNumber                      = 0,
	EClusterSizeMethodEnum__Dataflow_ClusterSizeMethod_ByFractionOfInput             = 1,
	EClusterSizeMethodEnum__Dataflow_ClusterSizeMethod_BySize                        = 2,
	EClusterSizeMethodEnum__Dataflow_ClusterSizeMethod_ByGrid                        = 3,
	EClusterSizeMethodEnum__Dataflow_Max                                             = 4
};

/// Enum /Script/GeometryCollectionNodes.EClusterNeighborSelectionMethodEnum
/// Size: 0x01 (1 bytes)
enum class EClusterNeighborSelectionMethodEnum : uint8_t
{
	EClusterNeighborSelectionMethodEnum__Dataflow_ClusterNeighborSelectionMethod_LargestNeighbor = 0,
	EClusterNeighborSelectionMethodEnum__Dataflow_ClusterNeighborSelectionMethod_NearestCenter = 1
};

/// Enum /Script/GeometryCollectionNodes.EFloatToIntFunctionEnum
/// Size: 0x01 (1 bytes)
enum class EFloatToIntFunctionEnum : uint8_t
{
	EFloatToIntFunctionEnum__Dataflow_FloatToInt_Function_Floor                      = 0,
	EFloatToIntFunctionEnum__Dataflow_FloatToInt_Function_Ceil                       = 1,
	EFloatToIntFunctionEnum__Dataflow_FloatToInt_Function_Round                      = 2,
	EFloatToIntFunctionEnum__Dataflow_FloatToInt_Function_Truncate                   = 3,
	EFloatToIntFunctionEnum__Dataflow_Max                                            = 4
};

/// Enum /Script/GeometryCollectionNodes.EVisibiltyOptionsEnum
/// Size: 0x01 (1 bytes)
enum class EVisibiltyOptionsEnum : uint8_t
{
	EVisibiltyOptionsEnum__Dataflow_VisibilityOptions_Visible                        = 0,
	EVisibiltyOptionsEnum__Dataflow_VisibilityOptions_Invisible                      = 1,
	EVisibiltyOptionsEnum__Dataflow_Max                                              = 2
};

/// Enum /Script/GeometryCollectionNodes.EMakeBoxDataTypeEnum
/// Size: 0x01 (1 bytes)
enum class EMakeBoxDataTypeEnum : uint8_t
{
	EMakeBoxDataTypeEnum__Dataflow_MakeBox_DataType_MinMax                           = 0,
	EMakeBoxDataTypeEnum__Dataflow_MakeBox_DataType_CenterSize                       = 1,
	EMakeBoxDataTypeEnum__Dataflow_Max                                               = 2
};

/// Enum /Script/GeometryCollectionNodes.EMathConstantsEnum
/// Size: 0x01 (1 bytes)
enum class EMathConstantsEnum : uint8_t
{
	EMathConstantsEnum__Dataflow_MathConstants_Pi                                    = 0,
	EMathConstantsEnum__Dataflow_MathConstants_HalfPi                                = 1,
	EMathConstantsEnum__Dataflow_MathConstants_TwoPi                                 = 2,
	EMathConstantsEnum__Dataflow_MathConstants_FourPi                                = 3,
	EMathConstantsEnum__Dataflow_MathConstants_InvPi                                 = 4,
	EMathConstantsEnum__Dataflow_MathConstants_InvTwoPi                              = 5,
	EMathConstantsEnum__Dataflow_MathConstants_Sqrt2                                 = 6,
	EMathConstantsEnum__Dataflow_MathConstants_InvSqrt2                              = 7,
	EMathConstantsEnum__Dataflow_MathConstants_Sqrt3                                 = 8,
	EMathConstantsEnum__Dataflow_MathConstants_InvSqrt3                              = 9,
	EMathConstantsEnum__Dataflow_FloatToInt_Function_E                               = 10,
	EMathConstantsEnum__Dataflow_FloatToInt_Function_Gamma                           = 11,
	EMathConstantsEnum__Dataflow_FloatToInt_Function_GoldenRatio                     = 12,
	EMathConstantsEnum__Dataflow_FloatToInt_Function_ZeroTolerance                   = 13,
	EMathConstantsEnum__Dataflow_Max                                                 = 14
};

/// Enum /Script/GeometryCollectionNodes.EMeshBooleanOperationEnum
/// Size: 0x01 (1 bytes)
enum class EMeshBooleanOperationEnum : uint8_t
{
	EMeshBooleanOperationEnum__Dataflow_MeshBoolean_Union                            = 0,
	EMeshBooleanOperationEnum__Dataflow_MeshBoolean_Intersect                        = 1,
	EMeshBooleanOperationEnum__Dataflow_MeshBoolean_Difference                       = 2,
	EMeshBooleanOperationEnum__Dataflow_Max                                          = 3
};

/// Enum /Script/GeometryCollectionNodes.EBoxLengthMeasurementMethod
/// Size: 0x01 (1 bytes)
enum class EBoxLengthMeasurementMethod : uint8_t
{
	EBoxLengthMeasurementMethod__XAxis                                               = 0,
	EBoxLengthMeasurementMethod__YAxis                                               = 1,
	EBoxLengthMeasurementMethod__ZAxis                                               = 2,
	EBoxLengthMeasurementMethod__ShortestAxis                                        = 3,
	EBoxLengthMeasurementMethod__LongestAxis                                         = 4,
	EBoxLengthMeasurementMethod__Diagonal                                            = 5
};

/// Enum /Script/GeometryCollectionNodes.ERotationOrderEnum
/// Size: 0x01 (1 bytes)
enum class ERotationOrderEnum : uint8_t
{
	ERotationOrderEnum__Dataflow_RotationOrder_XYZ                                   = 0,
	ERotationOrderEnum__Dataflow_RotationOrder_YZX                                   = 1,
	ERotationOrderEnum__Dataflow_RotationOrder_ZXY                                   = 2,
	ERotationOrderEnum__Dataflow_RotationOrder_XZY                                   = 3,
	ERotationOrderEnum__Dataflow_RotationOrder_YXZ                                   = 4,
	ERotationOrderEnum__Dataflow_RotationOrder_ZYX                                   = 5,
	ERotationOrderEnum__Dataflow_Max                                                 = 6
};

/// Enum /Script/GeometryCollectionNodes.ECompareOperationEnum
/// Size: 0x01 (1 bytes)
enum class ECompareOperationEnum : uint8_t
{
	ECompareOperationEnum__Dataflow_Compare_Equal                                    = 0,
	ECompareOperationEnum__Dataflow_Compare_Smaller                                  = 1,
	ECompareOperationEnum__Dataflow_Compare_SmallerOrEqual                           = 2,
	ECompareOperationEnum__Dataflow_Compare_Greater                                  = 3,
	ECompareOperationEnum__Dataflow_Compare_GreaterOrEqual                           = 4,
	ECompareOperationEnum__Dataflow_Max                                              = 5
};

/// Enum /Script/GeometryCollectionNodes.EAnchorStateEnum
/// Size: 0x01 (1 bytes)
enum class EAnchorStateEnum : uint8_t
{
	EAnchorStateEnum__Dataflow_AnchorState_Anchored                                  = 0,
	EAnchorStateEnum__Dataflow_AnchorState_NotAnchored                               = 1,
	EAnchorStateEnum__Dataflow_Max                                                   = 2
};

/// Enum /Script/GeometryCollectionNodes.EProximityMethodEnum
/// Size: 0x01 (1 bytes)
enum class EProximityMethodEnum : uint8_t
{
	EProximityMethodEnum__Dataflow_ProximityMethod_Precise                           = 0,
	EProximityMethodEnum__Dataflow_ProximityMethod_ConvexHull                        = 1,
	EProximityMethodEnum__Dataflow_Max                                               = 2
};

/// Enum /Script/GeometryCollectionNodes.EProximityContactFilteringMethodEnum
/// Size: 0x01 (1 bytes)
enum class EProximityContactFilteringMethodEnum : uint8_t
{
	EProximityContactFilteringMethodEnum__Dataflow_ProximityContactFilteringMethod_ProjectedBoundsOverlap = 0,
	EProximityContactFilteringMethodEnum__Dataflow_ProximityContactFilteringMethod_ConvexHullSharp = 1,
	EProximityContactFilteringMethodEnum__Dataflow_ProximityContactFilteringMethod_ConvexHullArea = 2,
	EProximityContactFilteringMethodEnum__Dataflow_Max                               = 3
};

/// Enum /Script/GeometryCollectionNodes.EConnectionContactAreaMethodEnum
/// Size: 0x01 (1 bytes)
enum class EConnectionContactAreaMethodEnum : uint8_t
{
	EConnectionContactAreaMethodEnum__Dataflow_ConnectionContactAreaMethod_None      = 0,
	EConnectionContactAreaMethodEnum__Dataflow_ProximityContactFilteringMethod_ConvexHullArea = 1,
	EConnectionContactAreaMethodEnum__Dataflow_Max                                   = 2
};

/// Enum /Script/GeometryCollectionNodes.EStandardGroupNameEnum
/// Size: 0x01 (1 bytes)
enum class EStandardGroupNameEnum : uint8_t
{
	EStandardGroupNameEnum__Dataflow_EStandardGroupNameEnum_Transform                = 0,
	EStandardGroupNameEnum__Dataflow_EStandardGroupNameEnum_Geometry                 = 1,
	EStandardGroupNameEnum__Dataflow_EStandardGroupNameEnum_Faces                    = 2,
	EStandardGroupNameEnum__Dataflow_EStandardGroupNameEnum_Vertices                 = 3,
	EStandardGroupNameEnum__Dataflow_EStandardGroupNameEnum_Material                 = 4,
	EStandardGroupNameEnum__Dataflow_EStandardGroupNameEnum_Breaking                 = 5,
	EStandardGroupNameEnum__Dataflow_EStandardGroupNameEnum_Custom                   = 6,
	EStandardGroupNameEnum__Dataflow_Max                                             = 7
};

/// Enum /Script/GeometryCollectionNodes.ECustomAttributeTypeEnum
/// Size: 0x01 (1 bytes)
enum class ECustomAttributeTypeEnum : uint8_t
{
	ECustomAttributeTypeEnum__Dataflow_CustomAttributeType_UInt8                     = 0,
	ECustomAttributeTypeEnum__Dataflow_CustomAttributeType_Int32                     = 1,
	ECustomAttributeTypeEnum__Dataflow_CustomAttributeType_Float                     = 2,
	ECustomAttributeTypeEnum__Dataflow_CustomAttributeType_Double                    = 3,
	ECustomAttributeTypeEnum__Dataflow_CustomAttributeType_Bool                      = 4,
	ECustomAttributeTypeEnum__Dataflow_CustomAttributeType_String                    = 5,
	ECustomAttributeTypeEnum__Dataflow_CustomAttributeType_Vector2f                  = 6,
	ECustomAttributeTypeEnum__Dataflow_CustomAttributeType_Vector3f                  = 7,
	ECustomAttributeTypeEnum__Dataflow_CustomAttributeType_Vector3d                  = 8,
	ECustomAttributeTypeEnum__Dataflow_CustomAttributeType_Vector4f                  = 9,
	ECustomAttributeTypeEnum__Dataflow_CustomAttributeType_LinearColor               = 10,
	ECustomAttributeTypeEnum__Dataflow_CustomAttributeType_Transform                 = 11,
	ECustomAttributeTypeEnum__Dataflow_CustomAttributeType_Quat4f                    = 12,
	ECustomAttributeTypeEnum__Dataflow_CustomAttributeType_Box                       = 13,
	ECustomAttributeTypeEnum__Dataflow_CustomAttributeType_Guid                      = 14,
	ECustomAttributeTypeEnum__Dataflow_CustomAttributeType_Int32Set                  = 15,
	ECustomAttributeTypeEnum__Dataflow_CustomAttributeType_Int32Array                = 16,
	ECustomAttributeTypeEnum__Dataflow_CustomAttributeType_IntVector                 = 17,
	ECustomAttributeTypeEnum__Dataflow_CustomAttributeType_IntVector2                = 18,
	ECustomAttributeTypeEnum__Dataflow_CustomAttributeType_IntVector4                = 19,
	ECustomAttributeTypeEnum__Dataflow_CustomAttributeType_IntVector2Array           = 20,
	ECustomAttributeTypeEnum__Dataflow_CustomAttributeType_FloatArray                = 21,
	ECustomAttributeTypeEnum__Dataflow_CustomAttributeType_Vector2fArray             = 22,
	ECustomAttributeTypeEnum__Dataflow_CustomAttributeType_FVector3fArray            = 23,
	ECustomAttributeTypeEnum__Dataflow_Max                                           = 24
};

/// Enum /Script/GeometryCollectionNodes.ESetOperationEnum
/// Size: 0x01 (1 bytes)
enum class ESetOperationEnum : uint8_t
{
	ESetOperationEnum__Dataflow_SetOperation_AND                                     = 0,
	ESetOperationEnum__Dataflow_SetOperation_OR                                      = 1,
	ESetOperationEnum__Dataflow_SetOperation_XOR                                     = 2,
	ESetOperationEnum__Dataflow_SetOperation_Subtract                                = 3,
	ESetOperationEnum__Dataflow_Max                                                  = 4
};

/// Enum /Script/GeometryCollectionNodes.ERangeSettingEnum
/// Size: 0x01 (1 bytes)
enum class ERangeSettingEnum : uint8_t
{
	ERangeSettingEnum__Dataflow_RangeSetting_InsideRange                             = 0,
	ERangeSettingEnum__Dataflow_RangeSetting_OutsideRange                            = 1,
	ERangeSettingEnum__Dataflow_Max                                                  = 2
};

/// Enum /Script/GeometryCollectionNodes.ESelectSubjectTypeEnum
/// Size: 0x01 (1 bytes)
enum class ESelectSubjectTypeEnum : uint8_t
{
	ESelectSubjectTypeEnum__Dataflow_SelectSubjectType_Vertices                      = 0,
	ESelectSubjectTypeEnum__Dataflow_SelectSubjectType_BoundingBox                   = 1,
	ESelectSubjectTypeEnum__Dataflow_SelectSubjectType_Centroid                      = 2,
	ESelectSubjectTypeEnum__Dataflow_Max                                             = 3
};

/// Struct /Script/GeometryCollectionNodes.GetFloatArrayElementDataflowNode
/// Size: 0x0108 (264 bytes) (0x0000E8 - 0x000108) align 8 MaxSize: 0x0108
struct FGetFloatArrayElementDataflowNode : FDataflowNode
{ 
	int32_t                                            Index;                                                      // 0x00E8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00EC   (0x0004)  MISSED
	TArray<float>                                      FloatArray;                                                 // 0x00F0   (0x0010)  
	float                                              FloatValue;                                                 // 0x0100   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0104   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.FloatArrayToIntArrayDataflowNode
/// Size: 0x0110 (272 bytes) (0x0000E8 - 0x000110) align 8 MaxSize: 0x0110
struct FFloatArrayToIntArrayDataflowNode : FDataflowNode
{ 
	EFloatArrayToIntArrayFunctionEnum                  Function;                                                   // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00E9   (0x0007)  MISSED
	TArray<float>                                      FloatArray;                                                 // 0x00F0   (0x0010)  
	TArray<int32_t>                                    IntArray;                                                   // 0x0100   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.GetArrayElementDataflowNode
/// Size: 0x0118 (280 bytes) (0x0000E8 - 0x000118) align 8 MaxSize: 0x0118
struct FGetArrayElementDataflowNode : FDataflowNode
{ 
	int32_t                                            Index;                                                      // 0x00E8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00EC   (0x0004)  MISSED
	TArray<FVector>                                    Points;                                                     // 0x00F0   (0x0010)  
	FVector                                            Point;                                                      // 0x0100   (0x0018)  
};

/// Struct /Script/GeometryCollectionNodes.GetNumArrayElementsDataflowNode
/// Size: 0x0130 (304 bytes) (0x0000E8 - 0x000130) align 8 MaxSize: 0x0130
struct FGetNumArrayElementsDataflowNode : FDataflowNode
{ 
	TArray<float>                                      FloatArray;                                                 // 0x00E8   (0x0010)  
	TArray<int32_t>                                    IntArray;                                                   // 0x00F8   (0x0010)  
	TArray<FVector>                                    Points;                                                     // 0x0108   (0x0010)  
	TArray<FVector3f>                                  Vector3fArray;                                              // 0x0118   (0x0010)  
	int32_t                                            NumElements;                                                // 0x0128   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x012C   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.BoolArrayToFaceSelectionDataflowNode
/// Size: 0x0118 (280 bytes) (0x0000E8 - 0x000118) align 8 MaxSize: 0x0118
struct FBoolArrayToFaceSelectionDataflowNode : FDataflowNode
{ 
	TArray<bool>                                       BoolAttributeData;                                          // 0x00E8   (0x0010)  
	FDataflowFaceSelection                             FaceSelection;                                              // 0x00F8   (0x0020)  
};

/// Struct /Script/GeometryCollectionNodes.FloatArrayToVertexSelectionDataflowNode
/// Size: 0x0120 (288 bytes) (0x0000E8 - 0x000120) align 8 MaxSize: 0x0120
struct FFloatArrayToVertexSelectionDataflowNode : FDataflowNode
{ 
	TArray<float>                                      FloatArray;                                                 // 0x00E8   (0x0010)  
	ECompareOperation1Enum                             Operation;                                                  // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00F9   (0x0003)  MISSED
	float                                              Threshold;                                                  // 0x00FC   (0x0004)  
	FDataflowVertexSelection                           VertexSelection;                                            // 0x0100   (0x0020)  
};

/// Struct /Script/GeometryCollectionNodes.FloatArrayNormalizeDataflowNode
/// Size: 0x0130 (304 bytes) (0x0000E8 - 0x000130) align 8 MaxSize: 0x0130
struct FFloatArrayNormalizeDataflowNode : FDataflowNode
{ 
	TArray<float>                                      InFloatArray;                                               // 0x00E8   (0x0010)  
	FDataflowVertexSelection                           Selection;                                                  // 0x00F8   (0x0020)  
	float                                              MinRange;                                                   // 0x0118   (0x0004)  
	float                                              MaxRange;                                                   // 0x011C   (0x0004)  
	TArray<float>                                      OutFloatArray;                                              // 0x0120   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.VectorArrayNormalizeDataflowNode
/// Size: 0x0130 (304 bytes) (0x0000E8 - 0x000130) align 8 MaxSize: 0x0130
struct FVectorArrayNormalizeDataflowNode : FDataflowNode
{ 
	TArray<FVector>                                    InVectorArray;                                              // 0x00E8   (0x0010)  
	FDataflowVertexSelection                           Selection;                                                  // 0x00F8   (0x0020)  
	float                                              Magnitude;                                                  // 0x0118   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x011C   (0x0004)  MISSED
	TArray<FVector>                                    OutVectorArray;                                             // 0x0120   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.UnionIntArraysDataflowNode
/// Size: 0x0118 (280 bytes) (0x0000E8 - 0x000118) align 8 MaxSize: 0x0118
struct FUnionIntArraysDataflowNode : FDataflowNode
{ 
	TArray<int32_t>                                    InArray1;                                                   // 0x00E8   (0x0010)  
	TArray<int32_t>                                    InArray2;                                                   // 0x00F8   (0x0010)  
	TArray<int32_t>                                    OutArray;                                                   // 0x0108   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.RemoveFloatArrayElementDataflowNode
/// Size: 0x0100 (256 bytes) (0x0000E8 - 0x000100) align 8 MaxSize: 0x0100
struct FRemoveFloatArrayElementDataflowNode : FDataflowNode
{ 
	int32_t                                            Index;                                                      // 0x00E8   (0x0004)  
	bool                                               bPreserveOrder;                                             // 0x00EC   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00ED   (0x0003)  MISSED
	TArray<float>                                      FloatArray;                                                 // 0x00F0   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.FloatArrayComputeStatisticsDataflowNode
/// Size: 0x0130 (304 bytes) (0x0000E8 - 0x000130) align 8 MaxSize: 0x0130
struct FFloatArrayComputeStatisticsDataflowNode : FDataflowNode
{ 
	TArray<float>                                      FloatArray;                                                 // 0x00E8   (0x0010)  
	FDataflowTransformSelection                        TransformSelection;                                         // 0x00F8   (0x0020)  
	EStatisticsOperationEnum                           OperationName;                                              // 0x0118   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0119   (0x0003)  MISSED
	float                                              Value;                                                      // 0x011C   (0x0004)  
	TArray<int32_t>                                    Indices;                                                    // 0x0120   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.GeometryCollectionTerminalDataflowNode
/// Size: 0x01B8 (440 bytes) (0x0000E8 - 0x0001B8) align 8 MaxSize: 0x01B8
struct FGeometryCollectionTerminalDataflowNode : FDataflowTerminalNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	TArray<class UMaterial*>                           Materials;                                                  // 0x0198   (0x0010)  
	TArray<FGeometryCollectionAutoInstanceMesh>        InstancedMeshes;                                            // 0x01A8   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.GetGeometryCollectionAssetDataflowNode
/// Size: 0x00F0 (240 bytes) (0x0000E8 - 0x0000F0) align 8 MaxSize: 0x00F0
struct FGetGeometryCollectionAssetDataflowNode : FDataflowNode
{ 
	class UGeometryCollection*                         Asset;                                                      // 0x00E8   (0x0008)  
};

/// Struct /Script/GeometryCollectionNodes.GetGeometryCollectionSourcesDataflowNode
/// Size: 0x0100 (256 bytes) (0x0000E8 - 0x000100) align 8 MaxSize: 0x0100
struct FGetGeometryCollectionSourcesDataflowNode : FDataflowNode
{ 
	class UGeometryCollection*                         Asset;                                                      // 0x00E8   (0x0008)  
	TArray<FGeometryCollectionSource>                  Sources;                                                    // 0x00F0   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.CreateGeometryCollectionFromSourcesDataflowNode
/// Size: 0x01C8 (456 bytes) (0x0000E8 - 0x0001C8) align 8 MaxSize: 0x01C8
struct FCreateGeometryCollectionFromSourcesDataflowNode : FDataflowNode
{ 
	TArray<FGeometryCollectionSource>                  Sources;                                                    // 0x00E8   (0x0010)  
	FManagedArrayCollection                            Collection;                                                 // 0x00F8   (0x00B0)  
	TArray<class UMaterial*>                           Materials;                                                  // 0x01A8   (0x0010)  
	TArray<FGeometryCollectionAutoInstanceMesh>        InstancedMeshes;                                            // 0x01B8   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.StaticMeshToCollectionDataflowNode
/// Size: 0x01C8 (456 bytes) (0x0000E8 - 0x0001C8) align 8 MaxSize: 0x01C8
struct FStaticMeshToCollectionDataflowNode : FDataflowNode
{ 
	class UStaticMesh*                                 StaticMesh;                                                 // 0x00E8   (0x0008)  
	bool                                               bSetInternalFromMaterialIndex;                              // 0x00F0   (0x0001)  
	bool                                               bSplitComponents;                                           // 0x00F1   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x00F2   (0x0006)  MISSED
	FManagedArrayCollection                            Collection;                                                 // 0x00F8   (0x00B0)  
	TArray<class UMaterial*>                           Materials;                                                  // 0x01A8   (0x0010)  
	TArray<FGeometryCollectionAutoInstanceMesh>        InstancedMeshes;                                            // 0x01B8   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.RadialFalloffFieldDataflowNode
/// Size: 0x01B0 (432 bytes) (0x0000E8 - 0x0001B0) align 8 MaxSize: 0x01B0
struct FRadialFalloffFieldDataflowNode : FDataflowNode
{ 
	TArray<FVector3f>                                  SamplePositions;                                            // 0x00E8   (0x0010)  
	FDataflowVertexSelection                           SampleIndices;                                              // 0x00F8   (0x0020)  
	FSphere                                            Sphere;                                                     // 0x0118   (0x0020)  
	FVector                                            Translation;                                                // 0x0138   (0x0018)  
	float                                              Magnitude;                                                  // 0x0150   (0x0004)  
	float                                              MinRange;                                                   // 0x0154   (0x0004)  
	float                                              MaxRange;                                                   // 0x0158   (0x0004)  
	float                                              Default;                                                    // 0x015C   (0x0004)  
	EDataflowFieldFalloffType                          FalloffType;                                                // 0x0160   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0161   (0x0007)  MISSED
	TArray<float>                                      FieldFloatResult;                                           // 0x0168   (0x0010)  
	TArray<int32_t>                                    FieldRemap;                                                 // 0x0178   (0x0010)  
	FDataflowVertexSelection                           FieldSelectionMask;                                         // 0x0188   (0x0020)  
	int32_t                                            NumSamplePositions;                                         // 0x01A8   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x01AC   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.BoxFalloffFieldDataflowNode
/// Size: 0x0210 (528 bytes) (0x0000E8 - 0x000210) align 16 MaxSize: 0x0210
struct FBoxFalloffFieldDataflowNode : FDataflowNode
{ 
	TArray<FVector3f>                                  SamplePositions;                                            // 0x00E8   (0x0010)  
	FDataflowVertexSelection                           SampleIndices;                                              // 0x00F8   (0x0020)  
	FBox                                               Box;                                                        // 0x0118   (0x0038)  
	FTransform                                         Transform;                                                  // 0x0150   (0x0060)  
	float                                              Magnitude;                                                  // 0x01B0   (0x0004)  
	float                                              MinRange;                                                   // 0x01B4   (0x0004)  
	float                                              MaxRange;                                                   // 0x01B8   (0x0004)  
	float                                              Default;                                                    // 0x01BC   (0x0004)  
	EDataflowFieldFalloffType                          FalloffType;                                                // 0x01C0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x01C1   (0x0007)  MISSED
	TArray<float>                                      FieldFloatResult;                                           // 0x01C8   (0x0010)  
	TArray<int32_t>                                    FieldRemap;                                                 // 0x01D8   (0x0010)  
	FDataflowVertexSelection                           FieldSelectionMask;                                         // 0x01E8   (0x0020)  
	int32_t                                            NumSamplePositions;                                         // 0x0208   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x020C   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.PlaneFalloffFieldDataflowNode
/// Size: 0x01C8 (456 bytes) (0x0000E8 - 0x0001C8) align 8 MaxSize: 0x01C8
struct FPlaneFalloffFieldDataflowNode : FDataflowNode
{ 
	TArray<FVector3f>                                  SamplePositions;                                            // 0x00E8   (0x0010)  
	FDataflowVertexSelection                           SampleIndices;                                              // 0x00F8   (0x0020)  
	FVector                                            Position;                                                   // 0x0118   (0x0018)  
	FVector                                            Normal;                                                     // 0x0130   (0x0018)  
	float                                              Distance;                                                   // 0x0148   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x014C   (0x0004)  MISSED
	FVector                                            Translation;                                                // 0x0150   (0x0018)  
	float                                              Magnitude;                                                  // 0x0168   (0x0004)  
	float                                              MinRange;                                                   // 0x016C   (0x0004)  
	float                                              MaxRange;                                                   // 0x0170   (0x0004)  
	float                                              Default;                                                    // 0x0174   (0x0004)  
	EDataflowFieldFalloffType                          FalloffType;                                                // 0x0178   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0179   (0x0007)  MISSED
	TArray<float>                                      FieldFloatResult;                                           // 0x0180   (0x0010)  
	TArray<int32_t>                                    FieldRemap;                                                 // 0x0190   (0x0010)  
	FDataflowVertexSelection                           FieldSelectionMask;                                         // 0x01A0   (0x0020)  
	int32_t                                            NumSamplePositions;                                         // 0x01C0   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x01C4   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.RadialIntMaskFieldDataflowNode
/// Size: 0x0188 (392 bytes) (0x0000E8 - 0x000188) align 8 MaxSize: 0x0188
struct FRadialIntMaskFieldDataflowNode : FDataflowNode
{ 
	TArray<FVector3f>                                  SamplePositions;                                            // 0x00E8   (0x0010)  
	FDataflowVertexSelection                           SampleIndices;                                              // 0x00F8   (0x0020)  
	FSphere                                            Sphere;                                                     // 0x0118   (0x0020)  
	FVector                                            Translation;                                                // 0x0138   (0x0018)  
	int32_t                                            InteriorValue;                                              // 0x0150   (0x0004)  
	int32_t                                            ExteriorValue;                                              // 0x0154   (0x0004)  
	EDataflowSetMaskConditionType                      SetMaskConditionType;                                       // 0x0158   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0159   (0x0007)  MISSED
	TArray<int32_t>                                    FieldIntResult;                                             // 0x0160   (0x0010)  
	TArray<int32_t>                                    FieldRemap;                                                 // 0x0170   (0x0010)  
	int32_t                                            NumSamplePositions;                                         // 0x0180   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0184   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.UniformScalarFieldDataflowNode
/// Size: 0x0148 (328 bytes) (0x0000E8 - 0x000148) align 8 MaxSize: 0x0148
struct FUniformScalarFieldDataflowNode : FDataflowNode
{ 
	TArray<FVector3f>                                  SamplePositions;                                            // 0x00E8   (0x0010)  
	FDataflowVertexSelection                           SampleIndices;                                              // 0x00F8   (0x0020)  
	float                                              Magnitude;                                                  // 0x0118   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x011C   (0x0004)  MISSED
	TArray<float>                                      FieldFloatResult;                                           // 0x0120   (0x0010)  
	TArray<int32_t>                                    FieldRemap;                                                 // 0x0130   (0x0010)  
	int32_t                                            NumSamplePositions;                                         // 0x0140   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0144   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.UniformVectorFieldDataflowNode
/// Size: 0x0160 (352 bytes) (0x0000E8 - 0x000160) align 8 MaxSize: 0x0160
struct FUniformVectorFieldDataflowNode : FDataflowNode
{ 
	TArray<FVector3f>                                  SamplePositions;                                            // 0x00E8   (0x0010)  
	FDataflowVertexSelection                           SampleIndices;                                              // 0x00F8   (0x0020)  
	float                                              Magnitude;                                                  // 0x0118   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x011C   (0x0004)  MISSED
	FVector                                            Direction;                                                  // 0x0120   (0x0018)  
	TArray<FVector>                                    FieldVectorResult;                                          // 0x0138   (0x0010)  
	TArray<int32_t>                                    FieldRemap;                                                 // 0x0148   (0x0010)  
	int32_t                                            NumSamplePositions;                                         // 0x0158   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x015C   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.RadialVectorFieldDataflowNode
/// Size: 0x0160 (352 bytes) (0x0000E8 - 0x000160) align 8 MaxSize: 0x0160
struct FRadialVectorFieldDataflowNode : FDataflowNode
{ 
	TArray<FVector3f>                                  SamplePositions;                                            // 0x00E8   (0x0010)  
	FDataflowVertexSelection                           SampleIndices;                                              // 0x00F8   (0x0020)  
	float                                              Magnitude;                                                  // 0x0118   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x011C   (0x0004)  MISSED
	FVector                                            Position;                                                   // 0x0120   (0x0018)  
	TArray<FVector>                                    FieldVectorResult;                                          // 0x0138   (0x0010)  
	TArray<int32_t>                                    FieldRemap;                                                 // 0x0148   (0x0010)  
	int32_t                                            NumSamplePositions;                                         // 0x0158   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x015C   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.RandomVectorFieldDataflowNode
/// Size: 0x0148 (328 bytes) (0x0000E8 - 0x000148) align 8 MaxSize: 0x0148
struct FRandomVectorFieldDataflowNode : FDataflowNode
{ 
	TArray<FVector3f>                                  SamplePositions;                                            // 0x00E8   (0x0010)  
	FDataflowVertexSelection                           SampleIndices;                                              // 0x00F8   (0x0020)  
	float                                              Magnitude;                                                  // 0x0118   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x011C   (0x0004)  MISSED
	TArray<FVector>                                    FieldVectorResult;                                          // 0x0120   (0x0010)  
	TArray<int32_t>                                    FieldRemap;                                                 // 0x0130   (0x0010)  
	int32_t                                            NumSamplePositions;                                         // 0x0140   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0144   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.NoiseFieldDataflowNode
/// Size: 0x01B0 (432 bytes) (0x0000E8 - 0x0001B0) align 16 MaxSize: 0x01B0
struct FNoiseFieldDataflowNode : FDataflowNode
{ 
	TArray<FVector3f>                                  SamplePositions;                                            // 0x00E8   (0x0010)  
	FDataflowVertexSelection                           SampleIndices;                                              // 0x00F8   (0x0020)  
	float                                              MinRange;                                                   // 0x0118   (0x0004)  
	float                                              MaxRange;                                                   // 0x011C   (0x0004)  
	FTransform                                         Transform;                                                  // 0x0120   (0x0060)  
	TArray<float>                                      FieldFloatResult;                                           // 0x0180   (0x0010)  
	TArray<int32_t>                                    FieldRemap;                                                 // 0x0190   (0x0010)  
	int32_t                                            NumSamplePositions;                                         // 0x01A0   (0x0004)  
	unsigned char                                      UnknownData00_7[0xC];                                       // 0x01A4   (0x000C)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.UniformIntegerFieldDataflowNode
/// Size: 0x0148 (328 bytes) (0x0000E8 - 0x000148) align 8 MaxSize: 0x0148
struct FUniformIntegerFieldDataflowNode : FDataflowNode
{ 
	TArray<FVector3f>                                  SamplePositions;                                            // 0x00E8   (0x0010)  
	FDataflowVertexSelection                           SampleIndices;                                              // 0x00F8   (0x0020)  
	int32_t                                            Magnitude;                                                  // 0x0118   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x011C   (0x0004)  MISSED
	TArray<int32_t>                                    FieldIntResult;                                             // 0x0120   (0x0010)  
	TArray<int32_t>                                    FieldRemap;                                                 // 0x0130   (0x0010)  
	int32_t                                            NumSamplePositions;                                         // 0x0140   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0144   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.WaveScalarFieldDataflowNode
/// Size: 0x0188 (392 bytes) (0x0000E8 - 0x000188) align 8 MaxSize: 0x0188
struct FWaveScalarFieldDataflowNode : FDataflowNode
{ 
	TArray<FVector3f>                                  SamplePositions;                                            // 0x00E8   (0x0010)  
	FDataflowVertexSelection                           SampleIndices;                                              // 0x00F8   (0x0020)  
	float                                              Magnitude;                                                  // 0x0118   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x011C   (0x0004)  MISSED
	FVector                                            Position;                                                   // 0x0120   (0x0018)  
	FVector                                            Translation;                                                // 0x0138   (0x0018)  
	float                                              Wavelength;                                                 // 0x0150   (0x0004)  
	float                                              Period;                                                     // 0x0154   (0x0004)  
	EDataflowWaveFunctionType                          FunctionType;                                               // 0x0158   (0x0001)  
	EDataflowFieldFalloffType                          FalloffType;                                                // 0x0159   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x015A   (0x0006)  MISSED
	TArray<float>                                      FieldFloatResult;                                           // 0x0160   (0x0010)  
	TArray<int32_t>                                    FieldRemap;                                                 // 0x0170   (0x0010)  
	int32_t                                            NumSamplePositions;                                         // 0x0180   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x0184   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.SumScalarFieldDataflowNode
/// Size: 0x0150 (336 bytes) (0x0000E8 - 0x000150) align 8 MaxSize: 0x0150
struct FSumScalarFieldDataflowNode : FDataflowNode
{ 
	TArray<float>                                      FieldFloatLeft;                                             // 0x00E8   (0x0010)  
	TArray<int32_t>                                    FieldRemapLeft;                                             // 0x00F8   (0x0010)  
	TArray<float>                                      FieldFloatRight;                                            // 0x0108   (0x0010)  
	TArray<int32_t>                                    FieldRemapRight;                                            // 0x0118   (0x0010)  
	float                                              Magnitude;                                                  // 0x0128   (0x0004)  
	EDataflowFloatFieldOperationType                   Operation;                                                  // 0x012C   (0x0001)  
	bool                                               bSwapInputs;                                                // 0x012D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x012E   (0x0002)  MISSED
	TArray<float>                                      FieldFloatResult;                                           // 0x0130   (0x0010)  
	TArray<int32_t>                                    FieldRemap;                                                 // 0x0140   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.SumVectorFieldDataflowNode
/// Size: 0x0170 (368 bytes) (0x0000E8 - 0x000170) align 8 MaxSize: 0x0170
struct FSumVectorFieldDataflowNode : FDataflowNode
{ 
	TArray<float>                                      FieldFloat;                                                 // 0x00E8   (0x0010)  
	TArray<int32_t>                                    FieldFloatRemap;                                            // 0x00F8   (0x0010)  
	TArray<FVector>                                    FieldVectorLeft;                                            // 0x0108   (0x0010)  
	TArray<int32_t>                                    FieldRemapLeft;                                             // 0x0118   (0x0010)  
	TArray<FVector>                                    FieldVectorRight;                                           // 0x0128   (0x0010)  
	TArray<int32_t>                                    FieldRemapRight;                                            // 0x0138   (0x0010)  
	float                                              Magnitude;                                                  // 0x0148   (0x0004)  
	EDataflowVectorFieldOperationType                  Operation;                                                  // 0x014C   (0x0001)  
	bool                                               bSwapVectorInputs;                                          // 0x014D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x014E   (0x0002)  MISSED
	TArray<FVector>                                    FieldVectorResult;                                          // 0x0150   (0x0010)  
	TArray<int32_t>                                    FieldRemap;                                                 // 0x0160   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.FieldMakeDenseFloatArrayDataflowNode
/// Size: 0x0120 (288 bytes) (0x0000E8 - 0x000120) align 8 MaxSize: 0x0120
struct FFieldMakeDenseFloatArrayDataflowNode : FDataflowNode
{ 
	TArray<float>                                      FieldFloatInput;                                            // 0x00E8   (0x0010)  
	TArray<int32_t>                                    FieldRemap;                                                 // 0x00F8   (0x0010)  
	int32_t                                            NumSamplePositions;                                         // 0x0108   (0x0004)  
	float                                              Default;                                                    // 0x010C   (0x0004)  
	TArray<float>                                      FieldFloatResult;                                           // 0x0110   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.AddMaterialToCollectionDataflowNode
/// Size: 0x01E0 (480 bytes) (0x0000E8 - 0x0001E0) align 8 MaxSize: 0x01E0
struct FAddMaterialToCollectionDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	FDataflowFaceSelection                             FaceSelection;                                              // 0x0198   (0x0020)  
	TArray<class UMaterial*>                           Materials;                                                  // 0x01B8   (0x0010)  
	class UMaterial*                                   OutsideMaterial;                                            // 0x01C8   (0x0008)  
	class UMaterial*                                   InsideMaterial;                                             // 0x01D0   (0x0008)  
	bool                                               bAssignOutsideMaterial;                                     // 0x01D8   (0x0001)  
	bool                                               bAssignInsideMaterial;                                      // 0x01D9   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x01DA   (0x0006)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.ReAssignMaterialInCollectionDataflowNode
/// Size: 0x01D8 (472 bytes) (0x0000E8 - 0x0001D8) align 8 MaxSize: 0x01D8
struct FReAssignMaterialInCollectionDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	FDataflowFaceSelection                             FaceSelection;                                              // 0x0198   (0x0020)  
	TArray<class UMaterial*>                           Materials;                                                  // 0x01B8   (0x0010)  
	int32_t                                            OutsideMaterialIdx;                                         // 0x01C8   (0x0004)  
	int32_t                                            InsideMaterialIdx;                                          // 0x01CC   (0x0004)  
	bool                                               bAssignOutsideMaterial;                                     // 0x01D0   (0x0001)  
	bool                                               bAssignInsideMaterial;                                      // 0x01D1   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x01D2   (0x0006)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.MaterialsInfoDataflowNode
/// Size: 0x0108 (264 bytes) (0x0000E8 - 0x000108) align 8 MaxSize: 0x0108
struct FMaterialsInfoDataflowNode : FDataflowNode
{ 
	TArray<class UMaterial*>                           Materials;                                                  // 0x00E8   (0x0010)  
	FString                                            String;                                                     // 0x00F8   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.GetMaterialFromMaterialsArrayDataflowNode
/// Size: 0x0108 (264 bytes) (0x0000E8 - 0x000108) align 8 MaxSize: 0x0108
struct FGetMaterialFromMaterialsArrayDataflowNode : FDataflowNode
{ 
	TArray<class UMaterial*>                           Materials;                                                  // 0x00E8   (0x0010)  
	class UMaterial*                                   Material;                                                   // 0x00F8   (0x0008)  
	int32_t                                            MaterialIdx;                                                // 0x0100   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0104   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.SetMaterialInMaterialsArrayDataflowNode
/// Size: 0x0108 (264 bytes) (0x0000E8 - 0x000108) align 8 MaxSize: 0x0108
struct FSetMaterialInMaterialsArrayDataflowNode : FDataflowNode
{ 
	TArray<class UMaterial*>                           Materials;                                                  // 0x00E8   (0x0010)  
	class UMaterial*                                   Material;                                                   // 0x00F8   (0x0008)  
	ESetMaterialOperationTypeEnum                      Operation;                                                  // 0x0100   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0101   (0x0003)  MISSED
	int32_t                                            MaterialIdx;                                                // 0x0104   (0x0004)  
};

/// Struct /Script/GeometryCollectionNodes.MakeMaterialDataflowNode
/// Size: 0x00F8 (248 bytes) (0x0000E8 - 0x0000F8) align 8 MaxSize: 0x00F8
struct FMakeMaterialDataflowNode : FDataflowNode
{ 
	class UMaterial*                                   InMaterial;                                                 // 0x00E8   (0x0008)  
	class UMaterial*                                   Material;                                                   // 0x00F0   (0x0008)  
};

/// Struct /Script/GeometryCollectionNodes.MakeMaterialsArrayDataflowNode
/// Size: 0x00F8 (248 bytes) (0x0000E8 - 0x0000F8) align 8 MaxSize: 0x00F8
struct FMakeMaterialsArrayDataflowNode : FDataflowNode
{ 
	TArray<class UMaterial*>                           Materials;                                                  // 0x00E8   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.CloseGeometryOnCollectionDataflowNode
/// Size: 0x0198 (408 bytes) (0x0000E8 - 0x000198) align 8 MaxSize: 0x0198
struct FCloseGeometryOnCollectionDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
};

/// Struct /Script/GeometryCollectionNodes.SkeletonToCollectionDataflowNode
/// Size: 0x01A0 (416 bytes) (0x0000E8 - 0x0001A0) align 8 MaxSize: 0x01A0
struct FSkeletonToCollectionDataflowNode : FDataflowNode
{ 
	class USkeleton*                                   Skeleton;                                                   // 0x00E8   (0x0008)  
	FManagedArrayCollection                            Collection;                                                 // 0x00F0   (0x00B0)  
};

/// Struct /Script/GeometryCollectionNodes.DataflowConvexDecompositionSettings
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FDataflowConvexDecompositionSettings
{ 
	float                                              MinSizeToDecompose;                                         // 0x0000   (0x0004)  
	float                                              MaxGeoToHullVolumeRatioToDecompose;                         // 0x0004   (0x0004)  
	float                                              ErrorTolerance;                                             // 0x0008   (0x0004)  
	int32_t                                            MaxHullsPerGeometry;                                        // 0x000C   (0x0004)  
	float                                              MinThicknessTolerance;                                      // 0x0010   (0x0004)  
	int32_t                                            NumAdditionalSplits;                                        // 0x0014   (0x0004)  
};

/// Struct /Script/GeometryCollectionNodes.MakeDataflowConvexDecompositionSettingsNode
/// Size: 0x0118 (280 bytes) (0x0000E8 - 0x000118) align 8 MaxSize: 0x0118
struct FMakeDataflowConvexDecompositionSettingsNode : FDataflowNode
{ 
	float                                              MinSizeToDecompose;                                         // 0x00E8   (0x0004)  
	float                                              MaxGeoToHullVolumeRatioToDecompose;                         // 0x00EC   (0x0004)  
	float                                              ErrorTolerance;                                             // 0x00F0   (0x0004)  
	int32_t                                            MaxHullsPerGeometry;                                        // 0x00F4   (0x0004)  
	float                                              MinThicknessTolerance;                                      // 0x00F8   (0x0004)  
	int32_t                                            NumAdditionalSplits;                                        // 0x00FC   (0x0004)  
	FDataflowConvexDecompositionSettings               DecompositionSettings;                                      // 0x0100   (0x0018)  
};

/// Struct /Script/GeometryCollectionNodes.CreateLeafConvexHullsDataflowNode
/// Size: 0x01E8 (488 bytes) (0x0000E8 - 0x0001E8) align 8 MaxSize: 0x01E8
struct FCreateLeafConvexHullsDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	FDataflowTransformSelection                        OptionalSelectionFilter;                                    // 0x0198   (0x0020)  
	EGenerateConvexMethod                              GenerateMethod;                                             // 0x01B8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x01B9   (0x0003)  MISSED
	float                                              IntersectIfComputedIsSmallerByFactor;                       // 0x01BC   (0x0004)  
	float                                              MinExternalVolumeToIntersect;                               // 0x01C0   (0x0004)  
	bool                                               bComputeIntersectionsBeforeHull;                            // 0x01C4   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x01C5   (0x0003)  MISSED
	float                                              SimplificationDistanceThreshold;                            // 0x01C8   (0x0004)  
	FDataflowConvexDecompositionSettings               ConvexDecompositionSettings;                                // 0x01CC   (0x0018)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x01E4   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.SimplifyConvexHullsDataflowNode
/// Size: 0x01D0 (464 bytes) (0x0000E8 - 0x0001D0) align 8 MaxSize: 0x01D0
struct FSimplifyConvexHullsDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	FDataflowTransformSelection                        OptionalSelectionFilter;                                    // 0x0198   (0x0020)  
	EConvexHullSimplifyMethod                          SimplifyMethod;                                             // 0x01B8   (0x0004)  
	float                                              SimplificationAngleThreshold;                               // 0x01BC   (0x0004)  
	float                                              SimplificationDistanceThreshold;                            // 0x01C0   (0x0004)  
	int32_t                                            MinTargetTriangleCount;                                     // 0x01C4   (0x0004)  
	bool                                               bUseExistingVertices;                                       // 0x01C8   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x01C9   (0x0007)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.CreateNonOverlappingConvexHullsDataflowNode
/// Size: 0x01B0 (432 bytes) (0x0000E8 - 0x0001B0) align 8 MaxSize: 0x01B0
struct FCreateNonOverlappingConvexHullsDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	float                                              CanExceedFraction;                                          // 0x0198   (0x0004)  
	float                                              SimplificationDistanceThreshold;                            // 0x019C   (0x0004)  
	EConvexOverlapRemovalMethodEnum                    OverlapRemovalMethod;                                       // 0x01A0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x01A1   (0x0003)  MISSED
	float                                              OverlapRemovalShrinkPercent;                                // 0x01A4   (0x0004)  
	float                                              CanRemoveFraction;                                          // 0x01A8   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x01AC   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.DataflowSphereCovering
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FDataflowSphereCovering
{ 
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0000   (0x0020)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.GenerateClusterConvexHullsFromLeafHullsDataflowNode
/// Size: 0x0210 (528 bytes) (0x0000E8 - 0x000210) align 8 MaxSize: 0x0210
struct FGenerateClusterConvexHullsFromLeafHullsDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	FDataflowSphereCovering                            SphereCovering;                                             // 0x0198   (0x0020)  
	int32_t                                            ConvexCount;                                                // 0x01B8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x01BC   (0x0004)  MISSED
	double                                             ErrorTolerance;                                             // 0x01C0   (0x0008)  
	bool                                               bPreferExternalCollisionShapes;                             // 0x01C8   (0x0001)  
	EAllowConvexMergeMethod                            AllowMerges;                                                // 0x01C9   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x01CA   (0x0006)  MISSED
	FDataflowTransformSelection                        OptionalSelectionFilter;                                    // 0x01D0   (0x0020)  
	bool                                               bProtectNegativeSpace;                                      // 0x01F0   (0x0001)  
	ENegativeSpaceSampleMethodDataflowEnum             SampleMethod;                                               // 0x01F1   (0x0001)  
	bool                                               bRequireSearchSampleCoverage;                               // 0x01F2   (0x0001)  
	bool                                               bOnlyConnectedToHull;                                       // 0x01F3   (0x0001)  
	int32_t                                            TargetNumSamples;                                           // 0x01F4   (0x0004)  
	double                                             MinSampleSpacing;                                           // 0x01F8   (0x0008)  
	double                                             NegativeSpaceTolerance;                                     // 0x0200   (0x0008)  
	double                                             MinRadius;                                                  // 0x0208   (0x0008)  
};

/// Struct /Script/GeometryCollectionNodes.GenerateClusterConvexHullsFromChildrenHullsDataflowNode
/// Size: 0x0210 (528 bytes) (0x0000E8 - 0x000210) align 8 MaxSize: 0x0210
struct FGenerateClusterConvexHullsFromChildrenHullsDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	FDataflowSphereCovering                            SphereCovering;                                             // 0x0198   (0x0020)  
	int32_t                                            ConvexCount;                                                // 0x01B8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x01BC   (0x0004)  MISSED
	double                                             ErrorTolerance;                                             // 0x01C0   (0x0008)  
	bool                                               bPreferExternalCollisionShapes;                             // 0x01C8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x01C9   (0x0007)  MISSED
	FDataflowTransformSelection                        OptionalSelectionFilter;                                    // 0x01D0   (0x0020)  
	bool                                               bProtectNegativeSpace;                                      // 0x01F0   (0x0001)  
	ENegativeSpaceSampleMethodDataflowEnum             SampleMethod;                                               // 0x01F1   (0x0001)  
	bool                                               bRequireSearchSampleCoverage;                               // 0x01F2   (0x0001)  
	bool                                               bOnlyConnectedToHull;                                       // 0x01F3   (0x0001)  
	int32_t                                            TargetNumSamples;                                           // 0x01F4   (0x0004)  
	double                                             MinSampleSpacing;                                           // 0x01F8   (0x0008)  
	double                                             NegativeSpaceTolerance;                                     // 0x0200   (0x0008)  
	double                                             MinRadius;                                                  // 0x0208   (0x0008)  
};

/// Struct /Script/GeometryCollectionNodes.ClearConvexHullsDataflowNode
/// Size: 0x01B8 (440 bytes) (0x0000E8 - 0x0001B8) align 8 MaxSize: 0x01B8
struct FClearConvexHullsDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	FDataflowTransformSelection                        TransformSelection;                                         // 0x0198   (0x0020)  
};

/// Struct /Script/GeometryCollectionNodes.MergeConvexHullsDataflowNode
/// Size: 0x0210 (528 bytes) (0x0000E8 - 0x000210) align 8 MaxSize: 0x0210
struct FMergeConvexHullsDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	FDataflowSphereCovering                            SphereCovering;                                             // 0x0198   (0x0020)  
	int32_t                                            MaxConvexCount;                                             // 0x01B8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x01BC   (0x0004)  MISSED
	double                                             ErrorTolerance;                                             // 0x01C0   (0x0008)  
	FDataflowTransformSelection                        OptionalSelectionFilter;                                    // 0x01C8   (0x0020)  
	bool                                               bProtectNegativeSpace;                                      // 0x01E8   (0x0001)  
	bool                                               bComputeNegativeSpacePerBone;                               // 0x01E9   (0x0001)  
	ENegativeSpaceSampleMethodDataflowEnum             SampleMethod;                                               // 0x01EA   (0x0001)  
	bool                                               bRequireSearchSampleCoverage;                               // 0x01EB   (0x0001)  
	bool                                               bOnlyConnectedToHull;                                       // 0x01EC   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x01ED   (0x0003)  MISSED
	int32_t                                            TargetNumSamples;                                           // 0x01F0   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x01F4   (0x0004)  MISSED
	double                                             MinSampleSpacing;                                           // 0x01F8   (0x0008)  
	double                                             NegativeSpaceTolerance;                                     // 0x0200   (0x0008)  
	double                                             MinRadius;                                                  // 0x0208   (0x0008)  
};

/// Struct /Script/GeometryCollectionNodes.UpdateVolumeAttributesDataflowNode
/// Size: 0x0198 (408 bytes) (0x0000E8 - 0x000198) align 8 MaxSize: 0x0198
struct FUpdateVolumeAttributesDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
};

/// Struct /Script/GeometryCollectionNodes.GetConvexHullVolumeDataflowNode
/// Size: 0x01C0 (448 bytes) (0x0000E8 - 0x0001C0) align 8 MaxSize: 0x01C0
struct FGetConvexHullVolumeDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	FDataflowTransformSelection                        TransformSelection;                                         // 0x0198   (0x0020)  
	float                                              Volume;                                                     // 0x01B8   (0x0004)  
	bool                                               bSumChildrenForClustersWithoutHulls;                        // 0x01BC   (0x0001)  
	bool                                               bVolumeOfUnion;                                             // 0x01BD   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x01BE   (0x0002)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.AutoClusterDataflowNode
/// Size: 0x01E8 (488 bytes) (0x0000E8 - 0x0001E8) align 8 MaxSize: 0x01E8
struct FAutoClusterDataflowNode : FDataflowNode
{ 
	EClusterSizeMethodEnum                             ClusterSizeMethod;                                          // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00E9   (0x0003)  MISSED
	int32_t                                            ClusterSites;                                               // 0x00EC   (0x0004)  
	float                                              ClusterFraction;                                            // 0x00F0   (0x0004)  
	float                                              SiteSize;                                                   // 0x00F4   (0x0004)  
	int32_t                                            ClusterGridWidth;                                           // 0x00F8   (0x0004)  
	int32_t                                            ClusterGridDepth;                                           // 0x00FC   (0x0004)  
	int32_t                                            ClusterGridHeight;                                          // 0x0100   (0x0004)  
	int32_t                                            DriftIterations;                                            // 0x0104   (0x0004)  
	float                                              MinimumSize;                                                // 0x0108   (0x0004)  
	bool                                               bPreferConvexity;                                           // 0x010C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x010D   (0x0003)  MISSED
	float                                              ConcavityTolerance;                                         // 0x0110   (0x0004)  
	bool                                               AutoCluster;                                                // 0x0114   (0x0001)  
	bool                                               EnforceSiteParameters;                                      // 0x0115   (0x0001)  
	bool                                               AvoidIsolated;                                              // 0x0116   (0x0001)  
	unsigned char                                      UnknownData02_6[0x1];                                       // 0x0117   (0x0001)  MISSED
	FManagedArrayCollection                            Collection;                                                 // 0x0118   (0x00B0)  
	FDataflowTransformSelection                        TransformSelection;                                         // 0x01C8   (0x0020)  
};

/// Struct /Script/GeometryCollectionNodes.ClusterFlattenDataflowNode
/// Size: 0x01B8 (440 bytes) (0x0000E8 - 0x0001B8) align 8 MaxSize: 0x01B8
struct FClusterFlattenDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	FDataflowTransformSelection                        OptionalTransformSelection;                                 // 0x0198   (0x0020)  
};

/// Struct /Script/GeometryCollectionNodes.ClusterUnclusterDataflowNode
/// Size: 0x01B8 (440 bytes) (0x0000E8 - 0x0001B8) align 8 MaxSize: 0x01B8
struct FClusterUnclusterDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	FDataflowTransformSelection                        TransformSelection;                                         // 0x0198   (0x0020)  
};

/// Struct /Script/GeometryCollectionNodes.ClusterDataflowNode
/// Size: 0x01B8 (440 bytes) (0x0000E8 - 0x0001B8) align 8 MaxSize: 0x01B8
struct FClusterDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	FDataflowTransformSelection                        TransformSelection;                                         // 0x0198   (0x0020)  
};

/// Struct /Script/GeometryCollectionNodes.ClusterMergeToNeighborsDataflowNode
/// Size: 0x01C8 (456 bytes) (0x0000E8 - 0x0001C8) align 8 MaxSize: 0x01C8
struct FClusterMergeToNeighborsDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	FDataflowTransformSelection                        TransformSelection;                                         // 0x0198   (0x0020)  
	EClusterNeighborSelectionMethodEnum                NeighborSelectionMethod;                                    // 0x01B8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x01B9   (0x0003)  MISSED
	float                                              MinVolumeCubeRoot;                                          // 0x01BC   (0x0004)  
	bool                                               bOnlyToConnected;                                           // 0x01C0   (0x0001)  
	bool                                               bOnlySameParent;                                            // 0x01C1   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x01C2   (0x0006)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.ClusterMergeDataflowNode
/// Size: 0x01B8 (440 bytes) (0x0000E8 - 0x0001B8) align 8 MaxSize: 0x01B8
struct FClusterMergeDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	FDataflowTransformSelection                        TransformSelection;                                         // 0x0198   (0x0020)  
};

/// Struct /Script/GeometryCollectionNodes.ClusterIsolatedRootsDataflowNode
/// Size: 0x0198 (408 bytes) (0x0000E8 - 0x000198) align 8 MaxSize: 0x0198
struct FClusterIsolatedRootsDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
};

/// Struct /Script/GeometryCollectionNodes.ClusterMagnetDataflowNode
/// Size: 0x01C0 (448 bytes) (0x0000E8 - 0x0001C0) align 8 MaxSize: 0x01C0
struct FClusterMagnetDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	FDataflowTransformSelection                        TransformSelection;                                         // 0x0198   (0x0020)  
	int32_t                                            Iterations;                                                 // 0x01B8   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x01BC   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.VectorToStringDataflowNode
/// Size: 0x0110 (272 bytes) (0x0000E8 - 0x000110) align 8 MaxSize: 0x0110
struct FVectorToStringDataflowNode : FDataflowNode
{ 
	FVector                                            Vector;                                                     // 0x00E8   (0x0018)  
	FString                                            String;                                                     // 0x0100   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.FloatToStringDataflowNode
/// Size: 0x0100 (256 bytes) (0x0000E8 - 0x000100) align 8 MaxSize: 0x0100
struct FFloatToStringDataflowNode : FDataflowNode
{ 
	float                                              FLOAT;                                                      // 0x00E8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00EC   (0x0004)  MISSED
	FString                                            String;                                                     // 0x00F0   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.IntToStringDataflowNode
/// Size: 0x0100 (256 bytes) (0x0000E8 - 0x000100) align 8 MaxSize: 0x0100
struct FIntToStringDataflowNode : FDataflowNode
{ 
	int32_t                                            Int;                                                        // 0x00E8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00EC   (0x0004)  MISSED
	FString                                            String;                                                     // 0x00F0   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.BoolToStringDataflowNode
/// Size: 0x0100 (256 bytes) (0x0000E8 - 0x000100) align 8 MaxSize: 0x0100
struct FBoolToStringDataflowNode : FDataflowNode
{ 
	bool                                               bool0;                                                      // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00E9   (0x0007)  MISSED
	FString                                            String;                                                     // 0x00F0   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.IntToFloatDataflowNode
/// Size: 0x00F0 (240 bytes) (0x0000E8 - 0x0000F0) align 8 MaxSize: 0x00F0
struct FIntToFloatDataflowNode : FDataflowNode
{ 
	int32_t                                            Int;                                                        // 0x00E8   (0x0004)  
	float                                              FLOAT;                                                      // 0x00EC   (0x0004)  
};

/// Struct /Script/GeometryCollectionNodes.IntToDoubleDataflowNode
/// Size: 0x00F8 (248 bytes) (0x0000E8 - 0x0000F8) align 8 MaxSize: 0x00F8
struct FIntToDoubleDataflowNode : FDataflowNode
{ 
	int32_t                                            Int;                                                        // 0x00E8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00EC   (0x0004)  MISSED
	double                                             Double;                                                     // 0x00F0   (0x0008)  
};

/// Struct /Script/GeometryCollectionNodes.FloatToDoubleDataflowNode
/// Size: 0x00F8 (248 bytes) (0x0000E8 - 0x0000F8) align 8 MaxSize: 0x00F8
struct FFloatToDoubleDataflowNode : FDataflowNode
{ 
	float                                              FLOAT;                                                      // 0x00E8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00EC   (0x0004)  MISSED
	double                                             Double;                                                     // 0x00F0   (0x0008)  
};

/// Struct /Script/GeometryCollectionNodes.FloatToIntDataflowNode
/// Size: 0x00F8 (248 bytes) (0x0000E8 - 0x0000F8) align 8 MaxSize: 0x00F8
struct FFloatToIntDataflowNode : FDataflowNode
{ 
	EFloatToIntFunctionEnum                            Function;                                                   // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00E9   (0x0003)  MISSED
	float                                              FLOAT;                                                      // 0x00EC   (0x0004)  
	int32_t                                            Int;                                                        // 0x00F0   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x00F4   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.IntToBoolDataflowNode
/// Size: 0x00F0 (240 bytes) (0x0000E8 - 0x0000F0) align 8 MaxSize: 0x00F0
struct FIntToBoolDataflowNode : FDataflowNode
{ 
	int32_t                                            Int;                                                        // 0x00E8   (0x0004)  
	bool                                               bool0;                                                      // 0x00EC   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x00ED   (0x0003)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.BoolToIntDataflowNode
/// Size: 0x00F0 (240 bytes) (0x0000E8 - 0x0000F0) align 8 MaxSize: 0x00F0
struct FBoolToIntDataflowNode : FDataflowNode
{ 
	bool                                               bool0;                                                      // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00E9   (0x0003)  MISSED
	int32_t                                            Int;                                                        // 0x00EC   (0x0004)  
};

/// Struct /Script/GeometryCollectionNodes.ConvexHullToMeshDataflowNode
/// Size: 0x01C0 (448 bytes) (0x0000E8 - 0x0001C0) align 8 MaxSize: 0x01C0
struct FConvexHullToMeshDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	FDataflowTransformSelection                        OptionalSelectionFilter;                                    // 0x0198   (0x0020)  
	class UDynamicMesh*                                Mesh;                                                       // 0x01B8   (0x0008)  
};

/// Struct /Script/GeometryCollectionNodes.SphereCoveringToMeshDataflowNode
/// Size: 0x0118 (280 bytes) (0x0000E8 - 0x000118) align 8 MaxSize: 0x0118
struct FSphereCoveringToMeshDataflowNode : FDataflowNode
{ 
	FDataflowSphereCovering                            SphereCovering;                                             // 0x00E8   (0x0020)  
	int32_t                                            VerticesAlongEachSide;                                      // 0x0108   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x010C   (0x0004)  MISSED
	class UDynamicMesh*                                Mesh;                                                       // 0x0110   (0x0008)  
};

/// Struct /Script/GeometryCollectionNodes.SphereCoveringCountSpheresNode
/// Size: 0x0110 (272 bytes) (0x0000E8 - 0x000110) align 8 MaxSize: 0x0110
struct FSphereCoveringCountSpheresNode : FDataflowNode
{ 
	FDataflowSphereCovering                            SphereCovering;                                             // 0x00E8   (0x0020)  
	int32_t                                            NumSpheres;                                                 // 0x0108   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x010C   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.MeshToOBJStringDebugDataflowNode
/// Size: 0x0108 (264 bytes) (0x0000E8 - 0x000108) align 8 MaxSize: 0x0108
struct FMeshToOBJStringDebugDataflowNode : FDataflowNode
{ 
	class UDynamicMesh*                                Mesh;                                                       // 0x00E8   (0x0008)  
	bool                                               bInvertFaces;                                               // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00F1   (0x0007)  MISSED
	FString                                            StringOBJ;                                                  // 0x00F8   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.WriteStringToFile
/// Size: 0x0108 (264 bytes) (0x0000E8 - 0x000108) align 8 MaxSize: 0x0108
struct FWriteStringToFile : FDataflowNode
{ 
	FString                                            FilePath;                                                   // 0x00E8   (0x0010)  
	FString                                            FileContents;                                               // 0x00F8   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.PruneInCollectionDataflowNode
/// Size: 0x01B8 (440 bytes) (0x0000E8 - 0x0001B8) align 8 MaxSize: 0x01B8
struct FPruneInCollectionDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	FDataflowTransformSelection                        TransformSelection;                                         // 0x0198   (0x0020)  
};

/// Struct /Script/GeometryCollectionNodes.SetVisibilityInCollectionDataflowNode
/// Size: 0x01E0 (480 bytes) (0x0000E8 - 0x0001E0) align 8 MaxSize: 0x01E0
struct FSetVisibilityInCollectionDataflowNode : FDataflowNode
{ 
	EVisibiltyOptionsEnum                              Visibility;                                                 // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00E9   (0x0007)  MISSED
	FManagedArrayCollection                            Collection;                                                 // 0x00F0   (0x00B0)  
	FDataflowTransformSelection                        TransformSelection;                                         // 0x01A0   (0x0020)  
	FDataflowFaceSelection                             FaceSelection;                                              // 0x01C0   (0x0020)  
};

/// Struct /Script/GeometryCollectionNodes.MergeInCollectionDataflowNode
/// Size: 0x01B8 (440 bytes) (0x0000E8 - 0x0001B8) align 8 MaxSize: 0x01B8
struct FMergeInCollectionDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	FDataflowTransformSelection                        TransformSelection;                                         // 0x0198   (0x0020)  
};

/// Struct /Script/GeometryCollectionNodes.UniformScatterPointsDataflowNode
/// Size: 0x0140 (320 bytes) (0x0000E8 - 0x000140) align 8 MaxSize: 0x0140
struct FUniformScatterPointsDataflowNode : FDataflowNode
{ 
	int32_t                                            MinNumberOfPoints;                                          // 0x00E8   (0x0004)  
	int32_t                                            MaxNumberOfPoints;                                          // 0x00EC   (0x0004)  
	float                                              RandomSeed;                                                 // 0x00F0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00F4   (0x0004)  MISSED
	FBox                                               BoundingBox;                                                // 0x00F8   (0x0038)  
	TArray<FVector>                                    Points;                                                     // 0x0130   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.RadialScatterPointsDataflowNode
/// Size: 0x0140 (320 bytes) (0x0000E8 - 0x000140) align 8 MaxSize: 0x0140
struct FRadialScatterPointsDataflowNode : FDataflowNode
{ 
	FVector                                            Center;                                                     // 0x00E8   (0x0018)  
	FVector                                            Normal;                                                     // 0x0100   (0x0018)  
	float                                              Radius;                                                     // 0x0118   (0x0004)  
	int32_t                                            AngularSteps;                                               // 0x011C   (0x0004)  
	int32_t                                            RadialSteps;                                                // 0x0120   (0x0004)  
	float                                              AngleOffset;                                                // 0x0124   (0x0004)  
	float                                              Variability;                                                // 0x0128   (0x0004)  
	float                                              RandomSeed;                                                 // 0x012C   (0x0004)  
	TArray<FVector>                                    Points;                                                     // 0x0130   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.VoronoiFractureDataflowNode
/// Size: 0x01F8 (504 bytes) (0x0000E8 - 0x0001F8) align 8 MaxSize: 0x01F8
struct FVoronoiFractureDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	TArray<FVector>                                    Points;                                                     // 0x0198   (0x0010)  
	FDataflowTransformSelection                        TransformSelection;                                         // 0x01A8   (0x0020)  
	float                                              RandomSeed;                                                 // 0x01C8   (0x0004)  
	float                                              ChanceToFracture;                                           // 0x01CC   (0x0004)  
	bool                                               GroupFracture;                                              // 0x01D0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x01D1   (0x0003)  MISSED
	float                                              Grout;                                                      // 0x01D4   (0x0004)  
	float                                              Amplitude;                                                  // 0x01D8   (0x0004)  
	float                                              Frequency;                                                  // 0x01DC   (0x0004)  
	float                                              Persistence;                                                // 0x01E0   (0x0004)  
	float                                              Lacunarity;                                                 // 0x01E4   (0x0004)  
	int32_t                                            OctaveNumber;                                               // 0x01E8   (0x0004)  
	float                                              PointSpacing;                                               // 0x01EC   (0x0004)  
	bool                                               AddSamplesForCollision;                                     // 0x01F0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x01F1   (0x0003)  MISSED
	float                                              CollisionSampleSpacing;                                     // 0x01F4   (0x0004)  
};

/// Struct /Script/GeometryCollectionNodes.PlaneCutterDataflowNode
/// Size: 0x0220 (544 bytes) (0x0000E8 - 0x000220) align 8 MaxSize: 0x0220
struct FPlaneCutterDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	FBox                                               BoundingBox;                                                // 0x0198   (0x0038)  
	FDataflowTransformSelection                        TransformSelection;                                         // 0x01D0   (0x0020)  
	int32_t                                            NumPlanes;                                                  // 0x01F0   (0x0004)  
	float                                              RandomSeed;                                                 // 0x01F4   (0x0004)  
	float                                              Grout;                                                      // 0x01F8   (0x0004)  
	float                                              Amplitude;                                                  // 0x01FC   (0x0004)  
	float                                              Frequency;                                                  // 0x0200   (0x0004)  
	float                                              Persistence;                                                // 0x0204   (0x0004)  
	float                                              Lacunarity;                                                 // 0x0208   (0x0004)  
	int32_t                                            OctaveNumber;                                               // 0x020C   (0x0004)  
	float                                              PointSpacing;                                               // 0x0210   (0x0004)  
	bool                                               AddSamplesForCollision;                                     // 0x0214   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0215   (0x0003)  MISSED
	float                                              CollisionSampleSpacing;                                     // 0x0218   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x021C   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.ExplodedViewDataflowNode
/// Size: 0x01B8 (440 bytes) (0x0000E8 - 0x0001B8) align 8 MaxSize: 0x01B8
struct FExplodedViewDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	float                                              UniformScale;                                               // 0x0198   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x019C   (0x0004)  MISSED
	FVector                                            Scale;                                                      // 0x01A0   (0x0018)  
};

/// Struct /Script/GeometryCollectionNodes.MakeLiteralStringDataflowNode
/// Size: 0x0108 (264 bytes) (0x0000E8 - 0x000108) align 8 MaxSize: 0x0108
struct FMakeLiteralStringDataflowNode : FDataflowNode
{ 
	FString                                            Value;                                                      // 0x00E8   (0x0010)  
	FString                                            String;                                                     // 0x00F8   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.MakePointsDataflowNode
/// Size: 0x0108 (264 bytes) (0x0000E8 - 0x000108) align 8 MaxSize: 0x0108
struct FMakePointsDataflowNode : FDataflowNode
{ 
	TArray<FVector>                                    Point;                                                      // 0x00E8   (0x0010)  
	TArray<FVector>                                    Points;                                                     // 0x00F8   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.MakeBoxDataflowNode
/// Size: 0x0188 (392 bytes) (0x0000E8 - 0x000188) align 8 MaxSize: 0x0188
struct FMakeBoxDataflowNode : FDataflowNode
{ 
	EMakeBoxDataTypeEnum                               DataType;                                                   // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00E9   (0x0007)  MISSED
	FVector                                            Min;                                                        // 0x00F0   (0x0018)  
	FVector                                            Max;                                                        // 0x0108   (0x0018)  
	FVector                                            Center;                                                     // 0x0120   (0x0018)  
	FVector                                            Size;                                                       // 0x0138   (0x0018)  
	FBox                                               Box;                                                        // 0x0150   (0x0038)  
};

/// Struct /Script/GeometryCollectionNodes.MakeSphereDataflowNode
/// Size: 0x0128 (296 bytes) (0x0000E8 - 0x000128) align 8 MaxSize: 0x0128
struct FMakeSphereDataflowNode : FDataflowNode
{ 
	FVector                                            Center;                                                     // 0x00E8   (0x0018)  
	float                                              Radius;                                                     // 0x0100   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0104   (0x0004)  MISSED
	FSphere                                            Sphere;                                                     // 0x0108   (0x0020)  
};

/// Struct /Script/GeometryCollectionNodes.MakeLiteralFloatDataflowNode
/// Size: 0x00F0 (240 bytes) (0x0000E8 - 0x0000F0) align 8 MaxSize: 0x00F0
struct FMakeLiteralFloatDataflowNode : FDataflowNode
{ 
	float                                              Value;                                                      // 0x00E8   (0x0004)  
	float                                              FLOAT;                                                      // 0x00EC   (0x0004)  
};

/// Struct /Script/GeometryCollectionNodes.MakeLiteralIntDataflowNode
/// Size: 0x00F0 (240 bytes) (0x0000E8 - 0x0000F0) align 8 MaxSize: 0x00F0
struct FMakeLiteralIntDataflowNode : FDataflowNode
{ 
	int32_t                                            Value;                                                      // 0x00E8   (0x0004)  
	int32_t                                            Int;                                                        // 0x00EC   (0x0004)  
};

/// Struct /Script/GeometryCollectionNodes.MakeLiteralBoolDataflowNode
/// Size: 0x00F0 (240 bytes) (0x0000E8 - 0x0000F0) align 8 MaxSize: 0x00F0
struct FMakeLiteralBoolDataflowNode : FDataflowNode
{ 
	bool                                               Value;                                                      // 0x00E8   (0x0001)  
	bool                                               bool0;                                                      // 0x00E9   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x00EA   (0x0006)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.MakeLiteralVectorDataflowNode
/// Size: 0x0110 (272 bytes) (0x0000E8 - 0x000110) align 8 MaxSize: 0x0110
struct FMakeLiteralVectorDataflowNode : FDataflowNode
{ 
	float                                              X;                                                          // 0x00E8   (0x0004)  
	float                                              Y;                                                          // 0x00EC   (0x0004)  
	float                                              Z;                                                          // 0x00F0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00F4   (0x0004)  MISSED
	FVector                                            Vector;                                                     // 0x00F8   (0x0018)  
};

/// Struct /Script/GeometryCollectionNodes.MakeTransformDataflowNode
/// Size: 0x0190 (400 bytes) (0x0000E8 - 0x000190) align 16 MaxSize: 0x0190
struct FMakeTransformDataflowNode : FDataflowNode
{ 
	FVector                                            InTranslation;                                              // 0x00E8   (0x0018)  
	FVector                                            InRotation;                                                 // 0x0100   (0x0018)  
	FVector                                            InScale;                                                    // 0x0118   (0x0018)  
	FTransform                                         OutTransform;                                               // 0x0130   (0x0060)  
};

/// Struct /Script/GeometryCollectionNodes.MakeQuaternionDataflowNode
/// Size: 0x0120 (288 bytes) (0x0000E8 - 0x000120) align 16 MaxSize: 0x0120
struct FMakeQuaternionDataflowNode : FDataflowNode
{ 
	float                                              X;                                                          // 0x00E8   (0x0004)  
	float                                              Y;                                                          // 0x00EC   (0x0004)  
	float                                              Z;                                                          // 0x00F0   (0x0004)  
	float                                              W;                                                          // 0x00F4   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00F8   (0x0008)  MISSED
	FQuat                                              Quaternion;                                                 // 0x0100   (0x0020)  
};

/// Struct /Script/GeometryCollectionNodes.AddDataflowNode
/// Size: 0x00F8 (248 bytes) (0x0000E8 - 0x0000F8) align 8 MaxSize: 0x00F8
struct FAddDataflowNode : FDataflowNode
{ 
	float                                              FloatA;                                                     // 0x00E8   (0x0004)  
	float                                              FloatB;                                                     // 0x00EC   (0x0004)  
	float                                              ReturnValue;                                                // 0x00F0   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00F4   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.SubtractDataflowNode
/// Size: 0x00F8 (248 bytes) (0x0000E8 - 0x0000F8) align 8 MaxSize: 0x00F8
struct FSubtractDataflowNode : FDataflowNode
{ 
	float                                              FloatA;                                                     // 0x00E8   (0x0004)  
	float                                              FloatB;                                                     // 0x00EC   (0x0004)  
	float                                              ReturnValue;                                                // 0x00F0   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00F4   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.MultiplyDataflowNode
/// Size: 0x00F8 (248 bytes) (0x0000E8 - 0x0000F8) align 8 MaxSize: 0x00F8
struct FMultiplyDataflowNode : FDataflowNode
{ 
	float                                              FloatA;                                                     // 0x00E8   (0x0004)  
	float                                              FloatB;                                                     // 0x00EC   (0x0004)  
	float                                              ReturnValue;                                                // 0x00F0   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00F4   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.SafeDivideDataflowNode
/// Size: 0x00F8 (248 bytes) (0x0000E8 - 0x0000F8) align 8 MaxSize: 0x00F8
struct FSafeDivideDataflowNode : FDataflowNode
{ 
	float                                              FloatA;                                                     // 0x00E8   (0x0004)  
	float                                              FloatB;                                                     // 0x00EC   (0x0004)  
	float                                              ReturnValue;                                                // 0x00F0   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00F4   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.DivideDataflowNode
/// Size: 0x00F8 (248 bytes) (0x0000F8 - 0x0000F8) align 8 MaxSize: 0x00F8
struct FDivideDataflowNode : FSafeDivideDataflowNode
{ 
};

/// Struct /Script/GeometryCollectionNodes.DivisionDataflowNode
/// Size: 0x00F8 (248 bytes) (0x0000E8 - 0x0000F8) align 8 MaxSize: 0x00F8
struct FDivisionDataflowNode : FDataflowNode
{ 
	float                                              Dividend;                                                   // 0x00E8   (0x0004)  
	float                                              Divisor;                                                    // 0x00EC   (0x0004)  
	float                                              Remainder;                                                  // 0x00F0   (0x0004)  
	int32_t                                            ReturnValue;                                                // 0x00F4   (0x0004)  
};

/// Struct /Script/GeometryCollectionNodes.SafeReciprocalDataflowNode
/// Size: 0x00F0 (240 bytes) (0x0000E8 - 0x0000F0) align 8 MaxSize: 0x00F0
struct FSafeReciprocalDataflowNode : FDataflowNode
{ 
	float                                              FLOAT;                                                      // 0x00E8   (0x0004)  
	float                                              ReturnValue;                                                // 0x00EC   (0x0004)  
};

/// Struct /Script/GeometryCollectionNodes.SquareDataflowNode
/// Size: 0x00F0 (240 bytes) (0x0000E8 - 0x0000F0) align 8 MaxSize: 0x00F0
struct FSquareDataflowNode : FDataflowNode
{ 
	float                                              FLOAT;                                                      // 0x00E8   (0x0004)  
	float                                              ReturnValue;                                                // 0x00EC   (0x0004)  
};

/// Struct /Script/GeometryCollectionNodes.SquareRootDataflowNode
/// Size: 0x00F0 (240 bytes) (0x0000E8 - 0x0000F0) align 8 MaxSize: 0x00F0
struct FSquareRootDataflowNode : FDataflowNode
{ 
	float                                              FLOAT;                                                      // 0x00E8   (0x0004)  
	float                                              ReturnValue;                                                // 0x00EC   (0x0004)  
};

/// Struct /Script/GeometryCollectionNodes.InverseSqrtDataflowNode
/// Size: 0x00F0 (240 bytes) (0x0000E8 - 0x0000F0) align 8 MaxSize: 0x00F0
struct FInverseSqrtDataflowNode : FDataflowNode
{ 
	float                                              FLOAT;                                                      // 0x00E8   (0x0004)  
	float                                              ReturnValue;                                                // 0x00EC   (0x0004)  
};

/// Struct /Script/GeometryCollectionNodes.CubeDataflowNode
/// Size: 0x00F0 (240 bytes) (0x0000E8 - 0x0000F0) align 8 MaxSize: 0x00F0
struct FCubeDataflowNode : FDataflowNode
{ 
	float                                              FLOAT;                                                      // 0x00E8   (0x0004)  
	float                                              ReturnValue;                                                // 0x00EC   (0x0004)  
};

/// Struct /Script/GeometryCollectionNodes.NegateDataflowNode
/// Size: 0x00F0 (240 bytes) (0x0000E8 - 0x0000F0) align 8 MaxSize: 0x00F0
struct FNegateDataflowNode : FDataflowNode
{ 
	float                                              FLOAT;                                                      // 0x00E8   (0x0004)  
	float                                              ReturnValue;                                                // 0x00EC   (0x0004)  
};

/// Struct /Script/GeometryCollectionNodes.AbsDataflowNode
/// Size: 0x00F0 (240 bytes) (0x0000E8 - 0x0000F0) align 8 MaxSize: 0x00F0
struct FAbsDataflowNode : FDataflowNode
{ 
	float                                              FLOAT;                                                      // 0x00E8   (0x0004)  
	float                                              ReturnValue;                                                // 0x00EC   (0x0004)  
};

/// Struct /Script/GeometryCollectionNodes.FloorDataflowNode
/// Size: 0x00F0 (240 bytes) (0x0000E8 - 0x0000F0) align 8 MaxSize: 0x00F0
struct FFloorDataflowNode : FDataflowNode
{ 
	float                                              FLOAT;                                                      // 0x00E8   (0x0004)  
	float                                              ReturnValue;                                                // 0x00EC   (0x0004)  
};

/// Struct /Script/GeometryCollectionNodes.CeilDataflowNode
/// Size: 0x00F0 (240 bytes) (0x0000E8 - 0x0000F0) align 8 MaxSize: 0x00F0
struct FCeilDataflowNode : FDataflowNode
{ 
	float                                              FLOAT;                                                      // 0x00E8   (0x0004)  
	float                                              ReturnValue;                                                // 0x00EC   (0x0004)  
};

/// Struct /Script/GeometryCollectionNodes.RoundDataflowNode
/// Size: 0x00F0 (240 bytes) (0x0000E8 - 0x0000F0) align 8 MaxSize: 0x00F0
struct FRoundDataflowNode : FDataflowNode
{ 
	float                                              FLOAT;                                                      // 0x00E8   (0x0004)  
	float                                              ReturnValue;                                                // 0x00EC   (0x0004)  
};

/// Struct /Script/GeometryCollectionNodes.TruncDataflowNode
/// Size: 0x00F0 (240 bytes) (0x0000E8 - 0x0000F0) align 8 MaxSize: 0x00F0
struct FTruncDataflowNode : FDataflowNode
{ 
	float                                              FLOAT;                                                      // 0x00E8   (0x0004)  
	float                                              ReturnValue;                                                // 0x00EC   (0x0004)  
};

/// Struct /Script/GeometryCollectionNodes.FracDataflowNode
/// Size: 0x00F0 (240 bytes) (0x0000E8 - 0x0000F0) align 8 MaxSize: 0x00F0
struct FFracDataflowNode : FDataflowNode
{ 
	float                                              FLOAT;                                                      // 0x00E8   (0x0004)  
	float                                              ReturnValue;                                                // 0x00EC   (0x0004)  
};

/// Struct /Script/GeometryCollectionNodes.MinDataflowNode
/// Size: 0x00F8 (248 bytes) (0x0000E8 - 0x0000F8) align 8 MaxSize: 0x00F8
struct FMinDataflowNode : FDataflowNode
{ 
	float                                              FloatA;                                                     // 0x00E8   (0x0004)  
	float                                              FloatB;                                                     // 0x00EC   (0x0004)  
	float                                              ReturnValue;                                                // 0x00F0   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00F4   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.MaxDataflowNode
/// Size: 0x00F8 (248 bytes) (0x0000E8 - 0x0000F8) align 8 MaxSize: 0x00F8
struct FMaxDataflowNode : FDataflowNode
{ 
	float                                              FloatA;                                                     // 0x00E8   (0x0004)  
	float                                              FloatB;                                                     // 0x00EC   (0x0004)  
	float                                              ReturnValue;                                                // 0x00F0   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00F4   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.Min3DataflowNode
/// Size: 0x00F8 (248 bytes) (0x0000E8 - 0x0000F8) align 8 MaxSize: 0x00F8
struct FMin3DataflowNode : FDataflowNode
{ 
	float                                              FloatA;                                                     // 0x00E8   (0x0004)  
	float                                              FloatB;                                                     // 0x00EC   (0x0004)  
	float                                              FloatC;                                                     // 0x00F0   (0x0004)  
	float                                              ReturnValue;                                                // 0x00F4   (0x0004)  
};

/// Struct /Script/GeometryCollectionNodes.Max3DataflowNode
/// Size: 0x00F8 (248 bytes) (0x0000E8 - 0x0000F8) align 8 MaxSize: 0x00F8
struct FMax3DataflowNode : FDataflowNode
{ 
	float                                              FloatA;                                                     // 0x00E8   (0x0004)  
	float                                              FloatB;                                                     // 0x00EC   (0x0004)  
	float                                              FloatC;                                                     // 0x00F0   (0x0004)  
	float                                              ReturnValue;                                                // 0x00F4   (0x0004)  
};

/// Struct /Script/GeometryCollectionNodes.SignDataflowNode
/// Size: 0x00F0 (240 bytes) (0x0000E8 - 0x0000F0) align 8 MaxSize: 0x00F0
struct FSignDataflowNode : FDataflowNode
{ 
	float                                              FLOAT;                                                      // 0x00E8   (0x0004)  
	float                                              ReturnValue;                                                // 0x00EC   (0x0004)  
};

/// Struct /Script/GeometryCollectionNodes.ClampDataflowNode
/// Size: 0x00F8 (248 bytes) (0x0000E8 - 0x0000F8) align 8 MaxSize: 0x00F8
struct FClampDataflowNode : FDataflowNode
{ 
	float                                              FLOAT;                                                      // 0x00E8   (0x0004)  
	float                                              Min;                                                        // 0x00EC   (0x0004)  
	float                                              Max;                                                        // 0x00F0   (0x0004)  
	float                                              ReturnValue;                                                // 0x00F4   (0x0004)  
};

/// Struct /Script/GeometryCollectionNodes.FitDataflowNode
/// Size: 0x0100 (256 bytes) (0x0000E8 - 0x000100) align 8 MaxSize: 0x0100
struct FFitDataflowNode : FDataflowNode
{ 
	float                                              FLOAT;                                                      // 0x00E8   (0x0004)  
	float                                              OldMin;                                                     // 0x00EC   (0x0004)  
	float                                              OldMax;                                                     // 0x00F0   (0x0004)  
	float                                              NewMin;                                                     // 0x00F4   (0x0004)  
	float                                              NewMax;                                                     // 0x00F8   (0x0004)  
	float                                              ReturnValue;                                                // 0x00FC   (0x0004)  
};

/// Struct /Script/GeometryCollectionNodes.EFitDataflowNode
/// Size: 0x0100 (256 bytes) (0x0000E8 - 0x000100) align 8 MaxSize: 0x0100
struct FEFitDataflowNode : FDataflowNode
{ 
	float                                              FLOAT;                                                      // 0x00E8   (0x0004)  
	float                                              OldMin;                                                     // 0x00EC   (0x0004)  
	float                                              OldMax;                                                     // 0x00F0   (0x0004)  
	float                                              NewMin;                                                     // 0x00F4   (0x0004)  
	float                                              NewMax;                                                     // 0x00F8   (0x0004)  
	float                                              ReturnValue;                                                // 0x00FC   (0x0004)  
};

/// Struct /Script/GeometryCollectionNodes.PowDataflowNode
/// Size: 0x00F8 (248 bytes) (0x0000E8 - 0x0000F8) align 8 MaxSize: 0x00F8
struct FPowDataflowNode : FDataflowNode
{ 
	float                                              base;                                                       // 0x00E8   (0x0004)  
	float                                              Exp;                                                        // 0x00EC   (0x0004)  
	float                                              ReturnValue;                                                // 0x00F0   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00F4   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.LogDataflowNode
/// Size: 0x00F8 (248 bytes) (0x0000E8 - 0x0000F8) align 8 MaxSize: 0x00F8
struct FLogDataflowNode : FDataflowNode
{ 
	float                                              base;                                                       // 0x00E8   (0x0004)  
	float                                              A;                                                          // 0x00EC   (0x0004)  
	float                                              ReturnValue;                                                // 0x00F0   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00F4   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.LogeDataflowNode
/// Size: 0x00F0 (240 bytes) (0x0000E8 - 0x0000F0) align 8 MaxSize: 0x00F0
struct FLogeDataflowNode : FDataflowNode
{ 
	float                                              A;                                                          // 0x00E8   (0x0004)  
	float                                              ReturnValue;                                                // 0x00EC   (0x0004)  
};

/// Struct /Script/GeometryCollectionNodes.LerpDataflowNode
/// Size: 0x00F8 (248 bytes) (0x0000E8 - 0x0000F8) align 8 MaxSize: 0x00F8
struct FLerpDataflowNode : FDataflowNode
{ 
	float                                              A;                                                          // 0x00E8   (0x0004)  
	float                                              B;                                                          // 0x00EC   (0x0004)  
	float                                              Alpha;                                                      // 0x00F0   (0x0004)  
	float                                              ReturnValue;                                                // 0x00F4   (0x0004)  
};

/// Struct /Script/GeometryCollectionNodes.WrapDataflowNode
/// Size: 0x00F8 (248 bytes) (0x0000E8 - 0x0000F8) align 8 MaxSize: 0x00F8
struct FWrapDataflowNode : FDataflowNode
{ 
	float                                              FLOAT;                                                      // 0x00E8   (0x0004)  
	float                                              Min;                                                        // 0x00EC   (0x0004)  
	float                                              Max;                                                        // 0x00F0   (0x0004)  
	float                                              ReturnValue;                                                // 0x00F4   (0x0004)  
};

/// Struct /Script/GeometryCollectionNodes.ExpDataflowNode
/// Size: 0x00F0 (240 bytes) (0x0000E8 - 0x0000F0) align 8 MaxSize: 0x00F0
struct FExpDataflowNode : FDataflowNode
{ 
	float                                              FLOAT;                                                      // 0x00E8   (0x0004)  
	float                                              ReturnValue;                                                // 0x00EC   (0x0004)  
};

/// Struct /Script/GeometryCollectionNodes.SinDataflowNode
/// Size: 0x00F0 (240 bytes) (0x0000E8 - 0x0000F0) align 8 MaxSize: 0x00F0
struct FSinDataflowNode : FDataflowNode
{ 
	float                                              FLOAT;                                                      // 0x00E8   (0x0004)  
	float                                              ReturnValue;                                                // 0x00EC   (0x0004)  
};

/// Struct /Script/GeometryCollectionNodes.ArcSinDataflowNode
/// Size: 0x00F0 (240 bytes) (0x0000E8 - 0x0000F0) align 8 MaxSize: 0x00F0
struct FArcSinDataflowNode : FDataflowNode
{ 
	float                                              FLOAT;                                                      // 0x00E8   (0x0004)  
	float                                              ReturnValue;                                                // 0x00EC   (0x0004)  
};

/// Struct /Script/GeometryCollectionNodes.CosDataflowNode
/// Size: 0x00F0 (240 bytes) (0x0000E8 - 0x0000F0) align 8 MaxSize: 0x00F0
struct FCosDataflowNode : FDataflowNode
{ 
	float                                              FLOAT;                                                      // 0x00E8   (0x0004)  
	float                                              ReturnValue;                                                // 0x00EC   (0x0004)  
};

/// Struct /Script/GeometryCollectionNodes.ArcCosDataflowNode
/// Size: 0x00F0 (240 bytes) (0x0000E8 - 0x0000F0) align 8 MaxSize: 0x00F0
struct FArcCosDataflowNode : FDataflowNode
{ 
	float                                              FLOAT;                                                      // 0x00E8   (0x0004)  
	float                                              ReturnValue;                                                // 0x00EC   (0x0004)  
};

/// Struct /Script/GeometryCollectionNodes.TanDataflowNode
/// Size: 0x00F0 (240 bytes) (0x0000E8 - 0x0000F0) align 8 MaxSize: 0x00F0
struct FTanDataflowNode : FDataflowNode
{ 
	float                                              FLOAT;                                                      // 0x00E8   (0x0004)  
	float                                              ReturnValue;                                                // 0x00EC   (0x0004)  
};

/// Struct /Script/GeometryCollectionNodes.ArcTanDataflowNode
/// Size: 0x00F0 (240 bytes) (0x0000E8 - 0x0000F0) align 8 MaxSize: 0x00F0
struct FArcTanDataflowNode : FDataflowNode
{ 
	float                                              FLOAT;                                                      // 0x00E8   (0x0004)  
	float                                              ReturnValue;                                                // 0x00EC   (0x0004)  
};

/// Struct /Script/GeometryCollectionNodes.ArcTan2DataflowNode
/// Size: 0x00F8 (248 bytes) (0x0000E8 - 0x0000F8) align 8 MaxSize: 0x00F8
struct FArcTan2DataflowNode : FDataflowNode
{ 
	float                                              Y;                                                          // 0x00E8   (0x0004)  
	float                                              X;                                                          // 0x00EC   (0x0004)  
	float                                              ReturnValue;                                                // 0x00F0   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00F4   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.NormalizeToRangeDataflowNode
/// Size: 0x00F8 (248 bytes) (0x0000E8 - 0x0000F8) align 8 MaxSize: 0x00F8
struct FNormalizeToRangeDataflowNode : FDataflowNode
{ 
	float                                              FLOAT;                                                      // 0x00E8   (0x0004)  
	float                                              RangeMin;                                                   // 0x00EC   (0x0004)  
	float                                              RangeMax;                                                   // 0x00F0   (0x0004)  
	float                                              ReturnValue;                                                // 0x00F4   (0x0004)  
};

/// Struct /Script/GeometryCollectionNodes.ScaleVectorDataflowNode
/// Size: 0x0120 (288 bytes) (0x0000E8 - 0x000120) align 8 MaxSize: 0x0120
struct FScaleVectorDataflowNode : FDataflowNode
{ 
	FVector                                            Vector;                                                     // 0x00E8   (0x0018)  
	float                                              Scale;                                                      // 0x0100   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0104   (0x0004)  MISSED
	FVector                                            ScaledVector;                                               // 0x0108   (0x0018)  
};

/// Struct /Script/GeometryCollectionNodes.DotProductDataflowNode
/// Size: 0x0120 (288 bytes) (0x0000E8 - 0x000120) align 8 MaxSize: 0x0120
struct FDotProductDataflowNode : FDataflowNode
{ 
	FVector                                            VectorA;                                                    // 0x00E8   (0x0018)  
	FVector                                            VectorB;                                                    // 0x0100   (0x0018)  
	float                                              ReturnValue;                                                // 0x0118   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x011C   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.CrossProductDataflowNode
/// Size: 0x0130 (304 bytes) (0x0000E8 - 0x000130) align 8 MaxSize: 0x0130
struct FCrossProductDataflowNode : FDataflowNode
{ 
	FVector                                            VectorA;                                                    // 0x00E8   (0x0018)  
	FVector                                            VectorB;                                                    // 0x0100   (0x0018)  
	FVector                                            ReturnValue;                                                // 0x0118   (0x0018)  
};

/// Struct /Script/GeometryCollectionNodes.NormalizeDataflowNode
/// Size: 0x0120 (288 bytes) (0x0000E8 - 0x000120) align 8 MaxSize: 0x0120
struct FNormalizeDataflowNode : FDataflowNode
{ 
	FVector                                            VectorA;                                                    // 0x00E8   (0x0018)  
	float                                              Tolerance;                                                  // 0x0100   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0104   (0x0004)  MISSED
	FVector                                            ReturnValue;                                                // 0x0108   (0x0018)  
};

/// Struct /Script/GeometryCollectionNodes.LengthDataflowNode
/// Size: 0x0108 (264 bytes) (0x0000E8 - 0x000108) align 8 MaxSize: 0x0108
struct FLengthDataflowNode : FDataflowNode
{ 
	FVector                                            Vector;                                                     // 0x00E8   (0x0018)  
	float                                              ReturnValue;                                                // 0x0100   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0104   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.DistanceDataflowNode
/// Size: 0x0120 (288 bytes) (0x0000E8 - 0x000120) align 8 MaxSize: 0x0120
struct FDistanceDataflowNode : FDataflowNode
{ 
	FVector                                            PointA;                                                     // 0x00E8   (0x0018)  
	FVector                                            PointB;                                                     // 0x0100   (0x0018)  
	float                                              ReturnValue;                                                // 0x0118   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x011C   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.IsNearlyZeroDataflowNode
/// Size: 0x00F0 (240 bytes) (0x0000E8 - 0x0000F0) align 8 MaxSize: 0x00F0
struct FIsNearlyZeroDataflowNode : FDataflowNode
{ 
	float                                              FLOAT;                                                      // 0x00E8   (0x0004)  
	bool                                               ReturnValue;                                                // 0x00EC   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x00ED   (0x0003)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.RandomFloatDataflowNode
/// Size: 0x00F8 (248 bytes) (0x0000E8 - 0x0000F8) align 8 MaxSize: 0x00F8
struct FRandomFloatDataflowNode : FDataflowNode
{ 
	bool                                               bDeterministic;                                             // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00E9   (0x0003)  MISSED
	float                                              RandomSeed;                                                 // 0x00EC   (0x0004)  
	float                                              ReturnValue;                                                // 0x00F0   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x00F4   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.RandomFloatInRangeDataflowNode
/// Size: 0x0100 (256 bytes) (0x0000E8 - 0x000100) align 8 MaxSize: 0x0100
struct FRandomFloatInRangeDataflowNode : FDataflowNode
{ 
	bool                                               bDeterministic;                                             // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00E9   (0x0003)  MISSED
	float                                              RandomSeed;                                                 // 0x00EC   (0x0004)  
	float                                              Min;                                                        // 0x00F0   (0x0004)  
	float                                              Max;                                                        // 0x00F4   (0x0004)  
	float                                              ReturnValue;                                                // 0x00F8   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x00FC   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.RandomUnitVectorDataflowNode
/// Size: 0x0108 (264 bytes) (0x0000E8 - 0x000108) align 8 MaxSize: 0x0108
struct FRandomUnitVectorDataflowNode : FDataflowNode
{ 
	bool                                               bDeterministic;                                             // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00E9   (0x0003)  MISSED
	float                                              RandomSeed;                                                 // 0x00EC   (0x0004)  
	FVector                                            ReturnValue;                                                // 0x00F0   (0x0018)  
};

/// Struct /Script/GeometryCollectionNodes.RandomUnitVectorInConeDataflowNode
/// Size: 0x0128 (296 bytes) (0x0000E8 - 0x000128) align 8 MaxSize: 0x0128
struct FRandomUnitVectorInConeDataflowNode : FDataflowNode
{ 
	bool                                               bDeterministic;                                             // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00E9   (0x0003)  MISSED
	float                                              RandomSeed;                                                 // 0x00EC   (0x0004)  
	FVector                                            ConeDirection;                                              // 0x00F0   (0x0018)  
	float                                              ConeHalfAngle;                                              // 0x0108   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x010C   (0x0004)  MISSED
	FVector                                            ReturnValue;                                                // 0x0110   (0x0018)  
};

/// Struct /Script/GeometryCollectionNodes.RadiansToDegreesDataflowNode
/// Size: 0x00F0 (240 bytes) (0x0000E8 - 0x0000F0) align 8 MaxSize: 0x00F0
struct FRadiansToDegreesDataflowNode : FDataflowNode
{ 
	float                                              Radians;                                                    // 0x00E8   (0x0004)  
	float                                              Degrees;                                                    // 0x00EC   (0x0004)  
};

/// Struct /Script/GeometryCollectionNodes.DegreesToRadiansDataflowNode
/// Size: 0x00F0 (240 bytes) (0x0000E8 - 0x0000F0) align 8 MaxSize: 0x00F0
struct FDegreesToRadiansDataflowNode : FDataflowNode
{ 
	float                                              Degrees;                                                    // 0x00E8   (0x0004)  
	float                                              Radians;                                                    // 0x00EC   (0x0004)  
};

/// Struct /Script/GeometryCollectionNodes.MathConstantsDataflowNode
/// Size: 0x00F0 (240 bytes) (0x0000E8 - 0x0000F0) align 8 MaxSize: 0x00F0
struct FMathConstantsDataflowNode : FDataflowNode
{ 
	EMathConstantsEnum                                 Constant;                                                   // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00E9   (0x0003)  MISSED
	float                                              ReturnValue;                                                // 0x00EC   (0x0004)  
};

/// Struct /Script/GeometryCollectionNodes.OneMinusDataflowNode
/// Size: 0x00F0 (240 bytes) (0x0000E8 - 0x0000F0) align 8 MaxSize: 0x00F0
struct FOneMinusDataflowNode : FDataflowNode
{ 
	float                                              A;                                                          // 0x00E8   (0x0004)  
	float                                              ReturnValue;                                                // 0x00EC   (0x0004)  
};

/// Struct /Script/GeometryCollectionNodes.PointsToMeshDataflowNode
/// Size: 0x0108 (264 bytes) (0x0000E8 - 0x000108) align 8 MaxSize: 0x0108
struct FPointsToMeshDataflowNode : FDataflowNode
{ 
	TArray<FVector>                                    Points;                                                     // 0x00E8   (0x0010)  
	class UDynamicMesh*                                Mesh;                                                       // 0x00F8   (0x0008)  
	int32_t                                            TriangleCount;                                              // 0x0100   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0104   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.BoxToMeshDataflowNode
/// Size: 0x0130 (304 bytes) (0x0000E8 - 0x000130) align 8 MaxSize: 0x0130
struct FBoxToMeshDataflowNode : FDataflowNode
{ 
	FBox                                               Box;                                                        // 0x00E8   (0x0038)  
	class UDynamicMesh*                                Mesh;                                                       // 0x0120   (0x0008)  
	int32_t                                            TriangleCount;                                              // 0x0128   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x012C   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.MeshInfoDataflowNode
/// Size: 0x0100 (256 bytes) (0x0000E8 - 0x000100) align 8 MaxSize: 0x0100
struct FMeshInfoDataflowNode : FDataflowNode
{ 
	class UDynamicMesh*                                Mesh;                                                       // 0x00E8   (0x0008)  
	FString                                            InfoString;                                                 // 0x00F0   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.MeshToCollectionDataflowNode
/// Size: 0x01A0 (416 bytes) (0x0000E8 - 0x0001A0) align 8 MaxSize: 0x01A0
struct FMeshToCollectionDataflowNode : FDataflowNode
{ 
	class UDynamicMesh*                                Mesh;                                                       // 0x00E8   (0x0008)  
	FManagedArrayCollection                            Collection;                                                 // 0x00F0   (0x00B0)  
};

/// Struct /Script/GeometryCollectionNodes.CollectionToMeshDataflowNode
/// Size: 0x01A8 (424 bytes) (0x0000E8 - 0x0001A8) align 8 MaxSize: 0x01A8
struct FCollectionToMeshDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	bool                                               bCenterPivot;                                               // 0x0198   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0199   (0x0007)  MISSED
	class UDynamicMesh*                                Mesh;                                                       // 0x01A0   (0x0008)  
};

/// Struct /Script/GeometryCollectionNodes.StaticMeshToMeshDataflowNode
/// Size: 0x0100 (256 bytes) (0x0000E8 - 0x000100) align 8 MaxSize: 0x0100
struct FStaticMeshToMeshDataflowNode : FDataflowNode
{ 
	class UStaticMesh*                                 StaticMesh;                                                 // 0x00E8   (0x0008)  
	bool                                               bUseHiRes;                                                  // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00F1   (0x0003)  MISSED
	int32_t                                            LODLevel;                                                   // 0x00F4   (0x0004)  
	class UDynamicMesh*                                Mesh;                                                       // 0x00F8   (0x0008)  
};

/// Struct /Script/GeometryCollectionNodes.MeshAppendDataflowNode
/// Size: 0x0100 (256 bytes) (0x0000E8 - 0x000100) align 8 MaxSize: 0x0100
struct FMeshAppendDataflowNode : FDataflowNode
{ 
	class UDynamicMesh*                                Mesh1;                                                      // 0x00E8   (0x0008)  
	class UDynamicMesh*                                Mesh2;                                                      // 0x00F0   (0x0008)  
	class UDynamicMesh*                                Mesh;                                                       // 0x00F8   (0x0008)  
};

/// Struct /Script/GeometryCollectionNodes.MeshBooleanDataflowNode
/// Size: 0x0108 (264 bytes) (0x0000E8 - 0x000108) align 8 MaxSize: 0x0108
struct FMeshBooleanDataflowNode : FDataflowNode
{ 
	EMeshBooleanOperationEnum                          Operation;                                                  // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00E9   (0x0007)  MISSED
	class UDynamicMesh*                                Mesh1;                                                      // 0x00F0   (0x0008)  
	class UDynamicMesh*                                Mesh2;                                                      // 0x00F8   (0x0008)  
	class UDynamicMesh*                                Mesh;                                                       // 0x0100   (0x0008)  
};

/// Struct /Script/GeometryCollectionNodes.MeshCopyToPointsDataflowNode
/// Size: 0x0110 (272 bytes) (0x0000E8 - 0x000110) align 8 MaxSize: 0x0110
struct FMeshCopyToPointsDataflowNode : FDataflowNode
{ 
	TArray<FVector>                                    Points;                                                     // 0x00E8   (0x0010)  
	class UDynamicMesh*                                MeshToCopy;                                                 // 0x00F8   (0x0008)  
	float                                              Scale;                                                      // 0x0100   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0104   (0x0004)  MISSED
	class UDynamicMesh*                                Mesh;                                                       // 0x0108   (0x0008)  
};

/// Struct /Script/GeometryCollectionNodes.GetMeshDataDataflowNode
/// Size: 0x0100 (256 bytes) (0x0000E8 - 0x000100) align 8 MaxSize: 0x0100
struct FGetMeshDataDataflowNode : FDataflowNode
{ 
	class UDynamicMesh*                                Mesh;                                                       // 0x00E8   (0x0008)  
	int32_t                                            VertexCount;                                                // 0x00F0   (0x0004)  
	int32_t                                            EdgeCount;                                                  // 0x00F4   (0x0004)  
	int32_t                                            TriangleCount;                                              // 0x00F8   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00FC   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.GetCollectionFromAssetDataflowNode
/// Size: 0x01A0 (416 bytes) (0x0000E8 - 0x0001A0) align 8 MaxSize: 0x01A0
struct FGetCollectionFromAssetDataflowNode : FDataflowNode
{ 
	class UGeometryCollection*                         CollectionAsset;                                            // 0x00E8   (0x0008)  
	FManagedArrayCollection                            Collection;                                                 // 0x00F0   (0x00B0)  
};

/// Struct /Script/GeometryCollectionNodes.AppendCollectionAssetsDataflowNode
/// Size: 0x0268 (616 bytes) (0x0000E8 - 0x000268) align 8 MaxSize: 0x0268
struct FAppendCollectionAssetsDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection1;                                                // 0x00E8   (0x00B0)  
	FManagedArrayCollection                            Collection2;                                                // 0x0198   (0x00B0)  
	TArray<FString>                                    GeometryGroupGuidsOut1;                                     // 0x0248   (0x0010)  
	TArray<FString>                                    GeometryGroupGuidsOut2;                                     // 0x0258   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.PrintStringDataflowNode
/// Size: 0x0108 (264 bytes) (0x0000E8 - 0x000108) align 8 MaxSize: 0x0108
struct FPrintStringDataflowNode : FDataflowNode
{ 
	bool                                               bPrintToScreen;                                             // 0x00E8   (0x0001)  
	bool                                               bPrintToLog;                                                // 0x00E9   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x00EA   (0x0002)  MISSED
	FColor                                             Color;                                                      // 0x00EC   (0x0004)  
	float                                              Duration;                                                   // 0x00F0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00F4   (0x0004)  MISSED
	FString                                            String;                                                     // 0x00F8   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.LogStringDataflowNode
/// Size: 0x0100 (256 bytes) (0x0000E8 - 0x000100) align 8 MaxSize: 0x0100
struct FLogStringDataflowNode : FDataflowNode
{ 
	bool                                               bPrintToLog;                                                // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00E9   (0x0007)  MISSED
	FString                                            String;                                                     // 0x00F0   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.BoundingBoxDataflowNode
/// Size: 0x01D0 (464 bytes) (0x0000E8 - 0x0001D0) align 8 MaxSize: 0x01D0
struct FBoundingBoxDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	FBox                                               BoundingBox;                                                // 0x0198   (0x0038)  
};

/// Struct /Script/GeometryCollectionNodes.GetBoxLengthsDataflowNode
/// Size: 0x0110 (272 bytes) (0x0000E8 - 0x000110) align 8 MaxSize: 0x0110
struct FGetBoxLengthsDataflowNode : FDataflowNode
{ 
	TArray<FBox>                                       Boxes;                                                      // 0x00E8   (0x0010)  
	TArray<float>                                      Lengths;                                                    // 0x00F8   (0x0010)  
	EBoxLengthMeasurementMethod                        MeasurementMethod;                                          // 0x0108   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0109   (0x0007)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.ExpandBoundingBoxDataflowNode
/// Size: 0x0188 (392 bytes) (0x0000E8 - 0x000188) align 8 MaxSize: 0x0188
struct FExpandBoundingBoxDataflowNode : FDataflowNode
{ 
	FBox                                               BoundingBox;                                                // 0x00E8   (0x0038)  
	FVector                                            Min;                                                        // 0x0120   (0x0018)  
	FVector                                            Max;                                                        // 0x0138   (0x0018)  
	FVector                                            Center;                                                     // 0x0150   (0x0018)  
	FVector                                            HalfExtents;                                                // 0x0168   (0x0018)  
	float                                              Volume;                                                     // 0x0180   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0184   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.ExpandVectorDataflowNode
/// Size: 0x0110 (272 bytes) (0x0000E8 - 0x000110) align 8 MaxSize: 0x0110
struct FExpandVectorDataflowNode : FDataflowNode
{ 
	FVector                                            Vector;                                                     // 0x00E8   (0x0018)  
	float                                              X;                                                          // 0x0100   (0x0004)  
	float                                              Y;                                                          // 0x0104   (0x0004)  
	float                                              Z;                                                          // 0x0108   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x010C   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.StringAppendDataflowNode
/// Size: 0x0118 (280 bytes) (0x0000E8 - 0x000118) align 8 MaxSize: 0x0118
struct FStringAppendDataflowNode : FDataflowNode
{ 
	FString                                            String1;                                                    // 0x00E8   (0x0010)  
	FString                                            String2;                                                    // 0x00F8   (0x0010)  
	FString                                            String;                                                     // 0x0108   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.HashStringDataflowNode
/// Size: 0x0100 (256 bytes) (0x0000E8 - 0x000100) align 8 MaxSize: 0x0100
struct FHashStringDataflowNode : FDataflowNode
{ 
	FString                                            String;                                                     // 0x00E8   (0x0010)  
	int32_t                                            Hash;                                                       // 0x00F8   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00FC   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.HashVectorDataflowNode
/// Size: 0x0108 (264 bytes) (0x0000E8 - 0x000108) align 8 MaxSize: 0x0108
struct FHashVectorDataflowNode : FDataflowNode
{ 
	FVector                                            Vector;                                                     // 0x00E8   (0x0018)  
	int32_t                                            Hash;                                                       // 0x0100   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0104   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.GetBoundingBoxesFromCollectionDataflowNode
/// Size: 0x01C8 (456 bytes) (0x0000E8 - 0x0001C8) align 8 MaxSize: 0x01C8
struct FGetBoundingBoxesFromCollectionDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	FDataflowTransformSelection                        TransformSelection;                                         // 0x0198   (0x0020)  
	TArray<FBox>                                       BoundingBoxes;                                              // 0x01B8   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.GetRootIndexFromCollectionDataflowNode
/// Size: 0x01A0 (416 bytes) (0x0000E8 - 0x0001A0) align 8 MaxSize: 0x01A0
struct FGetRootIndexFromCollectionDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	int32_t                                            RootIndex;                                                  // 0x0198   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x019C   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.GetCentroidsFromCollectionDataflowNode
/// Size: 0x01C8 (456 bytes) (0x0000E8 - 0x0001C8) align 8 MaxSize: 0x01C8
struct FGetCentroidsFromCollectionDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	FDataflowTransformSelection                        TransformSelection;                                         // 0x0198   (0x0020)  
	TArray<FVector>                                    Centroids;                                                  // 0x01B8   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.TransformCollectionDataflowNode
/// Size: 0x0228 (552 bytes) (0x0000E8 - 0x000228) align 8 MaxSize: 0x0228
struct FTransformCollectionDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	FVector                                            Translate;                                                  // 0x0198   (0x0018)  
	ERotationOrderEnum                                 RotationOrder;                                              // 0x01B0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x01B1   (0x0007)  MISSED
	FVector                                            Rotate;                                                     // 0x01B8   (0x0018)  
	FVector                                            Scale;                                                      // 0x01D0   (0x0018)  
	float                                              UniformScale;                                               // 0x01E8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x01EC   (0x0004)  MISSED
	FVector                                            RotatePivot;                                                // 0x01F0   (0x0018)  
	FVector                                            ScalePivot;                                                 // 0x0208   (0x0018)  
	bool                                               bInvertTransformation;                                      // 0x0220   (0x0001)  
	unsigned char                                      UnknownData02_7[0x7];                                       // 0x0221   (0x0007)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.BakeTransformsInCollectionDataflowNode
/// Size: 0x0198 (408 bytes) (0x0000E8 - 0x000198) align 8 MaxSize: 0x0198
struct FBakeTransformsInCollectionDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
};

/// Struct /Script/GeometryCollectionNodes.TransformMeshDataflowNode
/// Size: 0x0180 (384 bytes) (0x0000E8 - 0x000180) align 8 MaxSize: 0x0180
struct FTransformMeshDataflowNode : FDataflowNode
{ 
	class UDynamicMesh*                                Mesh;                                                       // 0x00E8   (0x0008)  
	FVector                                            Translate;                                                  // 0x00F0   (0x0018)  
	ERotationOrderEnum                                 RotationOrder;                                              // 0x0108   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0109   (0x0007)  MISSED
	FVector                                            Rotate;                                                     // 0x0110   (0x0018)  
	FVector                                            Scale;                                                      // 0x0128   (0x0018)  
	float                                              UniformScale;                                               // 0x0140   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0144   (0x0004)  MISSED
	FVector                                            RotatePivot;                                                // 0x0148   (0x0018)  
	FVector                                            ScalePivot;                                                 // 0x0160   (0x0018)  
	bool                                               bInvertTransformation;                                      // 0x0178   (0x0001)  
	unsigned char                                      UnknownData02_7[0x7];                                       // 0x0179   (0x0007)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.CompareIntDataflowNode
/// Size: 0x00F8 (248 bytes) (0x0000E8 - 0x0000F8) align 8 MaxSize: 0x00F8
struct FCompareIntDataflowNode : FDataflowNode
{ 
	ECompareOperationEnum                              Operation;                                                  // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00E9   (0x0003)  MISSED
	int32_t                                            IntA;                                                       // 0x00EC   (0x0004)  
	int32_t                                            IntB;                                                       // 0x00F0   (0x0004)  
	bool                                               Result;                                                     // 0x00F4   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x00F5   (0x0003)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.CompareFloatDataflowNode
/// Size: 0x00F8 (248 bytes) (0x0000E8 - 0x0000F8) align 8 MaxSize: 0x00F8
struct FCompareFloatDataflowNode : FDataflowNode
{ 
	ECompareOperationEnum                              Operation;                                                  // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00E9   (0x0003)  MISSED
	float                                              FloatA;                                                     // 0x00EC   (0x0004)  
	float                                              FloatB;                                                     // 0x00F0   (0x0004)  
	bool                                               Result;                                                     // 0x00F4   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x00F5   (0x0003)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.BranchMeshDataflowNode
/// Size: 0x0108 (264 bytes) (0x0000E8 - 0x000108) align 8 MaxSize: 0x0108
struct FBranchMeshDataflowNode : FDataflowNode
{ 
	class UDynamicMesh*                                MeshA;                                                      // 0x00E8   (0x0008)  
	class UDynamicMesh*                                MeshB;                                                      // 0x00F0   (0x0008)  
	bool                                               bCondition;                                                 // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00F9   (0x0007)  MISSED
	class UDynamicMesh*                                Mesh;                                                       // 0x0100   (0x0008)  
};

/// Struct /Script/GeometryCollectionNodes.BranchCollectionDataflowNode
/// Size: 0x0300 (768 bytes) (0x0000E8 - 0x000300) align 8 MaxSize: 0x0300
struct FBranchCollectionDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            TrueCollection;                                             // 0x00E8   (0x00B0)  
	FManagedArrayCollection                            FalseCollection;                                            // 0x0198   (0x00B0)  
	bool                                               bCondition;                                                 // 0x0248   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0249   (0x0007)  MISSED
	FManagedArrayCollection                            ChosenCollection;                                           // 0x0250   (0x00B0)  
};

/// Struct /Script/GeometryCollectionNodes.GetSchemaDataflowNode
/// Size: 0x01A8 (424 bytes) (0x0000E8 - 0x0001A8) align 8 MaxSize: 0x01A8
struct FGetSchemaDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	FString                                            String;                                                     // 0x0198   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.RemoveOnBreakDataflowNode
/// Size: 0x01D0 (464 bytes) (0x0000E8 - 0x0001D0) align 8 MaxSize: 0x01D0
struct FRemoveOnBreakDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	FDataflowTransformSelection                        TransformSelection;                                         // 0x0198   (0x0020)  
	bool                                               bEnabledRemoval;                                            // 0x01B8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x01B9   (0x0003)  MISSED
	FVector2f                                          PostBreakTimer;                                             // 0x01BC   (0x0008)  
	FVector2f                                          RemovalTimer;                                               // 0x01C4   (0x0008)  
	bool                                               bClusterCrumbling;                                          // 0x01CC   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x01CD   (0x0003)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.SetAnchorStateDataflowNode
/// Size: 0x01C0 (448 bytes) (0x0000E8 - 0x0001C0) align 8 MaxSize: 0x01C0
struct FSetAnchorStateDataflowNode : FDataflowNode
{ 
	EAnchorStateEnum                                   AnchorState;                                                // 0x00E8   (0x0001)  
	bool                                               bSetNotSelectedBonesToOppositeState;                        // 0x00E9   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x00EA   (0x0006)  MISSED
	FManagedArrayCollection                            Collection;                                                 // 0x00F0   (0x00B0)  
	FDataflowTransformSelection                        TransformSelection;                                         // 0x01A0   (0x0020)  
};

/// Struct /Script/GeometryCollectionNodes.ProximityDataflowNode
/// Size: 0x01A8 (424 bytes) (0x0000E8 - 0x0001A8) align 8 MaxSize: 0x01A8
struct FProximityDataflowNode : FDataflowNode
{ 
	EProximityMethodEnum                               ProximityMethod;                                            // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00E9   (0x0003)  MISSED
	float                                              DistanceThreshold;                                          // 0x00EC   (0x0004)  
	float                                              ContactThreshold;                                           // 0x00F0   (0x0004)  
	EProximityContactFilteringMethodEnum               FilterContactMethod;                                        // 0x00F4   (0x0001)  
	bool                                               bUseAsConnectionGraph;                                      // 0x00F5   (0x0001)  
	EConnectionContactAreaMethodEnum                   ContactAreaMethod;                                          // 0x00F6   (0x0001)  
	bool                                               bRecomputeConvexHulls;                                      // 0x00F7   (0x0001)  
	FManagedArrayCollection                            Collection;                                                 // 0x00F8   (0x00B0)  
};

/// Struct /Script/GeometryCollectionNodes.CollectionSetPivotDataflowNode
/// Size: 0x0200 (512 bytes) (0x0000E8 - 0x000200) align 16 MaxSize: 0x0200
struct FCollectionSetPivotDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0198   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x01A0   (0x0060)  
};

/// Struct /Script/GeometryCollectionNodes.AddCustomCollectionAttributeDataflowNode
/// Size: 0x01C8 (456 bytes) (0x0000E8 - 0x0001C8) align 8 MaxSize: 0x01C8
struct FAddCustomCollectionAttributeDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	EStandardGroupNameEnum                             GroupName;                                                  // 0x0198   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0199   (0x0007)  MISSED
	FString                                            CustomGroupName;                                            // 0x01A0   (0x0010)  
	FString                                            AttrName;                                                   // 0x01B0   (0x0010)  
	ECustomAttributeTypeEnum                           CustomAttributeType;                                        // 0x01C0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x01C1   (0x0003)  MISSED
	int32_t                                            NumElements;                                                // 0x01C4   (0x0004)  
};

/// Struct /Script/GeometryCollectionNodes.GetNumElementsInCollectionGroupDataflowNode
/// Size: 0x01B8 (440 bytes) (0x0000E8 - 0x0001B8) align 8 MaxSize: 0x01B8
struct FGetNumElementsInCollectionGroupDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	EStandardGroupNameEnum                             GroupName;                                                  // 0x0198   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0199   (0x0007)  MISSED
	FString                                            CustomGroupName;                                            // 0x01A0   (0x0010)  
	int32_t                                            NumElements;                                                // 0x01B0   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x01B4   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.GetCollectionAttributeDataTypedDataflowNode
/// Size: 0x0230 (560 bytes) (0x0000E8 - 0x000230) align 8 MaxSize: 0x0230
struct FGetCollectionAttributeDataTypedDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	EStandardGroupNameEnum                             GroupName;                                                  // 0x0198   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0199   (0x0007)  MISSED
	FString                                            CustomGroupName;                                            // 0x01A0   (0x0010)  
	FString                                            AttrName;                                                   // 0x01B0   (0x0010)  
	TArray<bool>                                       BoolAttributeData;                                          // 0x01C0   (0x0010)  
	TArray<float>                                      FloatAttributeData;                                         // 0x01D0   (0x0010)  
	TArray<double>                                     DoubleAttributeData;                                        // 0x01E0   (0x0010)  
	TArray<int32_t>                                    Int32AttributeData;                                         // 0x01F0   (0x0010)  
	TArray<FString>                                    StringAttributeData;                                        // 0x0200   (0x0010)  
	TArray<FVector3f>                                  Vector3fAttributeData;                                      // 0x0210   (0x0010)  
	TArray<FVector3d>                                  Vector3dAttributeData;                                      // 0x0220   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.SetCollectionAttributeDataTypedDataflowNode
/// Size: 0x0230 (560 bytes) (0x0000E8 - 0x000230) align 8 MaxSize: 0x0230
struct FSetCollectionAttributeDataTypedDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	EStandardGroupNameEnum                             GroupName;                                                  // 0x0198   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0199   (0x0007)  MISSED
	FString                                            CustomGroupName;                                            // 0x01A0   (0x0010)  
	FString                                            AttrName;                                                   // 0x01B0   (0x0010)  
	TArray<bool>                                       BoolAttributeData;                                          // 0x01C0   (0x0010)  
	TArray<float>                                      FloatAttributeData;                                         // 0x01D0   (0x0010)  
	TArray<double>                                     DoubleAttributeData;                                        // 0x01E0   (0x0010)  
	TArray<int32_t>                                    Int32AttributeData;                                         // 0x01F0   (0x0010)  
	TArray<FString>                                    StringAttributeData;                                        // 0x0200   (0x0010)  
	TArray<FVector3f>                                  Vector3fAttributeData;                                      // 0x0210   (0x0010)  
	TArray<FVector3d>                                  Vector3dAttributeData;                                      // 0x0220   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.SetVertexColorInCollectionFromVertexSelectionDataflowNode
/// Size: 0x01D8 (472 bytes) (0x0000E8 - 0x0001D8) align 8 MaxSize: 0x01D8
struct FSetVertexColorInCollectionFromVertexSelectionDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	FDataflowVertexSelection                           VertexSelection;                                            // 0x0198   (0x0020)  
	FLinearColor                                       SelectedColor;                                              // 0x01B8   (0x0010)  
	FLinearColor                                       NonSelectedColor;                                           // 0x01C8   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.SelectionToVertexListDataflowNode
/// Size: 0x0118 (280 bytes) (0x0000E8 - 0x000118) align 8 MaxSize: 0x0118
struct FSelectionToVertexListDataflowNode : FDataflowNode
{ 
	FDataflowVertexSelection                           VertexSelection;                                            // 0x00E8   (0x0020)  
	TArray<int32_t>                                    VertexList;                                                 // 0x0108   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.SetVertexColorInCollectionFromFloatArrayDataflowNode
/// Size: 0x01B0 (432 bytes) (0x0000E8 - 0x0001B0) align 8 MaxSize: 0x01B0
struct FSetVertexColorInCollectionFromFloatArrayDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	TArray<float>                                      FloatArray;                                                 // 0x0198   (0x0010)  
	float                                              Scale;                                                      // 0x01A8   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x01AC   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.MultiplyTransformDataflowNode
/// Size: 0x0210 (528 bytes) (0x0000E8 - 0x000210) align 16 MaxSize: 0x0210
struct FMultiplyTransformDataflowNode : FDataflowNode
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x00E8   (0x0008)  MISSED
	FTransform                                         InLeftTransform;                                            // 0x00F0   (0x0060)  
	FTransform                                         InRightTransform;                                           // 0x0150   (0x0060)  
	FTransform                                         OutTransform;                                               // 0x01B0   (0x0060)  
};

/// Struct /Script/GeometryCollectionNodes.InvertTransformDataflowNode
/// Size: 0x01B0 (432 bytes) (0x0000E8 - 0x0001B0) align 16 MaxSize: 0x01B0
struct FInvertTransformDataflowNode : FDataflowNode
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x00E8   (0x0008)  MISSED
	FTransform                                         InTransform;                                                // 0x00F0   (0x0060)  
	FTransform                                         OutTransform;                                               // 0x0150   (0x0060)  
};

/// Struct /Script/GeometryCollectionNodes.BranchFloatDataflowNode
/// Size: 0x00F8 (248 bytes) (0x0000E8 - 0x0000F8) align 8 MaxSize: 0x00F8
struct FBranchFloatDataflowNode : FDataflowNode
{ 
	float                                              A;                                                          // 0x00E8   (0x0004)  
	float                                              B;                                                          // 0x00EC   (0x0004)  
	bool                                               bCondition;                                                 // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00F1   (0x0003)  MISSED
	float                                              ReturnValue;                                                // 0x00F4   (0x0004)  
};

/// Struct /Script/GeometryCollectionNodes.BranchIntDataflowNode
/// Size: 0x00F8 (248 bytes) (0x0000E8 - 0x0000F8) align 8 MaxSize: 0x00F8
struct FBranchIntDataflowNode : FDataflowNode
{ 
	int32_t                                            A;                                                          // 0x00E8   (0x0004)  
	int32_t                                            B;                                                          // 0x00EC   (0x0004)  
	bool                                               bCondition;                                                 // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00F1   (0x0003)  MISSED
	int32_t                                            ReturnValue;                                                // 0x00F4   (0x0004)  
};

/// Struct /Script/GeometryCollectionNodes.GetFloatOverrideFromAssetDataflowNode
/// Size: 0x0110 (272 bytes) (0x000108 - 0x000110) align 8 MaxSize: 0x0110
struct FGetFloatOverrideFromAssetDataflowNode : FDataflowOverrideNode
{ 
	float                                              FLOAT;                                                      // 0x0108   (0x0004)  
	float                                              FloatDefault;                                               // 0x010C   (0x0004)  
};

/// Struct /Script/GeometryCollectionNodes.GetIntOverrideFromAssetDataflowNode
/// Size: 0x0110 (272 bytes) (0x000108 - 0x000110) align 8 MaxSize: 0x0110
struct FGetIntOverrideFromAssetDataflowNode : FDataflowOverrideNode
{ 
	int32_t                                            Int;                                                        // 0x0108   (0x0004)  
	int32_t                                            IntDefault;                                                 // 0x010C   (0x0004)  
};

/// Struct /Script/GeometryCollectionNodes.GetBoolOverrideFromAssetDataflowNode
/// Size: 0x0110 (272 bytes) (0x000108 - 0x000110) align 8 MaxSize: 0x0110
struct FGetBoolOverrideFromAssetDataflowNode : FDataflowOverrideNode
{ 
	bool                                               bool0;                                                      // 0x0108   (0x0001)  
	bool                                               BoolDefault;                                                // 0x0109   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x010A   (0x0006)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.GetStringOverrideFromAssetDataflowNode
/// Size: 0x0128 (296 bytes) (0x000108 - 0x000128) align 8 MaxSize: 0x0128
struct FGetStringOverrideFromAssetDataflowNode : FDataflowOverrideNode
{ 
	FString                                            String;                                                     // 0x0108   (0x0010)  
	FString                                            StringDefault;                                              // 0x0118   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.CollectionTransformSelectionAllDataflowNode
/// Size: 0x01B8 (440 bytes) (0x0000E8 - 0x0001B8) align 8 MaxSize: 0x01B8
struct FCollectionTransformSelectionAllDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	FDataflowTransformSelection                        TransformSelection;                                         // 0x0198   (0x0020)  
};

/// Struct /Script/GeometryCollectionNodes.CollectionTransformSelectionSetOperationDataflowNode
/// Size: 0x0150 (336 bytes) (0x0000E8 - 0x000150) align 8 MaxSize: 0x0150
struct FCollectionTransformSelectionSetOperationDataflowNode : FDataflowNode
{ 
	ESetOperationEnum                                  Operation;                                                  // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00E9   (0x0007)  MISSED
	FDataflowTransformSelection                        TransformSelectionA;                                        // 0x00F0   (0x0020)  
	FDataflowTransformSelection                        TransformSelectionB;                                        // 0x0110   (0x0020)  
	FDataflowTransformSelection                        TransformSelection;                                         // 0x0130   (0x0020)  
};

/// Struct /Script/GeometryCollectionNodes.CollectionTransformSelectionInfoDataflowNode
/// Size: 0x01C8 (456 bytes) (0x0000E8 - 0x0001C8) align 8 MaxSize: 0x01C8
struct FCollectionTransformSelectionInfoDataflowNode : FDataflowNode
{ 
	FDataflowTransformSelection                        TransformSelection;                                         // 0x00E8   (0x0020)  
	FManagedArrayCollection                            Collection;                                                 // 0x0108   (0x00B0)  
	FString                                            String;                                                     // 0x01B8   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.CollectionTransformSelectionNoneDataflowNode
/// Size: 0x01B8 (440 bytes) (0x0000E8 - 0x0001B8) align 8 MaxSize: 0x01B8
struct FCollectionTransformSelectionNoneDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	FDataflowTransformSelection                        TransformSelection;                                         // 0x0198   (0x0020)  
};

/// Struct /Script/GeometryCollectionNodes.CollectionTransformSelectionInvertDataflowNode
/// Size: 0x0108 (264 bytes) (0x0000E8 - 0x000108) align 8 MaxSize: 0x0108
struct FCollectionTransformSelectionInvertDataflowNode : FDataflowNode
{ 
	FDataflowTransformSelection                        TransformSelection;                                         // 0x00E8   (0x0020)  
};

/// Struct /Script/GeometryCollectionNodes.CollectionTransformSelectionRandomDataflowNode
/// Size: 0x01C8 (456 bytes) (0x0000E8 - 0x0001C8) align 8 MaxSize: 0x01C8
struct FCollectionTransformSelectionRandomDataflowNode : FDataflowNode
{ 
	bool                                               bDeterministic;                                             // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00E9   (0x0003)  MISSED
	float                                              RandomSeed;                                                 // 0x00EC   (0x0004)  
	float                                              RandomThreshold;                                            // 0x00F0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00F4   (0x0004)  MISSED
	FManagedArrayCollection                            Collection;                                                 // 0x00F8   (0x00B0)  
	FDataflowTransformSelection                        TransformSelection;                                         // 0x01A8   (0x0020)  
};

/// Struct /Script/GeometryCollectionNodes.CollectionTransformSelectionRootDataflowNode
/// Size: 0x01B8 (440 bytes) (0x0000E8 - 0x0001B8) align 8 MaxSize: 0x01B8
struct FCollectionTransformSelectionRootDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	FDataflowTransformSelection                        TransformSelection;                                         // 0x0198   (0x0020)  
};

/// Struct /Script/GeometryCollectionNodes.CollectionTransformSelectionCustomDataflowNode
/// Size: 0x01C8 (456 bytes) (0x0000E8 - 0x0001C8) align 8 MaxSize: 0x01C8
struct FCollectionTransformSelectionCustomDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	FString                                            BoneIndicies;                                               // 0x0198   (0x0010)  
	FDataflowTransformSelection                        TransformSelection;                                         // 0x01A8   (0x0020)  
};

/// Struct /Script/GeometryCollectionNodes.CollectionTransformSelectionFromIndexArrayDataflowNode
/// Size: 0x01C8 (456 bytes) (0x0000E8 - 0x0001C8) align 8 MaxSize: 0x01C8
struct FCollectionTransformSelectionFromIndexArrayDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	TArray<int32_t>                                    BoneIndices;                                                // 0x0198   (0x0010)  
	FDataflowTransformSelection                        TransformSelection;                                         // 0x01A8   (0x0020)  
};

/// Struct /Script/GeometryCollectionNodes.CollectionTransformSelectionParentDataflowNode
/// Size: 0x01B8 (440 bytes) (0x0000E8 - 0x0001B8) align 8 MaxSize: 0x01B8
struct FCollectionTransformSelectionParentDataflowNode : FDataflowNode
{ 
	FDataflowTransformSelection                        TransformSelection;                                         // 0x00E8   (0x0020)  
	FManagedArrayCollection                            Collection;                                                 // 0x0108   (0x00B0)  
};

/// Struct /Script/GeometryCollectionNodes.CollectionTransformSelectionByPercentageDataflowNode
/// Size: 0x0118 (280 bytes) (0x0000E8 - 0x000118) align 8 MaxSize: 0x0118
struct FCollectionTransformSelectionByPercentageDataflowNode : FDataflowNode
{ 
	FDataflowTransformSelection                        TransformSelection;                                         // 0x00E8   (0x0020)  
	int32_t                                            Percentage;                                                 // 0x0108   (0x0004)  
	bool                                               bDeterministic;                                             // 0x010C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x010D   (0x0003)  MISSED
	float                                              RandomSeed;                                                 // 0x0110   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0114   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.CollectionTransformSelectionChildrenDataflowNode
/// Size: 0x01B8 (440 bytes) (0x0000E8 - 0x0001B8) align 8 MaxSize: 0x01B8
struct FCollectionTransformSelectionChildrenDataflowNode : FDataflowNode
{ 
	FDataflowTransformSelection                        TransformSelection;                                         // 0x00E8   (0x0020)  
	FManagedArrayCollection                            Collection;                                                 // 0x0108   (0x00B0)  
};

/// Struct /Script/GeometryCollectionNodes.CollectionTransformSelectionSiblingsDataflowNode
/// Size: 0x01B8 (440 bytes) (0x0000E8 - 0x0001B8) align 8 MaxSize: 0x01B8
struct FCollectionTransformSelectionSiblingsDataflowNode : FDataflowNode
{ 
	FDataflowTransformSelection                        TransformSelection;                                         // 0x00E8   (0x0020)  
	FManagedArrayCollection                            Collection;                                                 // 0x0108   (0x00B0)  
};

/// Struct /Script/GeometryCollectionNodes.CollectionTransformSelectionLevelDataflowNode
/// Size: 0x01B8 (440 bytes) (0x0000E8 - 0x0001B8) align 8 MaxSize: 0x01B8
struct FCollectionTransformSelectionLevelDataflowNode : FDataflowNode
{ 
	FDataflowTransformSelection                        TransformSelection;                                         // 0x00E8   (0x0020)  
	FManagedArrayCollection                            Collection;                                                 // 0x0108   (0x00B0)  
};

/// Struct /Script/GeometryCollectionNodes.CollectionTransformSelectionTargetLevelDataflowNode
/// Size: 0x01C0 (448 bytes) (0x0000E8 - 0x0001C0) align 8 MaxSize: 0x01C0
struct FCollectionTransformSelectionTargetLevelDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	int32_t                                            targetLevel;                                                // 0x0198   (0x0004)  
	bool                                               bSkipEmbedded;                                              // 0x019C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x019D   (0x0003)  MISSED
	FDataflowTransformSelection                        TransformSelection;                                         // 0x01A0   (0x0020)  
};

/// Struct /Script/GeometryCollectionNodes.CollectionTransformSelectionContactDataflowNode
/// Size: 0x01B8 (440 bytes) (0x0000E8 - 0x0001B8) align 8 MaxSize: 0x01B8
struct FCollectionTransformSelectionContactDataflowNode : FDataflowNode
{ 
	FDataflowTransformSelection                        TransformSelection;                                         // 0x00E8   (0x0020)  
	FManagedArrayCollection                            Collection;                                                 // 0x0108   (0x00B0)  
};

/// Struct /Script/GeometryCollectionNodes.CollectionTransformSelectionLeafDataflowNode
/// Size: 0x01B8 (440 bytes) (0x0000E8 - 0x0001B8) align 8 MaxSize: 0x01B8
struct FCollectionTransformSelectionLeafDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	FDataflowTransformSelection                        TransformSelection;                                         // 0x0198   (0x0020)  
};

/// Struct /Script/GeometryCollectionNodes.CollectionTransformSelectionClusterDataflowNode
/// Size: 0x01B8 (440 bytes) (0x0000E8 - 0x0001B8) align 8 MaxSize: 0x01B8
struct FCollectionTransformSelectionClusterDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	FDataflowTransformSelection                        TransformSelection;                                         // 0x0198   (0x0020)  
};

/// Struct /Script/GeometryCollectionNodes.SelectFloatArrayIndicesInRangeDataflowNode
/// Size: 0x0118 (280 bytes) (0x0000E8 - 0x000118) align 8 MaxSize: 0x0118
struct FSelectFloatArrayIndicesInRangeDataflowNode : FDataflowNode
{ 
	TArray<float>                                      Values;                                                     // 0x00E8   (0x0010)  
	float                                              Min;                                                        // 0x00F8   (0x0004)  
	float                                              Max;                                                        // 0x00FC   (0x0004)  
	ERangeSettingEnum                                  RangeSetting;                                               // 0x0100   (0x0001)  
	bool                                               bInclusive;                                                 // 0x0101   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0102   (0x0006)  MISSED
	TArray<int32_t>                                    Indices;                                                    // 0x0108   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.CollectionTransformSelectionBySizeDataflowNode
/// Size: 0x01C8 (456 bytes) (0x0000E8 - 0x0001C8) align 8 MaxSize: 0x01C8
struct FCollectionTransformSelectionBySizeDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	float                                              SizeMin;                                                    // 0x0198   (0x0004)  
	float                                              SizeMax;                                                    // 0x019C   (0x0004)  
	ERangeSettingEnum                                  RangeSetting;                                               // 0x01A0   (0x0001)  
	bool                                               bInclusive;                                                 // 0x01A1   (0x0001)  
	bool                                               bUseRelativeSize;                                           // 0x01A2   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x01A3   (0x0005)  MISSED
	FDataflowTransformSelection                        TransformSelection;                                         // 0x01A8   (0x0020)  
};

/// Struct /Script/GeometryCollectionNodes.CollectionTransformSelectionByVolumeDataflowNode
/// Size: 0x01C8 (456 bytes) (0x0000E8 - 0x0001C8) align 8 MaxSize: 0x01C8
struct FCollectionTransformSelectionByVolumeDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	float                                              VolumeMin;                                                  // 0x0198   (0x0004)  
	float                                              VolumeMax;                                                  // 0x019C   (0x0004)  
	ERangeSettingEnum                                  RangeSetting;                                               // 0x01A0   (0x0001)  
	bool                                               bInclusive;                                                 // 0x01A1   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x01A2   (0x0006)  MISSED
	FDataflowTransformSelection                        TransformSelection;                                         // 0x01A8   (0x0020)  
};

/// Struct /Script/GeometryCollectionNodes.CollectionTransformSelectionInBoxDataflowNode
/// Size: 0x0260 (608 bytes) (0x0000E8 - 0x000260) align 16 MaxSize: 0x0260
struct FCollectionTransformSelectionInBoxDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	FBox                                               Box;                                                        // 0x0198   (0x0038)  
	FTransform                                         Transform;                                                  // 0x01D0   (0x0060)  
	ESelectSubjectTypeEnum                             Type;                                                       // 0x0230   (0x0001)  
	bool                                               bAllVerticesMustContainedInBox;                             // 0x0231   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0232   (0x0006)  MISSED
	FDataflowTransformSelection                        TransformSelection;                                         // 0x0238   (0x0020)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0258   (0x0008)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.CollectionTransformSelectionInSphereDataflowNode
/// Size: 0x0250 (592 bytes) (0x0000E8 - 0x000250) align 16 MaxSize: 0x0250
struct FCollectionTransformSelectionInSphereDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	FSphere                                            Sphere;                                                     // 0x0198   (0x0020)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x01B8   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x01C0   (0x0060)  
	ESelectSubjectTypeEnum                             Type;                                                       // 0x0220   (0x0001)  
	bool                                               bAllVerticesMustContainedInSphere;                          // 0x0221   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x0222   (0x0006)  MISSED
	FDataflowTransformSelection                        TransformSelection;                                         // 0x0228   (0x0020)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x0248   (0x0008)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.CollectionTransformSelectionByFloatAttrDataflowNode
/// Size: 0x01E8 (488 bytes) (0x0000E8 - 0x0001E8) align 8 MaxSize: 0x01E8
struct FCollectionTransformSelectionByFloatAttrDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	FString                                            GroupName;                                                  // 0x0198   (0x0010)  
	FString                                            AttrName;                                                   // 0x01A8   (0x0010)  
	float                                              Min;                                                        // 0x01B8   (0x0004)  
	float                                              Max;                                                        // 0x01BC   (0x0004)  
	ERangeSettingEnum                                  RangeSetting;                                               // 0x01C0   (0x0001)  
	bool                                               bInclusive;                                                 // 0x01C1   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x01C2   (0x0006)  MISSED
	FDataflowTransformSelection                        TransformSelection;                                         // 0x01C8   (0x0020)  
};

/// Struct /Script/GeometryCollectionNodes.CollectionTransformSelectionByIntAttrDataflowNode
/// Size: 0x01E8 (488 bytes) (0x0000E8 - 0x0001E8) align 8 MaxSize: 0x01E8
struct FCollectionTransformSelectionByIntAttrDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	FString                                            GroupName;                                                  // 0x0198   (0x0010)  
	FString                                            AttrName;                                                   // 0x01A8   (0x0010)  
	int32_t                                            Min;                                                        // 0x01B8   (0x0004)  
	int32_t                                            Max;                                                        // 0x01BC   (0x0004)  
	ERangeSettingEnum                                  RangeSetting;                                               // 0x01C0   (0x0001)  
	bool                                               bInclusive;                                                 // 0x01C1   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x01C2   (0x0006)  MISSED
	FDataflowTransformSelection                        TransformSelection;                                         // 0x01C8   (0x0020)  
};

/// Struct /Script/GeometryCollectionNodes.CollectionVertexSelectionCustomDataflowNode
/// Size: 0x01C8 (456 bytes) (0x0000E8 - 0x0001C8) align 8 MaxSize: 0x01C8
struct FCollectionVertexSelectionCustomDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	FString                                            VertexIndicies;                                             // 0x0198   (0x0010)  
	FDataflowVertexSelection                           VertexSelection;                                            // 0x01A8   (0x0020)  
};

/// Struct /Script/GeometryCollectionNodes.CollectionFaceSelectionCustomDataflowNode
/// Size: 0x01C8 (456 bytes) (0x0000E8 - 0x0001C8) align 8 MaxSize: 0x01C8
struct FCollectionFaceSelectionCustomDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	FString                                            FaceIndicies;                                               // 0x0198   (0x0010)  
	FDataflowFaceSelection                             FaceSelection;                                              // 0x01A8   (0x0020)  
};

/// Struct /Script/GeometryCollectionNodes.CollectionSelectionConvertDataflowNode
/// Size: 0x0200 (512 bytes) (0x0000E8 - 0x000200) align 8 MaxSize: 0x0200
struct FCollectionSelectionConvertDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	FDataflowTransformSelection                        TransformSelection;                                         // 0x0198   (0x0020)  
	FDataflowFaceSelection                             FaceSelection;                                              // 0x01B8   (0x0020)  
	FDataflowVertexSelection                           VertexSelection;                                            // 0x01D8   (0x0020)  
	bool                                               bAllElementsMustBeSelected;                                 // 0x01F8   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x01F9   (0x0007)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.CollectionFaceSelectionInvertDataflowNode
/// Size: 0x0108 (264 bytes) (0x0000E8 - 0x000108) align 8 MaxSize: 0x0108
struct FCollectionFaceSelectionInvertDataflowNode : FDataflowNode
{ 
	FDataflowFaceSelection                             FaceSelection;                                              // 0x00E8   (0x0020)  
};

/// Struct /Script/GeometryCollectionNodes.CollectionVertexSelectionByPercentageDataflowNode
/// Size: 0x0118 (280 bytes) (0x0000E8 - 0x000118) align 8 MaxSize: 0x0118
struct FCollectionVertexSelectionByPercentageDataflowNode : FDataflowNode
{ 
	FDataflowVertexSelection                           VertexSelection;                                            // 0x00E8   (0x0020)  
	int32_t                                            Percentage;                                                 // 0x0108   (0x0004)  
	bool                                               bDeterministic;                                             // 0x010C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x010D   (0x0003)  MISSED
	float                                              RandomSeed;                                                 // 0x0110   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0114   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionNodes.CollectionVertexSelectionSetOperationDataflowNode
/// Size: 0x0150 (336 bytes) (0x0000E8 - 0x000150) align 8 MaxSize: 0x0150
struct FCollectionVertexSelectionSetOperationDataflowNode : FDataflowNode
{ 
	ESetOperationEnum                                  Operation;                                                  // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00E9   (0x0007)  MISSED
	FDataflowVertexSelection                           VertexSelectionA;                                           // 0x00F0   (0x0020)  
	FDataflowVertexSelection                           VertexSelectionB;                                           // 0x0110   (0x0020)  
	FDataflowVertexSelection                           VertexSelection;                                            // 0x0130   (0x0020)  
};

/// Struct /Script/GeometryCollectionNodes.GeometryCollectionVertexScalarToVertexIndicesNode
/// Size: 0x01C0 (448 bytes) (0x0000E8 - 0x0001C0) align 8 MaxSize: 0x01C0
struct FGeometryCollectionVertexScalarToVertexIndicesNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	FString                                            VertexAttributeName;                                        // 0x0198   (0x0010)  
	float                                              SelectionThreshold;                                         // 0x01A8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x01AC   (0x0004)  MISSED
	TArray<int32_t>                                    Indices;                                                    // 0x01B0   (0x0010)  
};

/// Struct /Script/GeometryCollectionNodes.TransformCollectionAttributeDataflowNode
/// Size: 0x0280 (640 bytes) (0x0000E8 - 0x000280) align 16 MaxSize: 0x0280
struct FTransformCollectionAttributeDataflowNode : FDataflowNode
{ 
	FManagedArrayCollection                            Collection;                                                 // 0x00E8   (0x00B0)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0198   (0x0008)  MISSED
	FTransform                                         TransformIn;                                                // 0x01A0   (0x0060)  
	FTransform                                         LocalTransform;                                             // 0x0200   (0x0060)  
	FString                                            GroupName;                                                  // 0x0260   (0x0010)  
	FString                                            AttributeName;                                              // 0x0270   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(FGetFloatArrayElementDataflowNode) == 0x0108); // 264 bytes (0x0000E8 - 0x000108)
static_assert(sizeof(FFloatArrayToIntArrayDataflowNode) == 0x0110); // 272 bytes (0x0000E8 - 0x000110)
static_assert(sizeof(FGetArrayElementDataflowNode) == 0x0118); // 280 bytes (0x0000E8 - 0x000118)
static_assert(sizeof(FGetNumArrayElementsDataflowNode) == 0x0130); // 304 bytes (0x0000E8 - 0x000130)
static_assert(sizeof(FBoolArrayToFaceSelectionDataflowNode) == 0x0118); // 280 bytes (0x0000E8 - 0x000118)
static_assert(sizeof(FFloatArrayToVertexSelectionDataflowNode) == 0x0120); // 288 bytes (0x0000E8 - 0x000120)
static_assert(sizeof(FFloatArrayNormalizeDataflowNode) == 0x0130); // 304 bytes (0x0000E8 - 0x000130)
static_assert(sizeof(FVectorArrayNormalizeDataflowNode) == 0x0130); // 304 bytes (0x0000E8 - 0x000130)
static_assert(sizeof(FUnionIntArraysDataflowNode) == 0x0118); // 280 bytes (0x0000E8 - 0x000118)
static_assert(sizeof(FRemoveFloatArrayElementDataflowNode) == 0x0100); // 256 bytes (0x0000E8 - 0x000100)
static_assert(sizeof(FFloatArrayComputeStatisticsDataflowNode) == 0x0130); // 304 bytes (0x0000E8 - 0x000130)
static_assert(sizeof(FGeometryCollectionTerminalDataflowNode) == 0x01B8); // 440 bytes (0x0000E8 - 0x0001B8)
static_assert(sizeof(FGetGeometryCollectionAssetDataflowNode) == 0x00F0); // 240 bytes (0x0000E8 - 0x0000F0)
static_assert(sizeof(FGetGeometryCollectionSourcesDataflowNode) == 0x0100); // 256 bytes (0x0000E8 - 0x000100)
static_assert(sizeof(FCreateGeometryCollectionFromSourcesDataflowNode) == 0x01C8); // 456 bytes (0x0000E8 - 0x0001C8)
static_assert(sizeof(FStaticMeshToCollectionDataflowNode) == 0x01C8); // 456 bytes (0x0000E8 - 0x0001C8)
static_assert(sizeof(FRadialFalloffFieldDataflowNode) == 0x01B0); // 432 bytes (0x0000E8 - 0x0001B0)
static_assert(sizeof(FBoxFalloffFieldDataflowNode) == 0x0210); // 528 bytes (0x0000E8 - 0x000210)
static_assert(sizeof(FPlaneFalloffFieldDataflowNode) == 0x01C8); // 456 bytes (0x0000E8 - 0x0001C8)
static_assert(sizeof(FRadialIntMaskFieldDataflowNode) == 0x0188); // 392 bytes (0x0000E8 - 0x000188)
static_assert(sizeof(FUniformScalarFieldDataflowNode) == 0x0148); // 328 bytes (0x0000E8 - 0x000148)
static_assert(sizeof(FUniformVectorFieldDataflowNode) == 0x0160); // 352 bytes (0x0000E8 - 0x000160)
static_assert(sizeof(FRadialVectorFieldDataflowNode) == 0x0160); // 352 bytes (0x0000E8 - 0x000160)
static_assert(sizeof(FRandomVectorFieldDataflowNode) == 0x0148); // 328 bytes (0x0000E8 - 0x000148)
static_assert(sizeof(FNoiseFieldDataflowNode) == 0x01B0); // 432 bytes (0x0000E8 - 0x0001B0)
static_assert(sizeof(FUniformIntegerFieldDataflowNode) == 0x0148); // 328 bytes (0x0000E8 - 0x000148)
static_assert(sizeof(FWaveScalarFieldDataflowNode) == 0x0188); // 392 bytes (0x0000E8 - 0x000188)
static_assert(sizeof(FSumScalarFieldDataflowNode) == 0x0150); // 336 bytes (0x0000E8 - 0x000150)
static_assert(sizeof(FSumVectorFieldDataflowNode) == 0x0170); // 368 bytes (0x0000E8 - 0x000170)
static_assert(sizeof(FFieldMakeDenseFloatArrayDataflowNode) == 0x0120); // 288 bytes (0x0000E8 - 0x000120)
static_assert(sizeof(FAddMaterialToCollectionDataflowNode) == 0x01E0); // 480 bytes (0x0000E8 - 0x0001E0)
static_assert(sizeof(FReAssignMaterialInCollectionDataflowNode) == 0x01D8); // 472 bytes (0x0000E8 - 0x0001D8)
static_assert(sizeof(FMaterialsInfoDataflowNode) == 0x0108); // 264 bytes (0x0000E8 - 0x000108)
static_assert(sizeof(FGetMaterialFromMaterialsArrayDataflowNode) == 0x0108); // 264 bytes (0x0000E8 - 0x000108)
static_assert(sizeof(FSetMaterialInMaterialsArrayDataflowNode) == 0x0108); // 264 bytes (0x0000E8 - 0x000108)
static_assert(sizeof(FMakeMaterialDataflowNode) == 0x00F8); // 248 bytes (0x0000E8 - 0x0000F8)
static_assert(sizeof(FMakeMaterialsArrayDataflowNode) == 0x00F8); // 248 bytes (0x0000E8 - 0x0000F8)
static_assert(sizeof(FCloseGeometryOnCollectionDataflowNode) == 0x0198); // 408 bytes (0x0000E8 - 0x000198)
static_assert(sizeof(FSkeletonToCollectionDataflowNode) == 0x01A0); // 416 bytes (0x0000E8 - 0x0001A0)
static_assert(sizeof(FDataflowConvexDecompositionSettings) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FMakeDataflowConvexDecompositionSettingsNode) == 0x0118); // 280 bytes (0x0000E8 - 0x000118)
static_assert(sizeof(FCreateLeafConvexHullsDataflowNode) == 0x01E8); // 488 bytes (0x0000E8 - 0x0001E8)
static_assert(sizeof(FSimplifyConvexHullsDataflowNode) == 0x01D0); // 464 bytes (0x0000E8 - 0x0001D0)
static_assert(sizeof(FCreateNonOverlappingConvexHullsDataflowNode) == 0x01B0); // 432 bytes (0x0000E8 - 0x0001B0)
static_assert(sizeof(FDataflowSphereCovering) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FGenerateClusterConvexHullsFromLeafHullsDataflowNode) == 0x0210); // 528 bytes (0x0000E8 - 0x000210)
static_assert(sizeof(FGenerateClusterConvexHullsFromChildrenHullsDataflowNode) == 0x0210); // 528 bytes (0x0000E8 - 0x000210)
static_assert(sizeof(FClearConvexHullsDataflowNode) == 0x01B8); // 440 bytes (0x0000E8 - 0x0001B8)
static_assert(sizeof(FMergeConvexHullsDataflowNode) == 0x0210); // 528 bytes (0x0000E8 - 0x000210)
static_assert(sizeof(FUpdateVolumeAttributesDataflowNode) == 0x0198); // 408 bytes (0x0000E8 - 0x000198)
static_assert(sizeof(FGetConvexHullVolumeDataflowNode) == 0x01C0); // 448 bytes (0x0000E8 - 0x0001C0)
static_assert(sizeof(FAutoClusterDataflowNode) == 0x01E8); // 488 bytes (0x0000E8 - 0x0001E8)
static_assert(sizeof(FClusterFlattenDataflowNode) == 0x01B8); // 440 bytes (0x0000E8 - 0x0001B8)
static_assert(sizeof(FClusterUnclusterDataflowNode) == 0x01B8); // 440 bytes (0x0000E8 - 0x0001B8)
static_assert(sizeof(FClusterDataflowNode) == 0x01B8); // 440 bytes (0x0000E8 - 0x0001B8)
static_assert(sizeof(FClusterMergeToNeighborsDataflowNode) == 0x01C8); // 456 bytes (0x0000E8 - 0x0001C8)
static_assert(sizeof(FClusterMergeDataflowNode) == 0x01B8); // 440 bytes (0x0000E8 - 0x0001B8)
static_assert(sizeof(FClusterIsolatedRootsDataflowNode) == 0x0198); // 408 bytes (0x0000E8 - 0x000198)
static_assert(sizeof(FClusterMagnetDataflowNode) == 0x01C0); // 448 bytes (0x0000E8 - 0x0001C0)
static_assert(sizeof(FVectorToStringDataflowNode) == 0x0110); // 272 bytes (0x0000E8 - 0x000110)
static_assert(sizeof(FFloatToStringDataflowNode) == 0x0100); // 256 bytes (0x0000E8 - 0x000100)
static_assert(sizeof(FIntToStringDataflowNode) == 0x0100); // 256 bytes (0x0000E8 - 0x000100)
static_assert(sizeof(FBoolToStringDataflowNode) == 0x0100); // 256 bytes (0x0000E8 - 0x000100)
static_assert(sizeof(FIntToFloatDataflowNode) == 0x00F0); // 240 bytes (0x0000E8 - 0x0000F0)
static_assert(sizeof(FIntToDoubleDataflowNode) == 0x00F8); // 248 bytes (0x0000E8 - 0x0000F8)
static_assert(sizeof(FFloatToDoubleDataflowNode) == 0x00F8); // 248 bytes (0x0000E8 - 0x0000F8)
static_assert(sizeof(FFloatToIntDataflowNode) == 0x00F8); // 248 bytes (0x0000E8 - 0x0000F8)
static_assert(sizeof(FIntToBoolDataflowNode) == 0x00F0); // 240 bytes (0x0000E8 - 0x0000F0)
static_assert(sizeof(FBoolToIntDataflowNode) == 0x00F0); // 240 bytes (0x0000E8 - 0x0000F0)
static_assert(sizeof(FConvexHullToMeshDataflowNode) == 0x01C0); // 448 bytes (0x0000E8 - 0x0001C0)
static_assert(sizeof(FSphereCoveringToMeshDataflowNode) == 0x0118); // 280 bytes (0x0000E8 - 0x000118)
static_assert(sizeof(FSphereCoveringCountSpheresNode) == 0x0110); // 272 bytes (0x0000E8 - 0x000110)
static_assert(sizeof(FMeshToOBJStringDebugDataflowNode) == 0x0108); // 264 bytes (0x0000E8 - 0x000108)
static_assert(sizeof(FWriteStringToFile) == 0x0108); // 264 bytes (0x0000E8 - 0x000108)
static_assert(sizeof(FPruneInCollectionDataflowNode) == 0x01B8); // 440 bytes (0x0000E8 - 0x0001B8)
static_assert(sizeof(FSetVisibilityInCollectionDataflowNode) == 0x01E0); // 480 bytes (0x0000E8 - 0x0001E0)
static_assert(sizeof(FMergeInCollectionDataflowNode) == 0x01B8); // 440 bytes (0x0000E8 - 0x0001B8)
static_assert(sizeof(FUniformScatterPointsDataflowNode) == 0x0140); // 320 bytes (0x0000E8 - 0x000140)
static_assert(sizeof(FRadialScatterPointsDataflowNode) == 0x0140); // 320 bytes (0x0000E8 - 0x000140)
static_assert(sizeof(FVoronoiFractureDataflowNode) == 0x01F8); // 504 bytes (0x0000E8 - 0x0001F8)
static_assert(sizeof(FPlaneCutterDataflowNode) == 0x0220); // 544 bytes (0x0000E8 - 0x000220)
static_assert(sizeof(FExplodedViewDataflowNode) == 0x01B8); // 440 bytes (0x0000E8 - 0x0001B8)
static_assert(sizeof(FMakeLiteralStringDataflowNode) == 0x0108); // 264 bytes (0x0000E8 - 0x000108)
static_assert(sizeof(FMakePointsDataflowNode) == 0x0108); // 264 bytes (0x0000E8 - 0x000108)
static_assert(sizeof(FMakeBoxDataflowNode) == 0x0188); // 392 bytes (0x0000E8 - 0x000188)
static_assert(sizeof(FMakeSphereDataflowNode) == 0x0128); // 296 bytes (0x0000E8 - 0x000128)
static_assert(sizeof(FMakeLiteralFloatDataflowNode) == 0x00F0); // 240 bytes (0x0000E8 - 0x0000F0)
static_assert(sizeof(FMakeLiteralIntDataflowNode) == 0x00F0); // 240 bytes (0x0000E8 - 0x0000F0)
static_assert(sizeof(FMakeLiteralBoolDataflowNode) == 0x00F0); // 240 bytes (0x0000E8 - 0x0000F0)
static_assert(sizeof(FMakeLiteralVectorDataflowNode) == 0x0110); // 272 bytes (0x0000E8 - 0x000110)
static_assert(sizeof(FMakeTransformDataflowNode) == 0x0190); // 400 bytes (0x0000E8 - 0x000190)
static_assert(sizeof(FMakeQuaternionDataflowNode) == 0x0120); // 288 bytes (0x0000E8 - 0x000120)
static_assert(sizeof(FAddDataflowNode) == 0x00F8); // 248 bytes (0x0000E8 - 0x0000F8)
static_assert(sizeof(FSubtractDataflowNode) == 0x00F8); // 248 bytes (0x0000E8 - 0x0000F8)
static_assert(sizeof(FMultiplyDataflowNode) == 0x00F8); // 248 bytes (0x0000E8 - 0x0000F8)
static_assert(sizeof(FSafeDivideDataflowNode) == 0x00F8); // 248 bytes (0x0000E8 - 0x0000F8)
static_assert(sizeof(FDivideDataflowNode) == 0x00F8); // 248 bytes (0x0000F8 - 0x0000F8)
static_assert(sizeof(FDivisionDataflowNode) == 0x00F8); // 248 bytes (0x0000E8 - 0x0000F8)
static_assert(sizeof(FSafeReciprocalDataflowNode) == 0x00F0); // 240 bytes (0x0000E8 - 0x0000F0)
static_assert(sizeof(FSquareDataflowNode) == 0x00F0); // 240 bytes (0x0000E8 - 0x0000F0)
static_assert(sizeof(FSquareRootDataflowNode) == 0x00F0); // 240 bytes (0x0000E8 - 0x0000F0)
static_assert(sizeof(FInverseSqrtDataflowNode) == 0x00F0); // 240 bytes (0x0000E8 - 0x0000F0)
static_assert(sizeof(FCubeDataflowNode) == 0x00F0); // 240 bytes (0x0000E8 - 0x0000F0)
static_assert(sizeof(FNegateDataflowNode) == 0x00F0); // 240 bytes (0x0000E8 - 0x0000F0)
static_assert(sizeof(FAbsDataflowNode) == 0x00F0); // 240 bytes (0x0000E8 - 0x0000F0)
static_assert(sizeof(FFloorDataflowNode) == 0x00F0); // 240 bytes (0x0000E8 - 0x0000F0)
static_assert(sizeof(FCeilDataflowNode) == 0x00F0); // 240 bytes (0x0000E8 - 0x0000F0)
static_assert(sizeof(FRoundDataflowNode) == 0x00F0); // 240 bytes (0x0000E8 - 0x0000F0)
static_assert(sizeof(FTruncDataflowNode) == 0x00F0); // 240 bytes (0x0000E8 - 0x0000F0)
static_assert(sizeof(FFracDataflowNode) == 0x00F0); // 240 bytes (0x0000E8 - 0x0000F0)
static_assert(sizeof(FMinDataflowNode) == 0x00F8); // 248 bytes (0x0000E8 - 0x0000F8)
static_assert(sizeof(FMaxDataflowNode) == 0x00F8); // 248 bytes (0x0000E8 - 0x0000F8)
static_assert(sizeof(FMin3DataflowNode) == 0x00F8); // 248 bytes (0x0000E8 - 0x0000F8)
static_assert(sizeof(FMax3DataflowNode) == 0x00F8); // 248 bytes (0x0000E8 - 0x0000F8)
static_assert(sizeof(FSignDataflowNode) == 0x00F0); // 240 bytes (0x0000E8 - 0x0000F0)
static_assert(sizeof(FClampDataflowNode) == 0x00F8); // 248 bytes (0x0000E8 - 0x0000F8)
static_assert(sizeof(FFitDataflowNode) == 0x0100); // 256 bytes (0x0000E8 - 0x000100)
static_assert(sizeof(FEFitDataflowNode) == 0x0100); // 256 bytes (0x0000E8 - 0x000100)
static_assert(sizeof(FPowDataflowNode) == 0x00F8); // 248 bytes (0x0000E8 - 0x0000F8)
static_assert(sizeof(FLogDataflowNode) == 0x00F8); // 248 bytes (0x0000E8 - 0x0000F8)
static_assert(sizeof(FLogeDataflowNode) == 0x00F0); // 240 bytes (0x0000E8 - 0x0000F0)
static_assert(sizeof(FLerpDataflowNode) == 0x00F8); // 248 bytes (0x0000E8 - 0x0000F8)
static_assert(sizeof(FWrapDataflowNode) == 0x00F8); // 248 bytes (0x0000E8 - 0x0000F8)
static_assert(sizeof(FExpDataflowNode) == 0x00F0); // 240 bytes (0x0000E8 - 0x0000F0)
static_assert(sizeof(FSinDataflowNode) == 0x00F0); // 240 bytes (0x0000E8 - 0x0000F0)
static_assert(sizeof(FArcSinDataflowNode) == 0x00F0); // 240 bytes (0x0000E8 - 0x0000F0)
static_assert(sizeof(FCosDataflowNode) == 0x00F0); // 240 bytes (0x0000E8 - 0x0000F0)
static_assert(sizeof(FArcCosDataflowNode) == 0x00F0); // 240 bytes (0x0000E8 - 0x0000F0)
static_assert(sizeof(FTanDataflowNode) == 0x00F0); // 240 bytes (0x0000E8 - 0x0000F0)
static_assert(sizeof(FArcTanDataflowNode) == 0x00F0); // 240 bytes (0x0000E8 - 0x0000F0)
static_assert(sizeof(FArcTan2DataflowNode) == 0x00F8); // 248 bytes (0x0000E8 - 0x0000F8)
static_assert(sizeof(FNormalizeToRangeDataflowNode) == 0x00F8); // 248 bytes (0x0000E8 - 0x0000F8)
static_assert(sizeof(FScaleVectorDataflowNode) == 0x0120); // 288 bytes (0x0000E8 - 0x000120)
static_assert(sizeof(FDotProductDataflowNode) == 0x0120); // 288 bytes (0x0000E8 - 0x000120)
static_assert(sizeof(FCrossProductDataflowNode) == 0x0130); // 304 bytes (0x0000E8 - 0x000130)
static_assert(sizeof(FNormalizeDataflowNode) == 0x0120); // 288 bytes (0x0000E8 - 0x000120)
static_assert(sizeof(FLengthDataflowNode) == 0x0108); // 264 bytes (0x0000E8 - 0x000108)
static_assert(sizeof(FDistanceDataflowNode) == 0x0120); // 288 bytes (0x0000E8 - 0x000120)
static_assert(sizeof(FIsNearlyZeroDataflowNode) == 0x00F0); // 240 bytes (0x0000E8 - 0x0000F0)
static_assert(sizeof(FRandomFloatDataflowNode) == 0x00F8); // 248 bytes (0x0000E8 - 0x0000F8)
static_assert(sizeof(FRandomFloatInRangeDataflowNode) == 0x0100); // 256 bytes (0x0000E8 - 0x000100)
static_assert(sizeof(FRandomUnitVectorDataflowNode) == 0x0108); // 264 bytes (0x0000E8 - 0x000108)
static_assert(sizeof(FRandomUnitVectorInConeDataflowNode) == 0x0128); // 296 bytes (0x0000E8 - 0x000128)
static_assert(sizeof(FRadiansToDegreesDataflowNode) == 0x00F0); // 240 bytes (0x0000E8 - 0x0000F0)
static_assert(sizeof(FDegreesToRadiansDataflowNode) == 0x00F0); // 240 bytes (0x0000E8 - 0x0000F0)
static_assert(sizeof(FMathConstantsDataflowNode) == 0x00F0); // 240 bytes (0x0000E8 - 0x0000F0)
static_assert(sizeof(FOneMinusDataflowNode) == 0x00F0); // 240 bytes (0x0000E8 - 0x0000F0)
static_assert(sizeof(FPointsToMeshDataflowNode) == 0x0108); // 264 bytes (0x0000E8 - 0x000108)
static_assert(sizeof(FBoxToMeshDataflowNode) == 0x0130); // 304 bytes (0x0000E8 - 0x000130)
static_assert(sizeof(FMeshInfoDataflowNode) == 0x0100); // 256 bytes (0x0000E8 - 0x000100)
static_assert(sizeof(FMeshToCollectionDataflowNode) == 0x01A0); // 416 bytes (0x0000E8 - 0x0001A0)
static_assert(sizeof(FCollectionToMeshDataflowNode) == 0x01A8); // 424 bytes (0x0000E8 - 0x0001A8)
static_assert(sizeof(FStaticMeshToMeshDataflowNode) == 0x0100); // 256 bytes (0x0000E8 - 0x000100)
static_assert(sizeof(FMeshAppendDataflowNode) == 0x0100); // 256 bytes (0x0000E8 - 0x000100)
static_assert(sizeof(FMeshBooleanDataflowNode) == 0x0108); // 264 bytes (0x0000E8 - 0x000108)
static_assert(sizeof(FMeshCopyToPointsDataflowNode) == 0x0110); // 272 bytes (0x0000E8 - 0x000110)
static_assert(sizeof(FGetMeshDataDataflowNode) == 0x0100); // 256 bytes (0x0000E8 - 0x000100)
static_assert(sizeof(FGetCollectionFromAssetDataflowNode) == 0x01A0); // 416 bytes (0x0000E8 - 0x0001A0)
static_assert(sizeof(FAppendCollectionAssetsDataflowNode) == 0x0268); // 616 bytes (0x0000E8 - 0x000268)
static_assert(sizeof(FPrintStringDataflowNode) == 0x0108); // 264 bytes (0x0000E8 - 0x000108)
static_assert(sizeof(FLogStringDataflowNode) == 0x0100); // 256 bytes (0x0000E8 - 0x000100)
static_assert(sizeof(FBoundingBoxDataflowNode) == 0x01D0); // 464 bytes (0x0000E8 - 0x0001D0)
static_assert(sizeof(FGetBoxLengthsDataflowNode) == 0x0110); // 272 bytes (0x0000E8 - 0x000110)
static_assert(sizeof(FExpandBoundingBoxDataflowNode) == 0x0188); // 392 bytes (0x0000E8 - 0x000188)
static_assert(sizeof(FExpandVectorDataflowNode) == 0x0110); // 272 bytes (0x0000E8 - 0x000110)
static_assert(sizeof(FStringAppendDataflowNode) == 0x0118); // 280 bytes (0x0000E8 - 0x000118)
static_assert(sizeof(FHashStringDataflowNode) == 0x0100); // 256 bytes (0x0000E8 - 0x000100)
static_assert(sizeof(FHashVectorDataflowNode) == 0x0108); // 264 bytes (0x0000E8 - 0x000108)
static_assert(sizeof(FGetBoundingBoxesFromCollectionDataflowNode) == 0x01C8); // 456 bytes (0x0000E8 - 0x0001C8)
static_assert(sizeof(FGetRootIndexFromCollectionDataflowNode) == 0x01A0); // 416 bytes (0x0000E8 - 0x0001A0)
static_assert(sizeof(FGetCentroidsFromCollectionDataflowNode) == 0x01C8); // 456 bytes (0x0000E8 - 0x0001C8)
static_assert(sizeof(FTransformCollectionDataflowNode) == 0x0228); // 552 bytes (0x0000E8 - 0x000228)
static_assert(sizeof(FBakeTransformsInCollectionDataflowNode) == 0x0198); // 408 bytes (0x0000E8 - 0x000198)
static_assert(sizeof(FTransformMeshDataflowNode) == 0x0180); // 384 bytes (0x0000E8 - 0x000180)
static_assert(sizeof(FCompareIntDataflowNode) == 0x00F8); // 248 bytes (0x0000E8 - 0x0000F8)
static_assert(sizeof(FCompareFloatDataflowNode) == 0x00F8); // 248 bytes (0x0000E8 - 0x0000F8)
static_assert(sizeof(FBranchMeshDataflowNode) == 0x0108); // 264 bytes (0x0000E8 - 0x000108)
static_assert(sizeof(FBranchCollectionDataflowNode) == 0x0300); // 768 bytes (0x0000E8 - 0x000300)
static_assert(sizeof(FGetSchemaDataflowNode) == 0x01A8); // 424 bytes (0x0000E8 - 0x0001A8)
static_assert(sizeof(FRemoveOnBreakDataflowNode) == 0x01D0); // 464 bytes (0x0000E8 - 0x0001D0)
static_assert(sizeof(FSetAnchorStateDataflowNode) == 0x01C0); // 448 bytes (0x0000E8 - 0x0001C0)
static_assert(sizeof(FProximityDataflowNode) == 0x01A8); // 424 bytes (0x0000E8 - 0x0001A8)
static_assert(sizeof(FCollectionSetPivotDataflowNode) == 0x0200); // 512 bytes (0x0000E8 - 0x000200)
static_assert(sizeof(FAddCustomCollectionAttributeDataflowNode) == 0x01C8); // 456 bytes (0x0000E8 - 0x0001C8)
static_assert(sizeof(FGetNumElementsInCollectionGroupDataflowNode) == 0x01B8); // 440 bytes (0x0000E8 - 0x0001B8)
static_assert(sizeof(FGetCollectionAttributeDataTypedDataflowNode) == 0x0230); // 560 bytes (0x0000E8 - 0x000230)
static_assert(sizeof(FSetCollectionAttributeDataTypedDataflowNode) == 0x0230); // 560 bytes (0x0000E8 - 0x000230)
static_assert(sizeof(FSetVertexColorInCollectionFromVertexSelectionDataflowNode) == 0x01D8); // 472 bytes (0x0000E8 - 0x0001D8)
static_assert(sizeof(FSelectionToVertexListDataflowNode) == 0x0118); // 280 bytes (0x0000E8 - 0x000118)
static_assert(sizeof(FSetVertexColorInCollectionFromFloatArrayDataflowNode) == 0x01B0); // 432 bytes (0x0000E8 - 0x0001B0)
static_assert(sizeof(FMultiplyTransformDataflowNode) == 0x0210); // 528 bytes (0x0000E8 - 0x000210)
static_assert(sizeof(FInvertTransformDataflowNode) == 0x01B0); // 432 bytes (0x0000E8 - 0x0001B0)
static_assert(sizeof(FBranchFloatDataflowNode) == 0x00F8); // 248 bytes (0x0000E8 - 0x0000F8)
static_assert(sizeof(FBranchIntDataflowNode) == 0x00F8); // 248 bytes (0x0000E8 - 0x0000F8)
static_assert(sizeof(FGetFloatOverrideFromAssetDataflowNode) == 0x0110); // 272 bytes (0x000108 - 0x000110)
static_assert(sizeof(FGetIntOverrideFromAssetDataflowNode) == 0x0110); // 272 bytes (0x000108 - 0x000110)
static_assert(sizeof(FGetBoolOverrideFromAssetDataflowNode) == 0x0110); // 272 bytes (0x000108 - 0x000110)
static_assert(sizeof(FGetStringOverrideFromAssetDataflowNode) == 0x0128); // 296 bytes (0x000108 - 0x000128)
static_assert(sizeof(FCollectionTransformSelectionAllDataflowNode) == 0x01B8); // 440 bytes (0x0000E8 - 0x0001B8)
static_assert(sizeof(FCollectionTransformSelectionSetOperationDataflowNode) == 0x0150); // 336 bytes (0x0000E8 - 0x000150)
static_assert(sizeof(FCollectionTransformSelectionInfoDataflowNode) == 0x01C8); // 456 bytes (0x0000E8 - 0x0001C8)
static_assert(sizeof(FCollectionTransformSelectionNoneDataflowNode) == 0x01B8); // 440 bytes (0x0000E8 - 0x0001B8)
static_assert(sizeof(FCollectionTransformSelectionInvertDataflowNode) == 0x0108); // 264 bytes (0x0000E8 - 0x000108)
static_assert(sizeof(FCollectionTransformSelectionRandomDataflowNode) == 0x01C8); // 456 bytes (0x0000E8 - 0x0001C8)
static_assert(sizeof(FCollectionTransformSelectionRootDataflowNode) == 0x01B8); // 440 bytes (0x0000E8 - 0x0001B8)
static_assert(sizeof(FCollectionTransformSelectionCustomDataflowNode) == 0x01C8); // 456 bytes (0x0000E8 - 0x0001C8)
static_assert(sizeof(FCollectionTransformSelectionFromIndexArrayDataflowNode) == 0x01C8); // 456 bytes (0x0000E8 - 0x0001C8)
static_assert(sizeof(FCollectionTransformSelectionParentDataflowNode) == 0x01B8); // 440 bytes (0x0000E8 - 0x0001B8)
static_assert(sizeof(FCollectionTransformSelectionByPercentageDataflowNode) == 0x0118); // 280 bytes (0x0000E8 - 0x000118)
static_assert(sizeof(FCollectionTransformSelectionChildrenDataflowNode) == 0x01B8); // 440 bytes (0x0000E8 - 0x0001B8)
static_assert(sizeof(FCollectionTransformSelectionSiblingsDataflowNode) == 0x01B8); // 440 bytes (0x0000E8 - 0x0001B8)
static_assert(sizeof(FCollectionTransformSelectionLevelDataflowNode) == 0x01B8); // 440 bytes (0x0000E8 - 0x0001B8)
static_assert(sizeof(FCollectionTransformSelectionTargetLevelDataflowNode) == 0x01C0); // 448 bytes (0x0000E8 - 0x0001C0)
static_assert(sizeof(FCollectionTransformSelectionContactDataflowNode) == 0x01B8); // 440 bytes (0x0000E8 - 0x0001B8)
static_assert(sizeof(FCollectionTransformSelectionLeafDataflowNode) == 0x01B8); // 440 bytes (0x0000E8 - 0x0001B8)
static_assert(sizeof(FCollectionTransformSelectionClusterDataflowNode) == 0x01B8); // 440 bytes (0x0000E8 - 0x0001B8)
static_assert(sizeof(FSelectFloatArrayIndicesInRangeDataflowNode) == 0x0118); // 280 bytes (0x0000E8 - 0x000118)
static_assert(sizeof(FCollectionTransformSelectionBySizeDataflowNode) == 0x01C8); // 456 bytes (0x0000E8 - 0x0001C8)
static_assert(sizeof(FCollectionTransformSelectionByVolumeDataflowNode) == 0x01C8); // 456 bytes (0x0000E8 - 0x0001C8)
static_assert(sizeof(FCollectionTransformSelectionInBoxDataflowNode) == 0x0260); // 608 bytes (0x0000E8 - 0x000260)
static_assert(sizeof(FCollectionTransformSelectionInSphereDataflowNode) == 0x0250); // 592 bytes (0x0000E8 - 0x000250)
static_assert(sizeof(FCollectionTransformSelectionByFloatAttrDataflowNode) == 0x01E8); // 488 bytes (0x0000E8 - 0x0001E8)
static_assert(sizeof(FCollectionTransformSelectionByIntAttrDataflowNode) == 0x01E8); // 488 bytes (0x0000E8 - 0x0001E8)
static_assert(sizeof(FCollectionVertexSelectionCustomDataflowNode) == 0x01C8); // 456 bytes (0x0000E8 - 0x0001C8)
static_assert(sizeof(FCollectionFaceSelectionCustomDataflowNode) == 0x01C8); // 456 bytes (0x0000E8 - 0x0001C8)
static_assert(sizeof(FCollectionSelectionConvertDataflowNode) == 0x0200); // 512 bytes (0x0000E8 - 0x000200)
static_assert(sizeof(FCollectionFaceSelectionInvertDataflowNode) == 0x0108); // 264 bytes (0x0000E8 - 0x000108)
static_assert(sizeof(FCollectionVertexSelectionByPercentageDataflowNode) == 0x0118); // 280 bytes (0x0000E8 - 0x000118)
static_assert(sizeof(FCollectionVertexSelectionSetOperationDataflowNode) == 0x0150); // 336 bytes (0x0000E8 - 0x000150)
static_assert(sizeof(FGeometryCollectionVertexScalarToVertexIndicesNode) == 0x01C0); // 448 bytes (0x0000E8 - 0x0001C0)
static_assert(sizeof(FTransformCollectionAttributeDataflowNode) == 0x0280); // 640 bytes (0x0000E8 - 0x000280)
static_assert(offsetof(FGetFloatArrayElementDataflowNode, FloatArray) == 0x00F0);
static_assert(offsetof(FFloatArrayToIntArrayDataflowNode, Function) == 0x00E8);
static_assert(offsetof(FFloatArrayToIntArrayDataflowNode, FloatArray) == 0x00F0);
static_assert(offsetof(FFloatArrayToIntArrayDataflowNode, IntArray) == 0x0100);
static_assert(offsetof(FGetArrayElementDataflowNode, Points) == 0x00F0);
static_assert(offsetof(FGetArrayElementDataflowNode, Point) == 0x0100);
static_assert(offsetof(FGetNumArrayElementsDataflowNode, FloatArray) == 0x00E8);
static_assert(offsetof(FGetNumArrayElementsDataflowNode, IntArray) == 0x00F8);
static_assert(offsetof(FGetNumArrayElementsDataflowNode, Points) == 0x0108);
static_assert(offsetof(FGetNumArrayElementsDataflowNode, Vector3fArray) == 0x0118);
static_assert(offsetof(FBoolArrayToFaceSelectionDataflowNode, BoolAttributeData) == 0x00E8);
static_assert(offsetof(FBoolArrayToFaceSelectionDataflowNode, FaceSelection) == 0x00F8);
static_assert(offsetof(FFloatArrayToVertexSelectionDataflowNode, FloatArray) == 0x00E8);
static_assert(offsetof(FFloatArrayToVertexSelectionDataflowNode, Operation) == 0x00F8);
static_assert(offsetof(FFloatArrayToVertexSelectionDataflowNode, VertexSelection) == 0x0100);
static_assert(offsetof(FFloatArrayNormalizeDataflowNode, InFloatArray) == 0x00E8);
static_assert(offsetof(FFloatArrayNormalizeDataflowNode, Selection) == 0x00F8);
static_assert(offsetof(FFloatArrayNormalizeDataflowNode, OutFloatArray) == 0x0120);
static_assert(offsetof(FVectorArrayNormalizeDataflowNode, InVectorArray) == 0x00E8);
static_assert(offsetof(FVectorArrayNormalizeDataflowNode, Selection) == 0x00F8);
static_assert(offsetof(FVectorArrayNormalizeDataflowNode, OutVectorArray) == 0x0120);
static_assert(offsetof(FUnionIntArraysDataflowNode, InArray1) == 0x00E8);
static_assert(offsetof(FUnionIntArraysDataflowNode, InArray2) == 0x00F8);
static_assert(offsetof(FUnionIntArraysDataflowNode, OutArray) == 0x0108);
static_assert(offsetof(FRemoveFloatArrayElementDataflowNode, FloatArray) == 0x00F0);
static_assert(offsetof(FFloatArrayComputeStatisticsDataflowNode, FloatArray) == 0x00E8);
static_assert(offsetof(FFloatArrayComputeStatisticsDataflowNode, TransformSelection) == 0x00F8);
static_assert(offsetof(FFloatArrayComputeStatisticsDataflowNode, OperationName) == 0x0118);
static_assert(offsetof(FFloatArrayComputeStatisticsDataflowNode, Indices) == 0x0120);
static_assert(offsetof(FGeometryCollectionTerminalDataflowNode, Collection) == 0x00E8);
static_assert(offsetof(FGeometryCollectionTerminalDataflowNode, Materials) == 0x0198);
static_assert(offsetof(FGeometryCollectionTerminalDataflowNode, InstancedMeshes) == 0x01A8);
static_assert(offsetof(FGetGeometryCollectionAssetDataflowNode, Asset) == 0x00E8);
static_assert(offsetof(FGetGeometryCollectionSourcesDataflowNode, Asset) == 0x00E8);
static_assert(offsetof(FGetGeometryCollectionSourcesDataflowNode, Sources) == 0x00F0);
static_assert(offsetof(FCreateGeometryCollectionFromSourcesDataflowNode, Sources) == 0x00E8);
static_assert(offsetof(FCreateGeometryCollectionFromSourcesDataflowNode, Collection) == 0x00F8);
static_assert(offsetof(FCreateGeometryCollectionFromSourcesDataflowNode, Materials) == 0x01A8);
static_assert(offsetof(FCreateGeometryCollectionFromSourcesDataflowNode, InstancedMeshes) == 0x01B8);
static_assert(offsetof(FStaticMeshToCollectionDataflowNode, StaticMesh) == 0x00E8);
static_assert(offsetof(FStaticMeshToCollectionDataflowNode, Collection) == 0x00F8);
static_assert(offsetof(FStaticMeshToCollectionDataflowNode, Materials) == 0x01A8);
static_assert(offsetof(FStaticMeshToCollectionDataflowNode, InstancedMeshes) == 0x01B8);
static_assert(offsetof(FRadialFalloffFieldDataflowNode, SamplePositions) == 0x00E8);
static_assert(offsetof(FRadialFalloffFieldDataflowNode, SampleIndices) == 0x00F8);
static_assert(offsetof(FRadialFalloffFieldDataflowNode, Sphere) == 0x0118);
static_assert(offsetof(FRadialFalloffFieldDataflowNode, Translation) == 0x0138);
static_assert(offsetof(FRadialFalloffFieldDataflowNode, FalloffType) == 0x0160);
static_assert(offsetof(FRadialFalloffFieldDataflowNode, FieldFloatResult) == 0x0168);
static_assert(offsetof(FRadialFalloffFieldDataflowNode, FieldRemap) == 0x0178);
static_assert(offsetof(FRadialFalloffFieldDataflowNode, FieldSelectionMask) == 0x0188);
static_assert(offsetof(FBoxFalloffFieldDataflowNode, SamplePositions) == 0x00E8);
static_assert(offsetof(FBoxFalloffFieldDataflowNode, SampleIndices) == 0x00F8);
static_assert(offsetof(FBoxFalloffFieldDataflowNode, Box) == 0x0118);
static_assert(offsetof(FBoxFalloffFieldDataflowNode, Transform) == 0x0150);
static_assert(offsetof(FBoxFalloffFieldDataflowNode, FalloffType) == 0x01C0);
static_assert(offsetof(FBoxFalloffFieldDataflowNode, FieldFloatResult) == 0x01C8);
static_assert(offsetof(FBoxFalloffFieldDataflowNode, FieldRemap) == 0x01D8);
static_assert(offsetof(FBoxFalloffFieldDataflowNode, FieldSelectionMask) == 0x01E8);
static_assert(offsetof(FPlaneFalloffFieldDataflowNode, SamplePositions) == 0x00E8);
static_assert(offsetof(FPlaneFalloffFieldDataflowNode, SampleIndices) == 0x00F8);
static_assert(offsetof(FPlaneFalloffFieldDataflowNode, Position) == 0x0118);
static_assert(offsetof(FPlaneFalloffFieldDataflowNode, Normal) == 0x0130);
static_assert(offsetof(FPlaneFalloffFieldDataflowNode, Translation) == 0x0150);
static_assert(offsetof(FPlaneFalloffFieldDataflowNode, FalloffType) == 0x0178);
static_assert(offsetof(FPlaneFalloffFieldDataflowNode, FieldFloatResult) == 0x0180);
static_assert(offsetof(FPlaneFalloffFieldDataflowNode, FieldRemap) == 0x0190);
static_assert(offsetof(FPlaneFalloffFieldDataflowNode, FieldSelectionMask) == 0x01A0);
static_assert(offsetof(FRadialIntMaskFieldDataflowNode, SamplePositions) == 0x00E8);
static_assert(offsetof(FRadialIntMaskFieldDataflowNode, SampleIndices) == 0x00F8);
static_assert(offsetof(FRadialIntMaskFieldDataflowNode, Sphere) == 0x0118);
static_assert(offsetof(FRadialIntMaskFieldDataflowNode, Translation) == 0x0138);
static_assert(offsetof(FRadialIntMaskFieldDataflowNode, SetMaskConditionType) == 0x0158);
static_assert(offsetof(FRadialIntMaskFieldDataflowNode, FieldIntResult) == 0x0160);
static_assert(offsetof(FRadialIntMaskFieldDataflowNode, FieldRemap) == 0x0170);
static_assert(offsetof(FUniformScalarFieldDataflowNode, SamplePositions) == 0x00E8);
static_assert(offsetof(FUniformScalarFieldDataflowNode, SampleIndices) == 0x00F8);
static_assert(offsetof(FUniformScalarFieldDataflowNode, FieldFloatResult) == 0x0120);
static_assert(offsetof(FUniformScalarFieldDataflowNode, FieldRemap) == 0x0130);
static_assert(offsetof(FUniformVectorFieldDataflowNode, SamplePositions) == 0x00E8);
static_assert(offsetof(FUniformVectorFieldDataflowNode, SampleIndices) == 0x00F8);
static_assert(offsetof(FUniformVectorFieldDataflowNode, Direction) == 0x0120);
static_assert(offsetof(FUniformVectorFieldDataflowNode, FieldVectorResult) == 0x0138);
static_assert(offsetof(FUniformVectorFieldDataflowNode, FieldRemap) == 0x0148);
static_assert(offsetof(FRadialVectorFieldDataflowNode, SamplePositions) == 0x00E8);
static_assert(offsetof(FRadialVectorFieldDataflowNode, SampleIndices) == 0x00F8);
static_assert(offsetof(FRadialVectorFieldDataflowNode, Position) == 0x0120);
static_assert(offsetof(FRadialVectorFieldDataflowNode, FieldVectorResult) == 0x0138);
static_assert(offsetof(FRadialVectorFieldDataflowNode, FieldRemap) == 0x0148);
static_assert(offsetof(FRandomVectorFieldDataflowNode, SamplePositions) == 0x00E8);
static_assert(offsetof(FRandomVectorFieldDataflowNode, SampleIndices) == 0x00F8);
static_assert(offsetof(FRandomVectorFieldDataflowNode, FieldVectorResult) == 0x0120);
static_assert(offsetof(FRandomVectorFieldDataflowNode, FieldRemap) == 0x0130);
static_assert(offsetof(FNoiseFieldDataflowNode, SamplePositions) == 0x00E8);
static_assert(offsetof(FNoiseFieldDataflowNode, SampleIndices) == 0x00F8);
static_assert(offsetof(FNoiseFieldDataflowNode, Transform) == 0x0120);
static_assert(offsetof(FNoiseFieldDataflowNode, FieldFloatResult) == 0x0180);
static_assert(offsetof(FNoiseFieldDataflowNode, FieldRemap) == 0x0190);
static_assert(offsetof(FUniformIntegerFieldDataflowNode, SamplePositions) == 0x00E8);
static_assert(offsetof(FUniformIntegerFieldDataflowNode, SampleIndices) == 0x00F8);
static_assert(offsetof(FUniformIntegerFieldDataflowNode, FieldIntResult) == 0x0120);
static_assert(offsetof(FUniformIntegerFieldDataflowNode, FieldRemap) == 0x0130);
static_assert(offsetof(FWaveScalarFieldDataflowNode, SamplePositions) == 0x00E8);
static_assert(offsetof(FWaveScalarFieldDataflowNode, SampleIndices) == 0x00F8);
static_assert(offsetof(FWaveScalarFieldDataflowNode, Position) == 0x0120);
static_assert(offsetof(FWaveScalarFieldDataflowNode, Translation) == 0x0138);
static_assert(offsetof(FWaveScalarFieldDataflowNode, FunctionType) == 0x0158);
static_assert(offsetof(FWaveScalarFieldDataflowNode, FalloffType) == 0x0159);
static_assert(offsetof(FWaveScalarFieldDataflowNode, FieldFloatResult) == 0x0160);
static_assert(offsetof(FWaveScalarFieldDataflowNode, FieldRemap) == 0x0170);
static_assert(offsetof(FSumScalarFieldDataflowNode, FieldFloatLeft) == 0x00E8);
static_assert(offsetof(FSumScalarFieldDataflowNode, FieldRemapLeft) == 0x00F8);
static_assert(offsetof(FSumScalarFieldDataflowNode, FieldFloatRight) == 0x0108);
static_assert(offsetof(FSumScalarFieldDataflowNode, FieldRemapRight) == 0x0118);
static_assert(offsetof(FSumScalarFieldDataflowNode, Operation) == 0x012C);
static_assert(offsetof(FSumScalarFieldDataflowNode, FieldFloatResult) == 0x0130);
static_assert(offsetof(FSumScalarFieldDataflowNode, FieldRemap) == 0x0140);
static_assert(offsetof(FSumVectorFieldDataflowNode, FieldFloat) == 0x00E8);
static_assert(offsetof(FSumVectorFieldDataflowNode, FieldFloatRemap) == 0x00F8);
static_assert(offsetof(FSumVectorFieldDataflowNode, FieldVectorLeft) == 0x0108);
static_assert(offsetof(FSumVectorFieldDataflowNode, FieldRemapLeft) == 0x0118);
static_assert(offsetof(FSumVectorFieldDataflowNode, FieldVectorRight) == 0x0128);
static_assert(offsetof(FSumVectorFieldDataflowNode, FieldRemapRight) == 0x0138);
static_assert(offsetof(FSumVectorFieldDataflowNode, Operation) == 0x014C);
static_assert(offsetof(FSumVectorFieldDataflowNode, FieldVectorResult) == 0x0150);
static_assert(offsetof(FSumVectorFieldDataflowNode, FieldRemap) == 0x0160);
static_assert(offsetof(FFieldMakeDenseFloatArrayDataflowNode, FieldFloatInput) == 0x00E8);
static_assert(offsetof(FFieldMakeDenseFloatArrayDataflowNode, FieldRemap) == 0x00F8);
static_assert(offsetof(FFieldMakeDenseFloatArrayDataflowNode, FieldFloatResult) == 0x0110);
static_assert(offsetof(FAddMaterialToCollectionDataflowNode, Collection) == 0x00E8);
static_assert(offsetof(FAddMaterialToCollectionDataflowNode, FaceSelection) == 0x0198);
static_assert(offsetof(FAddMaterialToCollectionDataflowNode, Materials) == 0x01B8);
static_assert(offsetof(FAddMaterialToCollectionDataflowNode, OutsideMaterial) == 0x01C8);
static_assert(offsetof(FAddMaterialToCollectionDataflowNode, InsideMaterial) == 0x01D0);
static_assert(offsetof(FReAssignMaterialInCollectionDataflowNode, Collection) == 0x00E8);
static_assert(offsetof(FReAssignMaterialInCollectionDataflowNode, FaceSelection) == 0x0198);
static_assert(offsetof(FReAssignMaterialInCollectionDataflowNode, Materials) == 0x01B8);
static_assert(offsetof(FMaterialsInfoDataflowNode, Materials) == 0x00E8);
static_assert(offsetof(FMaterialsInfoDataflowNode, String) == 0x00F8);
static_assert(offsetof(FGetMaterialFromMaterialsArrayDataflowNode, Materials) == 0x00E8);
static_assert(offsetof(FGetMaterialFromMaterialsArrayDataflowNode, Material) == 0x00F8);
static_assert(offsetof(FSetMaterialInMaterialsArrayDataflowNode, Materials) == 0x00E8);
static_assert(offsetof(FSetMaterialInMaterialsArrayDataflowNode, Material) == 0x00F8);
static_assert(offsetof(FSetMaterialInMaterialsArrayDataflowNode, Operation) == 0x0100);
static_assert(offsetof(FMakeMaterialDataflowNode, InMaterial) == 0x00E8);
static_assert(offsetof(FMakeMaterialDataflowNode, Material) == 0x00F0);
static_assert(offsetof(FMakeMaterialsArrayDataflowNode, Materials) == 0x00E8);
static_assert(offsetof(FCloseGeometryOnCollectionDataflowNode, Collection) == 0x00E8);
static_assert(offsetof(FSkeletonToCollectionDataflowNode, Skeleton) == 0x00E8);
static_assert(offsetof(FSkeletonToCollectionDataflowNode, Collection) == 0x00F0);
static_assert(offsetof(FMakeDataflowConvexDecompositionSettingsNode, DecompositionSettings) == 0x0100);
static_assert(offsetof(FCreateLeafConvexHullsDataflowNode, Collection) == 0x00E8);
static_assert(offsetof(FCreateLeafConvexHullsDataflowNode, OptionalSelectionFilter) == 0x0198);
static_assert(offsetof(FCreateLeafConvexHullsDataflowNode, GenerateMethod) == 0x01B8);
static_assert(offsetof(FCreateLeafConvexHullsDataflowNode, ConvexDecompositionSettings) == 0x01CC);
static_assert(offsetof(FSimplifyConvexHullsDataflowNode, Collection) == 0x00E8);
static_assert(offsetof(FSimplifyConvexHullsDataflowNode, OptionalSelectionFilter) == 0x0198);
static_assert(offsetof(FSimplifyConvexHullsDataflowNode, SimplifyMethod) == 0x01B8);
static_assert(offsetof(FCreateNonOverlappingConvexHullsDataflowNode, Collection) == 0x00E8);
static_assert(offsetof(FCreateNonOverlappingConvexHullsDataflowNode, OverlapRemovalMethod) == 0x01A0);
static_assert(offsetof(FGenerateClusterConvexHullsFromLeafHullsDataflowNode, Collection) == 0x00E8);
static_assert(offsetof(FGenerateClusterConvexHullsFromLeafHullsDataflowNode, SphereCovering) == 0x0198);
static_assert(offsetof(FGenerateClusterConvexHullsFromLeafHullsDataflowNode, AllowMerges) == 0x01C9);
static_assert(offsetof(FGenerateClusterConvexHullsFromLeafHullsDataflowNode, OptionalSelectionFilter) == 0x01D0);
static_assert(offsetof(FGenerateClusterConvexHullsFromLeafHullsDataflowNode, SampleMethod) == 0x01F1);
static_assert(offsetof(FGenerateClusterConvexHullsFromChildrenHullsDataflowNode, Collection) == 0x00E8);
static_assert(offsetof(FGenerateClusterConvexHullsFromChildrenHullsDataflowNode, SphereCovering) == 0x0198);
static_assert(offsetof(FGenerateClusterConvexHullsFromChildrenHullsDataflowNode, OptionalSelectionFilter) == 0x01D0);
static_assert(offsetof(FGenerateClusterConvexHullsFromChildrenHullsDataflowNode, SampleMethod) == 0x01F1);
static_assert(offsetof(FClearConvexHullsDataflowNode, Collection) == 0x00E8);
static_assert(offsetof(FClearConvexHullsDataflowNode, TransformSelection) == 0x0198);
static_assert(offsetof(FMergeConvexHullsDataflowNode, Collection) == 0x00E8);
static_assert(offsetof(FMergeConvexHullsDataflowNode, SphereCovering) == 0x0198);
static_assert(offsetof(FMergeConvexHullsDataflowNode, OptionalSelectionFilter) == 0x01C8);
static_assert(offsetof(FMergeConvexHullsDataflowNode, SampleMethod) == 0x01EA);
static_assert(offsetof(FUpdateVolumeAttributesDataflowNode, Collection) == 0x00E8);
static_assert(offsetof(FGetConvexHullVolumeDataflowNode, Collection) == 0x00E8);
static_assert(offsetof(FGetConvexHullVolumeDataflowNode, TransformSelection) == 0x0198);
static_assert(offsetof(FAutoClusterDataflowNode, ClusterSizeMethod) == 0x00E8);
static_assert(offsetof(FAutoClusterDataflowNode, Collection) == 0x0118);
static_assert(offsetof(FAutoClusterDataflowNode, TransformSelection) == 0x01C8);
static_assert(offsetof(FClusterFlattenDataflowNode, Collection) == 0x00E8);
static_assert(offsetof(FClusterFlattenDataflowNode, OptionalTransformSelection) == 0x0198);
static_assert(offsetof(FClusterUnclusterDataflowNode, Collection) == 0x00E8);
static_assert(offsetof(FClusterUnclusterDataflowNode, TransformSelection) == 0x0198);
static_assert(offsetof(FClusterDataflowNode, Collection) == 0x00E8);
static_assert(offsetof(FClusterDataflowNode, TransformSelection) == 0x0198);
static_assert(offsetof(FClusterMergeToNeighborsDataflowNode, Collection) == 0x00E8);
static_assert(offsetof(FClusterMergeToNeighborsDataflowNode, TransformSelection) == 0x0198);
static_assert(offsetof(FClusterMergeToNeighborsDataflowNode, NeighborSelectionMethod) == 0x01B8);
static_assert(offsetof(FClusterMergeDataflowNode, Collection) == 0x00E8);
static_assert(offsetof(FClusterMergeDataflowNode, TransformSelection) == 0x0198);
static_assert(offsetof(FClusterIsolatedRootsDataflowNode, Collection) == 0x00E8);
static_assert(offsetof(FClusterMagnetDataflowNode, Collection) == 0x00E8);
static_assert(offsetof(FClusterMagnetDataflowNode, TransformSelection) == 0x0198);
static_assert(offsetof(FVectorToStringDataflowNode, Vector) == 0x00E8);
static_assert(offsetof(FVectorToStringDataflowNode, String) == 0x0100);
static_assert(offsetof(FFloatToStringDataflowNode, String) == 0x00F0);
static_assert(offsetof(FIntToStringDataflowNode, String) == 0x00F0);
static_assert(offsetof(FBoolToStringDataflowNode, String) == 0x00F0);
static_assert(offsetof(FFloatToIntDataflowNode, Function) == 0x00E8);
static_assert(offsetof(FConvexHullToMeshDataflowNode, Collection) == 0x00E8);
static_assert(offsetof(FConvexHullToMeshDataflowNode, OptionalSelectionFilter) == 0x0198);
static_assert(offsetof(FConvexHullToMeshDataflowNode, Mesh) == 0x01B8);
static_assert(offsetof(FSphereCoveringToMeshDataflowNode, SphereCovering) == 0x00E8);
static_assert(offsetof(FSphereCoveringToMeshDataflowNode, Mesh) == 0x0110);
static_assert(offsetof(FSphereCoveringCountSpheresNode, SphereCovering) == 0x00E8);
static_assert(offsetof(FMeshToOBJStringDebugDataflowNode, Mesh) == 0x00E8);
static_assert(offsetof(FMeshToOBJStringDebugDataflowNode, StringOBJ) == 0x00F8);
static_assert(offsetof(FWriteStringToFile, FilePath) == 0x00E8);
static_assert(offsetof(FWriteStringToFile, FileContents) == 0x00F8);
static_assert(offsetof(FPruneInCollectionDataflowNode, Collection) == 0x00E8);
static_assert(offsetof(FPruneInCollectionDataflowNode, TransformSelection) == 0x0198);
static_assert(offsetof(FSetVisibilityInCollectionDataflowNode, Visibility) == 0x00E8);
static_assert(offsetof(FSetVisibilityInCollectionDataflowNode, Collection) == 0x00F0);
static_assert(offsetof(FSetVisibilityInCollectionDataflowNode, TransformSelection) == 0x01A0);
static_assert(offsetof(FSetVisibilityInCollectionDataflowNode, FaceSelection) == 0x01C0);
static_assert(offsetof(FMergeInCollectionDataflowNode, Collection) == 0x00E8);
static_assert(offsetof(FMergeInCollectionDataflowNode, TransformSelection) == 0x0198);
static_assert(offsetof(FUniformScatterPointsDataflowNode, BoundingBox) == 0x00F8);
static_assert(offsetof(FUniformScatterPointsDataflowNode, Points) == 0x0130);
static_assert(offsetof(FRadialScatterPointsDataflowNode, Center) == 0x00E8);
static_assert(offsetof(FRadialScatterPointsDataflowNode, Normal) == 0x0100);
static_assert(offsetof(FRadialScatterPointsDataflowNode, Points) == 0x0130);
static_assert(offsetof(FVoronoiFractureDataflowNode, Collection) == 0x00E8);
static_assert(offsetof(FVoronoiFractureDataflowNode, Points) == 0x0198);
static_assert(offsetof(FVoronoiFractureDataflowNode, TransformSelection) == 0x01A8);
static_assert(offsetof(FPlaneCutterDataflowNode, Collection) == 0x00E8);
static_assert(offsetof(FPlaneCutterDataflowNode, BoundingBox) == 0x0198);
static_assert(offsetof(FPlaneCutterDataflowNode, TransformSelection) == 0x01D0);
static_assert(offsetof(FExplodedViewDataflowNode, Collection) == 0x00E8);
static_assert(offsetof(FExplodedViewDataflowNode, Scale) == 0x01A0);
static_assert(offsetof(FMakeLiteralStringDataflowNode, Value) == 0x00E8);
static_assert(offsetof(FMakeLiteralStringDataflowNode, String) == 0x00F8);
static_assert(offsetof(FMakePointsDataflowNode, Point) == 0x00E8);
static_assert(offsetof(FMakePointsDataflowNode, Points) == 0x00F8);
static_assert(offsetof(FMakeBoxDataflowNode, DataType) == 0x00E8);
static_assert(offsetof(FMakeBoxDataflowNode, Min) == 0x00F0);
static_assert(offsetof(FMakeBoxDataflowNode, Max) == 0x0108);
static_assert(offsetof(FMakeBoxDataflowNode, Center) == 0x0120);
static_assert(offsetof(FMakeBoxDataflowNode, Size) == 0x0138);
static_assert(offsetof(FMakeBoxDataflowNode, Box) == 0x0150);
static_assert(offsetof(FMakeSphereDataflowNode, Center) == 0x00E8);
static_assert(offsetof(FMakeSphereDataflowNode, Sphere) == 0x0108);
static_assert(offsetof(FMakeLiteralVectorDataflowNode, Vector) == 0x00F8);
static_assert(offsetof(FMakeTransformDataflowNode, InTranslation) == 0x00E8);
static_assert(offsetof(FMakeTransformDataflowNode, InRotation) == 0x0100);
static_assert(offsetof(FMakeTransformDataflowNode, InScale) == 0x0118);
static_assert(offsetof(FMakeTransformDataflowNode, OutTransform) == 0x0130);
static_assert(offsetof(FMakeQuaternionDataflowNode, Quaternion) == 0x0100);
static_assert(offsetof(FScaleVectorDataflowNode, Vector) == 0x00E8);
static_assert(offsetof(FScaleVectorDataflowNode, ScaledVector) == 0x0108);
static_assert(offsetof(FDotProductDataflowNode, VectorA) == 0x00E8);
static_assert(offsetof(FDotProductDataflowNode, VectorB) == 0x0100);
static_assert(offsetof(FCrossProductDataflowNode, VectorA) == 0x00E8);
static_assert(offsetof(FCrossProductDataflowNode, VectorB) == 0x0100);
static_assert(offsetof(FCrossProductDataflowNode, ReturnValue) == 0x0118);
static_assert(offsetof(FNormalizeDataflowNode, VectorA) == 0x00E8);
static_assert(offsetof(FNormalizeDataflowNode, ReturnValue) == 0x0108);
static_assert(offsetof(FLengthDataflowNode, Vector) == 0x00E8);
static_assert(offsetof(FDistanceDataflowNode, PointA) == 0x00E8);
static_assert(offsetof(FDistanceDataflowNode, PointB) == 0x0100);
static_assert(offsetof(FRandomUnitVectorDataflowNode, ReturnValue) == 0x00F0);
static_assert(offsetof(FRandomUnitVectorInConeDataflowNode, ConeDirection) == 0x00F0);
static_assert(offsetof(FRandomUnitVectorInConeDataflowNode, ReturnValue) == 0x0110);
static_assert(offsetof(FMathConstantsDataflowNode, Constant) == 0x00E8);
static_assert(offsetof(FPointsToMeshDataflowNode, Points) == 0x00E8);
static_assert(offsetof(FPointsToMeshDataflowNode, Mesh) == 0x00F8);
static_assert(offsetof(FBoxToMeshDataflowNode, Box) == 0x00E8);
static_assert(offsetof(FBoxToMeshDataflowNode, Mesh) == 0x0120);
static_assert(offsetof(FMeshInfoDataflowNode, Mesh) == 0x00E8);
static_assert(offsetof(FMeshInfoDataflowNode, InfoString) == 0x00F0);
static_assert(offsetof(FMeshToCollectionDataflowNode, Mesh) == 0x00E8);
static_assert(offsetof(FMeshToCollectionDataflowNode, Collection) == 0x00F0);
static_assert(offsetof(FCollectionToMeshDataflowNode, Collection) == 0x00E8);
static_assert(offsetof(FCollectionToMeshDataflowNode, Mesh) == 0x01A0);
static_assert(offsetof(FStaticMeshToMeshDataflowNode, StaticMesh) == 0x00E8);
static_assert(offsetof(FStaticMeshToMeshDataflowNode, Mesh) == 0x00F8);
static_assert(offsetof(FMeshAppendDataflowNode, Mesh1) == 0x00E8);
static_assert(offsetof(FMeshAppendDataflowNode, Mesh2) == 0x00F0);
static_assert(offsetof(FMeshAppendDataflowNode, Mesh) == 0x00F8);
static_assert(offsetof(FMeshBooleanDataflowNode, Operation) == 0x00E8);
static_assert(offsetof(FMeshBooleanDataflowNode, Mesh1) == 0x00F0);
static_assert(offsetof(FMeshBooleanDataflowNode, Mesh2) == 0x00F8);
static_assert(offsetof(FMeshBooleanDataflowNode, Mesh) == 0x0100);
static_assert(offsetof(FMeshCopyToPointsDataflowNode, Points) == 0x00E8);
static_assert(offsetof(FMeshCopyToPointsDataflowNode, MeshToCopy) == 0x00F8);
static_assert(offsetof(FMeshCopyToPointsDataflowNode, Mesh) == 0x0108);
static_assert(offsetof(FGetMeshDataDataflowNode, Mesh) == 0x00E8);
static_assert(offsetof(FGetCollectionFromAssetDataflowNode, CollectionAsset) == 0x00E8);
static_assert(offsetof(FGetCollectionFromAssetDataflowNode, Collection) == 0x00F0);
static_assert(offsetof(FAppendCollectionAssetsDataflowNode, Collection1) == 0x00E8);
static_assert(offsetof(FAppendCollectionAssetsDataflowNode, Collection2) == 0x0198);
static_assert(offsetof(FAppendCollectionAssetsDataflowNode, GeometryGroupGuidsOut1) == 0x0248);
static_assert(offsetof(FAppendCollectionAssetsDataflowNode, GeometryGroupGuidsOut2) == 0x0258);
static_assert(offsetof(FPrintStringDataflowNode, Color) == 0x00EC);
static_assert(offsetof(FPrintStringDataflowNode, String) == 0x00F8);
static_assert(offsetof(FLogStringDataflowNode, String) == 0x00F0);
static_assert(offsetof(FBoundingBoxDataflowNode, Collection) == 0x00E8);
static_assert(offsetof(FBoundingBoxDataflowNode, BoundingBox) == 0x0198);
static_assert(offsetof(FGetBoxLengthsDataflowNode, Boxes) == 0x00E8);
static_assert(offsetof(FGetBoxLengthsDataflowNode, Lengths) == 0x00F8);
static_assert(offsetof(FGetBoxLengthsDataflowNode, MeasurementMethod) == 0x0108);
static_assert(offsetof(FExpandBoundingBoxDataflowNode, BoundingBox) == 0x00E8);
static_assert(offsetof(FExpandBoundingBoxDataflowNode, Min) == 0x0120);
static_assert(offsetof(FExpandBoundingBoxDataflowNode, Max) == 0x0138);
static_assert(offsetof(FExpandBoundingBoxDataflowNode, Center) == 0x0150);
static_assert(offsetof(FExpandBoundingBoxDataflowNode, HalfExtents) == 0x0168);
static_assert(offsetof(FExpandVectorDataflowNode, Vector) == 0x00E8);
static_assert(offsetof(FStringAppendDataflowNode, String1) == 0x00E8);
static_assert(offsetof(FStringAppendDataflowNode, String2) == 0x00F8);
static_assert(offsetof(FStringAppendDataflowNode, String) == 0x0108);
static_assert(offsetof(FHashStringDataflowNode, String) == 0x00E8);
static_assert(offsetof(FHashVectorDataflowNode, Vector) == 0x00E8);
static_assert(offsetof(FGetBoundingBoxesFromCollectionDataflowNode, Collection) == 0x00E8);
static_assert(offsetof(FGetBoundingBoxesFromCollectionDataflowNode, TransformSelection) == 0x0198);
static_assert(offsetof(FGetBoundingBoxesFromCollectionDataflowNode, BoundingBoxes) == 0x01B8);
static_assert(offsetof(FGetRootIndexFromCollectionDataflowNode, Collection) == 0x00E8);
static_assert(offsetof(FGetCentroidsFromCollectionDataflowNode, Collection) == 0x00E8);
static_assert(offsetof(FGetCentroidsFromCollectionDataflowNode, TransformSelection) == 0x0198);
static_assert(offsetof(FGetCentroidsFromCollectionDataflowNode, Centroids) == 0x01B8);
static_assert(offsetof(FTransformCollectionDataflowNode, Collection) == 0x00E8);
static_assert(offsetof(FTransformCollectionDataflowNode, Translate) == 0x0198);
static_assert(offsetof(FTransformCollectionDataflowNode, RotationOrder) == 0x01B0);
static_assert(offsetof(FTransformCollectionDataflowNode, Rotate) == 0x01B8);
static_assert(offsetof(FTransformCollectionDataflowNode, Scale) == 0x01D0);
static_assert(offsetof(FTransformCollectionDataflowNode, RotatePivot) == 0x01F0);
static_assert(offsetof(FTransformCollectionDataflowNode, ScalePivot) == 0x0208);
static_assert(offsetof(FBakeTransformsInCollectionDataflowNode, Collection) == 0x00E8);
static_assert(offsetof(FTransformMeshDataflowNode, Mesh) == 0x00E8);
static_assert(offsetof(FTransformMeshDataflowNode, Translate) == 0x00F0);
static_assert(offsetof(FTransformMeshDataflowNode, RotationOrder) == 0x0108);
static_assert(offsetof(FTransformMeshDataflowNode, Rotate) == 0x0110);
static_assert(offsetof(FTransformMeshDataflowNode, Scale) == 0x0128);
static_assert(offsetof(FTransformMeshDataflowNode, RotatePivot) == 0x0148);
static_assert(offsetof(FTransformMeshDataflowNode, ScalePivot) == 0x0160);
static_assert(offsetof(FCompareIntDataflowNode, Operation) == 0x00E8);
static_assert(offsetof(FCompareFloatDataflowNode, Operation) == 0x00E8);
static_assert(offsetof(FBranchMeshDataflowNode, MeshA) == 0x00E8);
static_assert(offsetof(FBranchMeshDataflowNode, MeshB) == 0x00F0);
static_assert(offsetof(FBranchMeshDataflowNode, Mesh) == 0x0100);
static_assert(offsetof(FBranchCollectionDataflowNode, TrueCollection) == 0x00E8);
static_assert(offsetof(FBranchCollectionDataflowNode, FalseCollection) == 0x0198);
static_assert(offsetof(FBranchCollectionDataflowNode, ChosenCollection) == 0x0250);
static_assert(offsetof(FGetSchemaDataflowNode, Collection) == 0x00E8);
static_assert(offsetof(FGetSchemaDataflowNode, String) == 0x0198);
static_assert(offsetof(FRemoveOnBreakDataflowNode, Collection) == 0x00E8);
static_assert(offsetof(FRemoveOnBreakDataflowNode, TransformSelection) == 0x0198);
static_assert(offsetof(FRemoveOnBreakDataflowNode, PostBreakTimer) == 0x01BC);
static_assert(offsetof(FRemoveOnBreakDataflowNode, RemovalTimer) == 0x01C4);
static_assert(offsetof(FSetAnchorStateDataflowNode, AnchorState) == 0x00E8);
static_assert(offsetof(FSetAnchorStateDataflowNode, Collection) == 0x00F0);
static_assert(offsetof(FSetAnchorStateDataflowNode, TransformSelection) == 0x01A0);
static_assert(offsetof(FProximityDataflowNode, ProximityMethod) == 0x00E8);
static_assert(offsetof(FProximityDataflowNode, FilterContactMethod) == 0x00F4);
static_assert(offsetof(FProximityDataflowNode, ContactAreaMethod) == 0x00F6);
static_assert(offsetof(FProximityDataflowNode, Collection) == 0x00F8);
static_assert(offsetof(FCollectionSetPivotDataflowNode, Collection) == 0x00E8);
static_assert(offsetof(FCollectionSetPivotDataflowNode, Transform) == 0x01A0);
static_assert(offsetof(FAddCustomCollectionAttributeDataflowNode, Collection) == 0x00E8);
static_assert(offsetof(FAddCustomCollectionAttributeDataflowNode, GroupName) == 0x0198);
static_assert(offsetof(FAddCustomCollectionAttributeDataflowNode, CustomGroupName) == 0x01A0);
static_assert(offsetof(FAddCustomCollectionAttributeDataflowNode, AttrName) == 0x01B0);
static_assert(offsetof(FAddCustomCollectionAttributeDataflowNode, CustomAttributeType) == 0x01C0);
static_assert(offsetof(FGetNumElementsInCollectionGroupDataflowNode, Collection) == 0x00E8);
static_assert(offsetof(FGetNumElementsInCollectionGroupDataflowNode, GroupName) == 0x0198);
static_assert(offsetof(FGetNumElementsInCollectionGroupDataflowNode, CustomGroupName) == 0x01A0);
static_assert(offsetof(FGetCollectionAttributeDataTypedDataflowNode, Collection) == 0x00E8);
static_assert(offsetof(FGetCollectionAttributeDataTypedDataflowNode, GroupName) == 0x0198);
static_assert(offsetof(FGetCollectionAttributeDataTypedDataflowNode, CustomGroupName) == 0x01A0);
static_assert(offsetof(FGetCollectionAttributeDataTypedDataflowNode, AttrName) == 0x01B0);
static_assert(offsetof(FGetCollectionAttributeDataTypedDataflowNode, BoolAttributeData) == 0x01C0);
static_assert(offsetof(FGetCollectionAttributeDataTypedDataflowNode, FloatAttributeData) == 0x01D0);
static_assert(offsetof(FGetCollectionAttributeDataTypedDataflowNode, DoubleAttributeData) == 0x01E0);
static_assert(offsetof(FGetCollectionAttributeDataTypedDataflowNode, Int32AttributeData) == 0x01F0);
static_assert(offsetof(FGetCollectionAttributeDataTypedDataflowNode, StringAttributeData) == 0x0200);
static_assert(offsetof(FGetCollectionAttributeDataTypedDataflowNode, Vector3fAttributeData) == 0x0210);
static_assert(offsetof(FGetCollectionAttributeDataTypedDataflowNode, Vector3dAttributeData) == 0x0220);
static_assert(offsetof(FSetCollectionAttributeDataTypedDataflowNode, Collection) == 0x00E8);
static_assert(offsetof(FSetCollectionAttributeDataTypedDataflowNode, GroupName) == 0x0198);
static_assert(offsetof(FSetCollectionAttributeDataTypedDataflowNode, CustomGroupName) == 0x01A0);
static_assert(offsetof(FSetCollectionAttributeDataTypedDataflowNode, AttrName) == 0x01B0);
static_assert(offsetof(FSetCollectionAttributeDataTypedDataflowNode, BoolAttributeData) == 0x01C0);
static_assert(offsetof(FSetCollectionAttributeDataTypedDataflowNode, FloatAttributeData) == 0x01D0);
static_assert(offsetof(FSetCollectionAttributeDataTypedDataflowNode, DoubleAttributeData) == 0x01E0);
static_assert(offsetof(FSetCollectionAttributeDataTypedDataflowNode, Int32AttributeData) == 0x01F0);
static_assert(offsetof(FSetCollectionAttributeDataTypedDataflowNode, StringAttributeData) == 0x0200);
static_assert(offsetof(FSetCollectionAttributeDataTypedDataflowNode, Vector3fAttributeData) == 0x0210);
static_assert(offsetof(FSetCollectionAttributeDataTypedDataflowNode, Vector3dAttributeData) == 0x0220);
static_assert(offsetof(FSetVertexColorInCollectionFromVertexSelectionDataflowNode, Collection) == 0x00E8);
static_assert(offsetof(FSetVertexColorInCollectionFromVertexSelectionDataflowNode, VertexSelection) == 0x0198);
static_assert(offsetof(FSetVertexColorInCollectionFromVertexSelectionDataflowNode, SelectedColor) == 0x01B8);
static_assert(offsetof(FSetVertexColorInCollectionFromVertexSelectionDataflowNode, NonSelectedColor) == 0x01C8);
static_assert(offsetof(FSelectionToVertexListDataflowNode, VertexSelection) == 0x00E8);
static_assert(offsetof(FSelectionToVertexListDataflowNode, VertexList) == 0x0108);
static_assert(offsetof(FSetVertexColorInCollectionFromFloatArrayDataflowNode, Collection) == 0x00E8);
static_assert(offsetof(FSetVertexColorInCollectionFromFloatArrayDataflowNode, FloatArray) == 0x0198);
static_assert(offsetof(FMultiplyTransformDataflowNode, InLeftTransform) == 0x00F0);
static_assert(offsetof(FMultiplyTransformDataflowNode, InRightTransform) == 0x0150);
static_assert(offsetof(FMultiplyTransformDataflowNode, OutTransform) == 0x01B0);
static_assert(offsetof(FInvertTransformDataflowNode, InTransform) == 0x00F0);
static_assert(offsetof(FInvertTransformDataflowNode, OutTransform) == 0x0150);
static_assert(offsetof(FGetStringOverrideFromAssetDataflowNode, String) == 0x0108);
static_assert(offsetof(FGetStringOverrideFromAssetDataflowNode, StringDefault) == 0x0118);
static_assert(offsetof(FCollectionTransformSelectionAllDataflowNode, Collection) == 0x00E8);
static_assert(offsetof(FCollectionTransformSelectionAllDataflowNode, TransformSelection) == 0x0198);
static_assert(offsetof(FCollectionTransformSelectionSetOperationDataflowNode, Operation) == 0x00E8);
static_assert(offsetof(FCollectionTransformSelectionSetOperationDataflowNode, TransformSelectionA) == 0x00F0);
static_assert(offsetof(FCollectionTransformSelectionSetOperationDataflowNode, TransformSelectionB) == 0x0110);
static_assert(offsetof(FCollectionTransformSelectionSetOperationDataflowNode, TransformSelection) == 0x0130);
static_assert(offsetof(FCollectionTransformSelectionInfoDataflowNode, TransformSelection) == 0x00E8);
static_assert(offsetof(FCollectionTransformSelectionInfoDataflowNode, Collection) == 0x0108);
static_assert(offsetof(FCollectionTransformSelectionInfoDataflowNode, String) == 0x01B8);
static_assert(offsetof(FCollectionTransformSelectionNoneDataflowNode, Collection) == 0x00E8);
static_assert(offsetof(FCollectionTransformSelectionNoneDataflowNode, TransformSelection) == 0x0198);
static_assert(offsetof(FCollectionTransformSelectionInvertDataflowNode, TransformSelection) == 0x00E8);
static_assert(offsetof(FCollectionTransformSelectionRandomDataflowNode, Collection) == 0x00F8);
static_assert(offsetof(FCollectionTransformSelectionRandomDataflowNode, TransformSelection) == 0x01A8);
static_assert(offsetof(FCollectionTransformSelectionRootDataflowNode, Collection) == 0x00E8);
static_assert(offsetof(FCollectionTransformSelectionRootDataflowNode, TransformSelection) == 0x0198);
static_assert(offsetof(FCollectionTransformSelectionCustomDataflowNode, Collection) == 0x00E8);
static_assert(offsetof(FCollectionTransformSelectionCustomDataflowNode, BoneIndicies) == 0x0198);
static_assert(offsetof(FCollectionTransformSelectionCustomDataflowNode, TransformSelection) == 0x01A8);
static_assert(offsetof(FCollectionTransformSelectionFromIndexArrayDataflowNode, Collection) == 0x00E8);
static_assert(offsetof(FCollectionTransformSelectionFromIndexArrayDataflowNode, BoneIndices) == 0x0198);
static_assert(offsetof(FCollectionTransformSelectionFromIndexArrayDataflowNode, TransformSelection) == 0x01A8);
static_assert(offsetof(FCollectionTransformSelectionParentDataflowNode, TransformSelection) == 0x00E8);
static_assert(offsetof(FCollectionTransformSelectionParentDataflowNode, Collection) == 0x0108);
static_assert(offsetof(FCollectionTransformSelectionByPercentageDataflowNode, TransformSelection) == 0x00E8);
static_assert(offsetof(FCollectionTransformSelectionChildrenDataflowNode, TransformSelection) == 0x00E8);
static_assert(offsetof(FCollectionTransformSelectionChildrenDataflowNode, Collection) == 0x0108);
static_assert(offsetof(FCollectionTransformSelectionSiblingsDataflowNode, TransformSelection) == 0x00E8);
static_assert(offsetof(FCollectionTransformSelectionSiblingsDataflowNode, Collection) == 0x0108);
static_assert(offsetof(FCollectionTransformSelectionLevelDataflowNode, TransformSelection) == 0x00E8);
static_assert(offsetof(FCollectionTransformSelectionLevelDataflowNode, Collection) == 0x0108);
static_assert(offsetof(FCollectionTransformSelectionTargetLevelDataflowNode, Collection) == 0x00E8);
static_assert(offsetof(FCollectionTransformSelectionTargetLevelDataflowNode, TransformSelection) == 0x01A0);
static_assert(offsetof(FCollectionTransformSelectionContactDataflowNode, TransformSelection) == 0x00E8);
static_assert(offsetof(FCollectionTransformSelectionContactDataflowNode, Collection) == 0x0108);
static_assert(offsetof(FCollectionTransformSelectionLeafDataflowNode, Collection) == 0x00E8);
static_assert(offsetof(FCollectionTransformSelectionLeafDataflowNode, TransformSelection) == 0x0198);
static_assert(offsetof(FCollectionTransformSelectionClusterDataflowNode, Collection) == 0x00E8);
static_assert(offsetof(FCollectionTransformSelectionClusterDataflowNode, TransformSelection) == 0x0198);
static_assert(offsetof(FSelectFloatArrayIndicesInRangeDataflowNode, Values) == 0x00E8);
static_assert(offsetof(FSelectFloatArrayIndicesInRangeDataflowNode, RangeSetting) == 0x0100);
static_assert(offsetof(FSelectFloatArrayIndicesInRangeDataflowNode, Indices) == 0x0108);
static_assert(offsetof(FCollectionTransformSelectionBySizeDataflowNode, Collection) == 0x00E8);
static_assert(offsetof(FCollectionTransformSelectionBySizeDataflowNode, RangeSetting) == 0x01A0);
static_assert(offsetof(FCollectionTransformSelectionBySizeDataflowNode, TransformSelection) == 0x01A8);
static_assert(offsetof(FCollectionTransformSelectionByVolumeDataflowNode, Collection) == 0x00E8);
static_assert(offsetof(FCollectionTransformSelectionByVolumeDataflowNode, RangeSetting) == 0x01A0);
static_assert(offsetof(FCollectionTransformSelectionByVolumeDataflowNode, TransformSelection) == 0x01A8);
static_assert(offsetof(FCollectionTransformSelectionInBoxDataflowNode, Collection) == 0x00E8);
static_assert(offsetof(FCollectionTransformSelectionInBoxDataflowNode, Box) == 0x0198);
static_assert(offsetof(FCollectionTransformSelectionInBoxDataflowNode, Transform) == 0x01D0);
static_assert(offsetof(FCollectionTransformSelectionInBoxDataflowNode, Type) == 0x0230);
static_assert(offsetof(FCollectionTransformSelectionInBoxDataflowNode, TransformSelection) == 0x0238);
static_assert(offsetof(FCollectionTransformSelectionInSphereDataflowNode, Collection) == 0x00E8);
static_assert(offsetof(FCollectionTransformSelectionInSphereDataflowNode, Sphere) == 0x0198);
static_assert(offsetof(FCollectionTransformSelectionInSphereDataflowNode, Transform) == 0x01C0);
static_assert(offsetof(FCollectionTransformSelectionInSphereDataflowNode, Type) == 0x0220);
static_assert(offsetof(FCollectionTransformSelectionInSphereDataflowNode, TransformSelection) == 0x0228);
static_assert(offsetof(FCollectionTransformSelectionByFloatAttrDataflowNode, Collection) == 0x00E8);
static_assert(offsetof(FCollectionTransformSelectionByFloatAttrDataflowNode, GroupName) == 0x0198);
static_assert(offsetof(FCollectionTransformSelectionByFloatAttrDataflowNode, AttrName) == 0x01A8);
static_assert(offsetof(FCollectionTransformSelectionByFloatAttrDataflowNode, RangeSetting) == 0x01C0);
static_assert(offsetof(FCollectionTransformSelectionByFloatAttrDataflowNode, TransformSelection) == 0x01C8);
static_assert(offsetof(FCollectionTransformSelectionByIntAttrDataflowNode, Collection) == 0x00E8);
static_assert(offsetof(FCollectionTransformSelectionByIntAttrDataflowNode, GroupName) == 0x0198);
static_assert(offsetof(FCollectionTransformSelectionByIntAttrDataflowNode, AttrName) == 0x01A8);
static_assert(offsetof(FCollectionTransformSelectionByIntAttrDataflowNode, RangeSetting) == 0x01C0);
static_assert(offsetof(FCollectionTransformSelectionByIntAttrDataflowNode, TransformSelection) == 0x01C8);
static_assert(offsetof(FCollectionVertexSelectionCustomDataflowNode, Collection) == 0x00E8);
static_assert(offsetof(FCollectionVertexSelectionCustomDataflowNode, VertexIndicies) == 0x0198);
static_assert(offsetof(FCollectionVertexSelectionCustomDataflowNode, VertexSelection) == 0x01A8);
static_assert(offsetof(FCollectionFaceSelectionCustomDataflowNode, Collection) == 0x00E8);
static_assert(offsetof(FCollectionFaceSelectionCustomDataflowNode, FaceIndicies) == 0x0198);
static_assert(offsetof(FCollectionFaceSelectionCustomDataflowNode, FaceSelection) == 0x01A8);
static_assert(offsetof(FCollectionSelectionConvertDataflowNode, Collection) == 0x00E8);
static_assert(offsetof(FCollectionSelectionConvertDataflowNode, TransformSelection) == 0x0198);
static_assert(offsetof(FCollectionSelectionConvertDataflowNode, FaceSelection) == 0x01B8);
static_assert(offsetof(FCollectionSelectionConvertDataflowNode, VertexSelection) == 0x01D8);
static_assert(offsetof(FCollectionFaceSelectionInvertDataflowNode, FaceSelection) == 0x00E8);
static_assert(offsetof(FCollectionVertexSelectionByPercentageDataflowNode, VertexSelection) == 0x00E8);
static_assert(offsetof(FCollectionVertexSelectionSetOperationDataflowNode, Operation) == 0x00E8);
static_assert(offsetof(FCollectionVertexSelectionSetOperationDataflowNode, VertexSelectionA) == 0x00F0);
static_assert(offsetof(FCollectionVertexSelectionSetOperationDataflowNode, VertexSelectionB) == 0x0110);
static_assert(offsetof(FCollectionVertexSelectionSetOperationDataflowNode, VertexSelection) == 0x0130);
static_assert(offsetof(FGeometryCollectionVertexScalarToVertexIndicesNode, Collection) == 0x00E8);
static_assert(offsetof(FGeometryCollectionVertexScalarToVertexIndicesNode, VertexAttributeName) == 0x0198);
static_assert(offsetof(FGeometryCollectionVertexScalarToVertexIndicesNode, Indices) == 0x01B0);
static_assert(offsetof(FTransformCollectionAttributeDataflowNode, Collection) == 0x00E8);
static_assert(offsetof(FTransformCollectionAttributeDataflowNode, TransformIn) == 0x01A0);
static_assert(offsetof(FTransformCollectionAttributeDataflowNode, LocalTransform) == 0x0200);
static_assert(offsetof(FTransformCollectionAttributeDataflowNode, GroupName) == 0x0260);
static_assert(offsetof(FTransformCollectionAttributeDataflowNode, AttributeName) == 0x0270);
