
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Class /Script/FieldNotification.NotifyFieldValueChanged
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNotifyFieldValueChanged : public UInterface
{ 
public:
};

/// Struct /Script/FieldNotification.FieldNotificationId
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FFieldNotificationId
{ 
	FName                                              FieldName;                                                  // 0x0000   (0x0008)  
};

#pragma pack(pop)


static_assert(sizeof(UNotifyFieldValueChanged) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FFieldNotificationId) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(offsetof(FFieldNotificationId, FieldName) == 0x0000);
