#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov006_02156f04_2196 = 0x714, Enum_ov006_02156f04_4795 = 0x10b7 };
#else
enum { Enum_ov006_02156f04_2196 = 0x894, Enum_ov006_02156f04_4795 = 0x12bb };
#endif

#include <std_library_functions.h>
#include "Filesystem/BackgroundLoader.h"

struct Struct_02015ef4_4 {
    void* unknown_0_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
    unsigned int unknown_10_0_ : 20;
    unsigned int unknown_12_4_ : 8;
    unsigned int unknown_13_4_ : 4;
    int unknown_14_;
    short unknown_18_;
    char unknown_1a_[0x20 - 0x1a];
};

extern "C" unsigned short func_020de234(Struct_02015ef4_4* arg0, int arg1);

extern const char data_ov006_021601e5[];

struct Struct_ov006_02156f04 {
    Struct_02015ef4_4 unknown_0_;
    char unknown_20_[0x20];
    char unknown_40_[0x30];
    short unknown_70_;
};

struct Struct_ov006_02156e54 {
    char unknown_0_[0x70];
    int unknown_70_;
    short unknown_74_;
    short unknown_76_;
    short unknown_78_;
    unsigned char unknown_7a_;
};

struct Struct_ov006_02154614 {
    char unknown_0_[Enum_ov006_02156f04_2196];
    Struct_ov006_02156e54 unknown_894_[4];
    char unknown_a84_[Enum_ov006_02156f04_4795 - Enum_ov006_02156f04_2196 - 4 * sizeof(Struct_ov006_02156e54)];
    unsigned char unknown_12bb_;
};

extern "C" void func_ov006_02156e54(Struct_ov006_02154614* arg0);

// USA: func_ov006_02156f04
extern "C" ARM void func_ov006_02156f04(Struct_ov006_02154614* arg0, Struct_ov006_02156f04* arg1) {
    func_ov006_02156e54(arg0);
    Struct_ov006_02156e54* var0 = arg0->unknown_894_;
    BackgroundLoader* var1 = BackgroundLoader::GetInstance();
    arg0->unknown_12bb_ = 0;
    for (unsigned char var2 = 0; var2 < 4; var2++) {
        short var3 = arg1->unknown_70_;
        var0->unknown_74_ = var3;
        if (var3 > 0) {
            var0->unknown_7a_ = 1;
            int var4 = func_020de234(&arg1->unknown_0_, 0);
            char var5[0x40] = {0};
            sprintf(var5, data_ov006_021601e5, arg1->unknown_0_.unknown_12_4_, var4);
            var0->unknown_70_ = var1->QueueLoadFile(var5, 0);
            if (var2 != 0)
                arg0->unknown_12bb_++;
        }
        arg1++;
        var0++;
    }
}
