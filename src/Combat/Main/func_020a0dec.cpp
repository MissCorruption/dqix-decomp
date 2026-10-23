#include <globaldefs.h>

struct Struct_0202ef14_2 {
    int unknown_0_;
};

typedef void (Struct_0202ef14_2::*Type_0202ef14)();

struct Struct_020e8f08 {
    Type_0202ef14 unknown_0_[3];
};

extern const Struct_020e8f08 data_020e8f08;

// USA: func_020a0dec
extern "C" ARM void func_020a0dec(Struct_0202ef14_2* arg0) {
    Struct_020e8f08 var0 = data_020e8f08;
    (arg0->*var0.unknown_0_[arg0->unknown_0_])();
}
