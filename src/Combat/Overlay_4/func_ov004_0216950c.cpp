#include <globaldefs.h>
#include "std_library_functions.h"

#if defined(jpn)
extern "C" void* func_ov004_02168f08(void* arg0, int arg1);
#else
extern "C" void* func_ov023_021f6524(void* arg0, int arg1);
#endif
extern "C" int func_ov023_021f9bc8(char* arg0);
struct Struct_ov004_0216950c;
extern "C" void func_ov004_021695fc(struct Struct_ov004_0216950c* arg0);
extern "C" void func_ov004_0216920c(void* arg0);
extern "C" void func_ov011_021848a0(void* arg0, int arg1);
extern "C" int func_ov004_02169adc(void* arg0);

extern void* data_ov004_02171030;

struct Struct_ov004_0216950c_2 { char unknown_0_[0x5c]; short unknown_5c_; short unknown_5e_; };

// USA: func_ov004_0216950c
extern "C" ARM int func_ov004_0216950c(void* arg0) {
#if defined(jpn)
    unsigned char* var0 = *(unsigned char**)((char*)data_ov004_02171030 + 0x10);
#else
    unsigned char* var0 = *(unsigned char**)((char*)data_ov004_02171030 + 0x190);
#endif
    if (!var0) return 0;

#if defined(jpn)
    struct Struct_ov004_0216950c_2* var1 = (struct Struct_ov004_0216950c_2*)func_ov004_02168f08(arg0, 0x64);
#else
    struct Struct_ov004_0216950c_2* var1 = (struct Struct_ov004_0216950c_2*)func_ov023_021f6524(arg0, 0x64);
#endif
    short var2 = var1->unknown_5c_;
    unsigned char *var3, *var4;
    int var5 = func_ov023_021f9bc8((char*)var1) + var2 * 8;
    var3 = var0 + 4 + var5 * 0x2c;
    var4 = var0 + 4 + (var5 + 1) * 0x2c;
    func_ov004_021695fc((struct Struct_ov004_0216950c*)var3);

    int var6 = 0x2c;
    for (; var5 < var0[0]; var5++) {
        memcpy(var3, var4, var6);
        var3 += var6;
        var4 += var6;
    }

    unsigned char var7 = --var0[0];
    unsigned char* var8 = var0 + 4 + var7 * 0x2c;
    func_ov004_021695fc((struct Struct_ov004_0216950c*)var8);

    if (var0[0] <= 8) {
        var1->unknown_5c_ = 0;
        var1->unknown_5e_ = 1;
    }
    func_ov004_0216920c(arg0);

    if (var0[0] == 0) {
        func_ov011_021848a0(arg0, 0x66);
        return 0;
    }
    func_ov004_02169adc(arg0);
    return 0;
}
