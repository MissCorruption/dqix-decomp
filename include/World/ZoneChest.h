#pragma once

#include "World/Zone3D.h"

extern "C" void func_020133fc(ZoneChestRenderRecord* record);
extern "C" void func_02013cb0(Zone3D* zone, unsigned int mask);
extern "C" ZoneFeatures::Opcode6aEntry* func_02018c20(Zone3D* zone, int ordinal);
extern "C" int func_02018bc4(Zone3D* zone, ZoneFeatures::Opcode6aEntry* target);
extern "C" void func_02018c74(Zone3D* zone, unsigned int flags);
extern "C" void func_0201647c(Zone3D* zone);
extern "C" int func_0201afd0(Zone3D* zone, const void* treasureArchive, unsigned int sourceSize, int unused);
extern "C" BmdjSceneElement* func_02018b34(Zone3D* zone, ZoneFeatures::Opcode6aEntry* parameter);
extern "C" void func_02018ab8(Zone3D* zone);
extern "C" void func_02018300(Zone3D*, ZoneFeatures::Opcode6aEntry*, int, int, int);
extern "C" void func_0201874c(Zone3D*, ZoneFeatures::Opcode6aEntry*);
extern "C" void func_02018918(Zone3D*, ZoneFeatures::Opcode6aEntry*);
