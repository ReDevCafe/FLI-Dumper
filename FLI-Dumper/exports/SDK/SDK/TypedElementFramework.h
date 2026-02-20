
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Enum /Script/TypedElementFramework.FTypedElementAlertColumnType
/// Size: 0x01 (1 bytes)
enum class FTypedElementAlertColumnType : uint8_t
{
	FTypedElementAlertColumnType__Error                                              = 0,
	FTypedElementAlertColumnType__Warning                                            = 1
};

/// Enum /Script/TypedElementFramework.ESCCModification
/// Size: 0x04 (4 bytes)
enum class ESCCModification : uint32_t
{
	ESCCModification__Modified                                                       = 0,
	ESCCModification__Added                                                          = 1,
	ESCCModification__Removed                                                        = 2,
	ESCCModification__Conflicted                                                     = 3
};

/// Class /Script/TypedElementFramework.TypedElementDataStorageCompatibilityInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UTypedElementDataStorageCompatibilityInterface : public UInterface
{ 
public:
};

/// Class /Script/TypedElementFramework.TypedElementDataStorageFactory
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UTypedElementDataStorageFactory : public UObject
{ 
public:
};

/// Class /Script/TypedElementFramework.TypedElementDataStorageInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UTypedElementDataStorageInterface : public UInterface
{ 
public:
};

/// Class /Script/TypedElementFramework.TypedElementDataStorageUiInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UTypedElementDataStorageUiInterface : public UInterface
{ 
public:
};

/// Class /Script/TypedElementFramework.TypedElementHandleLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UTypedElementHandleLibrary : public UObject
{ 
public:


	/// Functions
	// Function /Script/TypedElementFramework.TypedElementHandleLibrary.Release
	// void Release(FScriptTypedElementHandle& ElementHandle);                                                                  // [0x4221560] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementFramework.TypedElementHandleLibrary.NotEqual
	// bool NotEqual(FScriptTypedElementHandle& LHS, FScriptTypedElementHandle& RHS);                                           // [0x42212c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/TypedElementFramework.TypedElementHandleLibrary.IsSet
	// bool IsSet(FScriptTypedElementHandle& ElementHandle);                                                                    // [0x4221050] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/TypedElementFramework.TypedElementHandleLibrary.Equal
	// bool Equal(FScriptTypedElementHandle& LHS, FScriptTypedElementHandle& RHS);                                              // [0x42201d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/TypedElementFramework.TypedElementListLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UTypedElementListLibrary : public UObject
{ 
public:


	/// Functions
	// Function /Script/TypedElementFramework.TypedElementListLibrary.Shrink
	// void Shrink(FScriptTypedElementListProxy ElementList);                                                                   // [0x4221cb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.Reset
	// void Reset(FScriptTypedElementListProxy ElementList);                                                                    // [0x4221a40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.Reserve
	// void Reserve(FScriptTypedElementListProxy ElementList, int32_t Size);                                                    // [0x4221830] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.Remove
	// bool Remove(FScriptTypedElementListProxy ElementList, FScriptTypedElementHandle& ElementHandle);                         // [0x4221630] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.Num
	// int32_t Num(FScriptTypedElementListProxy ElementList);                                                                   // [0x4221400] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.IsValidIndex
	// bool IsValidIndex(FScriptTypedElementListProxy ElementList, int32_t Index);                                              // [0x4221120] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.HasElementsOfType
	// bool HasElementsOfType(FScriptTypedElementListProxy ElementList, FName ElementTypeName);                                 // [0x4220e90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.HasElements
	// bool HasElements(FScriptTypedElementListProxy ElementList, class UClass* BaseInterfaceType);                             // [0x4220be0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.GetElementInterface
	// class UObject* GetElementInterface(FScriptTypedElementListProxy ElementList, FScriptTypedElementHandle& ElementHandle, class UClass* BaseInterfaceType); // [0x4220760] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.GetElementHandles
	// TArray<FScriptTypedElementHandle> GetElementHandles(FScriptTypedElementListProxy ElementList, class UClass* BaseInterfaceType); // [0x4220550] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.GetElementHandleAt
	// FScriptTypedElementHandle GetElementHandleAt(FScriptTypedElementListProxy ElementList, int32_t Index);                   // [0x4220400] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.Empty
	// void Empty(FScriptTypedElementListProxy ElementList, int32_t Slack);                                                     // [0x42200b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.CreateScriptElementList
	// FScriptTypedElementListProxy CreateScriptElementList(class UTypedElementRegistry* Registry);                             // [0x421ff60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.CountElementsOfType
	// int32_t CountElementsOfType(FScriptTypedElementListProxy ElementList, FName ElementTypeName);                            // [0x421fda0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.CountElements
	// int32_t CountElements(FScriptTypedElementListProxy ElementList, class UClass* BaseInterfaceType);                        // [0x421fb00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.Contains
	// bool Contains(FScriptTypedElementListProxy ElementList, FScriptTypedElementHandle& ElementHandle);                       // [0x421f9a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.Clone
	// FScriptTypedElementListProxy Clone(FScriptTypedElementListProxy ElementList);                                            // [0x421f870] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.AppendList
	// void AppendList(FScriptTypedElementListProxy ElementList, FScriptTypedElementListProxy OtherElementList);                // [0x421f5c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.Append
	// void Append(FScriptTypedElementListProxy ElementList, TArray<FScriptTypedElementHandle>& ElementHandles);                // [0x421f390] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementFramework.TypedElementListLibrary.Add
	// bool Add(FScriptTypedElementListProxy ElementList, FScriptTypedElementHandle& ElementHandle);                            // [0x421f190] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/TypedElementFramework.TypedElementCounterInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UTypedElementCounterInterface : public UInterface
{ 
public:
};

/// Class /Script/TypedElementFramework.TypedElementRegistry
/// Size: 0x0978 (2424 bytes) (0x000028 - 0x000978) align 8 MaxSize: 0x0978
class UTypedElementRegistry : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x950];                                     // 0x0028   (0x0950)  MISSED


	/// Functions
	// Function /Script/TypedElementFramework.TypedElementRegistry.GetInstance
	// class UTypedElementRegistry* GetInstance();                                                                              // [0x4220ac0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/TypedElementFramework.TypedElementRegistry.GetElementInterface
	// class UObject* GetElementInterface(FScriptTypedElementHandle& InElementHandle, class UClass* InBaseInterfaceType);       // [0x4220980] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TypedElementFramework.TestTypedElementInterfaceA
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UTestTypedElementInterfaceA : public UInterface
{ 
public:


	/// Functions
	// Function /Script/TypedElementFramework.TestTypedElementInterfaceA.SetDisplayName
	// bool SetDisplayName(FScriptTypedElementHandle& InElementHandle, FText InNewName, bool bNotify);                          // [0x4221b20] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementFramework.TestTypedElementInterfaceA.GetDisplayName
	// FText GetDisplayName(FScriptTypedElementHandle& InElementHandle);                                                        // [0x4220310] Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/TypedElementFramework.TestTypedElementInterfaceB
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UTestTypedElementInterfaceB : public UInterface
{ 
public:


	/// Functions
	// Function /Script/TypedElementFramework.TestTypedElementInterfaceB.MarkAsTested
	// bool MarkAsTested(FScriptTypedElementHandle& InElementHandle);                                                           // [0x4220b10] Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/TypedElementFramework.TestTypedElementInterfaceC
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UTestTypedElementInterfaceC : public UInterface
{ 
public:


	/// Functions
	// Function /Script/TypedElementFramework.TestTypedElementInterfaceC.GetIsTested
	// bool GetIsTested(FScriptTypedElementHandle& InElementHandle);                                                            // [0x4220b10] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TypedElementFramework.TestTypedElementInterfaceA_ImplTyped
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UTestTypedElementInterfaceA_ImplTyped : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/TypedElementFramework.TestTypedElementInterfaceA_ImplUntyped
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UTestTypedElementInterfaceA_ImplUntyped : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/TypedElementFramework.TestTypedElementInterfaceBAndC_Typed
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UTestTypedElementInterfaceBAndC_Typed : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED
};

/// Struct /Script/TypedElementFramework.ScriptTypedElementHandle
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FScriptTypedElementHandle
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/TypedElementFramework.TypedElementDataStorageColumn
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0000
struct FTypedElementDataStorageColumn
{ 
};

/// Struct /Script/TypedElementFramework.TypedElementAlertColumn
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FTypedElementAlertColumn : FTypedElementDataStorageColumn
{ 
	FText                                              Message;                                                    // 0x0000   (0x0018)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0018   (0x0002)  MISSED
	FTypedElementAlertColumnType                       AlertType;                                                  // 0x001A   (0x0001)  
	unsigned char                                      UnknownData01_7[0x5];                                       // 0x001B   (0x0005)  MISSED
};

/// Struct /Script/TypedElementFramework.TypedElementChildAlertColumn
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FTypedElementChildAlertColumn : FTypedElementDataStorageColumn
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/TypedElementFramework.TypedElementUObjectColumn
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FTypedElementUObjectColumn : FTypedElementDataStorageColumn
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/TypedElementFramework.TypedElementExternalObjectColumn
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FTypedElementExternalObjectColumn : FTypedElementDataStorageColumn
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/TypedElementFramework.TypedElementDataStorageTag
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FTypedElementDataStorageTag
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/TypedElementFramework.TypedElementWidgetConstructor
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FTypedElementWidgetConstructor
{ 
	unsigned char                                      UnknownData00_2[0x28];                                      // 0x0000   (0x0028)  MISSED
};

/// Struct /Script/TypedElementFramework.TypedElementParentColumn
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FTypedElementParentColumn : FTypedElementDataStorageColumn
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/TypedElementFramework.TypedElementUnresolvedParentColumn
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FTypedElementUnresolvedParentColumn : FTypedElementDataStorageColumn
{ 
	uint64_t                                           ParentIdHash;                                               // 0x0000   (0x0008)  
};

/// Struct /Script/TypedElementFramework.TypedElementLabelColumn
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FTypedElementLabelColumn : FTypedElementDataStorageColumn
{ 
	FString                                            Label;                                                      // 0x0000   (0x0010)  
};

/// Struct /Script/TypedElementFramework.TypedElementLabelHashColumn
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FTypedElementLabelHashColumn : FTypedElementDataStorageColumn
{ 
	uint64_t                                           LabelHash;                                                  // 0x0000   (0x0008)  
};

/// Struct /Script/TypedElementFramework.ScriptTypedElementListProxy
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FScriptTypedElementListProxy
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/TypedElementFramework.TypedElementSyncBackToWorldTag
/// Size: 0x0001 (1 bytes) (0x000001 - 0x000001) align 1 MaxSize: 0x0001
struct FTypedElementSyncBackToWorldTag : FTypedElementDataStorageTag
{ 
};

/// Struct /Script/TypedElementFramework.TypedElementSyncFromWorldTag
/// Size: 0x0001 (1 bytes) (0x000001 - 0x000001) align 1 MaxSize: 0x0001
struct FTypedElementSyncFromWorldTag : FTypedElementDataStorageTag
{ 
};

/// Struct /Script/TypedElementFramework.TypedElementSyncFromWorldInteractiveTag
/// Size: 0x0001 (1 bytes) (0x000001 - 0x000001) align 1 MaxSize: 0x0001
struct FTypedElementSyncFromWorldInteractiveTag : FTypedElementDataStorageTag
{ 
};

/// Struct /Script/TypedElementFramework.TypedElementRowReferenceColumn
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FTypedElementRowReferenceColumn : FTypedElementDataStorageColumn
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/TypedElementFramework.ObjectOverrideColumn
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FObjectOverrideColumn : FTypedElementDataStorageColumn
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/TypedElementFramework.TypedElementPackageUnresolvedReference
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FTypedElementPackageUnresolvedReference : FTypedElementDataStorageColumn
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/TypedElementFramework.TypedElementPackageReference
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FTypedElementPackageReference : FTypedElementDataStorageColumn
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/TypedElementFramework.TypedElementPackagePathColumn
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FTypedElementPackagePathColumn : FTypedElementDataStorageColumn
{ 
	FString                                            Path;                                                       // 0x0000   (0x0010)  
};

/// Struct /Script/TypedElementFramework.TypedElementPackageLoadedPathColumn
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FTypedElementPackageLoadedPathColumn : FTypedElementDataStorageColumn
{ 
	unsigned char                                      UnknownData00_1[0xC];                                       // 0x0000   (0x000C)  MISSED
};

/// Struct /Script/TypedElementFramework.TypedElementPivotOffset
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FTypedElementPivotOffset : FTypedElementDataStorageColumn
{ 
	FVector                                            Offset;                                                     // 0x0000   (0x0018)  
};

/// Struct /Script/TypedElementFramework.SCCInChangelistTag
/// Size: 0x0001 (1 bytes) (0x000001 - 0x000001) align 1 MaxSize: 0x0001
struct FSCCInChangelistTag : FTypedElementDataStorageTag
{ 
};

/// Struct /Script/TypedElementFramework.SCCStagedTag
/// Size: 0x0001 (1 bytes) (0x000001 - 0x000001) align 1 MaxSize: 0x0001
struct FSCCStagedTag : FTypedElementDataStorageTag
{ 
};

/// Struct /Script/TypedElementFramework.SCCLockedTag
/// Size: 0x0001 (1 bytes) (0x000001 - 0x000001) align 1 MaxSize: 0x0001
struct FSCCLockedTag : FTypedElementDataStorageTag
{ 
};

/// Struct /Script/TypedElementFramework.SCCExternallyEditedTag
/// Size: 0x0001 (1 bytes) (0x000001 - 0x000001) align 1 MaxSize: 0x0001
struct FSCCExternallyEditedTag : FTypedElementDataStorageTag
{ 
};

/// Struct /Script/TypedElementFramework.SCCNotCurrentTag
/// Size: 0x0001 (1 bytes) (0x000001 - 0x000001) align 1 MaxSize: 0x0001
struct FSCCNotCurrentTag : FTypedElementDataStorageTag
{ 
};

/// Struct /Script/TypedElementFramework.SCCStatusColumn
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FSCCStatusColumn : FTypedElementDataStorageColumn
{ 
	ESCCModification                                   Modification;                                               // 0x0000   (0x0004)  
};

/// Struct /Script/TypedElementFramework.SCCRevisionId
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FSCCRevisionId
{ 
	uint32_t                                           ID[5];                                                      // 0x0000   (0x0014)  
};

/// Struct /Script/TypedElementFramework.SCCRevisionIdColumn
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FSCCRevisionIdColumn : FTypedElementDataStorageColumn
{ 
	FSCCRevisionId                                     RevisionId;                                                 // 0x0000   (0x0014)  
};

/// Struct /Script/TypedElementFramework.SCCExternalRevisionIdColumn
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FSCCExternalRevisionIdColumn : FTypedElementDataStorageColumn
{ 
	FSCCRevisionId                                     RevisionId;                                                 // 0x0000   (0x0014)  
};

/// Struct /Script/TypedElementFramework.SCCUserInfo
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FSCCUserInfo
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
};

/// Struct /Script/TypedElementFramework.SCCExternallyLockedColumn
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FSCCExternallyLockedColumn : FTypedElementDataStorageColumn
{ 
	FSCCUserInfo                                       LockedBy;                                                   // 0x0000   (0x0010)  
};

/// Struct /Script/TypedElementFramework.TypedElementSelectionColumn
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FTypedElementSelectionColumn : FTypedElementDataStorageColumn
{ 
	FName                                              SelectionSet;                                               // 0x0000   (0x0008)  
};

/// Struct /Script/TypedElementFramework.TypedElementSlateWidgetReferenceColumn
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FTypedElementSlateWidgetReferenceColumn : FTypedElementDataStorageColumn
{ 
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0000   (0x0020)  MISSED
};

/// Struct /Script/TypedElementFramework.TypedElementSlateWidgetReferenceDeletesRowTag
/// Size: 0x0001 (1 bytes) (0x000001 - 0x000001) align 1 MaxSize: 0x0001
struct FTypedElementSlateWidgetReferenceDeletesRowTag : FTypedElementDataStorageTag
{ 
};

/// Struct /Script/TypedElementFramework.TestColumnA
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FTestColumnA : FTypedElementDataStorageColumn
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/TypedElementFramework.TestColumnB
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FTestColumnB : FTypedElementDataStorageColumn
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/TypedElementFramework.TestColumnC
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FTestColumnC : FTypedElementDataStorageColumn
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/TypedElementFramework.TestColumnD
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FTestColumnD : FTypedElementDataStorageColumn
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/TypedElementFramework.TestColumnE
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FTestColumnE : FTypedElementDataStorageColumn
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/TypedElementFramework.TestColumnF
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FTestColumnF : FTypedElementDataStorageColumn
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/TypedElementFramework.TestColumnG
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FTestColumnG : FTypedElementDataStorageColumn
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/TypedElementFramework.TestTagColumnA
/// Size: 0x0001 (1 bytes) (0x000001 - 0x000001) align 1 MaxSize: 0x0001
struct FTestTagColumnA : FTypedElementDataStorageTag
{ 
};

/// Struct /Script/TypedElementFramework.TestTagColumnB
/// Size: 0x0001 (1 bytes) (0x000001 - 0x000001) align 1 MaxSize: 0x0001
struct FTestTagColumnB : FTypedElementDataStorageTag
{ 
};

/// Struct /Script/TypedElementFramework.TestTagColumnC
/// Size: 0x0001 (1 bytes) (0x000001 - 0x000001) align 1 MaxSize: 0x0001
struct FTestTagColumnC : FTypedElementDataStorageTag
{ 
};

/// Struct /Script/TypedElementFramework.TestTagColumnD
/// Size: 0x0001 (1 bytes) (0x000001 - 0x000001) align 1 MaxSize: 0x0001
struct FTestTagColumnD : FTypedElementDataStorageTag
{ 
};

/// Struct /Script/TypedElementFramework.TypedElementLocalTransformColumn
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 16 MaxSize: 0x0060
struct FTypedElementLocalTransformColumn : FTypedElementDataStorageColumn
{ 
	FTransform                                         Transform;                                                  // 0x0000   (0x0060)  
};

/// Struct /Script/TypedElementFramework.TypedElementClassTypeInfoColumn
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FTypedElementClassTypeInfoColumn : FTypedElementDataStorageColumn
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/TypedElementFramework.TypedElementScriptStructTypeInfoColumn
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FTypedElementScriptStructTypeInfoColumn : FTypedElementDataStorageColumn
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/TypedElementFramework.TypedElementU32IntValueCacheColumn
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FTypedElementU32IntValueCacheColumn : FTypedElementDataStorageColumn
{ 
	uint32_t                                           Value;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/TypedElementFramework.TypedElementI32IntValueCacheColumn
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FTypedElementI32IntValueCacheColumn : FTypedElementDataStorageColumn
{ 
	int32_t                                            Value;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/TypedElementFramework.TypedElementU64IntValueCacheColumn
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FTypedElementU64IntValueCacheColumn : FTypedElementDataStorageColumn
{ 
	uint64_t                                           Value;                                                      // 0x0000   (0x0008)  
};

/// Struct /Script/TypedElementFramework.TypedElementI64IntValueCacheColumn
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FTypedElementI64IntValueCacheColumn : FTypedElementDataStorageColumn
{ 
	int64_t                                            Value;                                                      // 0x0000   (0x0008)  
};

/// Struct /Script/TypedElementFramework.TypedElementFloatValueCacheColumn
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FTypedElementFloatValueCacheColumn : FTypedElementDataStorageColumn
{ 
	float                                              Value;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/TypedElementFramework.TypedElementViewportColorColumn
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FTypedElementViewportColorColumn : FTypedElementDataStorageColumn
{ 
	char                                               SelectionOutlineColorIndex;                                 // 0x0000   (0x0001)  
};

#pragma pack(pop)


static_assert(sizeof(UTypedElementDataStorageCompatibilityInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UTypedElementDataStorageFactory) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UTypedElementDataStorageInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UTypedElementDataStorageUiInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UTypedElementHandleLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UTypedElementListLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UTypedElementCounterInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UTypedElementRegistry) == 0x0978); // 2424 bytes (0x000028 - 0x000978)
static_assert(sizeof(UTestTypedElementInterfaceA) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UTestTypedElementInterfaceB) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UTestTypedElementInterfaceC) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UTestTypedElementInterfaceA_ImplTyped) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UTestTypedElementInterfaceA_ImplUntyped) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UTestTypedElementInterfaceBAndC_Typed) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(FScriptTypedElementHandle) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FTypedElementDataStorageColumn) == 0x0001); // 0 bytes (0x000000 - 0x000001)
static_assert(sizeof(FTypedElementAlertColumn) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FTypedElementChildAlertColumn) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FTypedElementUObjectColumn) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FTypedElementExternalObjectColumn) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FTypedElementDataStorageTag) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FTypedElementWidgetConstructor) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FTypedElementParentColumn) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FTypedElementUnresolvedParentColumn) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FTypedElementLabelColumn) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FTypedElementLabelHashColumn) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FScriptTypedElementListProxy) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FTypedElementSyncBackToWorldTag) == 0x0001); // 1 bytes (0x000001 - 0x000001)
static_assert(sizeof(FTypedElementSyncFromWorldTag) == 0x0001); // 1 bytes (0x000001 - 0x000001)
static_assert(sizeof(FTypedElementSyncFromWorldInteractiveTag) == 0x0001); // 1 bytes (0x000001 - 0x000001)
static_assert(sizeof(FTypedElementRowReferenceColumn) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FObjectOverrideColumn) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FTypedElementPackageUnresolvedReference) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FTypedElementPackageReference) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FTypedElementPackagePathColumn) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FTypedElementPackageLoadedPathColumn) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FTypedElementPivotOffset) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FSCCInChangelistTag) == 0x0001); // 1 bytes (0x000001 - 0x000001)
static_assert(sizeof(FSCCStagedTag) == 0x0001); // 1 bytes (0x000001 - 0x000001)
static_assert(sizeof(FSCCLockedTag) == 0x0001); // 1 bytes (0x000001 - 0x000001)
static_assert(sizeof(FSCCExternallyEditedTag) == 0x0001); // 1 bytes (0x000001 - 0x000001)
static_assert(sizeof(FSCCNotCurrentTag) == 0x0001); // 1 bytes (0x000001 - 0x000001)
static_assert(sizeof(FSCCStatusColumn) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FSCCRevisionId) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FSCCRevisionIdColumn) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FSCCExternalRevisionIdColumn) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FSCCUserInfo) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FSCCExternallyLockedColumn) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FTypedElementSelectionColumn) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FTypedElementSlateWidgetReferenceColumn) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FTypedElementSlateWidgetReferenceDeletesRowTag) == 0x0001); // 1 bytes (0x000001 - 0x000001)
static_assert(sizeof(FTestColumnA) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FTestColumnB) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FTestColumnC) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FTestColumnD) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FTestColumnE) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FTestColumnF) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FTestColumnG) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FTestTagColumnA) == 0x0001); // 1 bytes (0x000001 - 0x000001)
static_assert(sizeof(FTestTagColumnB) == 0x0001); // 1 bytes (0x000001 - 0x000001)
static_assert(sizeof(FTestTagColumnC) == 0x0001); // 1 bytes (0x000001 - 0x000001)
static_assert(sizeof(FTestTagColumnD) == 0x0001); // 1 bytes (0x000001 - 0x000001)
static_assert(sizeof(FTypedElementLocalTransformColumn) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FTypedElementClassTypeInfoColumn) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FTypedElementScriptStructTypeInfoColumn) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FTypedElementU32IntValueCacheColumn) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FTypedElementI32IntValueCacheColumn) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FTypedElementU64IntValueCacheColumn) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FTypedElementI64IntValueCacheColumn) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FTypedElementFloatValueCacheColumn) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FTypedElementViewportColorColumn) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(offsetof(FTypedElementAlertColumn, Message) == 0x0000);
static_assert(offsetof(FTypedElementAlertColumn, AlertType) == 0x001A);
static_assert(offsetof(FTypedElementLabelColumn, Label) == 0x0000);
static_assert(offsetof(FTypedElementPackagePathColumn, Path) == 0x0000);
static_assert(offsetof(FTypedElementPivotOffset, Offset) == 0x0000);
static_assert(offsetof(FSCCStatusColumn, Modification) == 0x0000);
static_assert(offsetof(FSCCRevisionIdColumn, RevisionId) == 0x0000);
static_assert(offsetof(FSCCExternalRevisionIdColumn, RevisionId) == 0x0000);
static_assert(offsetof(FSCCUserInfo, Name) == 0x0000);
static_assert(offsetof(FSCCExternallyLockedColumn, LockedBy) == 0x0000);
static_assert(offsetof(FTypedElementSelectionColumn, SelectionSet) == 0x0000);
static_assert(offsetof(FTypedElementLocalTransformColumn, Transform) == 0x0000);
