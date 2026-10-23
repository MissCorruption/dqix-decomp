#include <globaldefs.h>

#if defined(jpn)
#define LOW_REGION(j, u) (j)
#else
#define LOW_REGION(j, u) (u)
#endif
#include "Filesystem/BackgroundLoader.h"

extern "C" void* func_0203bd08();
extern "C" unsigned int func_0203be40(void* arg0);

struct Struct_ov006_02156e54_2 {
    char unknown_0_[0x14];
    unsigned int unknown_14_;
    char unknown_18_[0x38 - 0x18];
    unsigned int unknown_38_;
    unsigned int unknown_3c_;
    int unknown_40_;
    int unknown_44_;
    char unknown_48_[4];
    int unknown_4c_;
    char unknown_50_[0x5e - 0x50];
    unsigned char unknown_5e_;
    char unknown_5f_[0x70 - 0x5f];
};

struct Struct_ov006_02156e54 {
    Struct_ov006_02156e54_2 unknown_0_;
    int unknown_70_;
    short unknown_74_;
    short unknown_76_;
    short unknown_78_;
    unsigned char unknown_7a_;
};

extern "C" void func_ov006_0215479c(Struct_ov006_02156e54* arg0);

struct Struct_ov006_02154614 {
    char unknown_0_[LOW_REGION(0x714, 0x894)];
    Struct_ov006_02156e54 unknown_894_[4];
};

// USA: func_ov006_02156e54
extern "C" ARM void func_ov006_02156e54(Struct_ov006_02154614* arg0) {
    BackgroundLoader* var0 = BackgroundLoader::GetInstance();
    Struct_ov006_02156e54* var1 = arg0->unknown_894_;
    for (unsigned char var2 = 0; var2 < 4; var2++) {
        if (var1->unknown_70_ > 0)
            var0->RemoveTask(var1->unknown_70_);
        var1->unknown_70_ = -1;
        func_ov006_0215479c(var1);
        var1->unknown_0_.unknown_5e_ = 0;
        var1->unknown_0_.unknown_14_ = func_0203be40(func_0203bd08()) + (var2 << 6) + 0x100;
        var1->unknown_0_.unknown_38_ = var2 * 0x120 + 0x240;
        var1->unknown_0_.unknown_3c_ = (var2 + LOW_REGION(8, 10)) & 0xf;
        var1->unknown_0_.unknown_40_ = 0;
        var1->unknown_76_ = (var2 << 5) + 0x20;
        var1->unknown_78_ = 0x80;
        var1++;
    }
}
