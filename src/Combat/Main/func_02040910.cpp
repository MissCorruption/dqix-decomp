#include <globaldefs.h>
#include "World/Object3D.h"
#include "Resource/GameResources.h"
#if defined(jpn)
enum { Enum_02040910_752 = 0x2e4 };
#else
enum { Enum_02040910_752 = 0x2f0 };
#endif

struct Struct_0203de84_4 {
    char unknown_0_[0x10];
    void* unknown_10_;
    void* unknown_14_;
    void* unknown_18_;
    void* unknown_1c_;
};

struct Struct_02040910 {
    char unknown_0_[0xd4];
    unsigned char unknown_d4_0_ : 1;
};

extern "C" void func_ov017_0218eafc(int arg0, int arg1);
extern "C" int func_0203cd64(char* arg0, int arg1);

// USA: func_02040910
extern "C" ARM int func_02040910(struct Struct_0203de84_4* arg0, int arg1) {
    if (arg0->unknown_10_) {
        ((Object3D*)arg0->unknown_10_)->Draw(1);
    }
    if (arg0->unknown_14_) {
        return func_0203cd64((char*)arg0->unknown_14_, arg1);
    }
    if (arg0->unknown_18_) {
        struct Struct_02040910* var0 = (struct Struct_02040910*)arg0->unknown_18_;
        if (var0->unknown_d4_0_) {
            return 1;
        }
        return ((Object3D*)var0)->Draw(1);
    }
    if (arg0->unknown_1c_) {
        void* var1 = arg0->unknown_1c_;
        if (*(unsigned char*)((char*)var1 + Enum_02040910_752) != 0) {
            return 1;
        }
        signed short var2 = *(signed short*)((char*)var1 + 4);
        int var3 = (int)GetGameResources();
        func_ov017_0218eafc(var3, var2);
        return 1;
    }
    return 0;
}
