
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
/// dependency: InputCore

#pragma pack(push, 0x1)

/// Class /Script/RawInput.RawInputFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class URawInputFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/RawInput.RawInputFunctionLibrary.GetRegisteredDevices
	// TArray<FRegisteredDeviceInfo> GetRegisteredDevices();                                                                    // [0x843a5f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/RawInput.RawInputDeviceAxisProperties
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FRawInputDeviceAxisProperties
{ 
	bool                                               bEnabled : 1;                                               // 0x0000:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FKey                                               Key;                                                        // 0x0008   (0x0018)  
	bool                                               bInverted : 1;                                              // 0x0020:0 (0x0001)  
	bool                                               bGamepadStick : 1;                                          // 0x0020:1 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0021   (0x0003)  MISSED
	float                                              Offset;                                                     // 0x0024   (0x0004)  
};

/// Struct /Script/RawInput.RawInputDeviceButtonProperties
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FRawInputDeviceButtonProperties
{ 
	bool                                               bEnabled : 1;                                               // 0x0000:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FKey                                               Key;                                                        // 0x0008   (0x0018)  
};

/// Struct /Script/RawInput.RawInputDeviceConfiguration
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FRawInputDeviceConfiguration
{ 
	FString                                            VendorID;                                                   // 0x0000   (0x0010)  
	FString                                            ProductId;                                                  // 0x0010   (0x0010)  
	TArray<FRawInputDeviceAxisProperties>              AxisProperties;                                             // 0x0020   (0x0010)  
	TArray<FRawInputDeviceButtonProperties>            ButtonProperties;                                           // 0x0030   (0x0010)  
};

/// Class /Script/RawInput.RawInputSettings
/// Size: 0x0050 (80 bytes) (0x000038 - 0x000050) align 8 MaxSize: 0x0050
class URawInputSettings : public UDeveloperSettings
{ 
public:
	TArray<FRawInputDeviceConfiguration>               DeviceConfigurations;                                       // 0x0038   (0x0010)  
	bool                                               bRegisterDefaultDevice;                                     // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Struct /Script/RawInput.RegisteredDeviceInfo
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FRegisteredDeviceInfo
{ 
	int32_t                                            Handle;                                                     // 0x0000   (0x0004)  
	int32_t                                            VendorID;                                                   // 0x0004   (0x0004)  
	int32_t                                            ProductId;                                                  // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            DeviceName;                                                 // 0x0010   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(URawInputFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FRawInputDeviceAxisProperties) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FRawInputDeviceButtonProperties) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FRawInputDeviceConfiguration) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(URawInputSettings) == 0x0050); // 80 bytes (0x000038 - 0x000050)
static_assert(sizeof(FRegisteredDeviceInfo) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(offsetof(FRawInputDeviceAxisProperties, Key) == 0x0008);
static_assert(offsetof(FRawInputDeviceButtonProperties, Key) == 0x0008);
static_assert(offsetof(FRawInputDeviceConfiguration, VendorID) == 0x0000);
static_assert(offsetof(FRawInputDeviceConfiguration, ProductId) == 0x0010);
static_assert(offsetof(FRawInputDeviceConfiguration, AxisProperties) == 0x0020);
static_assert(offsetof(FRawInputDeviceConfiguration, ButtonProperties) == 0x0030);
static_assert(offsetof(URawInputSettings, DeviceConfigurations) == 0x0038);
static_assert(offsetof(FRegisteredDeviceInfo, DeviceName) == 0x0010);
