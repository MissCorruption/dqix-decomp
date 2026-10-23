#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_0209ce14 {
    unsigned char unknown_0_[0x98];
    int unknown_98_;
    unsigned char unknown_9c_[0x400];
};

// USA: func_0209e4a0
extern "C" ARM void func_0209e4a0(struct Struct_0209ce14* arg0) {
    arg0->unknown_98_ = 0;
    memset(arg0->unknown_9c_, 0, 0x400);
}
