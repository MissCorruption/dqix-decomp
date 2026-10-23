#include <globaldefs.h>
#include "std_library_functions.h"
#include "Resource/Script.h"

#if defined(jpn)
#define data_021142c4 data_02113f64
#endif

struct Struct_020d39dc {
    unsigned char unknown_0_0_ : 3;
    unsigned char unknown_0_3_ : 1;
    unsigned char unknown_0_4_ : 3;
    unsigned char unknown_0_7_ : 1;
};

struct Struct_020d39dc_2 {
    unsigned int unknown_0_0_ : 10;
    unsigned int unknown_1_2_ : 10;
    unsigned int unknown_2_4_ : 10;
    unsigned int unknown_3_6_ : 2;
};

struct Struct_020d39dc_3 {
#if defined(jpn)
    char unknown_0_[11];
#else
    char unknown_0_[16];
#endif
    struct Struct_020d39dc unknown_10_;
    unsigned char unknown_11_;
    unsigned char unknown_12_;
    unsigned char unknown_13_;
    struct Struct_020d39dc_2 unknown_14_;
    struct Struct_020d39dc_2 unknown_18_;
    struct Struct_020d39dc_2 unknown_1c_;
    unsigned short unknown_20_;
    unsigned short unknown_22_;
};

struct Struct_020d3cf0;
extern "C" void func_020d3cf0(struct Struct_020d3cf0* arg0, struct Struct_020d39dc_3* arg1);
extern struct Struct_020d3cf0* data_021142c4;

// USA: func_020d39dc
extern "C" ARM int func_020d39dc(Script::Parameter* arg0, int arg1) {
    struct Struct_020d39dc_3 var0;

    var0.unknown_10_.unknown_0_0_ = (arg0++)->ToInt();
    var0.unknown_11_ = (arg0++)->ToInt();
    strcpy(var0.unknown_0_, (arg0++)->ToString());
    var0.unknown_10_.unknown_0_3_ = (arg0++)->ToInt();
    var0.unknown_10_.unknown_0_4_ = (arg0++)->ToInt();
    var0.unknown_12_ = (arg0++)->ToInt();
    var0.unknown_10_.unknown_0_7_ = (arg0++)->ToInt();

    var0.unknown_14_.unknown_0_0_ = (arg0++)->ToInt();
    var0.unknown_14_.unknown_2_4_ = (arg0++)->ToInt();
    var0.unknown_14_.unknown_1_2_ = (arg0++)->ToInt();

    var0.unknown_18_.unknown_0_0_ = (arg0++)->ToInt();
    var0.unknown_18_.unknown_1_2_ = (arg0++)->ToInt();
    var0.unknown_18_.unknown_2_4_ = (arg0++)->ToInt();

    var0.unknown_1c_.unknown_0_0_ = (arg0++)->ToInt();
    var0.unknown_1c_.unknown_1_2_ = (arg0++)->ToInt();
    var0.unknown_1c_.unknown_2_4_ = (arg0++)->ToInt();

    var0.unknown_13_ = (arg0++)->ToInt();
    var0.unknown_20_ = (arg0++)->ToInt();
    var0.unknown_22_ = (arg0++)->ToInt();

    func_020d3cf0(data_021142c4, &var0);
    return 1;
}
