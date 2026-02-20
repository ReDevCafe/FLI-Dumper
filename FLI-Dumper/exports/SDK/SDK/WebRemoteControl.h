
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: RemoteControl

#pragma pack(push, 0x1)

/// Enum /Script/WebRemoteControl.ERemoteControlEvent
/// Size: 0x01 (1 bytes)
enum class ERemoteControlEvent : uint8_t
{
	ERemoteControlEvent__PreObjectPropertyChanged                                    = 0,
	ERemoteControlEvent__ObjectPropertyChanged                                       = 1,
	ERemoteControlEvent__EventCount                                                  = 2
};

/// Enum /Script/WebRemoteControl.ERemoteControlHttpVerbs
/// Size: 0x02 (2 bytes)
enum class ERemoteControlHttpVerbs : uint16_t
{
	ERemoteControlHttpVerbs__None                                                    = 0,
	ERemoteControlHttpVerbs__Get                                                     = 1,
	ERemoteControlHttpVerbs__Post                                                    = 2,
	ERemoteControlHttpVerbs__Put                                                     = 4,
	ERemoteControlHttpVerbs__Patch                                                   = 8,
	ERemoteControlHttpVerbs__Delete                                                  = 16,
	ERemoteControlHttpVerbs__Options                                                 = 32
};

/// Class /Script/WebRemoteControl.WebRCStructRegistry
/// Size: 0x0080 (128 bytes) (0x000030 - 0x000080) align 8 MaxSize: 0x0080
class UWebRCStructRegistry : public UEngineSubsystem
{ 
public:
	TMap<FName, class UScriptStruct*>                  CachedStructs;                                              // 0x0030   (0x0050)  
};

/// Struct /Script/WebRemoteControl.RCObjectDescription
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FRCObjectDescription
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	FString                                            Class;                                                      // 0x0010   (0x0010)  
	FString                                            Path;                                                       // 0x0020   (0x0010)  
};

/// Struct /Script/WebRemoteControl.RCPropertyDescription
/// Size: 0x00B8 (184 bytes) (0x000000 - 0x0000B8) align 8 MaxSize: 0x00B8
struct FRCPropertyDescription
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	FText                                              DisplayName;                                                // 0x0010   (0x0018)  
	FString                                            Description;                                                // 0x0020   (0x0010)  
	FString                                            Type;                                                       // 0x0030   (0x0010)  
	FName                                              TypePath;                                                   // 0x0040   (0x0008)  
	FString                                            ContainerType;                                              // 0x0048   (0x0010)  
	FString                                            KeyType;                                                    // 0x0058   (0x0010)  
	TMap<FName, FString>                               MetaData;                                                   // 0x0068   (0x0050)  
};

/// Struct /Script/WebRemoteControl.RCFunctionDescription
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FRCFunctionDescription
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	FString                                            Description;                                                // 0x0010   (0x0010)  
	TArray<FRCPropertyDescription>                     Arguments;                                                  // 0x0020   (0x0010)  
};

/// Struct /Script/WebRemoteControl.RCExposedPropertyDescription
/// Size: 0x0130 (304 bytes) (0x000000 - 0x000130) align 8 MaxSize: 0x0130
struct FRCExposedPropertyDescription
{ 
	FName                                              DisplayName;                                                // 0x0000   (0x0008)  
	FString                                            ID;                                                         // 0x0008   (0x0010)  
	FRCPropertyDescription                             UnderlyingProperty;                                         // 0x0018   (0x00B8)  
	TMap<FName, FString>                               MetaData;                                                   // 0x00D0   (0x0050)  
	TArray<FRCObjectDescription>                       OwnerObjects;                                               // 0x0120   (0x0010)  
};

/// Struct /Script/WebRemoteControl.RCExposedFunctionDescription
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FRCExposedFunctionDescription
{ 
	FName                                              DisplayName;                                                // 0x0000   (0x0008)  
	FString                                            ID;                                                         // 0x0008   (0x0010)  
	FRCFunctionDescription                             UnderlyingFunction;                                         // 0x0018   (0x0030)  
	TArray<FRCObjectDescription>                       OwnerObjects;                                               // 0x0048   (0x0010)  
};

/// Struct /Script/WebRemoteControl.RCExposedActorDescription
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FRCExposedActorDescription
{ 
	FName                                              DisplayName;                                                // 0x0000   (0x0008)  
	FString                                            ID;                                                         // 0x0008   (0x0010)  
	FRCObjectDescription                               UnderlyingActor;                                            // 0x0018   (0x0030)  
};

/// Struct /Script/WebRemoteControl.RCControllerDescription
/// Size: 0x0098 (152 bytes) (0x000000 - 0x000098) align 8 MaxSize: 0x0098
struct FRCControllerDescription
{ 
	FName                                              DisplayName;                                                // 0x0000   (0x0008)  
	FText                                              Description;                                                // 0x0008   (0x0018)  
	FString                                            ID;                                                         // 0x0018   (0x0010)  
	FString                                            Type;                                                       // 0x0028   (0x0010)  
	FString                                            Path;                                                       // 0x0038   (0x0010)  
	TMap<FName, FString>                               MetaData;                                                   // 0x0048   (0x0050)  
};

/// Struct /Script/WebRemoteControl.RCControllerModifiedDescription
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FRCControllerModifiedDescription
{ 
	TArray<FRCControllerDescription>                   Controllers;                                                // 0x0000   (0x0010)  
	TArray<FString>                                    ChangedValues;                                              // 0x0010   (0x0010)  
};

/// Struct /Script/WebRemoteControl.RCPresetLayoutGroupDescription
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FRCPresetLayoutGroupDescription
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	TArray<FRCExposedPropertyDescription>              ExposedProperties;                                          // 0x0008   (0x0010)  
	TArray<FRCExposedFunctionDescription>              ExposedFunctions;                                           // 0x0018   (0x0010)  
	TArray<FRCExposedActorDescription>                 ExposedActors;                                              // 0x0028   (0x0010)  
};

/// Struct /Script/WebRemoteControl.RCPresetModifiedEntitiesDescription
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FRCPresetModifiedEntitiesDescription
{ 
	TArray<FRCExposedPropertyDescription>              ModifiedRCProperties;                                       // 0x0000   (0x0010)  
	TArray<FRCExposedFunctionDescription>              ModifiedRCFunctions;                                        // 0x0010   (0x0010)  
	TArray<FRCExposedActorDescription>                 ModifiedRCActors;                                           // 0x0020   (0x0010)  
};

/// Struct /Script/WebRemoteControl.RCPresetDescription
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FRCPresetDescription
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	FString                                            Path;                                                       // 0x0010   (0x0010)  
	FString                                            ID;                                                         // 0x0020   (0x0010)  
	TArray<FRCPresetLayoutGroupDescription>            Groups;                                                     // 0x0030   (0x0010)  
	TArray<FRCControllerDescription>                   Controllers;                                                // 0x0040   (0x0010)  
};

/// Struct /Script/WebRemoteControl.RCShortPresetDescription
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FRCShortPresetDescription
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	FString                                            ID;                                                         // 0x0008   (0x0010)  
	FName                                              Path;                                                       // 0x0018   (0x0008)  
};

/// Struct /Script/WebRemoteControl.RCAssetDescription
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 MaxSize: 0x0068
struct FRCAssetDescription
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	FName                                              Class;                                                      // 0x0008   (0x0008)  
	FName                                              Path;                                                       // 0x0010   (0x0008)  
	TMap<FName, FString>                               MetaData;                                                   // 0x0018   (0x0050)  
};

/// Struct /Script/WebRemoteControl.RCPresetFieldRenamed
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FRCPresetFieldRenamed
{ 
	FName                                              OldFieldLabel;                                              // 0x0000   (0x0008)  
	FName                                              NewFieldLabel;                                              // 0x0008   (0x0008)  
};

/// Struct /Script/WebRemoteControl.RCAssetFilter
/// Size: 0x0098 (152 bytes) (0x000000 - 0x000098) align 8 MaxSize: 0x0098
struct FRCAssetFilter
{ 
	TArray<FName>                                      PackageNames;                                               // 0x0000   (0x0010)  
	TArray<FName>                                      PackagePaths;                                               // 0x0010   (0x0010)  
	TArray<FName>                                      ClassNames;                                                 // 0x0020   (0x0010)  
	SDK_UNDEFINED(80,1249) /* TSet<FName> */           __um(RecursiveClassesExclusionSet);                         // 0x0030   (0x0050)  
	TArray<FName>                                      NativeParentClasses;                                        // 0x0080   (0x0010)  
	bool                                               RecursiveClasses;                                           // 0x0090   (0x0001)  
	bool                                               RecursivePaths;                                             // 0x0091   (0x0001)  
	bool                                               EnableBlueprintNativeClassFiltering;                        // 0x0092   (0x0001)  
	unsigned char                                      UnknownData00_7[0x5];                                       // 0x0093   (0x0005)  MISSED
};

/// Struct /Script/WebRemoteControl.RCActorDescription
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FRCActorDescription
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	FString                                            Path;                                                       // 0x0010   (0x0010)  
};

/// Struct /Script/WebRemoteControl.RCRequest
/// Size: 0x0078 (120 bytes) (0x000000 - 0x000078) align 8 MaxSize: 0x0078
struct FRCRequest
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	FString                                            Passphrase;                                                 // 0x0008   (0x0010)  
	unsigned char                                      UnknownData01_7[0x60];                                      // 0x0018   (0x0060)  MISSED
};

/// Struct /Script/WebRemoteControl.RCRequestWrapper
/// Size: 0x0098 (152 bytes) (0x000078 - 0x000098) align 8 MaxSize: 0x0098
struct FRCRequestWrapper : FRCRequest
{ 
	FString                                            URL;                                                        // 0x0078   (0x0010)  
	FName                                              Verb;                                                       // 0x0088   (0x0008)  
	int32_t                                            RequestID;                                                  // 0x0090   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0094   (0x0004)  MISSED
};

/// Struct /Script/WebRemoteControl.RCBatchRequest
/// Size: 0x0088 (136 bytes) (0x000078 - 0x000088) align 8 MaxSize: 0x0088
struct FRCBatchRequest : FRCRequest
{ 
	TArray<FRCRequestWrapper>                          Requests;                                                   // 0x0078   (0x0010)  
};

/// Struct /Script/WebRemoteControl.RemoteControlObjectEventHookRequest
/// Size: 0x00A0 (160 bytes) (0x000078 - 0x0000A0) align 8 MaxSize: 0x00A0
struct FRemoteControlObjectEventHookRequest : FRCRequest
{ 
	ERemoteControlEvent                                EventType;                                                  // 0x0078   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0079   (0x0007)  MISSED
	FString                                            ObjectPath;                                                 // 0x0080   (0x0010)  
	FString                                            PropertyName;                                               // 0x0090   (0x0010)  
};

/// Struct /Script/WebRemoteControl.RCCallRequest
/// Size: 0x00A0 (160 bytes) (0x000078 - 0x0000A0) align 8 MaxSize: 0x00A0
struct FRCCallRequest : FRCRequest
{ 
	FString                                            ObjectPath;                                                 // 0x0078   (0x0010)  
	FString                                            FunctionName;                                               // 0x0088   (0x0010)  
	bool                                               GenerateTransaction;                                        // 0x0098   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0099   (0x0007)  MISSED
};

/// Struct /Script/WebRemoteControl.RCObjectRequest
/// Size: 0x00A0 (160 bytes) (0x000078 - 0x0000A0) align 8 MaxSize: 0x00A0
struct FRCObjectRequest : FRCRequest
{ 
	FString                                            ObjectPath;                                                 // 0x0078   (0x0010)  
	FString                                            PropertyName;                                               // 0x0088   (0x0010)  
	bool                                               ResetToDefault;                                             // 0x0098   (0x0001)  
	bool                                               GenerateTransaction;                                        // 0x0099   (0x0001)  
	ERCModifyOperation                                 Operation;                                                  // 0x009A   (0x0001)  
	ERCAccess                                          Access;                                                     // 0x009B   (0x0001)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x009C   (0x0004)  MISSED
};

/// Struct /Script/WebRemoteControl.RCPresetSetPropertyRequest
/// Size: 0x0080 (128 bytes) (0x000078 - 0x000080) align 8 MaxSize: 0x0080
struct FRCPresetSetPropertyRequest : FRCRequest
{ 
	ERCModifyOperation                                 Operation;                                                  // 0x0078   (0x0001)  
	bool                                               GenerateTransaction;                                        // 0x0079   (0x0001)  
	bool                                               ResetToDefault;                                             // 0x007A   (0x0001)  
	unsigned char                                      UnknownData00_7[0x5];                                       // 0x007B   (0x0005)  MISSED
};

/// Struct /Script/WebRemoteControl.RCPresetCallRequest
/// Size: 0x0080 (128 bytes) (0x000078 - 0x000080) align 8 MaxSize: 0x0080
struct FRCPresetCallRequest : FRCRequest
{ 
	bool                                               GenerateTransaction;                                        // 0x0078   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0079   (0x0007)  MISSED
};

/// Struct /Script/WebRemoteControl.RCPresetExposePropertyRequest
/// Size: 0x00C0 (192 bytes) (0x000078 - 0x0000C0) align 8 MaxSize: 0x00C0
struct FRCPresetExposePropertyRequest : FRCRequest
{ 
	FString                                            ObjectPath;                                                 // 0x0078   (0x0010)  
	FString                                            PropertyName;                                               // 0x0088   (0x0010)  
	FString                                            Label;                                                      // 0x0098   (0x0010)  
	FString                                            GroupName;                                                  // 0x00A8   (0x0010)  
	bool                                               EnableEditCondition;                                        // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00B9   (0x0007)  MISSED
};

/// Struct /Script/WebRemoteControl.DescribeObjectRequest
/// Size: 0x0088 (136 bytes) (0x000078 - 0x000088) align 8 MaxSize: 0x0088
struct FDescribeObjectRequest : FRCRequest
{ 
	FString                                            ObjectPath;                                                 // 0x0078   (0x0010)  
};

/// Struct /Script/WebRemoteControl.SearchAssetRequest
/// Size: 0x0128 (296 bytes) (0x000078 - 0x000128) align 8 MaxSize: 0x0128
struct FSearchAssetRequest : FRCRequest
{ 
	FString                                            Query;                                                      // 0x0078   (0x0010)  
	FRCAssetFilter                                     Filter;                                                     // 0x0088   (0x0098)  
	int32_t                                            Limit;                                                      // 0x0120   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0124   (0x0004)  MISSED
};

/// Struct /Script/WebRemoteControl.SearchActorRequest
/// Size: 0x00A0 (160 bytes) (0x000078 - 0x0000A0) align 8 MaxSize: 0x00A0
struct FSearchActorRequest : FRCRequest
{ 
	FString                                            Query;                                                      // 0x0078   (0x0010)  
	FString                                            Class;                                                      // 0x0088   (0x0010)  
	int32_t                                            Limit;                                                      // 0x0098   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x009C   (0x0004)  MISSED
};

/// Struct /Script/WebRemoteControl.SearchObjectRequest
/// Size: 0x00B0 (176 bytes) (0x000078 - 0x0000B0) align 8 MaxSize: 0x00B0
struct FSearchObjectRequest : FRCRequest
{ 
	FString                                            Query;                                                      // 0x0078   (0x0010)  
	FString                                            Class;                                                      // 0x0088   (0x0010)  
	FString                                            Outer;                                                      // 0x0098   (0x0010)  
	int32_t                                            Limit;                                                      // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00AC   (0x0004)  MISSED
};

/// Struct /Script/WebRemoteControl.SetPresetMetadataRequest
/// Size: 0x0088 (136 bytes) (0x000078 - 0x000088) align 8 MaxSize: 0x0088
struct FSetPresetMetadataRequest : FRCRequest
{ 
	FString                                            Value;                                                      // 0x0078   (0x0010)  
};

/// Struct /Script/WebRemoteControl.SetEntityMetadataRequest
/// Size: 0x0088 (136 bytes) (0x000078 - 0x000088) align 8 MaxSize: 0x0088
struct FSetEntityMetadataRequest : FRCRequest
{ 
	FString                                            Value;                                                      // 0x0078   (0x0010)  
};

/// Struct /Script/WebRemoteControl.SetEntityLabelRequest
/// Size: 0x0088 (136 bytes) (0x000078 - 0x000088) align 8 MaxSize: 0x0088
struct FSetEntityLabelRequest : FRCRequest
{ 
	FString                                            NewLabel;                                                   // 0x0078   (0x0010)  
};

/// Struct /Script/WebRemoteControl.GetObjectThumbnailRequest
/// Size: 0x0088 (136 bytes) (0x000078 - 0x000088) align 8 MaxSize: 0x0088
struct FGetObjectThumbnailRequest : FRCRequest
{ 
	FString                                            ObjectPath;                                                 // 0x0078   (0x0010)  
};

/// Struct /Script/WebRemoteControl.RCWebSocketRequest
/// Size: 0x00A0 (160 bytes) (0x000078 - 0x0000A0) align 8 MaxSize: 0x00A0
struct FRCWebSocketRequest : FRCRequest
{ 
	FString                                            MessageName;                                                // 0x0078   (0x0010)  
	int32_t                                            ID;                                                         // 0x0088   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x008C   (0x0004)  MISSED
	FString                                            ForwardedFor;                                               // 0x0090   (0x0010)  
};

/// Struct /Script/WebRemoteControl.RCWebSocketBatchRequest
/// Size: 0x0088 (136 bytes) (0x000078 - 0x000088) align 8 MaxSize: 0x0088
struct FRCWebSocketBatchRequest : FRCRequest
{ 
	TArray<FRCWebSocketRequest>                        Requests;                                                   // 0x0078   (0x0010)  
};

/// Struct /Script/WebRemoteControl.RCWebSocketPresetRegisterBody
/// Size: 0x0090 (144 bytes) (0x000078 - 0x000090) align 8 MaxSize: 0x0090
struct FRCWebSocketPresetRegisterBody : FRCRequest
{ 
	FString                                            PresetName;                                                 // 0x0078   (0x0010)  
	bool                                               IgnoreRemoteChanges;                                        // 0x0088   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0089   (0x0007)  MISSED
};

/// Struct /Script/WebRemoteControl.RCWebSocketTransientPresetAutoDestroyBody
/// Size: 0x0088 (136 bytes) (0x000078 - 0x000088) align 8 MaxSize: 0x0088
struct FRCWebSocketTransientPresetAutoDestroyBody : FRCRequest
{ 
	FString                                            PresetName;                                                 // 0x0078   (0x0010)  
};

/// Struct /Script/WebRemoteControl.RCWebSocketActorRegisterBody
/// Size: 0x0080 (128 bytes) (0x000078 - 0x000080) align 8 MaxSize: 0x0080
struct FRCWebSocketActorRegisterBody : FRCRequest
{ 
	FName                                              ClassName;                                                  // 0x0078   (0x0008)  
};

/// Struct /Script/WebRemoteControl.RCWebSocketPresetSetPropertyBody
/// Size: 0x00A0 (160 bytes) (0x000078 - 0x0000A0) align 8 MaxSize: 0x00A0
struct FRCWebSocketPresetSetPropertyBody : FRCRequest
{ 
	FName                                              PresetName;                                                 // 0x0078   (0x0008)  
	FName                                              PropertyLabel;                                              // 0x0080   (0x0008)  
	ERCModifyOperation                                 Operation;                                                  // 0x0088   (0x0001)  
	ERCTransactionMode                                 TransactionMode;                                            // 0x0089   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x008A   (0x0002)  MISSED
	int32_t                                            TransactionId;                                              // 0x008C   (0x0004)  
	bool                                               ResetToDefault;                                             // 0x0090   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0091   (0x0007)  MISSED
	int64_t                                            SequenceNumber;                                             // 0x0098   (0x0008)  
};

/// Struct /Script/WebRemoteControl.RCWebSocketCallBody
/// Size: 0x00B0 (176 bytes) (0x0000A0 - 0x0000B0) align 8 MaxSize: 0x00B0
struct FRCWebSocketCallBody : FRCCallRequest
{ 
	ERCTransactionMode                                 TransactionMode;                                            // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00A1   (0x0003)  MISSED
	int32_t                                            TransactionId;                                              // 0x00A4   (0x0004)  
	int64_t                                            SequenceNumber;                                             // 0x00A8   (0x0008)  
};

/// Struct /Script/WebRemoteControl.RCWebSocketTransactionStartBody
/// Size: 0x0090 (144 bytes) (0x000078 - 0x000090) align 8 MaxSize: 0x0090
struct FRCWebSocketTransactionStartBody : FRCRequest
{ 
	FString                                            Description;                                                // 0x0078   (0x0010)  
	int32_t                                            TransactionId;                                              // 0x0088   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x008C   (0x0004)  MISSED
};

/// Struct /Script/WebRemoteControl.RCWebSocketTransactionEndBody
/// Size: 0x0080 (128 bytes) (0x000078 - 0x000080) align 8 MaxSize: 0x0080
struct FRCWebSocketTransactionEndBody : FRCRequest
{ 
	int32_t                                            TransactionId;                                              // 0x0078   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x007C   (0x0004)  MISSED
};

/// Struct /Script/WebRemoteControl.RCWebSocketCompressionChangeBody
/// Size: 0x0080 (128 bytes) (0x000078 - 0x000080) align 8 MaxSize: 0x0080
struct FRCWebSocketCompressionChangeBody : FRCRequest
{ 
	ERCWebSocketCompressionMode                        Mode;                                                       // 0x0078   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0079   (0x0007)  MISSED
};

/// Struct /Script/WebRemoteControl.RCPresetSetControllerRequest
/// Size: 0x0088 (136 bytes) (0x000078 - 0x000088) align 8 MaxSize: 0x0088
struct FRCPresetSetControllerRequest : FRCRequest
{ 
	FString                                            ControllerName;                                             // 0x0078   (0x0010)  
};

/// Struct /Script/WebRemoteControl.RemoteControlRouteDescription
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FRemoteControlRouteDescription
{ 
	FString                                            Path;                                                       // 0x0000   (0x0010)  
	ERemoteControlHttpVerbs                            Verb;                                                       // 0x0010   (0x0002)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0012   (0x0006)  MISSED
	FString                                            Description;                                                // 0x0018   (0x0010)  
};

/// Struct /Script/WebRemoteControl.APIInfoResponse
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FAPIInfoResponse
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	TArray<FRemoteControlRouteDescription>             HttpRoutes;                                                 // 0x0008   (0x0010)  
	FRCShortPresetDescription                          ActivePreset;                                               // 0x0018   (0x0020)  
};

/// Struct /Script/WebRemoteControl.ListPresetsResponse
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FListPresetsResponse
{ 
	TArray<FRCShortPresetDescription>                  Presets;                                                    // 0x0000   (0x0010)  
};

/// Struct /Script/WebRemoteControl.GetPresetResponse
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FGetPresetResponse
{ 
	FRCPresetDescription                               Preset;                                                     // 0x0000   (0x0050)  
};

/// Struct /Script/WebRemoteControl.CheckPassphraseResponse
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FCheckPassphraseResponse
{ 
	bool                                               keyCorrect;                                                 // 0x0000   (0x0001)  
};

/// Struct /Script/WebRemoteControl.DescribeObjectResponse
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FDescribeObjectResponse
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	class UClass*                                      Class;                                                      // 0x0010   (0x0008)  
	TArray<FRCPropertyDescription>                     Properties;                                                 // 0x0018   (0x0010)  
	TArray<FRCFunctionDescription>                     Functions;                                                  // 0x0028   (0x0010)  
};

/// Struct /Script/WebRemoteControl.SearchAssetResponse
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FSearchAssetResponse
{ 
	TArray<FRCAssetDescription>                        Assets;                                                     // 0x0000   (0x0010)  
};

/// Struct /Script/WebRemoteControl.SearchActorResponse
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FSearchActorResponse
{ 
	TArray<FRCObjectDescription>                       Actors;                                                     // 0x0000   (0x0010)  
};

/// Struct /Script/WebRemoteControl.GetMetadataFieldResponse
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FGetMetadataFieldResponse
{ 
	FString                                            Value;                                                      // 0x0000   (0x0010)  
};

/// Struct /Script/WebRemoteControl.GetMetadataResponse
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FGetMetadataResponse
{ 
	TMap<FString, FString>                             MetaData;                                                   // 0x0000   (0x0050)  
};

/// Struct /Script/WebRemoteControl.SetEntityLabelResponse
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FSetEntityLabelResponse
{ 
	FString                                            AssignedLabel;                                              // 0x0000   (0x0010)  
};

/// Struct /Script/WebRemoteControl.RCPresetFieldsRenamedEvent
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FRCPresetFieldsRenamedEvent
{ 
	FString                                            Type;                                                       // 0x0000   (0x0010)  
	FName                                              PresetName;                                                 // 0x0010   (0x0008)  
	FString                                            PresetId;                                                   // 0x0018   (0x0010)  
	TArray<FRCPresetFieldRenamed>                      RenamedFields;                                              // 0x0028   (0x0010)  
};

/// Struct /Script/WebRemoteControl.RCPresetMetadataModified
/// Size: 0x0078 (120 bytes) (0x000000 - 0x000078) align 8 MaxSize: 0x0078
struct FRCPresetMetadataModified
{ 
	FString                                            Type;                                                       // 0x0000   (0x0010)  
	FName                                              PresetName;                                                 // 0x0010   (0x0008)  
	FString                                            PresetId;                                                   // 0x0018   (0x0010)  
	TMap<FString, FString>                             MetaData;                                                   // 0x0028   (0x0050)  
};

/// Struct /Script/WebRemoteControl.RCPresetLayoutModified
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FRCPresetLayoutModified
{ 
	FString                                            Type;                                                       // 0x0000   (0x0010)  
	FRCPresetDescription                               Preset;                                                     // 0x0010   (0x0050)  
};

/// Struct /Script/WebRemoteControl.RCPresetFieldsRemovedEvent
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FRCPresetFieldsRemovedEvent
{ 
	FString                                            Type;                                                       // 0x0000   (0x0010)  
	FName                                              PresetName;                                                 // 0x0010   (0x0008)  
	FString                                            PresetId;                                                   // 0x0018   (0x0010)  
	TArray<FName>                                      RemovedFields;                                              // 0x0028   (0x0010)  
	TArray<FString>                                    RemovedFieldIds;                                            // 0x0038   (0x0010)  
};

/// Struct /Script/WebRemoteControl.RCPresetFieldsAddedEvent
/// Size: 0x0078 (120 bytes) (0x000000 - 0x000078) align 8 MaxSize: 0x0078
struct FRCPresetFieldsAddedEvent
{ 
	FString                                            Type;                                                       // 0x0000   (0x0010)  
	FName                                              PresetName;                                                 // 0x0010   (0x0008)  
	FString                                            PresetId;                                                   // 0x0018   (0x0010)  
	FRCPresetDescription                               Description;                                                // 0x0028   (0x0050)  
};

/// Struct /Script/WebRemoteControl.RCPresetEntitiesModifiedEvent
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FRCPresetEntitiesModifiedEvent
{ 
	FString                                            Type;                                                       // 0x0000   (0x0010)  
	FName                                              PresetName;                                                 // 0x0010   (0x0008)  
	FString                                            PresetId;                                                   // 0x0018   (0x0010)  
	FRCPresetModifiedEntitiesDescription               ModifiedEntities;                                           // 0x0028   (0x0030)  
};

/// Struct /Script/WebRemoteControl.RCPresetControllersRenamedEvent
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FRCPresetControllersRenamedEvent
{ 
	FString                                            Type;                                                       // 0x0000   (0x0010)  
	FName                                              PresetName;                                                 // 0x0010   (0x0008)  
	FString                                            PresetId;                                                   // 0x0018   (0x0010)  
	TArray<FRCPresetFieldRenamed>                      RenamedControllers;                                         // 0x0028   (0x0010)  
};

/// Struct /Script/WebRemoteControl.RCPresetControllersRemovedEvent
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FRCPresetControllersRemovedEvent
{ 
	FString                                            Type;                                                       // 0x0000   (0x0010)  
	FName                                              PresetName;                                                 // 0x0010   (0x0008)  
	FString                                            PresetId;                                                   // 0x0018   (0x0010)  
	TArray<FName>                                      RemovedControllers;                                         // 0x0028   (0x0010)  
	TArray<FString>                                    RemovedControllerIds;                                       // 0x0038   (0x0010)  
};

/// Struct /Script/WebRemoteControl.RCPresetControllersAddedEvent
/// Size: 0x0078 (120 bytes) (0x000000 - 0x000078) align 8 MaxSize: 0x0078
struct FRCPresetControllersAddedEvent
{ 
	FString                                            Type;                                                       // 0x0000   (0x0010)  
	FName                                              PresetName;                                                 // 0x0010   (0x0008)  
	FString                                            PresetId;                                                   // 0x0018   (0x0010)  
	FRCPresetDescription                               Description;                                                // 0x0028   (0x0050)  
};

/// Struct /Script/WebRemoteControl.RCPresetControllersModifiedEvent
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FRCPresetControllersModifiedEvent
{ 
	FString                                            Type;                                                       // 0x0000   (0x0010)  
	FName                                              PresetName;                                                 // 0x0010   (0x0008)  
	FString                                            PresetId;                                                   // 0x0018   (0x0010)  
	FRCControllerModifiedDescription                   ModifiedControllers;                                        // 0x0028   (0x0020)  
};

/// Struct /Script/WebRemoteControl.RCActorsChangedData
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FRCActorsChangedData
{ 
	TArray<FRCActorDescription>                        AddedActors;                                                // 0x0000   (0x0010)  
	TArray<FRCActorDescription>                        RenamedActors;                                              // 0x0010   (0x0010)  
	TArray<FRCActorDescription>                        DeletedActors;                                              // 0x0020   (0x0010)  
};

/// Struct /Script/WebRemoteControl.RCActorsChangedEvent
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FRCActorsChangedEvent
{ 
	FString                                            Type;                                                       // 0x0000   (0x0010)  
	TMap<FString, FRCActorsChangedData>                Changes;                                                    // 0x0010   (0x0050)  
};

/// Struct /Script/WebRemoteControl.RCTransactionEndedEvent
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FRCTransactionEndedEvent
{ 
	FString                                            Type;                                                       // 0x0000   (0x0010)  
	int32_t                                            TransactionId;                                              // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	int64_t                                            SequenceNumber;                                             // 0x0018   (0x0008)  
};

/// Struct /Script/WebRemoteControl.RCCompressionChangedEvent
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FRCCompressionChangedEvent
{ 
	FString                                            Type;                                                       // 0x0000   (0x0010)  
	ERCWebSocketCompressionMode                        Mode;                                                       // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UWebRCStructRegistry) == 0x0080); // 128 bytes (0x000030 - 0x000080)
static_assert(sizeof(FRCObjectDescription) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FRCPropertyDescription) == 0x00B8); // 184 bytes (0x000000 - 0x0000B8)
static_assert(sizeof(FRCFunctionDescription) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FRCExposedPropertyDescription) == 0x0130); // 304 bytes (0x000000 - 0x000130)
static_assert(sizeof(FRCExposedFunctionDescription) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FRCExposedActorDescription) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FRCControllerDescription) == 0x0098); // 152 bytes (0x000000 - 0x000098)
static_assert(sizeof(FRCControllerModifiedDescription) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FRCPresetLayoutGroupDescription) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FRCPresetModifiedEntitiesDescription) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FRCPresetDescription) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FRCShortPresetDescription) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FRCAssetDescription) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(FRCPresetFieldRenamed) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRCAssetFilter) == 0x0098); // 152 bytes (0x000000 - 0x000098)
static_assert(sizeof(FRCActorDescription) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FRCRequest) == 0x0078); // 120 bytes (0x000000 - 0x000078)
static_assert(sizeof(FRCRequestWrapper) == 0x0098); // 152 bytes (0x000078 - 0x000098)
static_assert(sizeof(FRCBatchRequest) == 0x0088); // 136 bytes (0x000078 - 0x000088)
static_assert(sizeof(FRemoteControlObjectEventHookRequest) == 0x00A0); // 160 bytes (0x000078 - 0x0000A0)
static_assert(sizeof(FRCCallRequest) == 0x00A0); // 160 bytes (0x000078 - 0x0000A0)
static_assert(sizeof(FRCObjectRequest) == 0x00A0); // 160 bytes (0x000078 - 0x0000A0)
static_assert(sizeof(FRCPresetSetPropertyRequest) == 0x0080); // 128 bytes (0x000078 - 0x000080)
static_assert(sizeof(FRCPresetCallRequest) == 0x0080); // 128 bytes (0x000078 - 0x000080)
static_assert(sizeof(FRCPresetExposePropertyRequest) == 0x00C0); // 192 bytes (0x000078 - 0x0000C0)
static_assert(sizeof(FDescribeObjectRequest) == 0x0088); // 136 bytes (0x000078 - 0x000088)
static_assert(sizeof(FSearchAssetRequest) == 0x0128); // 296 bytes (0x000078 - 0x000128)
static_assert(sizeof(FSearchActorRequest) == 0x00A0); // 160 bytes (0x000078 - 0x0000A0)
static_assert(sizeof(FSearchObjectRequest) == 0x00B0); // 176 bytes (0x000078 - 0x0000B0)
static_assert(sizeof(FSetPresetMetadataRequest) == 0x0088); // 136 bytes (0x000078 - 0x000088)
static_assert(sizeof(FSetEntityMetadataRequest) == 0x0088); // 136 bytes (0x000078 - 0x000088)
static_assert(sizeof(FSetEntityLabelRequest) == 0x0088); // 136 bytes (0x000078 - 0x000088)
static_assert(sizeof(FGetObjectThumbnailRequest) == 0x0088); // 136 bytes (0x000078 - 0x000088)
static_assert(sizeof(FRCWebSocketRequest) == 0x00A0); // 160 bytes (0x000078 - 0x0000A0)
static_assert(sizeof(FRCWebSocketBatchRequest) == 0x0088); // 136 bytes (0x000078 - 0x000088)
static_assert(sizeof(FRCWebSocketPresetRegisterBody) == 0x0090); // 144 bytes (0x000078 - 0x000090)
static_assert(sizeof(FRCWebSocketTransientPresetAutoDestroyBody) == 0x0088); // 136 bytes (0x000078 - 0x000088)
static_assert(sizeof(FRCWebSocketActorRegisterBody) == 0x0080); // 128 bytes (0x000078 - 0x000080)
static_assert(sizeof(FRCWebSocketPresetSetPropertyBody) == 0x00A0); // 160 bytes (0x000078 - 0x0000A0)
static_assert(sizeof(FRCWebSocketCallBody) == 0x00B0); // 176 bytes (0x0000A0 - 0x0000B0)
static_assert(sizeof(FRCWebSocketTransactionStartBody) == 0x0090); // 144 bytes (0x000078 - 0x000090)
static_assert(sizeof(FRCWebSocketTransactionEndBody) == 0x0080); // 128 bytes (0x000078 - 0x000080)
static_assert(sizeof(FRCWebSocketCompressionChangeBody) == 0x0080); // 128 bytes (0x000078 - 0x000080)
static_assert(sizeof(FRCPresetSetControllerRequest) == 0x0088); // 136 bytes (0x000078 - 0x000088)
static_assert(sizeof(FRemoteControlRouteDescription) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FAPIInfoResponse) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FListPresetsResponse) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FGetPresetResponse) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FCheckPassphraseResponse) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FDescribeObjectResponse) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FSearchAssetResponse) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FSearchActorResponse) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FGetMetadataFieldResponse) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FGetMetadataResponse) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FSetEntityLabelResponse) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRCPresetFieldsRenamedEvent) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FRCPresetMetadataModified) == 0x0078); // 120 bytes (0x000000 - 0x000078)
static_assert(sizeof(FRCPresetLayoutModified) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FRCPresetFieldsRemovedEvent) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FRCPresetFieldsAddedEvent) == 0x0078); // 120 bytes (0x000000 - 0x000078)
static_assert(sizeof(FRCPresetEntitiesModifiedEvent) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FRCPresetControllersRenamedEvent) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FRCPresetControllersRemovedEvent) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FRCPresetControllersAddedEvent) == 0x0078); // 120 bytes (0x000000 - 0x000078)
static_assert(sizeof(FRCPresetControllersModifiedEvent) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FRCActorsChangedData) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FRCActorsChangedEvent) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FRCTransactionEndedEvent) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FRCCompressionChangedEvent) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(offsetof(UWebRCStructRegistry, CachedStructs) == 0x0030);
static_assert(offsetof(FRCObjectDescription, Name) == 0x0000);
static_assert(offsetof(FRCObjectDescription, Class) == 0x0010);
static_assert(offsetof(FRCObjectDescription, Path) == 0x0020);
static_assert(offsetof(FRCPropertyDescription, Name) == 0x0000);
static_assert(offsetof(FRCPropertyDescription, DisplayName) == 0x0010);
static_assert(offsetof(FRCPropertyDescription, Description) == 0x0020);
static_assert(offsetof(FRCPropertyDescription, Type) == 0x0030);
static_assert(offsetof(FRCPropertyDescription, TypePath) == 0x0040);
static_assert(offsetof(FRCPropertyDescription, ContainerType) == 0x0048);
static_assert(offsetof(FRCPropertyDescription, KeyType) == 0x0058);
static_assert(offsetof(FRCPropertyDescription, MetaData) == 0x0068);
static_assert(offsetof(FRCFunctionDescription, Name) == 0x0000);
static_assert(offsetof(FRCFunctionDescription, Description) == 0x0010);
static_assert(offsetof(FRCFunctionDescription, Arguments) == 0x0020);
static_assert(offsetof(FRCExposedPropertyDescription, DisplayName) == 0x0000);
static_assert(offsetof(FRCExposedPropertyDescription, ID) == 0x0008);
static_assert(offsetof(FRCExposedPropertyDescription, UnderlyingProperty) == 0x0018);
static_assert(offsetof(FRCExposedPropertyDescription, MetaData) == 0x00D0);
static_assert(offsetof(FRCExposedPropertyDescription, OwnerObjects) == 0x0120);
static_assert(offsetof(FRCExposedFunctionDescription, DisplayName) == 0x0000);
static_assert(offsetof(FRCExposedFunctionDescription, ID) == 0x0008);
static_assert(offsetof(FRCExposedFunctionDescription, UnderlyingFunction) == 0x0018);
static_assert(offsetof(FRCExposedFunctionDescription, OwnerObjects) == 0x0048);
static_assert(offsetof(FRCExposedActorDescription, DisplayName) == 0x0000);
static_assert(offsetof(FRCExposedActorDescription, ID) == 0x0008);
static_assert(offsetof(FRCExposedActorDescription, UnderlyingActor) == 0x0018);
static_assert(offsetof(FRCControllerDescription, DisplayName) == 0x0000);
static_assert(offsetof(FRCControllerDescription, Description) == 0x0008);
static_assert(offsetof(FRCControllerDescription, ID) == 0x0018);
static_assert(offsetof(FRCControllerDescription, Type) == 0x0028);
static_assert(offsetof(FRCControllerDescription, Path) == 0x0038);
static_assert(offsetof(FRCControllerDescription, MetaData) == 0x0048);
static_assert(offsetof(FRCControllerModifiedDescription, Controllers) == 0x0000);
static_assert(offsetof(FRCControllerModifiedDescription, ChangedValues) == 0x0010);
static_assert(offsetof(FRCPresetLayoutGroupDescription, Name) == 0x0000);
static_assert(offsetof(FRCPresetLayoutGroupDescription, ExposedProperties) == 0x0008);
static_assert(offsetof(FRCPresetLayoutGroupDescription, ExposedFunctions) == 0x0018);
static_assert(offsetof(FRCPresetLayoutGroupDescription, ExposedActors) == 0x0028);
static_assert(offsetof(FRCPresetModifiedEntitiesDescription, ModifiedRCProperties) == 0x0000);
static_assert(offsetof(FRCPresetModifiedEntitiesDescription, ModifiedRCFunctions) == 0x0010);
static_assert(offsetof(FRCPresetModifiedEntitiesDescription, ModifiedRCActors) == 0x0020);
static_assert(offsetof(FRCPresetDescription, Name) == 0x0000);
static_assert(offsetof(FRCPresetDescription, Path) == 0x0010);
static_assert(offsetof(FRCPresetDescription, ID) == 0x0020);
static_assert(offsetof(FRCPresetDescription, Groups) == 0x0030);
static_assert(offsetof(FRCPresetDescription, Controllers) == 0x0040);
static_assert(offsetof(FRCShortPresetDescription, Name) == 0x0000);
static_assert(offsetof(FRCShortPresetDescription, ID) == 0x0008);
static_assert(offsetof(FRCShortPresetDescription, Path) == 0x0018);
static_assert(offsetof(FRCAssetDescription, Name) == 0x0000);
static_assert(offsetof(FRCAssetDescription, Class) == 0x0008);
static_assert(offsetof(FRCAssetDescription, Path) == 0x0010);
static_assert(offsetof(FRCAssetDescription, MetaData) == 0x0018);
static_assert(offsetof(FRCPresetFieldRenamed, OldFieldLabel) == 0x0000);
static_assert(offsetof(FRCPresetFieldRenamed, NewFieldLabel) == 0x0008);
static_assert(offsetof(FRCAssetFilter, PackageNames) == 0x0000);
static_assert(offsetof(FRCAssetFilter, PackagePaths) == 0x0010);
static_assert(offsetof(FRCAssetFilter, ClassNames) == 0x0020);
static_assert(offsetof(FRCAssetFilter, NativeParentClasses) == 0x0080);
static_assert(offsetof(FRCActorDescription, Name) == 0x0000);
static_assert(offsetof(FRCActorDescription, Path) == 0x0010);
static_assert(offsetof(FRCRequest, Passphrase) == 0x0008);
static_assert(offsetof(FRCRequestWrapper, URL) == 0x0078);
static_assert(offsetof(FRCRequestWrapper, Verb) == 0x0088);
static_assert(offsetof(FRCBatchRequest, Requests) == 0x0078);
static_assert(offsetof(FRemoteControlObjectEventHookRequest, EventType) == 0x0078);
static_assert(offsetof(FRemoteControlObjectEventHookRequest, ObjectPath) == 0x0080);
static_assert(offsetof(FRemoteControlObjectEventHookRequest, PropertyName) == 0x0090);
static_assert(offsetof(FRCCallRequest, ObjectPath) == 0x0078);
static_assert(offsetof(FRCCallRequest, FunctionName) == 0x0088);
static_assert(offsetof(FRCObjectRequest, ObjectPath) == 0x0078);
static_assert(offsetof(FRCObjectRequest, PropertyName) == 0x0088);
static_assert(offsetof(FRCObjectRequest, Operation) == 0x009A);
static_assert(offsetof(FRCObjectRequest, Access) == 0x009B);
static_assert(offsetof(FRCPresetSetPropertyRequest, Operation) == 0x0078);
static_assert(offsetof(FRCPresetExposePropertyRequest, ObjectPath) == 0x0078);
static_assert(offsetof(FRCPresetExposePropertyRequest, PropertyName) == 0x0088);
static_assert(offsetof(FRCPresetExposePropertyRequest, Label) == 0x0098);
static_assert(offsetof(FRCPresetExposePropertyRequest, GroupName) == 0x00A8);
static_assert(offsetof(FDescribeObjectRequest, ObjectPath) == 0x0078);
static_assert(offsetof(FSearchAssetRequest, Query) == 0x0078);
static_assert(offsetof(FSearchAssetRequest, Filter) == 0x0088);
static_assert(offsetof(FSearchActorRequest, Query) == 0x0078);
static_assert(offsetof(FSearchActorRequest, Class) == 0x0088);
static_assert(offsetof(FSearchObjectRequest, Query) == 0x0078);
static_assert(offsetof(FSearchObjectRequest, Class) == 0x0088);
static_assert(offsetof(FSearchObjectRequest, Outer) == 0x0098);
static_assert(offsetof(FSetPresetMetadataRequest, Value) == 0x0078);
static_assert(offsetof(FSetEntityMetadataRequest, Value) == 0x0078);
static_assert(offsetof(FSetEntityLabelRequest, NewLabel) == 0x0078);
static_assert(offsetof(FGetObjectThumbnailRequest, ObjectPath) == 0x0078);
static_assert(offsetof(FRCWebSocketRequest, MessageName) == 0x0078);
static_assert(offsetof(FRCWebSocketRequest, ForwardedFor) == 0x0090);
static_assert(offsetof(FRCWebSocketBatchRequest, Requests) == 0x0078);
static_assert(offsetof(FRCWebSocketPresetRegisterBody, PresetName) == 0x0078);
static_assert(offsetof(FRCWebSocketTransientPresetAutoDestroyBody, PresetName) == 0x0078);
static_assert(offsetof(FRCWebSocketActorRegisterBody, ClassName) == 0x0078);
static_assert(offsetof(FRCWebSocketPresetSetPropertyBody, PresetName) == 0x0078);
static_assert(offsetof(FRCWebSocketPresetSetPropertyBody, PropertyLabel) == 0x0080);
static_assert(offsetof(FRCWebSocketPresetSetPropertyBody, Operation) == 0x0088);
static_assert(offsetof(FRCWebSocketPresetSetPropertyBody, TransactionMode) == 0x0089);
static_assert(offsetof(FRCWebSocketCallBody, TransactionMode) == 0x00A0);
static_assert(offsetof(FRCWebSocketTransactionStartBody, Description) == 0x0078);
static_assert(offsetof(FRCWebSocketCompressionChangeBody, Mode) == 0x0078);
static_assert(offsetof(FRCPresetSetControllerRequest, ControllerName) == 0x0078);
static_assert(offsetof(FRemoteControlRouteDescription, Path) == 0x0000);
static_assert(offsetof(FRemoteControlRouteDescription, Verb) == 0x0010);
static_assert(offsetof(FRemoteControlRouteDescription, Description) == 0x0018);
static_assert(offsetof(FAPIInfoResponse, HttpRoutes) == 0x0008);
static_assert(offsetof(FAPIInfoResponse, ActivePreset) == 0x0018);
static_assert(offsetof(FListPresetsResponse, Presets) == 0x0000);
static_assert(offsetof(FGetPresetResponse, Preset) == 0x0000);
static_assert(offsetof(FDescribeObjectResponse, Name) == 0x0000);
static_assert(offsetof(FDescribeObjectResponse, Class) == 0x0010);
static_assert(offsetof(FDescribeObjectResponse, Properties) == 0x0018);
static_assert(offsetof(FDescribeObjectResponse, Functions) == 0x0028);
static_assert(offsetof(FSearchAssetResponse, Assets) == 0x0000);
static_assert(offsetof(FSearchActorResponse, Actors) == 0x0000);
static_assert(offsetof(FGetMetadataFieldResponse, Value) == 0x0000);
static_assert(offsetof(FGetMetadataResponse, MetaData) == 0x0000);
static_assert(offsetof(FSetEntityLabelResponse, AssignedLabel) == 0x0000);
static_assert(offsetof(FRCPresetFieldsRenamedEvent, Type) == 0x0000);
static_assert(offsetof(FRCPresetFieldsRenamedEvent, PresetName) == 0x0010);
static_assert(offsetof(FRCPresetFieldsRenamedEvent, PresetId) == 0x0018);
static_assert(offsetof(FRCPresetFieldsRenamedEvent, RenamedFields) == 0x0028);
static_assert(offsetof(FRCPresetMetadataModified, Type) == 0x0000);
static_assert(offsetof(FRCPresetMetadataModified, PresetName) == 0x0010);
static_assert(offsetof(FRCPresetMetadataModified, PresetId) == 0x0018);
static_assert(offsetof(FRCPresetMetadataModified, MetaData) == 0x0028);
static_assert(offsetof(FRCPresetLayoutModified, Type) == 0x0000);
static_assert(offsetof(FRCPresetLayoutModified, Preset) == 0x0010);
static_assert(offsetof(FRCPresetFieldsRemovedEvent, Type) == 0x0000);
static_assert(offsetof(FRCPresetFieldsRemovedEvent, PresetName) == 0x0010);
static_assert(offsetof(FRCPresetFieldsRemovedEvent, PresetId) == 0x0018);
static_assert(offsetof(FRCPresetFieldsRemovedEvent, RemovedFields) == 0x0028);
static_assert(offsetof(FRCPresetFieldsRemovedEvent, RemovedFieldIds) == 0x0038);
static_assert(offsetof(FRCPresetFieldsAddedEvent, Type) == 0x0000);
static_assert(offsetof(FRCPresetFieldsAddedEvent, PresetName) == 0x0010);
static_assert(offsetof(FRCPresetFieldsAddedEvent, PresetId) == 0x0018);
static_assert(offsetof(FRCPresetFieldsAddedEvent, Description) == 0x0028);
static_assert(offsetof(FRCPresetEntitiesModifiedEvent, Type) == 0x0000);
static_assert(offsetof(FRCPresetEntitiesModifiedEvent, PresetName) == 0x0010);
static_assert(offsetof(FRCPresetEntitiesModifiedEvent, PresetId) == 0x0018);
static_assert(offsetof(FRCPresetEntitiesModifiedEvent, ModifiedEntities) == 0x0028);
static_assert(offsetof(FRCPresetControllersRenamedEvent, Type) == 0x0000);
static_assert(offsetof(FRCPresetControllersRenamedEvent, PresetName) == 0x0010);
static_assert(offsetof(FRCPresetControllersRenamedEvent, PresetId) == 0x0018);
static_assert(offsetof(FRCPresetControllersRenamedEvent, RenamedControllers) == 0x0028);
static_assert(offsetof(FRCPresetControllersRemovedEvent, Type) == 0x0000);
static_assert(offsetof(FRCPresetControllersRemovedEvent, PresetName) == 0x0010);
static_assert(offsetof(FRCPresetControllersRemovedEvent, PresetId) == 0x0018);
static_assert(offsetof(FRCPresetControllersRemovedEvent, RemovedControllers) == 0x0028);
static_assert(offsetof(FRCPresetControllersRemovedEvent, RemovedControllerIds) == 0x0038);
static_assert(offsetof(FRCPresetControllersAddedEvent, Type) == 0x0000);
static_assert(offsetof(FRCPresetControllersAddedEvent, PresetName) == 0x0010);
static_assert(offsetof(FRCPresetControllersAddedEvent, PresetId) == 0x0018);
static_assert(offsetof(FRCPresetControllersAddedEvent, Description) == 0x0028);
static_assert(offsetof(FRCPresetControllersModifiedEvent, Type) == 0x0000);
static_assert(offsetof(FRCPresetControllersModifiedEvent, PresetName) == 0x0010);
static_assert(offsetof(FRCPresetControllersModifiedEvent, PresetId) == 0x0018);
static_assert(offsetof(FRCPresetControllersModifiedEvent, ModifiedControllers) == 0x0028);
static_assert(offsetof(FRCActorsChangedData, AddedActors) == 0x0000);
static_assert(offsetof(FRCActorsChangedData, RenamedActors) == 0x0010);
static_assert(offsetof(FRCActorsChangedData, DeletedActors) == 0x0020);
static_assert(offsetof(FRCActorsChangedEvent, Type) == 0x0000);
static_assert(offsetof(FRCActorsChangedEvent, Changes) == 0x0010);
static_assert(offsetof(FRCTransactionEndedEvent, Type) == 0x0000);
static_assert(offsetof(FRCCompressionChangedEvent, Type) == 0x0000);
static_assert(offsetof(FRCCompressionChangedEvent, Mode) == 0x0010);
