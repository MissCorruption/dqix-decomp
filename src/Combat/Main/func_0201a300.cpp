#include <globaldefs.h>
#include "GameState/GameState.h"
#include "World/GrottoTileGraph.h"
#include "std_library_functions.h"

struct Struct_0201a300_5;
struct Struct_0201a300_6;
struct Struct_0201a300_7;
struct Struct_0201a300_8;
struct Struct_0201a300_9;
struct Struct_0201a300_10;
struct Struct_0201a300_11;
struct Struct_0201a300_12;
struct Struct_020105a8;
extern "C" void func_020280f8(Struct_0201a300_5*);
extern "C" void func_020280b0(Struct_0201a300_5*);
extern "C" void func_020286fc(Struct_0201a300_6*, SafeAllocator*, int);
extern "C" void func_02028754(Struct_0201a300_7*, SafeAllocator*, int);
extern "C" void func_0202834c(Struct_0201a300_8*, SafeAllocator*, int);
extern "C" void func_02028378(Struct_0201a300_9*, Struct_0201a300_2*);
int GenerateGrottoObjectPositionOrientation(void*, int, int, int*, int*, const TileFeaturePlacementData*, bool);
extern "C" void func_02028170(Struct_0201a300_10*, Struct_0201a300_3*);
extern "C" Struct_0201a300_3* func_020283c0(Struct_0201a300_11*, int);
extern "C" void func_020281d8(Struct_0201a300_12*, Struct_0201a300*);
extern "C" void func_02028214(Struct_01ff87a4*, SafeAllocator*);
extern "C" void func_020105a8(Struct_020105a8*, int*);

static inline unsigned int inline_0201a300(unsigned int arg0, unsigned int arg1) {
    SDK_ASSERT(arg0 < 16 && arg1 < 16);
    return arg0 + (arg1 << 4);
}

// USA: func_0201a300
extern "C" ARM int func_0201a300(Zone3D* arg0, int arg1, Struct_0201a300_4* arg2, const TileFeaturePlacementData* arg3, FloorMap* arg4) {
    GameState* var0 = GameState::GetInstance();
    if (!arg2) return 1;
    srand(arg2->unknown_0_ % 20);
    unsigned char var1[256];
    FloorMap* var2 = arg4 ? arg4 : &arg0->grotto_.floorMap_;
    memcpy(var1, var2->pMapData, 256);
    int var3 = 0;
    int var4 = 0;
    int var5;
    int var6;
    unsigned int var7;
    for (var5 = 1; var5 < 15; var5++) {
        for (var6 = 1; var6 < 15; var6++) {
            var7 = var5;
            var7 -= 1;
            int var8 = var1[var6 + (var5 << 4)];
            if (var8 == 1 || var8 == 3) continue;
            int var9 = var1[var6 - 1 + (var5 << 4)];
            int var10 = var1[var6 + (var7 << 4)];
            if (var9 != 1 && var9 != 3) var4++;
            var3++;
            if (var10 != 1 && var10 != 3) var4++;
        }
    }
    int var11 = 0x1020 - ((var3 << 4) + (var4 << 3));
    if (var11 < 0) var4 -= abs(var11 / 8) + 1;
    func_020280f8((Struct_0201a300_5*)&arg2->unknown_18_);
    func_020280b0((Struct_0201a300_5*)&arg2->unknown_18_);
    func_020286fc((Struct_0201a300_6*)&arg2->unknown_18_, arg2->unknown_10_, var3);
    func_02028754((Struct_0201a300_7*)&arg2->unknown_18_, arg2->unknown_10_, var4);
    func_0202834c((Struct_0201a300_8*)&arg2->unknown_18_, arg2->unknown_10_, 1);
    Struct_0201a300_2 var12;
    var12.unknown_0_ = 0;
    var12.unknown_2_ = 0;
    func_02028378((Struct_0201a300_9*)&arg2->unknown_18_, &var12);
    for (int var13 = 1; var13 < 15; var13++) {
        int var14;
        int var15 = 1;
        for (; var15 < 15; var15++) {
            var14 = var13 - 1;
            int var16 = var1[var15 + (var13 << 4)];
            int var17 = var15 + (var13 << 4);
            if (var16 == 1 || var16 == 3) continue;
            Struct_0201a300 var18;
            Struct_0201a300_3 var19;
            int var20;
            int var21;
            var19.unknown_0_ = 0;
            var19.unknown_1_ = 0;
            var19.unknown_2_ = 0;
            var19.unknown_c_ = 0;
            var19.unknown_3_ = 0;
            GenerateGrottoObjectPositionOrientation(arg0, var15, var13, &var20, &var21, arg3, false);
            var19.unknown_6_ = 0;
            var19.unknown_4_ = var20 >> 12;
            var19.unknown_8_ = var21 >> 12;
            if (var16 == 4) var19.unknown_3_ |= 2;
            var19.unknown_0_ = var17;
            func_02028170((Struct_0201a300_10*)&arg2->unknown_18_, &var19);
            int var22 = var15 - 1 + (var13 << 4);
            int var23 = var1[var22];
            int var24 = var15 + (var14 << 4);
            int var25 = var1[var24];
            if (var23 != 1 && var23 != 3) {
                var18.unknown_4_ = 0;
                var18.unknown_0_ = 0;
                var18.unknown_0_ = func_020283c0((Struct_0201a300_11*)&arg2->unknown_18_, inline_0201a300(var15, var13));
                var18.unknown_4_ = func_020283c0((Struct_0201a300_11*)&arg2->unknown_18_, var22);
                func_020281d8((Struct_0201a300_12*)&arg2->unknown_18_, &var18);
            }
            if (var25 != 1 && var25 != 3) {
                var18.unknown_4_ = 0;
                var18.unknown_0_ = 0;
                var18.unknown_0_ = func_020283c0((Struct_0201a300_11*)&arg2->unknown_18_, var17);
                var18.unknown_4_ = func_020283c0((Struct_0201a300_11*)&arg2->unknown_18_, var24);
                func_020281d8((Struct_0201a300_12*)&arg2->unknown_18_, &var18);
            }
        }
    }
    func_02028214(&arg2->unknown_18_, arg2->unknown_10_);
    int var26;
    func_020105a8((Struct_020105a8*)var0, &var26);
    srand(var26);
    return 1;
}
