#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_ov000_02157d14 {
    char unknown_0_[0x1c];
    short unknown_1c_;
    char unknown_1e_[0x12];
    int unknown_30_;
};

// USA: func_ov000_02157d14
extern "C" ARM void func_ov000_02157d14(struct Struct_ov000_02157d14* arg0) {
    memset(arg0, 0, 0x30);
    arg0->unknown_1c_ = -1;
    arg0->unknown_30_ = 0;
}
