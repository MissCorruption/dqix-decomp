#pragma once

#include "Filesystem/FileIO.h"
#include "NitroSDK/Filesystem/NarcHandle.h"
#include "GameState/GameState.h"
#include "Graphics/LightingManager.h"
#include "World/ZoneResourceInitialization.h"

struct ZoneAnimationResource {
    unsigned int mask;
    int slot;
    char extension[8];
};

struct ZoneAnimationResources {
    ZoneAnimationResource entries[6];
};

struct ZoneLoadState {
    char unknown0[0x20];
    int unknown20;
};

extern "C" void *func_0200fd0c(GameState *state);
extern "C" void func_02014d18(int id, char *extension, char *buffer);
extern "C" void func_0207df90(char *tables);
extern "C" void func_0207dfac(char *tables);
extern char data_020ef1e8[];
extern const ZoneAnimationResources data_020e6f48;
