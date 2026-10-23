#include <globaldefs.h>

#if defined(jpn)
#define func_020c39c8 func_020c5494
#endif

#if defined(jpn)
#define func_020c39a0 func_020c546c
#endif

#if defined(jpn)
enum { Enum_ov020_0218d7ac_1256 = 0x478 };
#else
enum { Enum_ov020_0218d7ac_1256 = 0x4e8 };
#endif

extern "C" void func_020c39a0(short* arg0, int arg1);
extern "C" int func_020c39c8(volatile unsigned short* arg0);

struct Struct_ov020_0218d7ac {
    float unknown_0_;
    int unknown_4_;
    int unknown_8_;
};

struct Struct_ov020_0218b710 {
    char unknown_0_[Enum_ov020_0218d7ac_1256];
    Struct_ov020_0218d7ac unknown_4e8_;
};

// USA: func_ov020_0218d7ac
extern "C" ARM void func_ov020_0218d7ac(struct Struct_ov020_0218b710* arg0, int arg1, int arg2) {
    if (arg2 == 0) {
        func_020c39a0((short*)0x400006c, arg1);
        arg0->unknown_4e8_.unknown_0_ = (float)arg1;
        arg0->unknown_4e8_.unknown_4_ = arg1;
        arg0->unknown_4e8_.unknown_8_ = 0;
    } else {
        int var0 = func_020c39c8((volatile unsigned short*)0x400006c);
        arg0->unknown_4e8_.unknown_0_ = (float)var0;
        arg0->unknown_4e8_.unknown_4_ = arg1;
        arg0->unknown_4e8_.unknown_8_ = arg2;
    }
}
