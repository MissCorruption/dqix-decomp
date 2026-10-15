#pragma once

#include "World/Zone3D.h"

struct Struct02012ff0 {
    short field0;
    short field2;
    Object3D* field4;
    Animation3D* field8;
    Animation3D* fieldc;
    Animation3D* field10;
    Animation3D* field14;
};

struct Ctx02015134 {
    char pad[0x68];
    void *allocator;
};
struct Out02015134 {
    unsigned short flag;
    void *field4;
};
struct Src02015134 {
    char pad[4];
    int id;
};

struct ZoneResourceNode {
    int unknown0;
    unsigned char *records;
    int elementCount;
    int lookupLimit;
    char unknown10[0x30];
    Struct02012ff0 *trackers;
};

void *GetElementStride0xc_0201f144(unsigned char *obj, int index);
void InitTrackerFields02012ff0(Struct02012ff0 *s);
extern "C" int func_02015134(Zone3D* ctx, Struct02012ff0* out, Src02015134* src);
extern "C" int func_020151cc(Zone3D *zone, Struct02012ff0 *tracker, Src02015134 *source);
extern "C" int func_02014d80(Zone3D *zone, void *node, Struct02012ff0 *tracker, Src02015134 *source);
extern "C" void func_020177d4(Zone3D *zone, void *node, SafeAllocator *allocator);

extern "C" int func_02014a24(Zone3D *zone, void *data);
