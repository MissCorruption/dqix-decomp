#include <globaldefs.h>
extern "C" void func_020bcc7c(struct Struct_020bcbc4*);


struct Struct_020bc9d0 { char unknown_0_[0x24]; signed int unknown_24_0_ : 1; };

// USA: func_020bcbc4
extern "C" ARM void func_020bcbc4(struct Struct_020bc9d0* arg0) {
    if (arg0->unknown_24_0_) {
        func_020bcc7c((struct Struct_020bcbc4*)(arg0));
    }
}
