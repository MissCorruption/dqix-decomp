#pragma once

#include "Memory/SafeAllocator.h"
#include "World/ZoneLootableRecord.h"

struct Struct_02020554;

// sizeof == 0x44c8, or 0x4218 in JPN version.
// Referenced in a huge number of places, seems to be responsible for all
// kinds of resource management in game (memory allocation and pointers
// to persistent data)
//
// An instance of it is allocated in func_ov030_021d8a40 (usa) which is where
// most of the type information comes from atm
struct GameResources
{
    unsigned int flags_00;
    unsigned int flags_04;
    unsigned int flags_08;

    float mainBrightness;
    int mainBrightnessTarget;
    int mainBrightnessTimeRemaining;

    float subBrightness;
    int subBrightnessTarget;
    int subBrightnessTimeRemaining;

    bool mainBrightnessLocked;
    bool subBrightnessLocked;
    bool mainBrightnessDirty;
    bool subBrightnessDirty;
    bool allowBrightnessApply;

    char unknown_29_[0x38 - 0x29];

    SafeAllocator allocator_array_38[17];
    SafeAllocator lootableContainerAllocator_18c_;
#if defined(usa)
    SafeAllocator allocator_array_1a0[15];
    char unknown_2cc_[0xe70];
#elif defined(jpn)
    SafeAllocator allocator_array_1a0[11];
    char unknown_2cc_[0xcb0];
#endif

    SafeAllocator allocator_113c; // jpn: offset f2c
    char unknown_1150_[0x70];
    SafeAllocator allocator_11c0; // jpn: offset fb0
    char unknown_11d4_[0x70];
    SafeAllocator allocator_1244; // jpn: offset 1034
    char unknown_1258_[0x70];

    struct Substruct_12C8 // jpn: offset 10b8, ending at 2868
    {
        char unknown_0_[4];
        SafeAllocator allocator_array_4[10];
        char unknown_cc_[0x460];
        SafeAllocator allocator_52c;
        SafeAllocator allocator_540;
        SafeAllocator allocator_554;
        char unknown_568_[0x70];
        SafeAllocator allocator_5d8;
    } substruct_array_12c8[4];
    char unknown_2a78[0x94]; // jpn: offset 2868
    SafeAllocator allocator_2b0c; // jpn: offset 28fc

    char unknown_2b20[0x70]; // jpn: offset 2910
    Struct_02012fa4 substruct_array_2b90[0x12]; // jpn: offset2980
    Struct_02012fa4 unknown_3520; // jpn: offset 3310
    char unknown_35a8[0x8c]; // jpn: offset 3398
    unsigned char unknown_3634_[18];
    unsigned char unknown_3646_[18];
    unsigned char unknown_3658_[18];
    char unknown_366a_[0x4a];
    unsigned char unknown_36b4_[0x14];

    void* unknown_ptr_36c8; // jpn: offset 34b8
    void* unknown_ptr_36cc; // jpn: offset 34bc
    Struct_02020554* unknown_ptr_36d0; // jpn: offset 34c0
    char unknown_36d4_[4]; // jpn: offset 34c4
    void* unknown_ptr_36d8; // jpn: offset 34c8
    char unknown_36dc_[0x20]; // jpn: offset 34cc
    void* unknown_ptr_array_36fc[7]; // jpn: offset 34ec
    void* unknown_ptr_3718;
    void* unknown_ptr_array_371c[8];
    struct Substruct_373c // jpn: offset 352c
    {
        char unknown_0_[0x48];
    } substruct_array_373c[0xc];
    struct Substruct_3a9c // jpn: offset 388c
    {
#if defined(usa)
        char unknown_0_[0x18];
#elif defined(jpn)
        char unknown1_0_[0x14];
#endif
    } substruct_array_3a9c[4];
    void* unknown_ptr_array_3afc[0x33]; // jpn: offset 38dc
    struct Substruct_3bc8 // jpn: offset 39a8
    {
        char unknown_0_[0x14];
    } substruct_array_3bc8[3];
    struct Substruct_3c04 // jpn: offset 39e4
    {
        char unknown[0x28];
    } substruct_array_3c04[4];
    void* unknown_ptr_array_3ca4[4]; // jpn: offset 3a84
    char unknown_3cb4[0x4080 - 0x3cb4];
    int unknown_4080_;
    char unknown_4084_[0x4088 - 0x4084];
    void* unknown_ptr_array_4088[3]; // jpn: offset 3e68
    char unknown_4094[0x130];
    void* unknown_ptr_41c4; // jpn: offset 3fa4
    char unknown_41c8[0x11a];
    unsigned char unknown_42e2_;
    char unknown_42e3_[0x45];
    void* unknown_ptr_4328; // jpn: offset 4108

    char unknown_432c[0x30];
#if defined(usa)
    char unknown_435c_[4][48];
#elif defined(jpn)
    char unknown_435c_[4][12];
#endif
    void* unknown_ptr_441c; // jpn: offset 416c
    char unknown_4420_[0x2a];
    unsigned short unknown_444a_[4];
    char unknown_4452_[2];
    int unknown_4454_;
    char unknown_4458_[0x34];
    struct TreasureMapLanguageDataOffsets* pTMapLanguageOffsets; // usa: offset 448c, jpn: offset 41dc
    char unknown_4490_[0x34];
    void* unknown_ptr_44c4;
};

#if defined(jpn)
#elif defined(usa)
#endif

// size 0x44.
// Needs to be moved back to grotto
struct TreasureMapLanguageDataOffsets
{
    unsigned int bossRangesByQuality;
    unsigned int bossIDsAndWeights;
    unsigned int environs;
    unsigned int prefixRangesByMonsterRank;
    unsigned int prefixNames;
    unsigned int floorRangesByQuality;
    unsigned int unknown_18; 
    unsigned int startingMonsterRanksByQuality;
    unsigned int mapLocations;
    unsigned int seeminglyChestRanksByMonsterRank;
    unsigned int localeRankRangesByFloorCount;
    unsigned int localeNames;
    unsigned int suffixRangesByBoss;
    unsigned int suffixNames;
    unsigned int grottoBossDrops; // flat, size 0x0C per boss
    unsigned int legacyBossDrops; // flat, size 0x5C per boss
    unsigned int legacyBossData;
};

// GameResources global-instance accessors (Overlay 17)


// USA: 0x0218b5a0
void SetGameResources(GameResources* gameResources);

// USA: 0x0218b5b0
GameResources* GetGameResources();
