#include <globaldefs.h>

struct Struct_02026f08 {
    char unknown_0_[0x558];
    unsigned char unknown_558_;
};

// USA: func_02026f08
extern "C" ARM void func_02026f08(unsigned char* arg0, int arg1, int arg2) {
    ((struct Struct_02026f08*)(arg0 + arg1))->unknown_558_ = arg2 != 0;
}
