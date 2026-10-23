#include <globaldefs.h>
#include "GameState/GameState.h"
#include "World/Zone3D.h"
#include "Input/Input.h"

struct Struct_02012de8;
struct Struct_02015438;
struct Struct_0200ffc0;
struct Struct_02018300_3;
struct Struct_0203402c;
extern "C" void* func_020421a0();
extern "C" Zone3D* func_02012fe4();
extern "C" Struct_02012de8* func_020d6c00();
extern "C" int func_02046b08(void**);
extern "C" int func_02046b24(Struct_02015438**);
extern "C" int func_02046708(Struct_02012de8*, unsigned int);
extern "C" unsigned char* func_0200ffc0(Struct_0200ffc0*);
extern "C" int func_020535c8(signed char*);
extern "C" int func_0203402c(Struct_0203402c*);
extern "C" unsigned char func_02039d7c(char*);
extern "C" void __clear(void*, int);
extern "C" void func_020397cc(Struct_02018300_3*, int);
extern "C" void func_020a7f40(unsigned char*);
extern "C" void func_020a7f34(unsigned char*);
extern "C" void func_020397c0(void*);

// USA: func_ov017_0219a6b8
extern "C" ARM void func_ov017_0219a6b8(GameResources* arg0) {
    GameState* var0 = GameState::GetInstance();
    unsigned char* var1;
    func_020421a0();
    unsigned short var2 = func_02012fe4()->currentZoneID_;
    Struct_02012de8* var3 = func_020d6c00();
    if (!func_02046b08((void**)arg0->unknown_ptr_array_36fc[0])) return;
    if (func_02046b24((Struct_02015438**)(void**)arg0->unknown_ptr_array_36fc[0]) == 2) return;
    if (func_02046708(var3, 0x800)) return;
    GameObject* var4 = var0->GetUnknownGameObject();
    if (!var4) return;
    var1 = func_0200ffc0((Struct_0200ffc0*)var0);
    if (func_020535c8((signed char*)var4)) return;
    if (g_keyManager.TestKeysHeld(2) && !arg0->unknown_3658_[0]) return;
    if (func_0203402c((Struct_0203402c*)var4)) return;
    if (func_02039d7c((char*)var4)) return;
    if (var2 == 0x2774) return;
    int var5[1];
    __clear(var5, sizeof(var5));
    for (int var6 = 0; var6 < 1; ++var6) {
        int var7 = var5[var6];
        int var8 = 24;
        int var9 = 24;
        if (var7 == 0) { var8 = 32; var9 = 32; }
        if (g_touchInput.pressed_) {
            int var10, var11;
            g_touchInput.GetTouchPoint(&var10, &var11);
            if (arg0->unknown_3634_[var7] < var10 && var10 < arg0->unknown_3634_[var7] + var8 && arg0->unknown_3646_[var7] < var11 && var11 < arg0->unknown_3646_[var7] + var9) {
                func_020397cc((Struct_02018300_3*)var4, 1);
                if (var1 && var2 == 0x2710) func_020a7f40(var1);
                arg0->unknown_3658_[var7] = 1;
            }
        } else if (g_touchInput.isRepeatValid_ && (g_touchInput.currentReading_.isHeld)) {
            int var12, var13;
            g_touchInput.GetTouchPoint(&var12, &var13);
            if (arg0->unknown_3658_[var7] == 1) {
                if (!(arg0->unknown_3634_[var7] < var12 && var12 < arg0->unknown_3634_[var7] + var8 && arg0->unknown_3646_[var7] < var13 && var13 < arg0->unknown_3646_[var7] + var9)) arg0->unknown_3658_[var7] = 2;
            } else if (arg0->unknown_3658_[var7] == 2) {
                int var14 = (var12 - 12 + arg0->unknown_3634_[var7]) / 2;
                int var15 = (var13 - 12 + arg0->unknown_3646_[var7]) / 2;
                if (var14 < 0) var14 = 0;
                if (256 - var8 < var14) var14 = 256 - var8;
                if (var15 < 0) var15 = 0;
                if (192 - var9 < var15) var15 = 192 - var9;
                arg0->unknown_3634_[var7] = var14;
                arg0->unknown_3646_[var7] = var15;
            }
        } else if (g_touchInput.released_) {
            if (arg0->unknown_3658_[var7]) {
                func_020397c0(var4);
                if (var1 && var2 == 0x2710) func_020a7f34(var1);
            }
            if (arg0->unknown_3658_[var7] == 1) {
                arg0->unknown_42e3_[1] = 1;
                func_020397c0(var4);
                if (var1 && var2 == 0x2710) func_020a7f34(var1);
            }
            arg0->unknown_3658_[var7] = 0;
        } else if (arg0->unknown_3658_[var7]) {
            func_020397c0(var4);
            if (var1 && var2 == 0x2710) func_020a7f34(var1);
            arg0->unknown_3658_[var7] = 0;
        }
        if (arg0->unknown_3658_[var7]) return;
    }
}
