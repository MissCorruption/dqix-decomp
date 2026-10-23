#include <globaldefs.h>
#include "NitroSDK/Memory.h"

struct Struct_ov031_022364c0 {
    unsigned char unknown_0_[0xe7];
    unsigned char unknown_e7_;
    unsigned char unknown_e8_[7];
    unsigned char unknown_ef_;
    unsigned char unknown_f0_[14];
    unsigned short unknown_fe_;
};
struct Struct_ov031_02236570 {
    Struct_ov031_022364c0 unknown_0_[4];
    unsigned char unknown_400_[0xf8];
    unsigned short unknown_4f8_[256];
};
extern Struct_ov031_02236570* data_ov031_02290cfc;
extern "C" unsigned short func_020d1cc8(const unsigned short* arg0, const unsigned char* arg1, unsigned int arg2);
extern "C" void* func_ov031_0223cf4c(int, int);
extern "C" int func_ov031_0221b024(Struct_ov031_02236570*, int*, void*);
extern "C" void func_ov031_0223cf70(void**);

// USA: func_ov031_02236570
extern "C" ARM void func_ov031_02236570(int arg0) {
    int var0 = 1;
    unsigned char var1 = data_ov031_02290cfc->unknown_0_[arg0].unknown_e7_;
    int var2 = 0;
    int var3 = var0 << arg0;
    int var4[4];
    VectorizedMemset(var4, 0, sizeof(var4));
    var4[arg0] = var0;
    if (arg0 <= 2) {
        if (data_ov031_02290cfc->unknown_0_[0].unknown_ef_ & var3) var2 = var0;
        if (var1 == 255 && var2 != 0) {
            data_ov031_02290cfc->unknown_0_[0].unknown_ef_ &= ~var3;
            data_ov031_02290cfc->unknown_0_[1].unknown_ef_ &= ~(var3);
            var4[1] = 1;
            var4[0] = 1;
        } else if (var1 != 255 && var2 == 0) {
            data_ov031_02290cfc->unknown_0_[0].unknown_ef_ |= var3;
            data_ov031_02290cfc->unknown_0_[1].unknown_ef_ |= var3;
            var4[1] = 1;
            var4[0] = 1;
        }
    }
    int var5 = 0;
    int var6 = 0;
    do {
        if (var4[var5])
            data_ov031_02290cfc->unknown_0_[var5].unknown_fe_ = func_020d1cc8(data_ov031_02290cfc->unknown_4f8_, (const unsigned char*)data_ov031_02290cfc + var6, 254);
        var5++;
        var6 += 256;
    } while (var5 < 4);
    void* var7 = func_ov031_0223cf4c(256, 32);
    func_ov031_0221b024(data_ov031_02290cfc, var4, var7);
    func_ov031_0223cf70(&var7);
}
