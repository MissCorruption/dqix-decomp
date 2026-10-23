#include <globaldefs.h>

#if defined(jpn)
enum { Enum_020947f0_836 = 0x104, Enum_020947f0_968 = 0x138 };
#else
enum { Enum_020947f0_836 = 0x344, Enum_020947f0_968 = 0x3c8 };
#endif

struct Struct_020947f0 {
    char unknown_0_[Enum_020947f0_836];
    float unknown_344_;
    char unknown_348_[Enum_020947f0_968 - Enum_020947f0_836 - 4];
    unsigned char unknown_3c8_0_ : 7;
    unsigned char unknown_3c8_7_ : 1;
};
struct Struct_02094654_2 { unsigned int unknown_0_; unsigned short unknown_4_; };
extern "C" double func_02009424(double);
void CleanInvalidateCacheRange(const void*, unsigned int);
extern "C" void LoadToMainObjStandardPalette(const void*, unsigned int, unsigned int);
extern "C" void LoadToSubObjStandardPalette(const void*, unsigned int, unsigned int);
extern "C" int func_0209378c(int);
extern "C" unsigned int func_020937f0(int);
extern "C" Struct_02094654_2* func_02093704(int);
extern "C" void func_020946f8(Struct_02094654_2*, int, int, int, int, int, int, int, int, int, int, int);

// USA: func_020947f0
extern "C" ARM void func_020947f0(Struct_020947f0* arg0) {
    float var0 = (float)func_02009424((double)arg0->unknown_344_);
    var0 += 1.0f;
    var0 *= 0.5f;
    short var1 = (short)(31.0f * var0);
    if (var1 < 0) var1 = 0;
    if (var1 > 31) var1 = 31;
    unsigned short var2 = var1 | (var1 << 5) | (var1 << 10);
    CleanInvalidateCacheRange(&var2, 2);
    if (arg0->unknown_3c8_7_ == 0) LoadToMainObjStandardPalette(&var2, 0x1fe, 2);
    else LoadToSubObjStandardPalette(&var2, 0x1fe, 2);
    int var3 = func_0209378c(arg0->unknown_3c8_7_);
    unsigned int var4 = func_020937f0(arg0->unknown_3c8_7_);
    if (var4) {
        unsigned int var5 = (var4 - 0x800) >> var3;
        int var6 = 0x100 >> var3;
        Struct_02094654_2* var7 = func_02093704(arg0->unknown_3c8_7_);
        int var8 = 0;
        for (unsigned char var9 = 0; var9 < 8; ++var9) {
            func_020946f8(var7 + (var9 + 5), var8, 0, 0, 0, 0, 0, 0x80004000, 0, var5, 15, 0);
            var5 += var6;
            var8 += 32;
        }
    }
}
