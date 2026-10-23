#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov006_021571fc_4768 = 0x109c, Enum_ov006_021571fc_4796 = 0x10b8 };
#else
enum { Enum_ov006_021571fc_4768 = 0x12a0, Enum_ov006_021571fc_4796 = 0x12bc };
#endif

#include "std_library_functions.h"

struct Struct_02078398_2;
extern "C" void func_02078484(struct Struct_02078398_2*);
struct Struct_020dbfa4;
extern "C" void func_020dbfa4(struct Struct_020dbfa4*, int);

extern char data_ov006_02160087[];

struct Struct_ov006_021571fc {
    unsigned char unknown_0_;
    unsigned char unknown_1_[0xf];
    unsigned char unknown_10_;
    unsigned char unknown_11_0_ : 1;
    unsigned char unknown_11_1_ : 1;
    unsigned char unknown_11_2_ : 1;
    unsigned char unknown_11_3_ : 1;
    unsigned char unknown_11_4_ : 1;
    unsigned char unknown_11_5_ : 1;
    unsigned char unknown_11_6_ : 1;
    unsigned char unknown_11_7_ : 1;
    short unknown_12_;
    short unknown_14_;
    short unknown_16_;
    short unknown_18_;
    short unknown_1a_;
    short unknown_1c_;
    short unknown_1e_;
    int unknown_20_; int unknown_24_; int unknown_28_; int unknown_2c_; int unknown_30_;
    int unknown_34_; int unknown_38_; int unknown_3c_; int unknown_40_;
    int unknown_44_; int unknown_48_; int unknown_4c_;
};

// USA: func_ov006_021571fc
extern "C" ARM void func_ov006_021571fc(char* arg0) {
    struct Struct_ov006_021571fc var0;
    func_02078484((struct Struct_02078398_2*)&var0);
    var0.unknown_11_2_ = 0;
    var0.unknown_12_ = 0;
    strcpy((char*)&var0, data_ov006_02160087);
    var0.unknown_44_ = 0x10a;
    var0.unknown_48_ = 0x10a;
    var0.unknown_4c_ = 0x10a;
    var0.unknown_2c_ = 0xc9 - 0x10a;
    var0.unknown_30_ = (int)0xfffff554;
    var0.unknown_34_ = 0x4526;
    func_020dbfa4((struct Struct_020dbfa4*)(arg0 + Enum_ov006_021571fc_4768), (int)&var0);
    *(unsigned char*)(arg0 + Enum_ov006_021571fc_4796) = 1;
}
