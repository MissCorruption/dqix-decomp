#include <globaldefs.h>

struct Struct_ov000_021761ec {
#if defined(jpn)
    char unknown1_0_[0xf74];
#else
    char unknown_0_[0xd3c];
#endif
    int unknown_d3c_[8];
};

// USA: func_ov000_021761ec
extern "C" ARM int func_ov000_021761ec(char* arg0, int arg1) {
    if (arg1 < 0 || arg1 >= 8) arg1 = 0;
    return ((struct Struct_ov000_021761ec*)(arg0 + 0x1000))->unknown_d3c_[arg1];
}
