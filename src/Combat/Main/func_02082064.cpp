#include <globaldefs.h>
#include "std_library_functions.h"

#include "Combat/ResourceScriptEntry.h"

static Struct_0201099c_2 *data_02108ef4;
static unsigned int data_02108ef0;
static unsigned int data_02108eec;
static int data_02108ee8;
static unsigned int data_02108ef8;

struct Struct_02082064_2 {
    unsigned int unknown_0_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned int unknown_8_;
    unsigned int unknown_c_;
    unsigned int unknown_10_;
};

extern "C" void func_020823e4(struct Struct_02082064_2 *arg0, struct Struct_02082064_2 *arg1);

// USA: func_02082064
extern "C" ARM int func_02082064(Script::Parameter *arg0, int arg1) {
    Struct_0201099c var0;
    var0.unknown_4_0_ = ++data_02108ef8;
    var0.unknown_0_0_ = (arg0++)->ToInt();
    if (data_02108ef0 < data_02108ef8 && var0.unknown_0_0_ <= data_02108eec) {
        var0.unknown_8_.unknown_0_0_ = (arg0++)->ToInt();
        var0.unknown_8_.unknown_2_4_ = (arg0++)->ToInt();
        var0.unknown_8_.unknown_1_2_ = (arg0++)->ToInt();
        var0.unknown_c_.unknown_0_0_ = (arg0++)->ToInt();
        var0.unknown_c_.unknown_1_2_ = (arg0++)->ToInt();
        var0.unknown_10_.unknown_0_0_ = (arg0++)->ToInt();
        var0.unknown_c_.unknown_2_4_ = (arg0++)->ToInt();
        var0.unknown_10_.unknown_1_2_ = (arg0++)->ToInt();
        var0.unknown_10_.unknown_2_4_ = (arg0++)->ToInt();
        var0.unknown_4_7_ = (arg0++)->ToInt();
        func_020823e4((Struct_02082064_2 *) &data_02108ef4->unknown_14_, (Struct_02082064_2 *) &var0);
        data_02108ee8 = 1;
    }
    if (data_02108ef8 == data_02108ef0) {
        var0.unknown_8_.unknown_0_0_ = (arg0++)->ToInt();
        var0.unknown_8_.unknown_2_4_ = (arg0++)->ToInt();
        var0.unknown_8_.unknown_1_2_ = (arg0++)->ToInt();
        var0.unknown_c_.unknown_0_0_ = (arg0++)->ToInt();
        var0.unknown_c_.unknown_1_2_ = (arg0++)->ToInt();
        var0.unknown_10_.unknown_0_0_ = (arg0++)->ToInt();
        var0.unknown_c_.unknown_2_4_ = (arg0++)->ToInt();
        var0.unknown_10_.unknown_1_2_ = (arg0++)->ToInt();
        var0.unknown_10_.unknown_2_4_ = (arg0++)->ToInt();
        var0.unknown_4_7_ = (arg0++)->ToInt();
        func_020823e4((Struct_02082064_2 *) &data_02108ef4->unknown_0_, (Struct_02082064_2 *) &var0);
    }
    return 1;
}

// USA: func_020823e4
extern "C" ARM void func_020823e4(struct Struct_02082064_2 *arg0, struct Struct_02082064_2 *arg1) {
    arg0->unknown_0_ = arg1->unknown_0_;
    arg0->unknown_4_ = arg1->unknown_4_;
    arg0->unknown_8_ = arg1->unknown_8_;
    arg0->unknown_c_ = arg1->unknown_c_;
    arg0->unknown_10_ = arg1->unknown_10_;
}

struct Struct_0201c1c8;

// USA: func_02082410
extern "C" ARM int func_02082410(Struct_0201c1c8 *arg0) {
    int var0;
    for (var0 = 0; var0 < 0x11; var0++) {
        data_02108ef4->unknown_3c_[var0] = (unsigned char) ((Script::Parameter *) arg0)->ToInt();
        arg0 = (Struct_0201c1c8 *) ((char *) arg0 + sizeof(Script::Parameter));
    }
    int var1;
    for (var1 = 0x11; var1 < 0x16; var1++) {
        data_02108ef4->unknown_3c_[var1] = 0x64;
    }
    return 1;
}

// USA: func_0208247c
extern "C" ARM void* func_0208247c(void* arg0) {
    return memset(arg0, 0, 0x54);
}

// USA: func_02082490
extern "C" ARM int func_02082490(void *arg0, void *arg1, unsigned int arg2, int arg3, int arg4) {
    Struct_0201099c_2 *var0 = (Struct_0201099c_2 *) arg0;
    Script var1;
    memset(var0, 0, sizeof(*var0));
    data_02108ef8 = 0;
    data_02108ef4 = var0;
    data_02108eec = arg4;
    data_02108ef0 = arg3;
    data_02108ee8 = 0;
    var1.Initialize();
    var1.SetOpcodeLookup(data_020f0ff8);
    var1.Load(arg1, arg2);
    var1.Execute();
    if (data_02108ee8 != 0) {
        var0->unknown_28_.unknown_4_0_      = (unsigned short) (var0->unknown_14_.unknown_4_0_ - var0->unknown_0_.unknown_4_0_);
        var0->unknown_28_.unknown_0_0_         = var0->unknown_14_.unknown_0_0_ - var0->unknown_0_.unknown_0_0_;
        var0->unknown_28_.unknown_8_.unknown_0_0_     = var0->unknown_14_.unknown_8_.unknown_0_0_ - var0->unknown_0_.unknown_8_.unknown_0_0_;
        var0->unknown_28_.unknown_8_.unknown_2_4_    = var0->unknown_14_.unknown_8_.unknown_2_4_ - var0->unknown_0_.unknown_8_.unknown_2_4_;
        var0->unknown_28_.unknown_8_.unknown_1_2_  = var0->unknown_14_.unknown_8_.unknown_1_2_ - var0->unknown_0_.unknown_8_.unknown_1_2_;
        var0->unknown_28_.unknown_c_.unknown_0_0_     = var0->unknown_14_.unknown_c_.unknown_0_0_ - var0->unknown_0_.unknown_c_.unknown_0_0_;
        var0->unknown_28_.unknown_c_.unknown_1_2_  = var0->unknown_14_.unknown_c_.unknown_1_2_ - var0->unknown_0_.unknown_c_.unknown_1_2_;
        var0->unknown_28_.unknown_10_.unknown_0_0_    = var0->unknown_14_.unknown_10_.unknown_0_0_ - var0->unknown_0_.unknown_10_.unknown_0_0_;
        var0->unknown_28_.unknown_c_.unknown_2_4_    = var0->unknown_14_.unknown_c_.unknown_2_4_ - var0->unknown_0_.unknown_c_.unknown_2_4_;
        var0->unknown_28_.unknown_10_.unknown_1_2_ = var0->unknown_14_.unknown_10_.unknown_1_2_ - var0->unknown_0_.unknown_10_.unknown_1_2_;
        var0->unknown_28_.unknown_10_.unknown_2_4_   = var0->unknown_14_.unknown_10_.unknown_2_4_ - var0->unknown_0_.unknown_10_.unknown_2_4_;
        var0->unknown_28_.unknown_4_7_     = (unsigned short) (var0->unknown_14_.unknown_4_7_ - var0->unknown_0_.unknown_4_7_);
        return var0->unknown_14_.unknown_4_0_;
    }
    return 0;
}

struct Struct_02013fb4;

// USA: func_0208274c
extern "C" ARM int func_0208274c(void *arg0, Struct_02013fb4 *arg1, int arg2, int arg3) {
    Script var0;
    memset(arg0, 0, sizeof(Struct_0201099c_2));
    data_02108ef8 = 0;
    data_02108eec = 0;
    data_02108ef0 = arg3;
    data_02108ef4 = (Struct_0201099c_2 *) arg0;
    data_02108ee8 = 0;
    var0.Initialize();
    var0.SetOpcodeLookup(data_020f0ff8);
    var0.Load(arg1, (unsigned int) arg2);
    var0.Execute();
    return 0;
}
