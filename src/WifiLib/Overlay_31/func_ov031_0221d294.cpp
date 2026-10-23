#include <globaldefs.h>

struct Struct_ov031_0221d294_2 {
    int unknown_0_;
    char unknown_4_[0x20];
    int unknown_24_;
    unsigned int unknown_28_;
    char unknown_2c_[0x24];
    unsigned int unknown_50_;
};

struct Struct_ov031_0221d294 {
    unsigned int unknown_0_;
    Struct_ov031_0221d294_2 unknown_4_[64];
};

extern "C" int func_ov031_0221e650(const char* arg0);
extern "C" int func_ov031_0221e4fc(unsigned char* arg0, unsigned char* arg1, int arg2);
extern char data_ov031_0224b0d0[];

// USA: func_ov031_0221d294
extern "C" THUMB int func_ov031_0221d294(Struct_ov031_0221d294* arg0) {
    int var0 = 0;
    int var1 = 0;
    int var2 = arg0->unknown_0_;
    int var3;
    if (arg0->unknown_0_ == 0) {
        return 5;
    }
    if (arg0->unknown_0_ > 64) {
        var2 = 64;
    }
    for (var3 = 0; var3 < var2; var3++) {
        if ((arg0->unknown_4_[var3].unknown_50_ & 1) != 0 &&
            arg0->unknown_4_[var3].unknown_0_ == func_ov031_0221e650(data_ov031_0224b0d0) &&
            func_ov031_0221e4fc((unsigned char*)arg0->unknown_4_[var3].unknown_4_, (unsigned char*)data_ov031_0224b0d0,
                                func_ov031_0221e650(data_ov031_0224b0d0)) == 0) {
            var1++;
        }
    }
    if (var1 > 1) {
        var0 = 4;
    }
    if (var1 == 0) {
        var0 = 5;
    }
    return var0;
}
