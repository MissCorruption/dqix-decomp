#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_ov006_021536e0 {
    int unknown_0_, unknown_4_, unknown_8_, unknown_c_, unknown_10_;
    unsigned char unknown_14_[6];
    unsigned char unknown_1a_[3];
    int unknown_20_;
    short unknown_24_;
};

// USA: func_ov006_021536e0
extern "C" ARM void func_ov006_021536e0(struct Struct_ov006_021536e0* arg0) {
    arg0->unknown_0_ = 0;
    arg0->unknown_4_ = 0;
    arg0->unknown_8_ = 0;
    arg0->unknown_c_ = 0;
    arg0->unknown_10_ = 0;
    memset(arg0->unknown_14_, -1, 6);
    memset(arg0->unknown_1a_, -1, 3);
    arg0->unknown_20_ = 0;
    arg0->unknown_24_ = 0;
}
