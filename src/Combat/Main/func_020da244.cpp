#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"

struct Struct_020da244_2 {
    unsigned char unknown_0_[8];
    int unknown_8_;
};

struct Struct_020da244 {
    void* unknown_0_;
    int unknown_4_;
    unsigned char unknown_8_[0xc - 0x8];
    unsigned char unknown_c_;
    unsigned char unknown_d_;
    unsigned char unknown_e_;
    unsigned char unknown_f_;
    unsigned char unknown_10_[0x14 - 0x10];
    Struct_020da244_2 unknown_14_[4];
};

extern "C" void func_020dabd0(void* arg0);
extern "C" void func_020da2e4(unsigned char* arg0);

// USA: func_020da244
extern "C" ARM void func_020da244(Struct_020da244* arg0) {
    func_020dabd0(arg0);
    Struct_020da244_2* var0 = arg0->unknown_14_;
    int var1 = (int)BackgroundLoader::GetInstance();
    if (var1 != 0) {
        for (unsigned char var2 = 0; var2 < 4; var2++, var0++) {
            if (var0->unknown_8_ != -1) {
                ((BackgroundLoader*)(var1))->RemoveTask((int)(var0->unknown_8_ != -1));
                func_020da2e4((unsigned char*)var0);
            }
        }
    }
    if (arg0->unknown_0_ != 0) {
        ((SafeAllocator*)arg0->unknown_0_)->Destroy();
        ((SafeAllocator*)arg0->unknown_0_)->ResetAllocatorPointer();
    }
    arg0->unknown_0_ = 0;
    arg0->unknown_4_ = 0;
    arg0->unknown_c_ = 0;
    arg0->unknown_d_ = 0;
    arg0->unknown_e_ = 0;
    arg0->unknown_f_ = 0;
}
