#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"

extern "C" int func_ov001_021539d8(void* arg0);
extern "C" void func_ov001_02154c64(void* arg0);
extern "C" int func_ov001_02153948(unsigned short arg0);

struct Struct_ov001_02155bb8 {
    char unknown_0_[0x2c];
    int unknown_2c_;
    char unknown_30_[0x31 - 0x30];
    unsigned char unknown_31_;
    char unknown_32_[0x34 - 0x32];
    struct Struct_ov001_02155bb8* unknown_34_;
};

struct Struct_ov001_02155bb8_2 {
    char unknown_0_[0x24];
    int unknown_24_;
    struct Struct_ov001_02155bb8_2* unknown_28_;
    unsigned char unknown_2c_;
};

struct Struct_ov001_02155bb8_3 {
    char unknown_0_[0xa];
    unsigned short unknown_a_;
    char unknown_c_[0x4a - 0xc];
    unsigned short unknown_4a_;
#if defined(jpn)
    char unknown_4c_[0xcc - 0x4c];
#else
    char unknown1_4c_[0xd0 - 0x4c];
#endif
    struct Struct_ov001_02155bb8* unknown_d0_;
    struct Struct_ov001_02155bb8_2* unknown_d4_;
    char unknown_d8_[0xf4 - 0xd8];
    int unknown_f4_;
    char unknown_f8_[0x100 - 0xf8];
    unsigned char unknown_100_;
};

// USA: func_ov001_02155bb8
extern "C" ARM int func_ov001_02155bb8(struct Struct_ov001_02155bb8_3* arg0) {
    int var0 = (int)BackgroundLoader::GetInstance();

    struct Struct_ov001_02155bb8* var1 = arg0->unknown_d0_;
    while (var1) {
        if (var1->unknown_2c_ > -1 && var1->unknown_31_ == 0) {
            if (((BackgroundLoader*)((void*)var0))->GetTaskStatus((int)(var1->unknown_2c_)) == 0) {
                return arg0->unknown_a_;
            }
        }
        var1 = var1->unknown_34_;
    }

    struct Struct_ov001_02155bb8_2* var2 = arg0->unknown_d4_;
    while (var2) {
        if (var2->unknown_24_ > -1 && var2->unknown_2c_ == 0) {
            if (((BackgroundLoader*)((void*)var0))->GetTaskStatus((int)(var2->unknown_24_)) == 0) {
                return arg0->unknown_a_;
            }
        }
        var2 = var2->unknown_28_;
    }

    if (arg0->unknown_f4_ > -1) {
        if (((BackgroundLoader*)((void*)var0))->GetTaskStatus((int)(arg0->unknown_f4_)) == 0) {
            return arg0->unknown_a_;
        }
    }

    func_ov001_021539d8(arg0);
    if (arg0->unknown_100_ == 0) {
        func_ov001_02154c64(arg0);
        return arg0->unknown_a_;
    }
    func_ov001_02153948(arg0->unknown_4a_);
    return 4;
}
