#if defined(jpn)
#define R(j,u) (j)
#define func_ov024_021f6f10 func_ov024_021f5c80
#define func_ov023_021e4e8c func_ov023_021e5080
#define data_ov023_021ff5b4 data_ov023_021fe83c
#define func_ov023_021fc518 func_ov023_021fb810
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

struct Struct_ov011_02184c30;
extern "C" int func_ov011_02184c30(struct Struct_ov011_02184c30* arg0);

extern "C" void* func_ov017_021b2164(void);
extern "C" void* func_ov011_021849c8(void* arg0);
extern "C" void* func_ov023_021f6880(void* arg0, int arg1);
#if defined(jpn)
extern "C" int func_ov023_021f6f10(void* arg0);
#define func_ov024_021f6f10 func_ov023_021f6f10
#else
extern "C" int func_ov024_021f6f10(void* arg0);
#endif

struct Struct_ov011_0218702c {
    char unknown_0_[0x42];
    unsigned short unknown_42_;
    char unknown_44_[1];
    unsigned char unknown_45_0_:1;
    unsigned char unknown_45_1_:R(7, 6);
#if !defined(jpn)
    unsigned char unknown_45_7_:1;
#endif
};

// USA: func_ov011_0218702c
extern "C" ARM int func_ov011_0218702c(struct Struct_ov011_02184c30* arg0) {
    int var0 = func_ov011_02184c30(arg0);
    int var1 = func_ov011_02184c30((struct Struct_ov011_02184c30*)((char*)arg0 + 8));
    int var2 = func_ov011_02184c30((struct Struct_ov011_02184c30*)((char*)arg0 + 0x10));
    void* var3 = func_ov017_021b2164();
    void* var4 = func_ov011_021849c8(var3);
    struct Struct_ov011_0218702c* var5 = (struct Struct_ov011_0218702c*)func_ov023_021f6880(var4, var0);
    if (!var5) return 0;
    if (func_ov024_021f6f10(var5) != 8) return 0;
    var5->unknown_45_1_ = var1;
    var5->unknown_42_ = (unsigned short)var2;
    return 1;
}
