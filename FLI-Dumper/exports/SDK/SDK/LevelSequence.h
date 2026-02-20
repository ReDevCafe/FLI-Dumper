
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: MediaAssets
/// dependency: MovieScene
/// dependency: UMG

#pragma pack(push, 0x1)

/// Class /Script/LevelSequence.DefaultLevelSequenceInstanceData
/// Size: 0x00A0 (160 bytes) (0x000028 - 0x0000A0) align 16 MaxSize: 0x00A0
class UDefaultLevelSequenceInstanceData : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	class AActor*                                      TransformOriginActor;                                       // 0x0030   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0038   (0x0008)  MISSED
	FTransform                                         TransformOrigin;                                            // 0x0040   (0x0060)  
};

/// Class /Script/LevelSequence.AnimSequenceLevelSequenceLink
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align 8 MaxSize: 0x0058
class UAnimSequenceLevelSequenceLink : public UAssetUserData
{ 
public:
	FGuid                                              SkelTrackGuid;                                              // 0x0028   (0x0010)  
	FSoftObjectPath                                    PathToLevelSequence;                                        // 0x0038   (0x0020)  
};

/// Struct /Script/LevelSequence.UpgradedLevelSequenceBindingReferences
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FUpgradedLevelSequenceBindingReferences : FMovieSceneBindingReferences
{ 
};

/// Class /Script/LevelSequence.LevelSequence
/// Size: 0x00A0 (160 bytes) (0x000068 - 0x0000A0) align 8 MaxSize: 0x00A0
class ULevelSequence : public UMovieSceneSequence
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0068   (0x0008)  MISSED
	class UMovieScene*                                 MovieScene;                                                 // 0x0070   (0x0008)  
	FUpgradedLevelSequenceBindingReferences            BindingReferences;                                          // 0x0078   (0x0010)  
	class UClass*                                      DirectorClass;                                              // 0x0088   (0x0008)  
	TArray<class UAssetUserData*>                      AssetUserData;                                              // 0x0090   (0x0010)  


	/// Functions
	// Function /Script/LevelSequence.LevelSequence.RemoveMetaDataByClass
	// void RemoveMetaDataByClass(class UClass* InClass);                                                                       // [0x54859b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequence.FindOrAddMetaDataByClass
	// class UObject* FindOrAddMetaDataByClass(class UClass* InClass);                                                          // [0x5484e00] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequence.FindMetaDataByClass
	// class UObject* FindMetaDataByClass(class UClass* InClass);                                                               // [0x5484e00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequence.CopyMetaData
	// class UObject* CopyMetaData(class UObject* InMetaData);                                                                  // [0x5484950] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LevelSequence.LevelSequenceBurnInInitSettings
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class ULevelSequenceBurnInInitSettings : public UObject
{ 
public:
};

/// Class /Script/LevelSequence.LevelSequenceBurnInOptions
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align 8 MaxSize: 0x0058
class ULevelSequenceBurnInOptions : public UObject
{ 
public:
	bool                                               bUseBurnIn;                                                 // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
	FSoftClassPath                                     BurnInClass;                                                // 0x0030   (0x0020)  
	class ULevelSequenceBurnInInitSettings*            Settings;                                                   // 0x0050   (0x0008)  


	/// Functions
	// Function /Script/LevelSequence.LevelSequenceBurnInOptions.SetBurnIn
	// void SetBurnIn(FSoftClassPath InBurnInClass);                                                                            // [0x5485de0] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
};

/// Struct /Script/LevelSequence.LevelSequenceCameraSettings
/// Size: 0x0002 (2 bytes) (0x000000 - 0x000002) align 1 MaxSize: 0x0002
struct FLevelSequenceCameraSettings
{ 
	bool                                               bOverrideAspectRatioAxisConstraint;                         // 0x0000   (0x0001)  
	TEnumAsByte<EAspectRatioAxisConstraint>            AspectRatioAxisConstraint;                                  // 0x0001   (0x0001)  
};

/// Class /Script/LevelSequence.LevelSequenceActor
/// Size: 0x0338 (824 bytes) (0x000290 - 0x000338) align 8 MaxSize: 0x0338
class ALevelSequenceActor : public AActor
{ 
public:
	unsigned char                                      UnknownData00_8[0x18];                                      // 0x0290   (0x0018)  MISSED
	FMovieSceneSequencePlaybackSettings                PlaybackSettings;                                           // 0x02A8   (0x0028)  
	class ULevelSequencePlayer*                        SequencePlayer;                                             // 0x02D0   (0x0008)  
	class ULevelSequence*                              LevelSequenceAsset;                                         // 0x02D8   (0x0008)  
	FLevelSequenceCameraSettings                       CameraSettings;                                             // 0x02E0   (0x0002)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x02E2   (0x0006)  MISSED
	class ULevelSequenceBurnInOptions*                 BurnInOptions;                                              // 0x02E8   (0x0008)  
	class UMovieSceneBindingOverrides*                 BindingOverrides;                                           // 0x02F0   (0x0008)  
	bool                                               bAutoPlay : 1;                                              // 0x02F8:0 (0x0001)  
	bool                                               bOverrideInstanceData : 1;                                  // 0x02F8:1 (0x0001)  
	bool                                               bReplicatePlayback : 1;                                     // 0x02F8:2 (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x02F9   (0x0007)  MISSED
	class UObject*                                     DefaultInstanceData;                                        // 0x0300   (0x0008)  
	class ULevelSequenceBurnIn*                        BurnInInstance;                                             // 0x0308   (0x0008)  
	bool                                               bShowBurnin;                                                // 0x0310   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0311   (0x0003)  MISSED
	FWorldPartitionResolveData                         WorldPartitionResolveData;                                  // 0x0314   (0x0020)  
	unsigned char                                      UnknownData04_7[0x4];                                       // 0x0334   (0x0004)  MISSED


	/// Functions
	// Function /Script/LevelSequence.LevelSequenceActor.ShowBurnin
	// void ShowBurnin();                                                                                                       // [0x5486080] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.SetSequence
	// void SetSequence(class ULevelSequence* InSequence);                                                                      // [0x5485fa0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.SetReplicatePlayback
	// void SetReplicatePlayback(bool ReplicatePlayback);                                                                       // [0x5485f00] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.SetBindingByTag
	// void SetBindingByTag(FName BindingTag, TArray<AActor*>& Actors, bool bAllowBindingsFromAsset);                           // [0x5485cb0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.SetBinding
	// void SetBinding(FMovieSceneObjectBindingID Binding, TArray<AActor*>& Actors, bool bAllowBindingsFromAsset);              // [0x5485b50] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.ResetBindings
	// void ResetBindings();                                                                                                    // [0x5485b00] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.ResetBinding
	// void ResetBinding(FMovieSceneObjectBindingID Binding);                                                                   // [0x5485a40] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.RemoveBindingByTag
	// void RemoveBindingByTag(FName Tag, class AActor* Actor);                                                                 // [0x54858e0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.RemoveBinding
	// void RemoveBinding(FMovieSceneObjectBindingID Binding, class AActor* Actor);                                             // [0x54857e0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.OnLevelSequenceLoaded__DelegateSignature
	// void OnLevelSequenceLoaded__DelegateSignature();                                                                         // [0x3618b30] Public|Delegate      
	// Function /Script/LevelSequence.LevelSequenceActor.HideBurnin
	// void HideBurnin();                                                                                                       // [0x54856b0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.GetSequencePlayer
	// class ULevelSequencePlayer* GetSequencePlayer();                                                                         // [0x5485610] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequenceActor.GetSequence
	// class ULevelSequence* GetSequence();                                                                                     // [0x54855a0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequenceActor.FindNamedBindings
	// TArray<FMovieSceneObjectBindingID> FindNamedBindings(FName Tag);                                                         // [0x5484f80] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequenceActor.FindNamedBinding
	// FMovieSceneObjectBindingID FindNamedBinding(FName Tag);                                                                  // [0x5484ea0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequenceActor.AddBindingByTag
	// void AddBindingByTag(FName BindingTag, class AActor* Actor, bool bAllowBindingsFromAsset);                               // [0x5484840] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.AddBinding
	// void AddBinding(FMovieSceneObjectBindingID Binding, class AActor* Actor, bool bAllowBindingsFromAsset);                  // [0x54846f0] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/LevelSequence.ReplicatedLevelSequenceActor
/// Size: 0x0338 (824 bytes) (0x000338 - 0x000338) align 8 MaxSize: 0x0338
class AReplicatedLevelSequenceActor : public ALevelSequenceActor
{ 
public:
};

/// Struct /Script/LevelSequence.LevelSequenceAnimSequenceLinkItem
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FLevelSequenceAnimSequenceLinkItem
{ 
	FGuid                                              SkelTrackGuid;                                              // 0x0000   (0x0010)  
	FSoftObjectPath                                    PathToAnimSequence;                                         // 0x0010   (0x0020)  
	bool                                               bExportTransforms;                                          // 0x0030   (0x0001)  
	bool                                               bExportMorphTargets;                                        // 0x0031   (0x0001)  
	bool                                               bExportAttributeCurves;                                     // 0x0032   (0x0001)  
	bool                                               bExportMaterialCurves;                                      // 0x0033   (0x0001)  
	EAnimInterpolationType                             Interpolation;                                              // 0x0034   (0x0001)  
	TEnumAsByte<ERichCurveInterpMode>                  CurveInterpolation;                                         // 0x0035   (0x0001)  
	bool                                               bRecordInWorldSpace;                                        // 0x0036   (0x0001)  
	bool                                               bEvaluateAllSkeletalMeshComponents;                         // 0x0037   (0x0001)  
};

/// Class /Script/LevelSequence.LevelSequenceAnimSequenceLink
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class ULevelSequenceAnimSequenceLink : public UAssetUserData
{ 
public:
	TArray<FLevelSequenceAnimSequenceLinkItem>         AnimSequenceLinks;                                          // 0x0028   (0x0010)  
};

/// Struct /Script/LevelSequence.LevelSequencePlayerSnapshot
/// Size: 0x00C8 (200 bytes) (0x000000 - 0x0000C8) align 8 MaxSize: 0x00C8
struct FLevelSequencePlayerSnapshot
{ 
	FString                                            RootName;                                                   // 0x0000   (0x0010)  
	FQualifiedFrameTime                                RootTime;                                                   // 0x0010   (0x0010)  
	FQualifiedFrameTime                                SourceTime;                                                 // 0x0020   (0x0010)  
	FString                                            CurrentShotName;                                            // 0x0030   (0x0010)  
	FQualifiedFrameTime                                CurrentShotLocalTime;                                       // 0x0040   (0x0010)  
	FQualifiedFrameTime                                CurrentShotSourceTime;                                      // 0x0050   (0x0010)  
	FString                                            SourceTimecode;                                             // 0x0060   (0x0010)  
	TWeakObjectPtr<class UCameraComponent*>            CameraComponent;                                            // 0x0070   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0078   (0x0020)  MISSED
	class ULevelSequence*                              ActiveShot;                                                 // 0x0098   (0x0008)  
	FMovieSceneSequenceID                              ShotID;                                                     // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00A4   (0x0004)  MISSED
	FString                                            MasterName;                                                 // 0x00A8   (0x0010)  
	FQualifiedFrameTime                                MasterTime;                                                 // 0x00B8   (0x0010)  
};

/// Class /Script/LevelSequence.LevelSequenceBurnIn
/// Size: 0x03B0 (944 bytes) (0x0002E0 - 0x0003B0) align 8 MaxSize: 0x03B0
class ULevelSequenceBurnIn : public UUserWidget
{ 
public:
	FLevelSequencePlayerSnapshot                       FrameInformation;                                           // 0x02E0   (0x00C8)  
	class ALevelSequenceActor*                         LevelSequenceActor;                                         // 0x03A8   (0x0008)  


	/// Functions
	// Function /Script/LevelSequence.LevelSequenceBurnIn.SetSettings
	// void SetSettings(class UObject* InSettings);                                                                             // [0x3618b30] RequiredAPI|Event|Public|BlueprintEvent 
	// Function /Script/LevelSequence.LevelSequenceBurnIn.GetSettingsClass
	// class UClass* GetSettingsClass();                                                                                        // [0x5485630] RequiredAPI|Native|Event|Public|BlueprintEvent|Const 
};

/// Class /Script/LevelSequence.LevelSequenceDirector
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class ULevelSequenceDirector : public UObject
{ 
public:
	int32_t                                            SubSequenceID;                                              // 0x0028   (0x0004)  
	TWeakObjectPtr<class UMovieSceneEntitySystemLinker*> WeakLinker;                                               // 0x002C   (0x0008)  
	uint16_t                                           InstanceId;                                                 // 0x0034   (0x0002)  
	uint16_t                                           InstanceSerial;                                             // 0x0036   (0x0002)  
	class ULevelSequencePlayer*                        Player;                                                     // 0x0038   (0x0008)  
	int32_t                                            MovieScenePlayerIndex;                                      // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0044   (0x0004)  MISSED


	/// Functions
	// Function /Script/LevelSequence.LevelSequenceDirector.OnCreated
	// void OnCreated();                                                                                                        // [0x3618b30] RequiredAPI|Event|Public|BlueprintEvent 
	// Function /Script/LevelSequence.LevelSequenceDirector.GetSequence
	// class UMovieSceneSequence* GetSequence();                                                                                // [0x54855e0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceDirector.GetRootSequenceTime
	// FQualifiedFrameTime GetRootSequenceTime();                                                                               // [0x5485560] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequenceDirector.GetMasterSequenceTime
	// FQualifiedFrameTime GetMasterSequenceTime();                                                                             // [0x5485520] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequenceDirector.GetCurrentTime
	// FQualifiedFrameTime GetCurrentTime();                                                                                    // [0x54854e0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequenceDirector.GetBoundObjects
	// TArray<UObject*> GetBoundObjects(FMovieSceneObjectBindingID ObjectBinding);                                              // [0x54853d0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceDirector.GetBoundObject
	// class UObject* GetBoundObject(FMovieSceneObjectBindingID ObjectBinding);                                                 // [0x5485300] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceDirector.GetBoundActors
	// TArray<AActor*> GetBoundActors(FMovieSceneObjectBindingID ObjectBinding);                                                // [0x54851f0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceDirector.GetBoundActor
	// class AActor* GetBoundActor(FMovieSceneObjectBindingID ObjectBinding);                                                   // [0x5485120] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/LevelSequence.LegacyLevelSequenceDirectorBlueprint
/// Size: 0x00A8 (168 bytes) (0x0000A8 - 0x0000A8) align 8 MaxSize: 0x00A8
class ULegacyLevelSequenceDirectorBlueprint : public UBlueprint
{ 
public:
};

/// Class /Script/LevelSequence.LevelSequencePlayer
/// Size: 0x0598 (1432 bytes) (0x000460 - 0x000598) align 8 MaxSize: 0x0598
class ULevelSequencePlayer : public UMovieSceneSequencePlayer
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0460   (0x0008)  MISSED
	SDK_UNDEFINED(16,487) /* FMulticastInlineDelegate */ __um(OnCameraCut);                                        // 0x0468   (0x0010)  
	unsigned char                                      UnknownData01_7[0x120];                                     // 0x0478   (0x0120)  MISSED


	/// Functions
	// Function /Script/LevelSequence.LevelSequencePlayer.GetActiveCameraComponent
	// class UCameraComponent* GetActiveCameraComponent();                                                                      // [0x54850e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer
	// class ULevelSequencePlayer* CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, FMovieSceneSequencePlaybackSettings Settings, class ALevelSequenceActor*& OutActor); // [0x54849d0] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/LevelSequence.LevelSequenceProjectSettings
/// Size: 0x0068 (104 bytes) (0x000038 - 0x000068) align 8 MaxSize: 0x0068
class ULevelSequenceProjectSettings : public UDeveloperSettings
{ 
public:
	bool                                               bDefaultLockEngineToDisplayRate;                            // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
	FString                                            DefaultDisplayRate;                                         // 0x0040   (0x0010)  
	FString                                            DefaultTickResolution;                                      // 0x0050   (0x0010)  
	EUpdateClockSource                                 DefaultClockSource;                                         // 0x0060   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0061   (0x0007)  MISSED
};

/// Class /Script/LevelSequence.LevelSequenceMediaController
/// Size: 0x02B8 (696 bytes) (0x000290 - 0x0002B8) align 8 MaxSize: 0x02B8
class ALevelSequenceMediaController : public AActor
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0290   (0x0008)  MISSED
	class ALevelSequenceActor*                         Sequence;                                                   // 0x0298   (0x0008)  
	class UMediaComponent*                             MediaComponent;                                             // 0x02A0   (0x0008)  
	float                                              ServerStartTimeSeconds;                                     // 0x02A8   (0x0004)  
	unsigned char                                      UnknownData01_7[0xC];                                       // 0x02AC   (0x000C)  MISSED


	/// Functions
	// Function /Script/LevelSequence.LevelSequenceMediaController.SynchronizeToServer
	// void SynchronizeToServer(float DesyncThresholdSeconds);                                                                  // [0x54860b0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceMediaController.Play
	// void Play();                                                                                                             // [0x54856f0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceMediaController.OnRep_ServerStartTimeSeconds
	// void OnRep_ServerStartTimeSeconds();                                                                                     // [0x54856d0] Final|RequiredAPI|Native|Private 
	// Function /Script/LevelSequence.LevelSequenceMediaController.GetSequence
	// class ALevelSequenceActor* GetSequence();                                                                                // [0x54855c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequenceMediaController.GetMediaComponent
	// class UMediaComponent* GetMediaComponent();                                                                              // [0x53b1df0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/LevelSequence.LegacyLazyObjectPtrFragment
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FLegacyLazyObjectPtrFragment
{ 
	FGuid                                              LazyObjectId;                                               // 0x0000   (0x0010)  
};

/// Struct /Script/LevelSequence.LevelSequenceLegacyObjectReference
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FLevelSequenceLegacyObjectReference
{ 
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0000   (0x0020)  MISSED
};

/// Struct /Script/LevelSequence.LevelSequenceObjectReferenceMap
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FLevelSequenceObjectReferenceMap
{ 
	unsigned char                                      UnknownData00_2[0x50];                                      // 0x0000   (0x0050)  MISSED
};

/// Struct /Script/LevelSequence.BoundActorProxy
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FBoundActorProxy
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/LevelSequence.LevelSequenceBindingReference
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FLevelSequenceBindingReference
{ 
	FString                                            PackageName;                                                // 0x0000   (0x0010)  
	FSoftObjectPath                                    ExternalObjectPath;                                         // 0x0010   (0x0020)  
	FString                                            ObjectPath;                                                 // 0x0030   (0x0010)  
};

/// Struct /Script/LevelSequence.LevelSequenceBindingReferenceArray
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FLevelSequenceBindingReferenceArray
{ 
	TArray<FLevelSequenceBindingReference>             References;                                                 // 0x0000   (0x0010)  
};

/// Struct /Script/LevelSequence.LevelSequenceBindingReferences
/// Size: 0x00F0 (240 bytes) (0x000000 - 0x0000F0) align 8 MaxSize: 0x00F0
struct FLevelSequenceBindingReferences
{ 
	TMap<FGuid, FLevelSequenceBindingReferenceArray>   BindingIdToReferences;                                      // 0x0000   (0x0050)  
	SDK_UNDEFINED(80,488) /* TSet<FGuid> */            __um(AnimSequenceInstances);                                // 0x0050   (0x0050)  
	SDK_UNDEFINED(80,489) /* TSet<FGuid> */            __um(PostProcessInstances);                                 // 0x00A0   (0x0050)  
};

/// Struct /Script/LevelSequence.LevelSequenceObject
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FLevelSequenceObject
{ 
	TLazyObjectPtr<class UObject*>                     ObjectOrOwner;                                              // 0x0000   (0x0018)  
	FString                                            ComponentName;                                              // 0x0018   (0x0010)  
	TWeakObjectPtr<class UObject*>                     CachedComponent;                                            // 0x0028   (0x0008)  
};

#pragma pack(pop)


static_assert(sizeof(UDefaultLevelSequenceInstanceData) == 0x00A0); // 160 bytes (0x000028 - 0x0000A0)
static_assert(sizeof(UAnimSequenceLevelSequenceLink) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(FUpgradedLevelSequenceBindingReferences) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(ULevelSequence) == 0x00A0); // 160 bytes (0x000068 - 0x0000A0)
static_assert(sizeof(ULevelSequenceBurnInInitSettings) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULevelSequenceBurnInOptions) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(FLevelSequenceCameraSettings) == 0x0002); // 2 bytes (0x000000 - 0x000002)
static_assert(sizeof(ALevelSequenceActor) == 0x0338); // 824 bytes (0x000290 - 0x000338)
static_assert(sizeof(AReplicatedLevelSequenceActor) == 0x0338); // 824 bytes (0x000338 - 0x000338)
static_assert(sizeof(FLevelSequenceAnimSequenceLinkItem) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(ULevelSequenceAnimSequenceLink) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(FLevelSequencePlayerSnapshot) == 0x00C8); // 200 bytes (0x000000 - 0x0000C8)
static_assert(sizeof(ULevelSequenceBurnIn) == 0x03B0); // 944 bytes (0x0002E0 - 0x0003B0)
static_assert(sizeof(ULevelSequenceDirector) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(ULegacyLevelSequenceDirectorBlueprint) == 0x00A8); // 168 bytes (0x0000A8 - 0x0000A8)
static_assert(sizeof(ULevelSequencePlayer) == 0x0598); // 1432 bytes (0x000460 - 0x000598)
static_assert(sizeof(ULevelSequenceProjectSettings) == 0x0068); // 104 bytes (0x000038 - 0x000068)
static_assert(sizeof(ALevelSequenceMediaController) == 0x02B8); // 696 bytes (0x000290 - 0x0002B8)
static_assert(sizeof(FLegacyLazyObjectPtrFragment) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FLevelSequenceLegacyObjectReference) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FLevelSequenceObjectReferenceMap) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FBoundActorProxy) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FLevelSequenceBindingReference) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FLevelSequenceBindingReferenceArray) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FLevelSequenceBindingReferences) == 0x00F0); // 240 bytes (0x000000 - 0x0000F0)
static_assert(sizeof(FLevelSequenceObject) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(offsetof(UDefaultLevelSequenceInstanceData, TransformOriginActor) == 0x0030);
static_assert(offsetof(UDefaultLevelSequenceInstanceData, TransformOrigin) == 0x0040);
static_assert(offsetof(UAnimSequenceLevelSequenceLink, SkelTrackGuid) == 0x0028);
static_assert(offsetof(UAnimSequenceLevelSequenceLink, PathToLevelSequence) == 0x0038);
static_assert(offsetof(ULevelSequence, MovieScene) == 0x0070);
static_assert(offsetof(ULevelSequence, BindingReferences) == 0x0078);
static_assert(offsetof(ULevelSequence, DirectorClass) == 0x0088);
static_assert(offsetof(ULevelSequence, AssetUserData) == 0x0090);
static_assert(offsetof(ULevelSequenceBurnInOptions, BurnInClass) == 0x0030);
static_assert(offsetof(ULevelSequenceBurnInOptions, Settings) == 0x0050);
static_assert(offsetof(FLevelSequenceCameraSettings, AspectRatioAxisConstraint) == 0x0001);
static_assert(offsetof(ALevelSequenceActor, PlaybackSettings) == 0x02A8);
static_assert(offsetof(ALevelSequenceActor, SequencePlayer) == 0x02D0);
static_assert(offsetof(ALevelSequenceActor, LevelSequenceAsset) == 0x02D8);
static_assert(offsetof(ALevelSequenceActor, CameraSettings) == 0x02E0);
static_assert(offsetof(ALevelSequenceActor, BurnInOptions) == 0x02E8);
static_assert(offsetof(ALevelSequenceActor, BindingOverrides) == 0x02F0);
static_assert(offsetof(ALevelSequenceActor, DefaultInstanceData) == 0x0300);
static_assert(offsetof(ALevelSequenceActor, BurnInInstance) == 0x0308);
static_assert(offsetof(ALevelSequenceActor, WorldPartitionResolveData) == 0x0314);
static_assert(offsetof(FLevelSequenceAnimSequenceLinkItem, SkelTrackGuid) == 0x0000);
static_assert(offsetof(FLevelSequenceAnimSequenceLinkItem, PathToAnimSequence) == 0x0010);
static_assert(offsetof(FLevelSequenceAnimSequenceLinkItem, Interpolation) == 0x0034);
static_assert(offsetof(FLevelSequenceAnimSequenceLinkItem, CurveInterpolation) == 0x0035);
static_assert(offsetof(ULevelSequenceAnimSequenceLink, AnimSequenceLinks) == 0x0028);
static_assert(offsetof(FLevelSequencePlayerSnapshot, RootName) == 0x0000);
static_assert(offsetof(FLevelSequencePlayerSnapshot, RootTime) == 0x0010);
static_assert(offsetof(FLevelSequencePlayerSnapshot, SourceTime) == 0x0020);
static_assert(offsetof(FLevelSequencePlayerSnapshot, CurrentShotName) == 0x0030);
static_assert(offsetof(FLevelSequencePlayerSnapshot, CurrentShotLocalTime) == 0x0040);
static_assert(offsetof(FLevelSequencePlayerSnapshot, CurrentShotSourceTime) == 0x0050);
static_assert(offsetof(FLevelSequencePlayerSnapshot, SourceTimecode) == 0x0060);
static_assert(offsetof(FLevelSequencePlayerSnapshot, CameraComponent) == 0x0070);
static_assert(offsetof(FLevelSequencePlayerSnapshot, ActiveShot) == 0x0098);
static_assert(offsetof(FLevelSequencePlayerSnapshot, ShotID) == 0x00A0);
static_assert(offsetof(FLevelSequencePlayerSnapshot, MasterName) == 0x00A8);
static_assert(offsetof(FLevelSequencePlayerSnapshot, MasterTime) == 0x00B8);
static_assert(offsetof(ULevelSequenceBurnIn, FrameInformation) == 0x02E0);
static_assert(offsetof(ULevelSequenceBurnIn, LevelSequenceActor) == 0x03A8);
static_assert(offsetof(ULevelSequenceDirector, WeakLinker) == 0x002C);
static_assert(offsetof(ULevelSequenceDirector, Player) == 0x0038);
static_assert(offsetof(ULevelSequenceProjectSettings, DefaultDisplayRate) == 0x0040);
static_assert(offsetof(ULevelSequenceProjectSettings, DefaultTickResolution) == 0x0050);
static_assert(offsetof(ULevelSequenceProjectSettings, DefaultClockSource) == 0x0060);
static_assert(offsetof(ALevelSequenceMediaController, Sequence) == 0x0298);
static_assert(offsetof(ALevelSequenceMediaController, MediaComponent) == 0x02A0);
static_assert(offsetof(FLegacyLazyObjectPtrFragment, LazyObjectId) == 0x0000);
static_assert(offsetof(FLevelSequenceBindingReference, PackageName) == 0x0000);
static_assert(offsetof(FLevelSequenceBindingReference, ExternalObjectPath) == 0x0010);
static_assert(offsetof(FLevelSequenceBindingReference, ObjectPath) == 0x0030);
static_assert(offsetof(FLevelSequenceBindingReferenceArray, References) == 0x0000);
static_assert(offsetof(FLevelSequenceBindingReferences, BindingIdToReferences) == 0x0000);
static_assert(offsetof(FLevelSequenceObject, ObjectOrOwner) == 0x0000);
static_assert(offsetof(FLevelSequenceObject, ComponentName) == 0x0018);
static_assert(offsetof(FLevelSequenceObject, CachedComponent) == 0x0028);
