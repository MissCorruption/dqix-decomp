#include <globaldefs.h>

struct Struct_020c0328 {
    unsigned int unknown_0_, unknown_4_, unknown_8_, unknown_c_;   /* 0x0,0x4,0x8,0xc */
    unsigned int unknown_10_;      /* 0x10 */
    unsigned int unknown_14_;     /* 0x14 */
};

// USA: func_020c0328
extern "C" ARM void func_020c0328(struct Struct_020c0328* arg0) {
    arg0->unknown_0_ = 0x67452301;
    arg0->unknown_4_ = 0xefcdab89;
    arg0->unknown_8_ = 0x98badcfe;
    arg0->unknown_c_ = 0x10325476;
    arg0->unknown_10_ = 0;
    arg0->unknown_14_ = 0;
}
