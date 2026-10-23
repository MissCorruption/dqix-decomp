#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_020100a8(GameState* arg0);
extern "C" void func_ov017_021a7c94(unsigned char* arg0, int arg1, int arg2);
struct Struct_ov017_021a85d4;
extern "C" void func_ov017_021a85d4(struct Struct_ov017_021a85d4* arg0, int arg1);
extern "C" void func_ov017_021a5a28(void* arg0, int arg1);
extern "C" int func_ov017_021a5a48(void* arg0);

struct Struct_ov017_021d01e4 {
    unsigned char unknown_0_[4];
    unsigned char unknown_4_;
    signed char unknown_5_;
    signed char unknown_6_;
    unsigned char unknown_7_;
    short unknown_8_;
};

struct Struct_ov017_021d01e4_2 {
#if defined(jpn)
    unsigned char unknown_0_[0x350c];
#else
    unsigned char unknown1_0_[0x371c];
#endif
    void* unknown_371c_;
#if defined(jpn)
    unsigned char unknown_3510_[0x397c - 0x3510];
#else
    unsigned char unknown_3720_[0x3b9c - 0x3720];
#endif
    struct Struct_ov017_021a85d4* unknown_3b9c_;
};

// USA: func_ov017_021d01e4
extern "C" ARM void func_ov017_021d01e4(int arg0, struct Struct_ov017_021d01e4* arg1, GameState* arg2, struct Struct_ov017_021d01e4_2* arg3) {
    func_020100a8(arg2);
    unsigned char* var0 = (unsigned char*)func_02010828(arg2);
    unsigned char* var1 = var0 + 0xf78;
    unsigned char var2 = var0[0xf7c];
    int var3 = arg1->unknown_5_;
    int var4 = arg1->unknown_6_;
    int var5 = arg1->unknown_8_;
    int var6 = 0;
    int var7 = 0;
    for (int var8 = 0; var8 < var2; var8++) {
        unsigned char var9 = var1[var8];
        if (var9 == var3) {
            var6 = 1;
        }
        if (var9 == var4) {
            var7 = 1;
        }
    }

    struct Struct_ov017_021a85d4* var10 = arg3->unknown_3b9c_;
    void* var11 = arg3->unknown_371c_;
    switch (arg1->unknown_4_) {
    case 0:
        break;
    case 1:
        if (var7) {
            func_ov017_021a7c94((unsigned char*)arg3, var3, var5);
        }
        break;
    case 2:
        if (var7) {
            func_ov017_021a85d4(var10, 6);
        }
        break;
    case 3:
        if (var7) {
            func_ov017_021a85d4(var10, 5);
        }
        break;
    case 4:
        if (var6) {
            func_ov017_021a5a28(var11, 2);
        }
        break;
    case 5:
        if (var6) {
            func_ov017_021a5a28(var11, 6);
        }
        break;
    case 6:
        if (var6) {
            if (func_ov017_021a5a48(var11) != 4) {
                func_ov017_021a5a28(var11, 8);
            }
        }
        break;
    case 7:
        if (var6) {
            func_ov017_021a5a28(var11, 5);
        }
        break;
    case 8:
        if (var6) {
            func_ov017_021a5a28(var11, 7);
        }
        break;
    }
}
