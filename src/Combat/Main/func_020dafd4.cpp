#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_020dafd4_3;
extern "C" void func_020dde3c(Struct_020dafd4_3* arg0);
extern "C" void func_020dde90(void* arg0, short arg1);
extern "C" void func_020dde98(void* arg0, short arg1);
extern "C" void func_020dde84(char* arg0, int arg1, int arg2);
extern "C" void func_020ddff4(void* arg0, int arg1);

struct Struct_020dafd4;
extern "C" void func_020db0c4(Struct_020dafd4* arg0);

extern unsigned char data_020ee688[];
extern unsigned char data_020ee68b[];

struct Struct_020dafd4_2 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    char unknown_4_[4];
    int unknown_8_;
    int unknown_c_;
    char unknown_10_[0x10];
    int unknown_20_;
    char unknown_24_[4];
};

struct Struct_020dafd4_4 {
    SafeAllocator unknown_0_;
    char unknown_14_[0x3c - sizeof(SafeAllocator)];
    unsigned char unknown_3c_;
    char unknown_3d_[0x40 - 0x3d];
    void* unknown_40_;
    unsigned int unknown_44_;
    void* unknown_48_;
    unsigned int unknown_4c_;
    char unknown_50_[4];
    unsigned char unknown_54_;
    char unknown_55_[0x5c - 0x55];
    int unknown_5c_;
    int unknown_60_;
    char unknown_64_[2];
    short unknown_66_;
    char unknown_68_[4];
    unsigned char unknown_6c_;
    char unknown_6d_;
    short unknown_6e_;
    Struct_020dafd4_2 unknown_70_[3];
};

// USA: func_020dafd4
extern "C" ARM void func_020dafd4(Struct_020dafd4_4* arg0) {
    arg0->unknown_0_.ResetAllocatorPointer();
    arg0->unknown_40_ = 0;
    arg0->unknown_44_ = 0;
    arg0->unknown_48_ = 0;
    arg0->unknown_4c_ = 0;
    arg0->unknown_3c_ = 0;
    arg0->unknown_5c_ = 0;
    arg0->unknown_60_ = 0;
    arg0->unknown_66_ = 0;
    arg0->unknown_6c_ = 1;
    arg0->unknown_54_ = 0;
    for (int var0 = 0; var0 < 3; var0++) {
        Struct_020dafd4_2* var1 = &arg0->unknown_70_[var0];
        func_020dde3c((Struct_020dafd4_3*)var1);
        func_020dde90(var1, data_020ee688[var0]);
        func_020dde98(var1, data_020ee68b[var0]);
        func_020dde84((char*)var1, (var0 * 0x12 + 0xbc) & 0xff, 0xa4);
        func_020ddff4(var1, (int)(((long long)(var0 << 12) * 0x28 + 0x800) >> 12) + 0x85 + 0x300);
    }
    arg0->unknown_6e_ = 0;
    func_020db0c4((Struct_020dafd4*)arg0);
}
