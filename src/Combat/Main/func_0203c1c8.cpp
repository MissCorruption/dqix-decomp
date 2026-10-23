#include <globaldefs.h>

struct Struct_0203bdf4;
extern Struct_0203bdf4* data_02105244;

struct Struct_0203c1c8 {
#if defined(jpn)
    short unknown_0_[10];
#endif
    int unknown1_0_;
    int unknown_4_;
#if defined(jpn)
    int unknown_1c_;
    int unknown_20_;
#endif
    int unknown_8_;
    int unknown_c_;
    int unknown_10_;
#if defined(jpn)
    signed int unknown_30_0_ : 16;
    unsigned int unknown_32_0_ : 8;
    unsigned int unknown_33_0_ : 8;
    int unknown_34_;
#else
    short unknown_14_;
#endif
};

#if defined(jpn)
extern "C" int func_0203c284(const Struct_0203c1c8* arg0);
extern "C" void func_0203c4d0(Struct_0203bdf4* arg0, int arg1, const short* arg2, int arg3,
                            int arg4, int arg5, int arg6, int arg7,
                            int arg8, int arg9, int arg10);
#else
extern "C" ARM unsigned char func_0203c284(char* arg0);
extern "C" void func_0203c4d0(void*, short, int, int, int, int);
#endif

// USA: func_0203c1c8
// JPN: func_0203bd44
#if defined(jpn)
extern "C" ARM void func_0203c1c8(Struct_0203c1c8* arg0, int arg1) {
#else
extern "C" ARM void func_0203c1c8(Struct_0203c1c8* arg0) {
#endif
    if (data_02105244 == NULL) return;

#if defined(jpn)
    int var0 = func_0203c284(arg0);
#else
    unsigned char var0 = func_0203c284((char*)arg0);
#endif
    int var1 = var0 >> 1;
    int var2 = arg0->unknown1_0_;
    int var3 = arg0->unknown_4_;
    int var4 = arg0->unknown_c_;

    switch (var4) {
        case 1: var2 -= var0; break;
        case 2: var2 -= var1; break;
        case 3: var2 = 0x80 - var1; break;
    }

#if defined(jpn)
    func_0203c4d0(data_02105244, arg1, arg0->unknown_0_, arg0->unknown_34_,
                  arg0->unknown_10_, arg0->unknown_30_0_, var2, var3,
                  arg0->unknown_8_, arg0->unknown_20_, arg0->unknown_1c_);
#else
    func_0203c4d0(data_02105244, arg0->unknown_14_, arg0->unknown_10_, var2, var3, arg0->unknown_8_);
#endif
}
