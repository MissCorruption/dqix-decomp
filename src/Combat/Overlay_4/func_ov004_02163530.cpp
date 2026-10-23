#include <globaldefs.h>

extern char* data_ov004_02171010;
extern "C" void* func_ov011_021849c8(void* arg0);
extern "C" void* func_ov023_021f6880(void*, int);
extern "C" unsigned int func_ov023_021f6f10(void* arg0);
#if defined(jpn)
enum { Enum_ov004_02163530_6144 = 0x1900 };
#else
enum { Enum_ov004_02163530_6144 = 0x1800 };
#endif

struct Struct_ov004_02163530 { char unknown_0_[0x5c]; short unknown_5c_; short unknown_5e_; };

// USA: func_ov004_02163530
extern "C" ARM int func_ov004_02163530(void* arg0) {
    *(short*)(data_ov004_02171010 + Enum_ov004_02163530_6144 + 0xf8) = 1;
    while (*(short*)(data_ov004_02171010 + Enum_ov004_02163530_6144 + 0xf8) * 8 < *(unsigned char*)(data_ov004_02171010 + Enum_ov004_02163530_6144 + 0xf4)) {
        (*(short*)(data_ov004_02171010 + Enum_ov004_02163530_6144 + 0xf8))++;
    }

    void* var0 = func_ov023_021f6880(func_ov011_021849c8(arg0), 0xa);
    if (var0 == NULL) {
        return (int)var0;
    }

    int var1 = func_ov023_021f6f10(var0);
    if (var1 != 7) {
        return var1;
    }

    struct Struct_ov004_02163530* var2 = (struct Struct_ov004_02163530*)var0;
    *(short*)(data_ov004_02171010 + Enum_ov004_02163530_6144 + 0xf6) = var2->unknown_5c_;

    short var3 = *(short*)(data_ov004_02171010 + Enum_ov004_02163530_6144 + 0xf8);
    short var4 = *(short*)(data_ov004_02171010 + Enum_ov004_02163530_6144 + 0xf6);
    var2->unknown_5c_ = var4;
    var2->unknown_5e_ = var3;
    return var4;
}
