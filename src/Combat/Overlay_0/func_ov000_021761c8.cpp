#include <globaldefs.h>

struct Struct_ov000_021761c8 {
#if defined(jpn)
    char unknown1_0_[0xf54];
#else
    char unknown_0_[0xd1c];
#endif
    int unknown_d1c_[8];
};

// USA: func_ov000_021761c8
extern "C" ARM int func_ov000_021761c8(char* arg0, int arg1) {
    if (arg1 < 0 || arg1 >= 8) arg1 = 0;
    return ((struct Struct_ov000_021761c8*)(arg0 + 0x1000))->unknown_d1c_[arg1];
}
