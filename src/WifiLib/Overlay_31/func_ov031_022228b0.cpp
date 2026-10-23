#include <globaldefs.h>


typedef void (*Type_ov031_022228b0)(int);

struct Struct_ov031_0224f670_19 {
    int unknown_0_[3];
    Type_ov031_022228b0 unknown_c_;
};

extern Struct_ov031_0224f670_19 data_ov031_0224f670;

// USA: func_ov031_022228b0
extern "C" THUMB void func_ov031_022228b0(int arg0) {
    data_ov031_0224f670.unknown_c_(arg0);
}
