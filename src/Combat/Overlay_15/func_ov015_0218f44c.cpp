#include <globaldefs.h>
#include "NitroSDK/Matrix.h"

struct Struct_ov009_0218aa28 : Vector3i {};

extern "C" void __clear(void* arg0, int arg1);

struct Struct_0200f374 { unsigned char unknown_0_[0x400]; };
struct Struct_ov015_0218f44c { unsigned char unknown_0_[8]; struct Struct_0200f374 unknown_8_[2]; };

struct Struct_ov015_0218f44c_2 {
    unsigned char unknown_0_[0x1c];
    unsigned char unknown_1c_;
    unsigned char unknown_1d_[3];
    unsigned char unknown_20_[4];
    struct Struct_ov015_0218f44c* unknown_24_;
};

// USA: func_ov015_0218f44c
extern "C" ARM void func_ov015_0218f44c(struct Struct_ov015_0218f44c_2* arg0, struct Struct_ov009_0218aa28 arg1) {
    Vector3i var0;
    __clear(&var0, 0xc);
    switch (arg0->unknown_1c_) {
        case 0:
            var0 = *(Vector3i*)((char*)arg0->unknown_24_ + 0xf0);
            Vector3fix_Add(&var0, &arg1, &var0);
            *(Vector3i*)((char*)arg0->unknown_24_ + 0xf0) = var0;
            var0 = *(Vector3i*)((char*)arg0->unknown_24_ + 0x44);
            Vector3fix_Add(&var0, &arg1, &var0);
            *(Vector3i*)((char*)arg0->unknown_24_ + 0x44) = var0;
            break;
        case 1:
            var0 = *(Vector3i*)((char*)&arg0->unknown_24_->unknown_8_[1] + 0x44);
            Vector3fix_Add(&var0, &arg1, &var0);
            *(Vector3i*)((char*)&arg0->unknown_24_->unknown_8_[1] + 0x44) = var0;
            var0 = *(Vector3i*)((char*)arg0->unknown_24_ + 0xf0);
            Vector3fix_Add(&var0, &arg1, &var0);
            *(Vector3i*)((char*)arg0->unknown_24_ + 0xf0) = var0;
            var0 = *(Vector3i*)((char*)arg0->unknown_24_ + 0x3a0);
            Vector3fix_Add(&var0, &arg1, &var0);
            *(Vector3i*)((char*)arg0->unknown_24_ + 0x3a0) = var0;
            var0 = *(Vector3i*)((char*)arg0->unknown_24_ + 0x44);
            Vector3fix_Add(&var0, &arg1, &var0);
            *(Vector3i*)((char*)arg0->unknown_24_ + 0x44) = var0;
            break;
        default:
            var0 = *(Vector3i*)((char*)arg0->unknown_24_ + 0x44);
            Vector3fix_Add(&var0, &arg1, &var0);
            *(Vector3i*)((char*)arg0->unknown_24_ + 0x44) = var0;
            break;
    }
}
