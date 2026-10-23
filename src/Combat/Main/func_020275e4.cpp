#include <globaldefs.h>
#include "Resource/Brightness.h"

extern "C" void* func_020d6c00(void);

struct Struct_02012de8;
extern "C" int func_02046708(struct Struct_02012de8* arg0, unsigned int arg1);

extern "C" int func_02023330(void* arg0, int arg1);
extern "C" int func_020233b8(void* arg0, int arg1);

struct Struct_020275e4 {
    char unknown_0_[0x9c1];
    unsigned char unknown_9c1_;      // 0x9c1
    char unknown_9c2_[0xbe4 - 0x9c2];
    int unknown_be4_;                // 0xbe4
    int unknown_be8_;                 // 0xbe8
    short unknown_bec_;               // 0xbec
    short unknown_bee_;             // 0xbee
};

// USA: func_020275e4
extern "C" ARM void func_020275e4(struct Struct_020275e4* arg0) {
    if (func_02046708((struct Struct_02012de8*)func_020d6c00(), 0x41)) {
        return;
    }

    int var0 = 0;
    if (arg0->unknown_9c1_ == 0) {
        var0 = 0x90;
    } else if (arg0->unknown_9c1_ == 1) {
        var0 = 0x98;
    }
    if (var0 == 0) {
        return;
    }
    if (var0 >= arg0->unknown_be4_) {
        return;
    }
    if (GetBrightness(GetGameResources(), true)) {
        return;
    }

    switch (arg0->unknown_bec_) {
    case 0:
        arg0->unknown_bee_++;
        if (arg0->unknown_bee_ >= 0x10) {
            arg0->unknown_bee_ = 0;
            arg0->unknown_bec_ = 1;
        }
        return;
    case 1:
        arg0->unknown_be8_++;
        if (arg0->unknown_be4_ < arg0->unknown_be8_) {
            arg0->unknown_be8_ = -var0;
        }
        if (arg0->unknown_9c1_ == 0) {
            func_02023330(arg0, 0);
        } else {
            func_020233b8(arg0, 0);
        }
        if (arg0->unknown_be8_ == 0) {
            arg0->unknown_bec_ = 2;
        }
        return;
    }
}
