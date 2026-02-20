
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Enum /Script/InterchangeCore.EInterchangeFactoryAssetType
/// Size: 0x01 (1 bytes)
enum class EInterchangeFactoryAssetType : uint8_t
{
	EInterchangeFactoryAssetType__None                                               = 0,
	EInterchangeFactoryAssetType__Textures                                           = 1,
	EInterchangeFactoryAssetType__Materials                                          = 2,
	EInterchangeFactoryAssetType__Meshes                                             = 3,
	EInterchangeFactoryAssetType__Animations                                         = 4,
	EInterchangeFactoryAssetType__Physics                                            = 5
};

/// Enum /Script/InterchangeCore.EInterchangePipelineTask
/// Size: 0x01 (1 bytes)
enum class EInterchangePipelineTask : uint8_t
{
	EInterchangePipelineTask__PostTranslator                                         = 0,
	EInterchangePipelineTask__PostFactory                                            = 1,
	EInterchangePipelineTask__PostImport                                             = 2,
	EInterchangePipelineTask__Export                                                 = 3
};

/// Enum /Script/InterchangeCore.EInterchangePipelineContext
/// Size: 0x01 (1 bytes)
enum class EInterchangePipelineContext : uint8_t
{
	EInterchangePipelineContext__None                                                = 0,
	EInterchangePipelineContext__AssetImport                                         = 1,
	EInterchangePipelineContext__AssetReimport                                       = 2,
	EInterchangePipelineContext__SceneImport                                         = 3,
	EInterchangePipelineContext__SceneReimport                                       = 4,
	EInterchangePipelineContext__AssetCustomLODImport                                = 5,
	EInterchangePipelineContext__AssetCustomLODReimport                              = 6,
	EInterchangePipelineContext__AssetAlternateSkinningImport                        = 7,
	EInterchangePipelineContext__AssetAlternateSkinningReimport                      = 8
};

/// Enum /Script/InterchangeCore.EInterchangeResultType
/// Size: 0x01 (1 bytes)
enum class EInterchangeResultType : uint8_t
{
	EInterchangeResultType__Success                                                  = 0,
	EInterchangeResultType__Warning                                                  = 1,
	EInterchangeResultType__Error                                                    = 2
};

/// Enum /Script/InterchangeCore.EInterchangeTranslatorType
/// Size: 0x01 (1 bytes)
enum class EInterchangeTranslatorType : uint8_t
{
	EInterchangeTranslatorType__Invalid                                              = 0,
	EInterchangeTranslatorType__Assets                                               = 2,
	EInterchangeTranslatorType__Actors                                               = 4,
	EInterchangeTranslatorType__Scenes                                               = 6
};

/// Enum /Script/InterchangeCore.EInterchangeTranslatorAssetType
/// Size: 0x01 (1 bytes)
enum class EInterchangeTranslatorAssetType : uint8_t
{
	EInterchangeTranslatorAssetType__None                                            = 0,
	EInterchangeTranslatorAssetType__Textures                                        = 1,
	EInterchangeTranslatorAssetType__Materials                                       = 2,
	EInterchangeTranslatorAssetType__Meshes                                          = 4,
	EInterchangeTranslatorAssetType__Animations                                      = 8
};

/// Enum /Script/InterchangeCore.EInterchangeNodeContainerType
/// Size: 0x01 (1 bytes)
enum class EInterchangeNodeContainerType : uint8_t
{
	EInterchangeNodeContainerType__None                                              = 0,
	EInterchangeNodeContainerType__TranslatedScene                                   = 1,
	EInterchangeNodeContainerType__TranslatedAsset                                   = 2,
	EInterchangeNodeContainerType__FactoryData                                       = 3
};

/// Enum /Script/InterchangeCore.EInterchangeNodeUserInterfaceContext
/// Size: 0x01 (1 bytes)
enum class EInterchangeNodeUserInterfaceContext : uint8_t
{
	EInterchangeNodeUserInterfaceContext__None                                       = 0,
	EInterchangeNodeUserInterfaceContext__Preview                                    = 1
};

/// Enum /Script/InterchangeCore.EReimportStrategyFlags
/// Size: 0x01 (1 bytes)
enum class EReimportStrategyFlags : uint8_t
{
	EReimportStrategyFlags__ApplyNoProperties                                        = 0,
	EReimportStrategyFlags__ApplyPipelineProperties                                  = 1,
	EReimportStrategyFlags__ApplyEditorChangedProperties                             = 2
};

/// Class /Script/InterchangeCore.InterchangeFactoryBase
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UInterchangeFactoryBase : public UObject
{ 
public:
	class UInterchangeResultsContainer*                Results;                                                    // 0x0028   (0x0008)  


	/// Functions
	// Function /Script/InterchangeCore.InterchangeFactoryBase.GetFactoryClass
	// class UClass* GetFactoryClass();                                                                                         // [0x560e680] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeCore.InterchangeSourceData
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000050) align 8 MaxSize: 0x0050
class UInterchangeSourceData : public UObject
{ 
public:
	FString                                            Filename;                                                   // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0038   (0x0018)  MISSED


	/// Functions
	// Function /Script/InterchangeCore.InterchangeSourceData.SetFilename
	// bool SetFilename(FString InFilename);                                                                                    // [0x87fd210] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeSourceData.GetFilename
	// FString GetFilename();                                                                                                   // [0x87f8c20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeCore.InterchangeWriterBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UInterchangeWriterBase : public UObject
{ 
public:
};

/// Struct /Script/InterchangeCore.InterchangePipelinePropertyStatePerContext
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FInterchangePipelinePropertyStatePerContext
{ 
	bool                                               bVisible;                                                   // 0x0000   (0x0001)  
};

/// Struct /Script/InterchangeCore.InterchangePipelinePropertyStates
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 1 MaxSize: 0x0004
struct FInterchangePipelinePropertyStates
{ 
	bool                                               bLocked;                                                    // 0x0000   (0x0001)  
	FInterchangePipelinePropertyStatePerContext        BasicLayoutStates;                                          // 0x0001   (0x0001)  
	FInterchangePipelinePropertyStatePerContext        ImportStates;                                               // 0x0002   (0x0001)  
	FInterchangePipelinePropertyStatePerContext        ReimportStates;                                             // 0x0003   (0x0001)  
};

/// Class /Script/InterchangeCore.InterchangePipelineBase
/// Size: 0x0108 (264 bytes) (0x000028 - 0x000108) align 8 MaxSize: 0x0108
class UInterchangePipelineBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x18];                                      // 0x0028   (0x0018)  MISSED
	class UInterchangeResultsContainer*                Results;                                                    // 0x0040   (0x0008)  
	TMap<FName, FInterchangePipelinePropertyStates>    PropertiesStates;                                           // 0x0048   (0x0050)  
	unsigned char                                      UnknownData01_7[0x70];                                      // 0x0098   (0x0070)  MISSED


	/// Functions
	// Function /Script/InterchangeCore.InterchangePipelineBase.ScriptedSetReimportSourceIndex
	// void ScriptedSetReimportSourceIndex(class UClass* ReimportObjectClass, int32_t SourceFileIndex);                         // [0x87fc160] RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/InterchangeCore.InterchangePipelineBase.ScriptedGetPipelineDisplayName
	// FString ScriptedGetPipelineDisplayName();                                                                                // [0x87fc0d0] RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangePipelineBase.ScriptedExecutePostImportPipeline
	// void ScriptedExecutePostImportPipeline(class UInterchangeBaseNodeContainer* BaseNodeContainer, FString FactoryNodeKey, class UObject* CreatedAsset, bool bIsAReimport); // [0x87fbf60] RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/InterchangeCore.InterchangePipelineBase.ScriptedExecutePostFactoryPipeline
	// void ScriptedExecutePostFactoryPipeline(class UInterchangeBaseNodeContainer* BaseNodeContainer, FString FactoryNodeKey, class UObject* CreatedAsset, bool bIsAReimport); // [0x87fbdf0] RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/InterchangeCore.InterchangePipelineBase.ScriptedExecutePipeline
	// void ScriptedExecutePipeline(class UInterchangeBaseNodeContainer* BaseNodeContainer, TArray<UInterchangeSourceData*>& SourceDatas, FString ContentBasePath); // [0x87fbc90] RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/InterchangeCore.InterchangePipelineBase.ScriptedExecuteExportPipeline
	// void ScriptedExecuteExportPipeline(class UInterchangeBaseNodeContainer* BaseNodeContainer);                              // [0x87fbc00] RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/InterchangeCore.InterchangePipelineBase.FindOrAddPropertyStates
	// FInterchangePipelinePropertyStates FindOrAddPropertyStates(FName PropertyPath);                                          // [0x87f77f0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangePipelineBase.DoesPropertyStatesExist
	// bool DoesPropertyStatesExist(FName PropertyPath);                                                                        // [0x87f75f0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeCore.InterchangeResult
/// Size: 0x0070 (112 bytes) (0x000028 - 0x000070) align 8 MaxSize: 0x0070
class UInterchangeResult : public UObject
{ 
public:
	FString                                            SourceAssetName;                                            // 0x0028   (0x0010)  
	FString                                            DestinationAssetName;                                       // 0x0038   (0x0010)  
	FString                                            AssetFriendlyName;                                          // 0x0048   (0x0010)  
	class UClass*                                      AssetType;                                                  // 0x0058   (0x0008)  
	FString                                            InterchangeKey;                                             // 0x0060   (0x0010)  
};

/// Class /Script/InterchangeCore.InterchangeResultSuccess
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UInterchangeResultSuccess : public UInterchangeResult
{ 
public:
};

/// Class /Script/InterchangeCore.InterchangeResultWarning
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UInterchangeResultWarning : public UInterchangeResult
{ 
public:
};

/// Class /Script/InterchangeCore.InterchangeResultError
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UInterchangeResultError : public UInterchangeResult
{ 
public:
};

/// Class /Script/InterchangeCore.InterchangeResultWarning_Generic
/// Size: 0x0080 (128 bytes) (0x000070 - 0x000080) align 8 MaxSize: 0x0080
class UInterchangeResultWarning_Generic : public UInterchangeResultWarning
{ 
public:
	FText                                              Text;                                                       // 0x0070   (0x0018)  
};

/// Class /Script/InterchangeCore.InterchangeResultError_Generic
/// Size: 0x0080 (128 bytes) (0x000070 - 0x000080) align 8 MaxSize: 0x0080
class UInterchangeResultError_Generic : public UInterchangeResultError
{ 
public:
	FText                                              Text;                                                       // 0x0070   (0x0018)  
};

/// Class /Script/InterchangeCore.InterchangeResultError_ReimportFail
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UInterchangeResultError_ReimportFail : public UInterchangeResultError
{ 
public:
};

/// Class /Script/InterchangeCore.InterchangeResultDisplay_Generic
/// Size: 0x0080 (128 bytes) (0x000070 - 0x000080) align 8 MaxSize: 0x0080
class UInterchangeResultDisplay_Generic : public UInterchangeResultSuccess
{ 
public:
	FText                                              Text;                                                       // 0x0070   (0x0018)  
};

/// Class /Script/InterchangeCore.InterchangeResultsContainer
/// Size: 0x0060 (96 bytes) (0x000028 - 0x000060) align 8 MaxSize: 0x0060
class UInterchangeResultsContainer : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x28];                                      // 0x0028   (0x0028)  MISSED
	TArray<class UInterchangeResult*>                  Results;                                                    // 0x0050   (0x0010)  
};

/// Class /Script/InterchangeCore.InterchangeTranslatorSettings
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UInterchangeTranslatorSettings : public UObject
{ 
public:
};

/// Class /Script/InterchangeCore.InterchangeTranslatorBase
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UInterchangeTranslatorBase : public UObject
{ 
public:
	class UInterchangeResultsContainer*                Results;                                                    // 0x0028   (0x0008)  
	class UInterchangeSourceData*                      SourceData;                                                 // 0x0030   (0x0008)  
};

/// Class /Script/InterchangeCore.InterchangeBaseNode
/// Size: 0x0060 (96 bytes) (0x000028 - 0x000060) align 8 MaxSize: 0x0060
class UInterchangeBaseNode : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0028   (0x0038)  MISSED


	/// Functions
	// Function /Script/InterchangeCore.InterchangeBaseNode.SetParentUid
	// bool SetParentUid(FString ParentUid);                                                                                    // [0x87fd4f0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNode.SetEnabled
	// bool SetEnabled(bool bIsEnabled);                                                                                        // [0x87fd100] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNode.SetDisplayLabel
	// bool SetDisplayLabel(FString DisplayName);                                                                               // [0x87fd050] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNode.SetAssetName
	// bool SetAssetName(FString AssetName);                                                                                    // [0x87fc230] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNode.RemoveTargetNodeUid
	// bool RemoveTargetNodeUid(FString AssetUid);                                                                              // [0x87fb440] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNode.RemoveAttribute
	// bool RemoveAttribute(FString NodeAttributeKey);                                                                          // [0x87fb220] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNode.IsEnabled
	// bool IsEnabled();                                                                                                        // [0x87faf00] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNode.InitializeNode
	// void InitializeNode(FString UniqueID, FString DisplayLabel, EInterchangeNodeContainerType NodeContainerType);            // [0x87facc0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNode.GetVector2Attribute
	// bool GetVector2Attribute(FString NodeAttributeKey, FVector2f& OutValue);                                                 // [0x87faab0] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNode.GetUniqueID
	// FString GetUniqueID();                                                                                                   // [0x87f9df0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNode.GetTargetNodeUids
	// void GetTargetNodeUids(TArray<FString>& OutTargetAssets);                                                                // [0x87f9d20] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNode.GetTargetNodeCount
	// int32_t GetTargetNodeCount();                                                                                            // [0x87f9cf0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNode.GetStringAttribute
	// bool GetStringAttribute(FString NodeAttributeKey, FString& OutValue);                                                    // [0x87f9be0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNode.GetParentUid
	// FString GetParentUid();                                                                                                  // [0x87f9a20] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNode.GetNodeContainerType
	// EInterchangeNodeContainerType GetNodeContainerType();                                                                    // [0x87f97a0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNode.GetLinearColorAttribute
	// bool GetLinearColorAttribute(FString NodeAttributeKey, FLinearColor& OutValue);                                          // [0x87f9220] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNode.GetInt32Attribute
	// bool GetInt32Attribute(FString NodeAttributeKey, int32_t& OutValue);                                                     // [0x87f9000] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNode.GetGuidAttribute
	// bool GetGuidAttribute(FString NodeAttributeKey, FGuid& OutValue);                                                        // [0x87f8f00] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNode.GetFloatAttribute
	// bool GetFloatAttribute(FString NodeAttributeKey, float& OutValue);                                                       // [0x87f8ce0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNode.GetDoubleAttribute
	// bool GetDoubleAttribute(FString NodeAttributeKey, double& OutValue);                                                     // [0x87f86a0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNode.GetDisplayLabel
	// FString GetDisplayLabel();                                                                                               // [0x87f85d0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNode.GetBooleanAttribute
	// bool GetBooleanAttribute(FString NodeAttributeKey, bool& OutValue);                                                      // [0x87f7920] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNode.GetAssetName
	// FString GetAssetName();                                                                                                  // [0x87f78a0] RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNode.AddVector2Attribute
	// bool AddVector2Attribute(FString NodeAttributeKey, FVector2f& Value);                                                    // [0x87f67c0] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNode.AddTargetNodeUid
	// bool AddTargetNodeUid(FString AssetUid);                                                                                 // [0x87f6710] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNode.AddStringAttribute
	// bool AddStringAttribute(FString NodeAttributeKey, FString Value);                                                        // [0x87f6610] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNode.AddLinearColorAttribute
	// bool AddLinearColorAttribute(FString NodeAttributeKey, FLinearColor& Value);                                             // [0x87f6280] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNode.AddInt32Attribute
	// bool AddInt32Attribute(FString NodeAttributeKey, int32_t& Value);                                                        // [0x87f6180] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNode.AddGuidAttribute
	// bool AddGuidAttribute(FString NodeAttributeKey, FGuid& Value);                                                           // [0x87f6080] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNode.AddFloatAttribute
	// bool AddFloatAttribute(FString NodeAttributeKey, float& Value);                                                          // [0x87f5f80] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNode.AddDoubleAttribute
	// bool AddDoubleAttribute(FString NodeAttributeKey, double& Value);                                                        // [0x87f5dd0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNode.AddBooleanAttribute
	// bool AddBooleanAttribute(FString NodeAttributeKey, bool& Value);                                                         // [0x87f5cd0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/InterchangeCore.InterchangeBaseNodeContainer
/// Size: 0x00C8 (200 bytes) (0x000028 - 0x0000C8) align 8 MaxSize: 0x00C8
class UInterchangeBaseNodeContainer : public UObject
{ 
public:
	TMap<FString, class UInterchangeBaseNode*>         Nodes;                                                      // 0x0028   (0x0050)  
	unsigned char                                      UnknownData00_7[0x50];                                      // 0x0078   (0x0050)  MISSED


	/// Functions
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.SetNodeParentUid
	// bool SetNodeParentUid(FString NodeUniqueID, FString NewParentNodeUid);                                                   // [0x87fd3f0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.SaveToFile
	// void SaveToFile(FString Filename);                                                                                       // [0x87fba90] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.ResetChildrenCache
	// void ResetChildrenCache();                                                                                               // [0x87fba70] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.Reset
	// void Reset();                                                                                                            // [0x87fba30] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.ReplaceNode
	// void ReplaceNode(FString NodeUniqueID, class UInterchangeFactoryBaseNode* NewNode);                                      // [0x87fb710] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.LoadFromFile
	// void LoadFromFile(FString Filename);                                                                                     // [0x87fb100] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.IsNodeUidValid
	// bool IsNodeUidValid(FString NodeUniqueID);                                                                               // [0x87faff0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.GetRoots
	// void GetRoots(TArray<FString>& RootNodes);                                                                               // [0x87f9b10] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.GetNodes
	// void GetNodes(class UClass* ClassNode, TArray<FString>& OutNodes);                                                       // [0x87f9890] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.GetNodeChildrenUids
	// TArray<FString> GetNodeChildrenUids(FString NodeUniqueID);                                                               // [0x87f9650] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.GetNodeChildrenCount
	// int32_t GetNodeChildrenCount(FString NodeUniqueID);                                                                      // [0x87f9560] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.GetNodeChildren
	// class UInterchangeBaseNode* GetNodeChildren(FString NodeUniqueID, int32_t ChildIndex);                                   // [0x87f9470] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.GetNode
	// class UInterchangeBaseNode* GetNode(FString NodeUniqueID);                                                               // [0x87f9320] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.GetFactoryNode
	// class UInterchangeFactoryBaseNode* GetFactoryNode(FString NodeUniqueID);                                                 // [0x87f8ab0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.ComputeChildrenCache
	// void ComputeChildrenCache();                                                                                             // [0x87f68c0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.AddNode
	// FString AddNode(class UInterchangeBaseNode* Node);                                                                       // [0x87f6380] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/InterchangeCore.InterchangeFactoryBaseNode
/// Size: 0x0140 (320 bytes) (0x000060 - 0x000140) align 8 MaxSize: 0x0140
class UInterchangeFactoryBaseNode : public UInterchangeBaseNode
{ 
public:
	unsigned char                                      UnknownData00_1[0xE0];                                      // 0x0060   (0x00E0)  MISSED


	/// Functions
	// Function /Script/InterchangeCore.InterchangeFactoryBaseNode.UnsetSkipNodeImport
	// bool UnsetSkipNodeImport();                                                                                              // [0x87fd9e0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeFactoryBaseNode.UnsetForceNodeReimport
	// bool UnsetForceNodeReimport();                                                                                           // [0x87fd8f0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeFactoryBaseNode.ShouldSkipNodeImport
	// bool ShouldSkipNodeImport();                                                                                             // [0x87fd840] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeFactoryBaseNode.ShouldForceNodeReimport
	// bool ShouldForceNodeReimport();                                                                                          // [0x87fd790] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeFactoryBaseNode.SetSkipNodeImport
	// bool SetSkipNodeImport();                                                                                                // [0x87fd6c0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeFactoryBaseNode.SetReimportStrategyFlags
	// bool SetReimportStrategyFlags(EReimportStrategyFlags& ReimportStrategyFlags);                                            // [0x87fd5a0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeFactoryBaseNode.SetForceNodeReimport
	// bool SetForceNodeReimport();                                                                                             // [0x87fd320] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeFactoryBaseNode.SetCustomSubPath
	// bool SetCustomSubPath(FString AttributeValue);                                                                           // [0x87fced0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeFactoryBaseNode.SetCustomReferenceObject
	// bool SetCustomReferenceObject(FSoftObjectPath& AttributeValue);                                                          // [0x87fc760] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeFactoryBaseNode.RemoveFactoryDependencyUid
	// bool RemoveFactoryDependencyUid(FString DependencyUid);                                                                  // [0x87fb390] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeFactoryBaseNode.GetReimportStrategyFlags
	// EReimportStrategyFlags GetReimportStrategyFlags();                                                                       // [0x87f9aa0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeFactoryBaseNode.GetFactoryDependency
	// void GetFactoryDependency(int32_t Index, FString& OutDependency);                                                        // [0x87f89c0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeFactoryBaseNode.GetFactoryDependenciesCount
	// int32_t GetFactoryDependenciesCount();                                                                                   // [0x87f8990] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeFactoryBaseNode.GetFactoryDependencies
	// void GetFactoryDependencies(TArray<FString>& OutDependencies);                                                           // [0x87f88c0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeFactoryBaseNode.GetCustomSubPath
	// bool GetCustomSubPath(FString& AttributeValue);                                                                          // [0x87f83c0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeFactoryBaseNode.GetCustomReferenceObject
	// bool GetCustomReferenceObject(FSoftObjectPath& AttributeValue);                                                          // [0x87f7f20] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeFactoryBaseNode.AddFactoryDependencyUid
	// bool AddFactoryDependencyUid(FString DependencyUid);                                                                     // [0x87f5ed0] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/InterchangeCore.InterchangeSourceNode
/// Size: 0x00D0 (208 bytes) (0x000060 - 0x0000D0) align 8 MaxSize: 0x00D0
class UInterchangeSourceNode : public UInterchangeBaseNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x70];                                      // 0x0060   (0x0070)  MISSED


	/// Functions
	// Function /Script/InterchangeCore.InterchangeSourceNode.SetCustomSourceTimelineStart
	// bool SetCustomSourceTimelineStart(double& AttributeValue);                                                               // [0x87fcd50] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeSourceNode.SetCustomSourceTimelineEnd
	// bool SetCustomSourceTimelineEnd(double& AttributeValue);                                                                 // [0x87fcbd0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeSourceNode.SetCustomSourceFrameRateNumerator
	// bool SetCustomSourceFrameRateNumerator(int32_t& AttributeValue);                                                         // [0x87fca60] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeSourceNode.SetCustomSourceFrameRateDenominator
	// bool SetCustomSourceFrameRateDenominator(int32_t& AttributeValue);                                                       // [0x87fc8f0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeSourceNode.SetCustomImportUnusedMaterial
	// bool SetCustomImportUnusedMaterial(bool& AttributeValue);                                                                // [0x87fc5e0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeSourceNode.SetCustomAnimatedTimeStart
	// bool SetCustomAnimatedTimeStart(double& AttributeValue);                                                                 // [0x87fc460] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeSourceNode.SetCustomAnimatedTimeEnd
	// bool SetCustomAnimatedTimeEnd(double& AttributeValue);                                                                   // [0x87fc2e0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeSourceNode.InitializeSourceNode
	// void InitializeSourceNode(FString UniqueID, FString DisplayLabel);                                                       // [0x87fae00] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeSourceNode.GetCustomSourceTimelineStart
	// bool GetCustomSourceTimelineStart(double& AttributeValue);                                                               // [0x87f82c0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeSourceNode.GetCustomSourceTimelineEnd
	// bool GetCustomSourceTimelineEnd(double& AttributeValue);                                                                 // [0x87f81c0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeSourceNode.GetCustomSourceFrameRateNumerator
	// bool GetCustomSourceFrameRateNumerator(int32_t& AttributeValue);                                                         // [0x87f80d0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeSourceNode.GetCustomSourceFrameRateDenominator
	// bool GetCustomSourceFrameRateDenominator(int32_t& AttributeValue);                                                       // [0x87f7fe0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeSourceNode.GetCustomImportUnusedMaterial
	// bool GetCustomImportUnusedMaterial(bool& AttributeValue);                                                                // [0x87f7d40] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeSourceNode.GetCustomAnimatedTimeStart
	// bool GetCustomAnimatedTimeStart(double& AttributeValue);                                                                 // [0x87f7c40] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeSourceNode.GetCustomAnimatedTimeEnd
	// bool GetCustomAnimatedTimeEnd(double& AttributeValue);                                                                   // [0x87f7b40] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeCore.InterchangeUserDefinedAttributesAPI
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UInterchangeUserDefinedAttributesAPI : public UObject
{ 
public:


	/// Functions
	// Function /Script/InterchangeCore.InterchangeUserDefinedAttributesAPI.RemoveUserDefinedAttribute
	// bool RemoveUserDefinedAttribute(class UInterchangeBaseNode* InterchangeNode, FString UserDefinedAttributeName);          // [0x87fb4f0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeUserDefinedAttributesAPI.GetUserDefinedAttributeInfos
	// void GetUserDefinedAttributeInfos(class UInterchangeBaseNode* InterchangeNode, TArray<FInterchangeUserDefinedAttributeInfo>& UserDefinedAttributeInfos); // [0x87f9ec0] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeUserDefinedAttributesAPI.GetUserDefinedAttribute_Int32
	// bool GetUserDefinedAttribute_Int32(class UInterchangeBaseNode* InterchangeNode, FString UserDefinedAttributeName, int32_t& OutValue, FString& OutPayloadKey); // [0x87fa8c0] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeUserDefinedAttributesAPI.GetUserDefinedAttribute_FString
	// bool GetUserDefinedAttribute_FString(class UInterchangeBaseNode* InterchangeNode, FString UserDefinedAttributeName, FString& OutValue, FString& OutPayloadKey); // [0x87fa4c0] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeUserDefinedAttributesAPI.GetUserDefinedAttribute_Float
	// bool GetUserDefinedAttribute_Float(class UInterchangeBaseNode* InterchangeNode, FString UserDefinedAttributeName, float& OutValue, FString& OutPayloadKey); // [0x87fa6d0] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeUserDefinedAttributesAPI.GetUserDefinedAttribute_Double
	// bool GetUserDefinedAttribute_Double(class UInterchangeBaseNode* InterchangeNode, FString UserDefinedAttributeName, double& OutValue, FString& OutPayloadKey); // [0x87fa2c0] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeUserDefinedAttributesAPI.GetUserDefinedAttribute_Boolean
	// bool GetUserDefinedAttribute_Boolean(class UInterchangeBaseNode* InterchangeNode, FString UserDefinedAttributeName, bool& OutValue, FString& OutPayloadKey); // [0x87fa0d0] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeUserDefinedAttributesAPI.DuplicateAllUserDefinedAttribute
	// void DuplicateAllUserDefinedAttribute(class UInterchangeBaseNode* InterchangeSourceNode, class UInterchangeBaseNode* InterchangeDestinationNode, bool bAddSourceNodeName); // [0x87f76f0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeUserDefinedAttributesAPI.CreateUserDefinedAttribute_Int32
	// bool CreateUserDefinedAttribute_Int32(class UInterchangeBaseNode* InterchangeNode, FString UserDefinedAttributeName, int32_t& Value, FString PayloadKey, bool RequiresDelegate); // [0x87f7350] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeUserDefinedAttributesAPI.CreateUserDefinedAttribute_FString
	// bool CreateUserDefinedAttribute_FString(class UInterchangeBaseNode* InterchangeNode, FString UserDefinedAttributeName, FString Value, FString PayloadKey, bool RequiresDelegate); // [0x87f6e20] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeUserDefinedAttributesAPI.CreateUserDefinedAttribute_Float
	// bool CreateUserDefinedAttribute_Float(class UInterchangeBaseNode* InterchangeNode, FString UserDefinedAttributeName, float& Value, FString PayloadKey, bool RequiresDelegate); // [0x87f70b0] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeUserDefinedAttributesAPI.CreateUserDefinedAttribute_Double
	// bool CreateUserDefinedAttribute_Double(class UInterchangeBaseNode* InterchangeNode, FString UserDefinedAttributeName, double& Value, FString PayloadKey, bool RequiresDelegate); // [0x87f6b80] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeUserDefinedAttributesAPI.CreateUserDefinedAttribute_Boolean
	// bool CreateUserDefinedAttribute_Boolean(class UInterchangeBaseNode* InterchangeNode, FString UserDefinedAttributeName, bool& Value, FString PayloadKey, bool RequiresDelegate); // [0x87f68e0] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/InterchangeCore.InterchangeUserDefinedAttributeInfo
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FInterchangeUserDefinedAttributeInfo
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x0010   (0x0028)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UInterchangeFactoryBase) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UInterchangeSourceData) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(UInterchangeWriterBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FInterchangePipelinePropertyStatePerContext) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FInterchangePipelinePropertyStates) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(UInterchangePipelineBase) == 0x0108); // 264 bytes (0x000028 - 0x000108)
static_assert(sizeof(UInterchangeResult) == 0x0070); // 112 bytes (0x000028 - 0x000070)
static_assert(sizeof(UInterchangeResultSuccess) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UInterchangeResultWarning) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UInterchangeResultError) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UInterchangeResultWarning_Generic) == 0x0080); // 128 bytes (0x000070 - 0x000080)
static_assert(sizeof(UInterchangeResultError_Generic) == 0x0080); // 128 bytes (0x000070 - 0x000080)
static_assert(sizeof(UInterchangeResultError_ReimportFail) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UInterchangeResultDisplay_Generic) == 0x0080); // 128 bytes (0x000070 - 0x000080)
static_assert(sizeof(UInterchangeResultsContainer) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(UInterchangeTranslatorSettings) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UInterchangeTranslatorBase) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UInterchangeBaseNode) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(UInterchangeBaseNodeContainer) == 0x00C8); // 200 bytes (0x000028 - 0x0000C8)
static_assert(sizeof(UInterchangeFactoryBaseNode) == 0x0140); // 320 bytes (0x000060 - 0x000140)
static_assert(sizeof(UInterchangeSourceNode) == 0x00D0); // 208 bytes (0x000060 - 0x0000D0)
static_assert(sizeof(UInterchangeUserDefinedAttributesAPI) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FInterchangeUserDefinedAttributeInfo) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(offsetof(UInterchangeFactoryBase, Results) == 0x0028);
static_assert(offsetof(UInterchangeSourceData, Filename) == 0x0028);
static_assert(offsetof(FInterchangePipelinePropertyStates, BasicLayoutStates) == 0x0001);
static_assert(offsetof(FInterchangePipelinePropertyStates, ImportStates) == 0x0002);
static_assert(offsetof(FInterchangePipelinePropertyStates, ReimportStates) == 0x0003);
static_assert(offsetof(UInterchangePipelineBase, Results) == 0x0040);
static_assert(offsetof(UInterchangePipelineBase, PropertiesStates) == 0x0048);
static_assert(offsetof(UInterchangeResult, SourceAssetName) == 0x0028);
static_assert(offsetof(UInterchangeResult, DestinationAssetName) == 0x0038);
static_assert(offsetof(UInterchangeResult, AssetFriendlyName) == 0x0048);
static_assert(offsetof(UInterchangeResult, AssetType) == 0x0058);
static_assert(offsetof(UInterchangeResult, InterchangeKey) == 0x0060);
static_assert(offsetof(UInterchangeResultWarning_Generic, Text) == 0x0070);
static_assert(offsetof(UInterchangeResultError_Generic, Text) == 0x0070);
static_assert(offsetof(UInterchangeResultDisplay_Generic, Text) == 0x0070);
static_assert(offsetof(UInterchangeResultsContainer, Results) == 0x0050);
static_assert(offsetof(UInterchangeTranslatorBase, Results) == 0x0028);
static_assert(offsetof(UInterchangeTranslatorBase, SourceData) == 0x0030);
static_assert(offsetof(UInterchangeBaseNodeContainer, Nodes) == 0x0028);
static_assert(offsetof(FInterchangeUserDefinedAttributeInfo, Name) == 0x0000);
