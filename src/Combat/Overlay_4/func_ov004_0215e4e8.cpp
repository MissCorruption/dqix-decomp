#include <globaldefs.h>

struct Struct_02072a68_2;
extern "C" void* func_02072a68(struct Struct_02072a68_2* arg0, int arg1);
extern "C" int func_02042190(int arg0);

struct Struct_ov004_0215e4e8 {
    char unknown_0_[0x20];
    void* unknown_20_;
    char unknown_24_[0x36 - 0x24];
    unsigned short unknown_36_;
    short unknown_38_;
    char unknown_3a_[0x44 - 0x3a];
    unsigned char unknown_44_0_ : 4;
};

extern "C" void* func_ov011_021849c8(void* arg0);
extern "C" Struct_ov004_0215e4e8* func_ov023_021f6880(void* arg0, int arg1);
extern "C" unsigned int func_ov023_021f6f10(void* arg0);
extern "C" int func_020d2ff0(const char* arg0);
extern "C" void* func_ov023_021fa598(void* arg0);
extern "C" int func_020420e8(void* arg0, int arg1);

// USA: func_ov004_0215e4e8
extern "C" ARM int func_ov004_0215e4e8(void* arg0, int arg1) {
    void* var0 = func_ov011_021849c8(arg0);
    Struct_ov004_0215e4e8* var1 = func_ov023_021f6880(var0, arg1);
    if (!var1) {
        return 0;
    }
    void* var2 = var1->unknown_20_;
    if (!var2) {
        Struct_ov004_0215e4e8* var3 = func_ov023_021f6880(var0, var1->unknown_36_);
        if (func_ov023_021f6f10(var3) == 4) {
            struct Struct_02072a68_2* var4 = (struct Struct_02072a68_2*)func_ov023_021fa598(var3);
            var2 = func_02072a68(var4, var1->unknown_38_);
        }
    }
    int var5 = 0;
    if (var2) {
#if defined(jpn)
        unsigned int var6 = func_020d2ff0((const char*)var2);
        var5 = (int)(var6 * var1->unknown_44_0_) >> 1;
#else
        var5 = func_020420e8(var2, func_02042190(var1->unknown_44_0_));
#endif
    }
    return var5;
}
