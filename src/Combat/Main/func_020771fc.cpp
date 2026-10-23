#include <globaldefs.h>
#include "World/Object3D.h"

#if defined(jpn)
enum { Enum_020771fc_24 = 0x14 };
#else
enum { Enum_020771fc_24 = 0x18 };
#endif

struct Struct_020771fc {
    char unknown_0_[4];
    short unknown_4_;
    short unknown_6_;
    short unknown_8_;
};

struct Struct_020771fc_2 {
    char unknown_0_[2];
    short unknown_2_;
    short unknown_4_;
    char unknown_6_[0x3e];
    Vector3i unknown_44_;
    Vector3i unknown_50_;
    char unknown_5c_[0xae - 0x5c];
    short unknown_ae_;
    char unknown_b0_[2];
    unsigned short unknown_b2_;
    unsigned short unknown_b4_;
    char unknown_b6_[0x139 - 0xb6];
    unsigned char unknown_139_;
    char unknown_13a_[0x154 - 0x13a];
    int unknown_154_;
    Vector3i unknown_158_;
    unsigned short unknown_164_;
    char unknown_166_[0x17c - 0x166];
    unsigned char unknown_17c_;
};

struct Struct_020fdd44;
struct Struct_0201a300_11;
struct Struct_02033b68;
struct Struct_02033f44;
struct Struct_02033834_2;
struct Struct_0202c1a4;
struct Struct_020771fc_3 {
    unsigned short unknown_0_;
#if defined(jpn)
    char unknown_2_[0x442];
#else
    char unknown1_2_[0x422];
#endif
    int unknown_424_;
};

extern "C" void* func_0202ae18(void);
extern "C" int func_0202c508(void* arg0);
extern "C" int func_020322c0(void* arg0, int* arg1);
extern "C" void func_020794f8(Struct_020771fc_2* arg0, int arg1, int arg2);
extern "C" Struct_020771fc_3* func_02012fe4(void);
extern "C" int func_02018fbc(Struct_020771fc_3* arg0, Vector3i* arg1);
extern "C" void func_ov017_021c9400(int arg0, int arg1, int arg2, Vector3i arg3, Vector3i arg4, int arg5);
extern "C" int func_0202c1a4(Struct_0202c1a4* arg0);
extern "C" int func_0202b7d8(int* arg0);
extern "C" Struct_020fdd44* func_02027ca4(void);
extern "C" Struct_020fdd44* func_02028bd0(Struct_020fdd44* arg0, int arg1);
extern "C" Struct_020771fc* func_020283c0(Struct_0201a300_11* arg0, int arg1);
extern "C" void func_02033b68(Struct_02033b68* arg0, int arg1);
extern "C" void* func_02033f44(Struct_02033f44* arg0);
extern "C" void func_02076ccc(void* arg0, int arg1);
extern "C" void func_02033834(Struct_02033834_2* arg0, int arg1);

// USA: func_020771fc
extern "C" ARM void func_020771fc(Struct_020771fc_2* arg0) {
    void* var0 = func_0202ae18();
    Vector3i var1 = arg0->unknown_44_;
    var1.y = 0;
    Vector3i var2 = arg0->unknown_158_;
    var2.y = 0;
    int var3 = Vector3fix_Distance(&var1, &var2);
    func_02033b68((Struct_02033b68*)arg0, 1);
    switch (arg0->unknown_139_) {
    case 0:
        arg0->unknown_b4_ = 0;
        arg0->unknown_b2_ = 0;
        break;
    case 1:
        arg0->unknown_b4_ = 0x9a;
        arg0->unknown_b2_ = 0x9a;
        break;
    case 2:
        arg0->unknown_b4_ = 0xe6;
        arg0->unknown_b2_ = 0xe6;
        break;
    case 3:
        arg0->unknown_b4_ = 0x1c2;
        arg0->unknown_b2_ = 0x1c2;
        break;
    }
    int var4 = 0;
    void* var5 = func_02033f44((Struct_02033f44*)arg0);
    int var6 = 0;
    if (var5 != 0) {
        int var7 = arg0->unknown_ae_;
        if (func_020322c0(var5, &var7) < 0x199) {
            var6 = 1;
        }
    }
    if (var6 != 0) {
        func_02076ccc(arg0, 1);
        arg0->unknown_154_ = 0;
        arg0->unknown_17c_ = 1;
        if (func_0202b7d8((int*)var0) != 0) {
            func_020794f8(arg0, 0, 1);
        }
        return;
    }
    if (var5 == 0) {
        Vector3i var8;
        Vector3fix_Subtract(&arg0->unknown_158_, &var1, &var8);
        if (Vector3fix_Length(&var8) < 0x1000) {
            var4 = 1;
            func_02076ccc(arg0, 1);
        }
        Vector3fix_Normalize(&var8, &var8);
        func_02033834((Struct_02033834_2*)arg0, fix32_Atan2(var8.x, var8.z));
    }
    if (var3 < 0x1000) {
        Vector3i var9 = arg0->unknown_44_;
        if (func_0202c508(var0) != 0) {
            Struct_020fdd44* var10 = func_02027ca4();
            int var11 = ((Object3D*)arg0)->GetField06();
            Struct_020fdd44* var12 = func_02028bd0(var10, var11);
            if (var12 != 0) {
                Struct_0201a300_11* var13 = (Struct_0201a300_11*)((char*)var12 + Enum_020771fc_24);
                if (var13 != 0) {
                    Struct_020771fc* var14 = func_020283c0(var13, arg0->unknown_164_);
                    if (var14 != 0) {
                        var9.y = var14->unknown_6_ << 0xc;
                        arg0->unknown_44_ = var9;
                    }
                }
            }
            Struct_020771fc_3* var15 = func_02012fe4();
            unsigned short var16 = var15->unknown_0_;
            if (var16 == ((Object3D*)arg0)->GetField06() && var15->unknown_424_ == 0) {
                var9.y = func_02018fbc(var15, &var9);
                arg0->unknown_44_ = var9;
            }
        }
        var4 = 1;
        func_02076ccc(arg0, 1);
    }
    if (var4 == 0) {
        return;
    }
    if (func_0202b7d8((int*)var0) == 0) {
        return;
    }
    if (func_0202c1a4((Struct_0202c1a4*)var0) != 0) {
        return;
    }
    int var17 = ((Object3D*)arg0)->GetField06();
    int var18 = arg0->unknown_2_;
    int var19 = arg0->unknown_4_ - 0x70;
    Vector3i* var20 = &arg0->unknown_44_;
    Vector3i* var21 = &arg0->unknown_50_;
    int var22 = var19 % 0xc;
    if (var22 >= 0 && var22 < 0xc) {
        func_ov017_021c9400(var17, var22, var18, *var20, *var21, -1);
    }
}
