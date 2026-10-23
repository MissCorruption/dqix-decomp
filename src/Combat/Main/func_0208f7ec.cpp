#include <globaldefs.h>

struct Struct_0201c014 {
    int unknown_0_;                     // 0x0
    int unknown_4_;                     // 0x4
    char unknown_8_[0xb4 - 8];            // 0x8..0xb3
    unsigned char unknown_b4_;               // 0xb4
    unsigned char unknown_b5_;               // 0xb5
    signed char unknown_b6_;                 // 0xb6
    signed char unknown_b7_;                 // 0xb7
    signed char unknown_b8_;                 // 0xb8
    char unknown_b9_;                     // 0xb9
    unsigned short unknown_ba_;              // 0xba
    signed char unknown_bc_;                 // 0xbc
};

// USA: func_0208f7ec
extern "C" ARM void func_0208f7ec(struct Struct_0201c014* arg0) {
    arg0->unknown_0_ = 0;
    arg0->unknown_4_ = 0;
    arg0->unknown_b4_ = 0;
    arg0->unknown_b5_ = 0;
    arg0->unknown_b6_ = 1;
    arg0->unknown_b7_ = -1;
    arg0->unknown_b8_ = -1;
    arg0->unknown_ba_ = 0;
    arg0->unknown_bc_ = -1;
}
