#include <globaldefs.h>
#include "Combat/NodeLookup.h"
#include "Graphics/Vector.h"
#include "Resource/Script.h"
struct Struct_0206c6f4 {
    unsigned char unknown_0_[0x10];
    int unknown_10_;
    int unknown_14_;
    int unknown_18_;
    unsigned char unknown_1c_[3];
    unsigned char unknown_1f_;
    unsigned short unknown_20_;
    short unknown_22_;
    int unknown_24_;
    int unknown_28_;
    int unknown_2c_;
    int unknown_30_;
    unsigned char unknown_34_[0x44 - 0x34];
    unsigned short unknown_44_;
    unsigned char unknown_46_[0x70 - 0x46];
    Struct_0206c6f4* unknown_70_;
};
struct Struct_02108cec_4 {
    unsigned char unknown_0_[0xa];
    unsigned short unknown_a_;
    unsigned int unknown_c_;
    void* unknown_10_;
};
extern Struct_02108cec_4 data_02108cec;
// USA: func_0206c6f4
extern "C" ARM int func_0206c6f4(Script::Parameter* arg0) {
    Struct_0206c6f4* var0 = (Struct_0206c6f4*)func_0206db20(data_02108cec.unknown_10_, arg0->ToInt());
    if (!var0) return 0;
    while (var0) {
        if (var0->unknown_44_ == data_02108cec.unknown_a_) break;
        var0 = var0->unknown_70_;
    }
    if (!var0) return 0;
    var0->unknown_1f_ = 8;
    var0->unknown_22_ = (int)(4096.0f * arg0[1].ToFloat());
    int var1 = (int)(4096.0f * arg0[2].ToFloat());
    int var2 = (int)(((long long)var1 * fix32sin(var0->unknown_22_) + 0x800) >> 12);
    int var3 = (int)(((long long)var1 * fix32cos(var0->unknown_22_) + 0x800) >> 12);
    var0->unknown_24_ = var0->unknown_10_ + var2;
    var0->unknown_28_ = var0->unknown_18_ + var3;
    var0->unknown_2c_ = var0->unknown_10_ - var2;
    var0->unknown_30_ = var0->unknown_18_ - var3;
    int var4 = var0->unknown_2c_, var5 = var0->unknown_24_;
    if (var5 < var4) {
        var0->unknown_24_ = var4;
        var0->unknown_2c_ = var5;
    }
    var4 = var0->unknown_30_;
    var5 = var0->unknown_28_;
    if (var5 < var4) {
        var0->unknown_28_ = var4;
        var0->unknown_30_ = var5;
    }
    return 1;
}
