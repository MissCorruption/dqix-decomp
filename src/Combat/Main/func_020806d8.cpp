#include <globaldefs.h>

struct Struct_02072a68_2;
struct Struct_020806d8_2 {
    unsigned int unknown_0_;
    short unknown_4_;
    short unknown_6_;
    char unknown_8_[6];
    short unknown_e_;
    char unknown_10_[2];
    unsigned char unknown_12_;
    unsigned char unknown_13_0_ : 4;
    unsigned char unknown_13_4_ : 4;
};
struct Struct_020806d8 {
    char unknown_0_[0xe];
    short unknown_e_;
};
struct Struct_0207f524 {
    Struct_020806d8_2* unknown_0_;
    short unknown_4_;
};
struct Struct_0207f0ac {
    Struct_020806d8* unknown_0_;
    short unknown_4_;
};
struct Struct_020806d8_3 {
    Struct_02072a68_2* unknown_0_;
    Struct_0207f524 unknown_4_;
    Struct_0207f0ac unknown_c_;
};

extern "C" void* func_0207f6ac(Struct_0207f524*, int);
extern "C" Struct_020806d8* func_0207f0ac(Struct_0207f0ac*, int);
extern "C" void* func_02072a68(Struct_02072a68_2*, int);
#if defined(jpn)
extern "C" int func_020d2ff0(const char*);
#else
extern "C" int func_02042190(int);
extern "C" int func_020420e8(char* arg0, int arg1);
#endif

// USA: func_020806d8
extern "C" ARM void func_020806d8(Struct_020806d8_3* arg0, int arg1, int arg2, int arg3, short arg4) {
    Struct_020806d8_2* var0 = (Struct_020806d8_2*)func_0207f6ac(&arg0->unknown_4_, arg2);
    if (var0 == NULL) return;
    if (!arg3) {
        var0->unknown_6_ = arg4;
        return;
    }
    if (var0->unknown_12_ != 0) return;
    char* var1 = (char*)func_02072a68(arg0->unknown_0_, var0->unknown_e_);
    if (var1 == NULL) return;
#if defined(jpn)
    int var2 = func_020d2ff0(var1) >> 1;
    int var4 = var2 * var0->unknown_13_0_;
#else
    int var3 = func_02042190(var0->unknown_13_0_);
    int var4 = func_020420e8(var1, var3);
#endif
    Struct_020806d8* var5 = func_0207f0ac(&arg0->unknown_c_, arg1);
    if (var5 == NULL) return;
    short var6 = var5->unknown_e_ << 3;
    var0->unknown_6_ = var6 - var4 - arg4;
}
