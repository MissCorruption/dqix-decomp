#include <globaldefs.h>

struct Struct_020c089c {
    unsigned int unknown_0_, unknown_4_, unknown_8_, unknown_c_, unknown_10_;
    unsigned int unknown_14_, unknown_18_, unknown_1c_;
};

// USA: func_020c089c
extern "C" ARM void func_020c089c(Struct_020c089c* arg0) {
    arg0->unknown_0_ = 0x67452301;
    arg0->unknown_4_ = 0xefcdab89;
    arg0->unknown_8_ = 0x98badcfe;
    arg0->unknown_c_ = 0x10325476;
    arg0->unknown_10_ = 0xc3d2e1f0;
    arg0->unknown_14_ = 0;
    arg0->unknown_18_ = 0;
    arg0->unknown_1c_ = 0;
}
