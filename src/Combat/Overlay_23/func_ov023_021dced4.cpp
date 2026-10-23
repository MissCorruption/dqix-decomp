#include <globaldefs.h>

struct Struct_ov023_021dced4 {
#if defined(jpn)
    char unknown1_0_[0x715];
#else
    char unknown_0_[0x799];
#endif
    unsigned char unknown_799_;
};

// USA: func_ov023_021dced4
extern "C" ARM void func_ov023_021dced4(void* arg0, unsigned char arg1) {
    ((Struct_ov023_021dced4*)arg0)->unknown_799_ = arg1;
}
