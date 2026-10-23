#include <globaldefs.h>

struct Struct_02011590 {
#if defined(jpn)
    char unknown1_0_[0x6176];
#else
    char unknown_0_[0x63D6];
#endif
    unsigned char unknown_63d6_;
};

// USA: func_02011590
extern "C" ARM int func_02011590(struct Struct_02011590* arg0) {
    return arg0->unknown_63d6_ != 0;
}
