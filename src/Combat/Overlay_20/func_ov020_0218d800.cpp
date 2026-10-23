#include <globaldefs.h>

#if defined(jpn)
#define func_020c39c8 func_020c5494
#endif

#if defined(jpn)
#define func_020c39a0 func_020c546c
#endif

#if defined(jpn)
enum { Enum_ov020_0218d800_1268 = 0x484 };
#else
enum { Enum_ov020_0218d800_1268 = 0x4f4 };
#endif

extern "C" void func_020c39a0(short* arg0, int arg1);
extern "C" int func_020c39c8(volatile unsigned short* arg0);

struct Struct_ov020_0218d7ac {
    float unknown_0_;
    int unknown_4_;
    int unknown_8_;
};

struct Struct_ov020_0218b710_2 {
    char unknown_0_[Enum_ov020_0218d800_1268];
    Struct_ov020_0218d7ac unknown_4f4_;
};

// USA: func_ov020_0218d800
extern "C" ARM void func_ov020_0218d800(struct Struct_ov020_0218b710_2* arg0, int arg1, int arg2) {
    if (arg2 == 0) {
        func_020c39a0((short*)0x400106c, arg1);
        arg0->unknown_4f4_.unknown_0_ = (float)arg1;
        arg0->unknown_4f4_.unknown_4_ = arg1;
        arg0->unknown_4f4_.unknown_8_ = 0;
    } else {
        int var0 = func_020c39c8((volatile unsigned short*)0x400106c);
        arg0->unknown_4f4_.unknown_0_ = (float)var0;
        arg0->unknown_4f4_.unknown_4_ = arg1;
        arg0->unknown_4f4_.unknown_8_ = arg2;
    }
}
