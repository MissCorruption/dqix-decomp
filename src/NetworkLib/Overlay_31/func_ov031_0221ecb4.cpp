#include <globaldefs.h>


typedef void (*Type_ov031_0221ecb4)(int);

struct Struct_ov031_0224f4c0_4 {
    int unknown_0_;
    Type_ov031_0221ecb4 unknown_4_;
};

extern Struct_ov031_0224f4c0_4 data_ov031_0224f4c0;

// USA: func_ov031_0221ecb4
extern "C" THUMB int func_ov031_0221ecb4(int arg0) {
    Type_ov031_0221ecb4 var0 = data_ov031_0224f4c0.unknown_4_;
    if (var0 != NULL) {
        var0(arg0);
    }
    return 0;
}
