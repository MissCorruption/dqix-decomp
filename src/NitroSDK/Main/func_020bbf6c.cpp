#include <globaldefs.h>

struct Struct_0210f840 { void* unknown_0_; unsigned char unknown_4_[0x20]; };
extern struct Struct_0210f840 data_0210f840[];

// USA: func_020bbf6c
extern "C" ARM void func_020bbf6c(int arg0, void* arg1) {
    data_0210f840[arg0].unknown_0_ = arg1;
}
