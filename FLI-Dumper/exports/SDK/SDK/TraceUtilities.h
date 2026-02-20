
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Script/TraceUtilities.TraceUtilLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UTraceUtilLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/TraceUtilities.TraceUtilLibrary.TraceMarkRegionStart
	// void TraceMarkRegionStart(FString Name);                                                                                 // [0x5ad5b50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TraceUtilities.TraceUtilLibrary.TraceMarkRegionEnd
	// void TraceMarkRegionEnd(FString Name);                                                                                   // [0x5ad5b50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TraceUtilities.TraceUtilLibrary.TraceBookmark
	// void TraceBookmark(FString Name);                                                                                        // [0x5ad5b50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TraceUtilities.TraceUtilLibrary.ToggleChannel
	// bool ToggleChannel(FString ChannelName, bool Enabled);                                                                   // [0x8c847a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TraceUtilities.TraceUtilLibrary.StopTracing
	// bool StopTracing();                                                                                                      // [0x8c843b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TraceUtilities.TraceUtilLibrary.StartTraceToFile
	// bool StartTraceToFile(FString Filename, TArray<FString>& Channels);                                                      // [0x8c845c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TraceUtilities.TraceUtilLibrary.StartTraceSendTo
	// bool StartTraceSendTo(FString Target, TArray<FString>& Channels);                                                        // [0x8c843e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TraceUtilities.TraceUtilLibrary.ResumeTracing
	// bool ResumeTracing();                                                                                                    // [0x5aba460] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TraceUtilities.TraceUtilLibrary.PauseTracing
	// bool PauseTracing();                                                                                                     // [0x5aba460] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TraceUtilities.TraceUtilLibrary.IsTracing
	// bool IsTracing();                                                                                                        // [0x8c843b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TraceUtilities.TraceUtilLibrary.IsChannelEnabled
	// bool IsChannelEnabled(FString ChannelName);                                                                              // [0x8bfdbe0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TraceUtilities.TraceUtilLibrary.GetEnabledChannels
	// TArray<FString> GetEnabledChannels();                                                                                    // [0x8c841c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TraceUtilities.TraceUtilLibrary.GetAllChannels
	// TArray<FString> GetAllChannels();                                                                                        // [0x886b300] Final|Native|Static|Public|BlueprintCallable 
};

#pragma pack(pop)


static_assert(sizeof(UTraceUtilLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
