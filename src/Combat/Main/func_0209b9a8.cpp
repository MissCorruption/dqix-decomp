#include <globaldefs.h>

struct Struct_0209ae10 { char unknown_0_[0x34]; unsigned int unknown_34_[6]; };

// USA: func_0209b9a8
extern "C" ARM void func_0209b9a8(struct Struct_0209ae10 *arg0, int arg1, int arg2, unsigned int *arg3) {
    arg0[arg1].unknown_34_[arg2] = *arg3;
}
