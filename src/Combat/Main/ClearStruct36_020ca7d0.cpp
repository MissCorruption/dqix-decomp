#include <globaldefs.h>

struct Struct_020ca7d0 {
    unsigned int unknown_0_, unknown_4_, unknown_8_;
};

struct Struct_020ca7d0_2 {
    Struct_020ca7d0 unknown_0_, unknown_c_, unknown_18_;
};

// USA: func_020ca7d0
extern "C" THUMB void func_020ca7d0(Struct_020ca7d0_2* obj) {
    Struct_020ca7d0 zero;
    zero.unknown_0_ = 0;
    zero.unknown_4_ = 0;
    zero.unknown_8_ = 0;
    obj->unknown_0_ = zero;
    obj->unknown_c_ = zero;
    obj->unknown_18_ = zero;
}
