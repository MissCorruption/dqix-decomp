#include <globaldefs.h>
#include "Resource/Script.h"
#include "Memory/SafeAllocator.h"

struct Struct_0201ec00_2 {
    signed short unknown_0_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    char* unknown_4_;
    int unknown_8_;
};

struct Struct_0201f0f0 {
    struct Struct_0201ec00_2* unknown_0_;
    int unknown_4_;
    int unknown_8_;
};

struct Struct_0201f170 {
    signed short unknown_0_;
    char unknown_2_[0xa];
};

struct Struct_0201ec00 {
    struct Struct_0201f170* unknown_0_;
    int unknown_4_;
};

extern "C" void func_0201f0f0(struct Struct_0201f0f0*, struct Struct_0201ec00_2*);
extern "C" struct Struct_0201f170* func_0201f170(struct Struct_0201ec00*, int);

struct Struct_020fdc40_2 {
    struct Struct_0201f170* unknown_0_;
    SafeAllocator* unknown_4_;
    struct Struct_0201f0f0* unknown_8_;
    char unknown_c_[16];
};
extern struct Struct_020fdc40_2 data_020fdc40;

// USA: func_0201ec00
extern "C" ARM int func_0201ec00(Script::Parameter* arg0, int arg1) {
    struct Struct_0201ec00_2 var0;
    var0.unknown_0_ = arg0->ToInt();
    arg0++;
    const char* var1 = (arg0++)->ToString();
    if (var1 == NULL) {
        return 0;
    }
    var0.unknown_4_ = (char*)data_020fdc40.unknown_4_->Allocate(strlen(var1) + 1);
    strcpy(var0.unknown_4_, var1);
    var0.unknown_2_ = 0;
    if (arg1 >= 3) {
        var0.unknown_2_ = arg0->ToInt();
        var0.unknown_2_ &= 0x3f;
        arg0++;
    }
    var0.unknown_3_ = 0;
    if (arg1 >= 4) {
        var0.unknown_3_ = arg0->ToInt();
    }
    var0.unknown_8_ = 0;
    func_0201f0f0(data_020fdc40.unknown_8_, &var0);
    data_020fdc40.unknown_0_ = func_0201f170((struct Struct_0201ec00*)data_020fdc40.unknown_8_, var0.unknown_0_);
    return 1;
}
