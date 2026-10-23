#include <globaldefs.h>
#include "Input/Input.h"

#if defined(jpn)
enum { Enum_ov006_02159e50_20 = 0xc, Enum_ov006_02159e50_720 = 0x2d8 };
#else
enum { Enum_ov006_02159e50_20 = 0x14, Enum_ov006_02159e50_720 = 0x2d0 };
#endif

struct Struct_0207fdcc_2;
struct Struct_02081f20_2;
struct Struct_02108760;
struct Struct_020e25e8;

struct Struct_ov006_02157a60 {
    char unknown_0_[Enum_ov006_02159e50_20];
    Struct_0207fdcc_2* unknown_14_;
    Struct_020e25e8* unknown_18_;
    char unknown_1c_[0x28];
    short* unknown_44_;
    char unknown_48_[0x54];
    char unknown_9c_[Enum_ov006_02159e50_720];
    short unknown_36c_;
    short unknown_36e_;
    char unknown_370_[0xbc];
    signed char unknown_42c_;
};

extern "C" unsigned char func_ov006_02158a28(Struct_ov006_02157a60* arg0);
extern "C" unsigned char func_ov006_02158b78(Struct_ov006_02157a60* arg0);
extern "C" unsigned char func_0205eaa0(Struct_02108760* arg0, int arg1, int arg2);
extern "C" void func_0207fdcc(Struct_0207fdcc_2* arg0, int arg1);
extern "C" void func_0208203c(Struct_02081f20_2* arg0);
extern "C" void func_020e25e8(Struct_020e25e8* arg0);

extern "C" char data_02108760[];

// USA: func_ov006_02159e50
extern "C" ARM signed char func_ov006_02159e50(Struct_ov006_02157a60* arg0) {
    signed char var0 = 0;
    arg0->unknown_42c_ = 0;
    arg0->unknown_44_ = &arg0->unknown_36c_;
    if (func_ov006_02158a28(arg0) || g_keyManager.TestKeysPressed(0x200)) {
        func_0205eaa0((Struct_02108760*)data_02108760, 1, 0);
        var0 = -1;
        if (arg0->unknown_36c_ == 0x22)
            var0 = 1;
    } else if (func_ov006_02158b78(arg0)) {
        var0 = -1;
    }
    if (var0 != 0) {
        func_0207fdcc(arg0->unknown_14_, arg0->unknown_36e_);
        func_0208203c((Struct_02081f20_2*)arg0->unknown_9c_);
        arg0->unknown_44_ = 0;
    }
    if (arg0->unknown_18_ != 0 && var0 != 0)
        func_020e25e8(arg0->unknown_18_);
    return var0;
}
