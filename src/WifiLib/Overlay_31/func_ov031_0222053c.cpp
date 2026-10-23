#include <globaldefs.h>

struct Struct_ov031_0222053c {
    unsigned short unknown_0_;
    unsigned char unknown_2_[7];
};
struct Struct_ov031_0224f670_16 {
    unsigned char unknown_0_[0x50];
    int unknown_50_;
};
extern unsigned char data_ov031_022460e0[7] __attribute__((aligned(4)));
extern unsigned char* data_ov031_0224b114;
extern Struct_ov031_0224f670_16 data_ov031_0224f670;
extern unsigned char data_ov031_0224fb18[6];
extern unsigned char data_ov031_0224fba4[];
extern "C" int func_ov031_02220390(int, int, const void*, int);
extern "C" int func_ov031_022202cc(int, int, const void*, int, int);

// USA: func_ov031_0222053c
extern "C" THUMB int func_ov031_0222053c(int arg0) {
    Struct_ov031_0222053c var0;
    var0.unknown_0_ = 256;
    const unsigned char* var1 = data_ov031_022460e0;
    unsigned char* var2 = var0.unknown_2_;
    int var3 = 7;
    do {
        *var2++ = *var1++;
    } while (--var3);
    int var4 = func_ov031_02220390((int)data_ov031_0224b114, 1, &var0, 2);
    var4 = func_ov031_02220390(var4, 2, &var0, 2);
    var4 = data_ov031_0224f670.unknown_50_ ? func_ov031_02220390(var4, 5, &var0, 2) : var4;
    var4 = func_ov031_02220390(var4, 3, var0.unknown_2_, 7);
    if (data_ov031_0224f670.unknown_50_) var4 = func_ov031_02220390(var4, 4, data_ov031_0224fb18, 6);
    return func_ov031_022202cc(arg0, 2, data_ov031_0224fba4, var4 - (int)data_ov031_0224b114 + 8, 0);
}
