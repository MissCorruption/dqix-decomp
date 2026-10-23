#include <globaldefs.h>

struct Struct_02028bac {
#if defined(jpn)
    unsigned char unknown1_0_[0x314];
#else
    unsigned char unknown_0_[0x318];
#endif
};

// USA: func_02028bac
extern "C" ARM struct Struct_02028bac* func_02028bac(struct Struct_02028bac* arg0, int arg1) {
    if (arg1 < 0 || arg1 >= 4) {
        return NULL;
    }
    return &arg0[arg1];
}
