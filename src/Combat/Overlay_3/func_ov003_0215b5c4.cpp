#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_0215b5c4_2400 = 0x800 };
#else
enum { Enum_ov003_0215b5c4_2400 = 0x960 };
#endif

#if defined(jpn)
extern "C" void func_0205d304(void*, void*, int, int, int, int, int);
#endif

struct Struct_0201099c_3;
struct Struct_0205de24_2;

extern "C" void func_0205de24(struct Struct_0205de24_2* arg0, unsigned char arg1, unsigned char arg2);
extern "C" const char* func_020e0434(struct Struct_0201099c_3* arg0, int arg1);
extern "C" int func_020420e8(const char* arg0, int arg1);
extern "C" void* memset(void* arg0, int arg1, unsigned int arg2);
extern "C" void func_ov003_0215b6f0(char* arg0, char* arg1, int arg2);
#if !defined(jpn)
extern "C" void func_0205d304(void* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);
#endif

struct Struct_ov003_0215b5c4 {
    char unknown_0_[0x64];
    char unknown_64_[0x7c - 0x64];
    char* unknown_7c_;
    char unknown_80_[0xf4 - 0x80];
    char unknown_f4_[0x194 - 0xf4];
    short unknown_194_;
    short unknown_196_;
    short unknown_198_;
    short unknown_19a_;
    short unknown_19c_;
    short unknown_19e_;
    short unknown_1a0_;
    short unknown_1a2_;
    char unknown_1a4_;
    unsigned char unknown_1a5_;
    char unknown_1a6_[3];
    unsigned char unknown_1a9_;
    char unknown_1aa_[0x584 - 0x1aa];
    unsigned char unknown_584_;
    char unknown_585_[0x589 - 0x585];
    unsigned char unknown_589_;
    signed char unknown_58a_[1];
};

// USA: func_ov003_0215b5c4
extern "C" ARM void func_ov003_0215b5c4(Struct_ov003_0215b5c4* arg0) {
    func_0205de24((struct Struct_0205de24_2*)arg0->unknown_f4_, 0, 2);
    short var0 = (arg0->unknown_589_ * 14 + 0x12) / 8;
#if defined(jpn)
    short var4 = 0xb;
#else
    int var1 = 0;
    for (int var2 = 0; var2 < arg0->unknown_589_; var2++) {
        short var3 = func_020420e8(func_020e0434((struct Struct_0201099c_3*)arg0->unknown_64_, arg0->unknown_58a_[var2]), 0);
        if (var1 < var3) {
            var1 = var3;
        }
    }
    short var4 = (var1 + 0x18) >> 3;
#endif
    arg0->unknown_194_ = var4;
    arg0->unknown_196_ = var0;
    arg0->unknown_198_ = 0x1f - var4;
    arg0->unknown_19a_ = 2;
    arg0->unknown_19c_ = 0xc;
    arg0->unknown_19e_ = 8;
    arg0->unknown_1a0_ = 0xa;
    arg0->unknown_1a2_ = 0xe;
    arg0->unknown_1a5_ = 1;
    arg0->unknown_1a9_ = 1;
    arg0->unknown_584_ = 0;
    memset(arg0->unknown_7c_, 0, Enum_ov003_0215b5c4_2400);
    func_ov003_0215b6f0((char*)arg0, arg0->unknown_7c_, 0);
#if defined(jpn)
    func_0205d304(arg0->unknown_f4_, arg0->unknown_7c_, 0, 1, 0, 1, 0);
#else
    func_0205d304(arg0->unknown_f4_, arg0->unknown_7c_, 0, 1, 0, 1, 0, 0);
#endif
}
