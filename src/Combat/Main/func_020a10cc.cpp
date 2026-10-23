#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_0201c1c8 { int unknown_0_; union { int unknown_0_; float unknown1_0_; } unknown_4_; };

struct Struct_020a14fc;
extern "C" void func_020a14fc(struct Struct_020a14fc* arg0, void* arg1, int arg2);

struct Struct_020a10cc {
    struct Struct_0201c1c8 unknown_0_;
    struct Struct_0201c1c8 unknown_8_;
    struct Struct_0201c1c8 unknown_10_;
    struct Struct_0201c1c8 unknown_18_;
};

struct Struct_02109d94 {
    unsigned char unknown_0_;
    char unknown_1_;
    unsigned short unknown_2_;
    struct Struct_020a14fc* unknown_4_;
    void* unknown_8_;
    int unknown_c_;
};
extern struct Struct_02109d94 data_02109d94;

// USA: func_020a10cc
extern "C" ARM int func_020a10cc(struct Struct_020a10cc* arg0) {
    unsigned short var0 = 0;
    unsigned short var1 = (unsigned short)((Script::Parameter*)&arg0->unknown_0_)->ToInt();
    unsigned short var2 = (unsigned short)((Script::Parameter*)&arg0->unknown_8_)->ToInt();
    unsigned short var3 = (unsigned short)((Script::Parameter*)&arg0->unknown_10_)->ToInt();
    unsigned short var4 = (unsigned short)((Script::Parameter*)&arg0->unknown_18_)->ToInt();

    if (data_02109d94.unknown_0_ & 1) var0 += var1;
    if (data_02109d94.unknown_0_ & 2) var0 += var2;
    if (data_02109d94.unknown_0_ & 4) var0 += var3;
    if (data_02109d94.unknown_0_ & 8) var0 += var4;

    if (data_02109d94.unknown_c_ != 0 && data_02109d94.unknown_2_ != 0) {
        var0 = data_02109d94.unknown_2_;
    }

    func_020a14fc(data_02109d94.unknown_4_, data_02109d94.unknown_8_, var0);
    return 1;
}
