#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Resource/Script.h"

struct Struct_0201c1c8 {
    int unknown_0_;
    int unknown_4_;
};

struct Struct_02109404_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[0xb];
    SafeAllocator* unknown_c_;
};
extern Struct_02109404_2 data_02109404;

struct Struct_0210941c {
    unsigned int unknown_0_0_ : 9;
    unsigned int unknown_1_1_ : 23;
    unsigned int unknown_4_;
    unsigned int unknown_8_;
    unsigned int unknown_c_;
};
extern struct Struct_0210941c data_0210941c[];
extern unsigned char data_02109418[];

struct Struct_020951d8 {
    unsigned short unknown_0_0_ : 9;
    unsigned short unknown_1_1_ : 1;
    unsigned short unknown_1_2_ : 1;
    unsigned short unknown_1_3_ : 5;
    unsigned short unknown_2_[13];
    unsigned short unknown_1c_;
    unsigned short unknown_1e_[5];
    void* unknown_28_;
};
struct Struct_020951d8_2 {
    unsigned char unknown_0_[0xa4];
    void* unknown_a4_;
};
extern "C" void func_02095910(struct Struct_020951d8_2* arg0, struct Struct_020951d8* arg1);

// USA: func_020951d8
extern "C" ARM int func_020951d8(struct Struct_0201c1c8* arg0, int arg1) {
    struct Struct_020951d8* var0;
    int var1 = ((Script::Parameter*)&arg0[0])->ToInt();
    int var2 = ((Script::Parameter*)&arg0[1])->ToInt();
    struct Struct_0201c1c8* var3 = &arg0[2];
    arg0 += 3;
    int var4 = ((Script::Parameter*)var3)->ToInt();
    int var5 = data_02109418[0];
    struct Struct_0210941c* var6 = data_0210941c;
    if (data_02109404.unknown_0_ == 0) {
        int var7;
        for (var7 = 0; var7 < var5; var7++) {
            if (var6[var7].unknown_0_0_ == var1) {
                break;
            }
        }
        if (var7 == var5) {
            return 0;
        }
    }
    var0 = (struct Struct_020951d8*)data_02109404.unknown_c_->Allocate(0x2c);
    var0->unknown_0_0_ = var1;
    var0->unknown_1_1_ = var2;
    var0->unknown_1_2_ = var4;
    int var8 = 0;
    int var9 = 0;
    int var10;
    var0->unknown_28_ = 0;
    for (var10 = 0; var10 < arg1 - 3; var10++) {
        int var11 = ((Script::Parameter*)arg0)->ToInt();
        arg0++;
        if ((var11 >> 16) == 1000) {
            if (var9 <= 5) {
                var0->unknown_1e_[var9] = var11;
                var9++;
            }
        } else {
            if (var8 <= 13) {
                var0->unknown_2_[var8] = var11;
                var8++;
            }
        }
    }
    var0->unknown_1_3_ = var8;
    var0->unknown_1c_ = var9;
    func_02095910((struct Struct_020951d8_2*)&data_02109418, var0);
    return 1;
}
