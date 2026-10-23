#include <globaldefs.h>

struct Struct_020dae98 { char unknown_0_; unsigned char unknown_1_; };

extern "C" void func_020dae08(struct Struct_020dae98* arg0);

// USA: func_020dae98
extern "C" ARM void func_020dae98(struct Struct_020dae98* arg0) {
    func_020dae08(arg0);
    arg0->unknown_1_ = 1;
}
