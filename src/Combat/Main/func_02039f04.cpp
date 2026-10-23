#include <globaldefs.h>
#include "Filesystem/FileIO.h"

extern "C" void func_02047b40(void* arg0, const void* arg1, int arg2);

struct Struct_02039f04 {
    const char* unknown_0_;
    void* unknown_4_;
};

union Struct_020e7844 {
    unsigned int unknown_0_[20];
    struct Struct_02039f04 unknown1_0_[10];
};

extern const union Struct_020e7844 data_020e7844;

// USA: func_02039f04
extern "C" ARM void func_02039f04(char* arg0, int arg1, const void* arg2) {
    union Struct_020e7844 var0;
    int var1;

    var0 = data_020e7844;

    var0.unknown1_0_[0].unknown_4_ = arg0 + 0x000;
    var0.unknown1_0_[1].unknown_4_ = arg0 + 0x088;
    var0.unknown1_0_[2].unknown_4_ = arg0 + 0x110;
    var0.unknown1_0_[3].unknown_4_ = arg0 + 0x198;
    var0.unknown1_0_[4].unknown_4_ = arg0 + 0x220;
    var0.unknown1_0_[5].unknown_4_ = arg0 + 0x2a8;
    var0.unknown1_0_[6].unknown_4_ = arg0 + 0x330;
    var0.unknown1_0_[7].unknown_4_ = arg0 + 0x3b8;
    var0.unknown1_0_[8].unknown_4_ = arg0 + 0x440;
    var0.unknown1_0_[9].unknown_4_ = arg0 + 0x4c8;

    for (var1 = 0; var1 < 10; var1++) {
        unsigned int var2 = 0;
        const void* var3 = 0;
        void* var4;
        GetFileInNarc(arg2, var0.unknown1_0_[var1].unknown_0_, &var3, &var2, 0);
        var4 = var0.unknown1_0_[var1].unknown_4_;
        func_02047b40(var4, var3, arg1);
        *(int*)var4 = 0x3e;
    }
}
