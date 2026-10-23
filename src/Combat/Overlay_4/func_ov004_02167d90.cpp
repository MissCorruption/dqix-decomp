#include <globaldefs.h>

struct Struct_ov004_02167d90 {
    unsigned char unknown_0_;
    short unknown_2_;
    short unknown_4_;
    short unknown_6_;
    int unknown_8_;
};

extern "C" void func_ov004_0216794c(short* arg0, short* arg1, short* arg2, unsigned char* arg3, int* arg4);
extern "C" void* func_0202ae18(void);
extern "C" int func_0202c540(void* arg0);
extern "C" void func_ov011_021848a0(void* arg0, int arg1);

// USA: func_ov004_02167d90
extern "C" ARM int func_ov004_02167d90(void* arg0) {
    struct Struct_ov004_02167d90 var0;
    func_ov004_0216794c(&var0.unknown_6_, &var0.unknown_4_, &var0.unknown_2_, &var0.unknown_0_, &var0.unknown_8_);
    if (func_0202c540(func_0202ae18()) != 0) {
        func_ov011_021848a0(arg0, 0xc8);
        return 0;
    }
    if (var0.unknown_6_ == 0) {
        func_ov011_021848a0(arg0, 0xa);
        goto ret0;
    }
    if (var0.unknown_8_ < 0) {
        func_ov011_021848a0(arg0, 0x64);
    } else {
        func_ov011_021848a0(arg0, 0x1e);
    }
ret0:
    return 0;
}
