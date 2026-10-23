#include <globaldefs.h>

struct Struct_ov003_0217f260 { char unknown_0_; unsigned char unknown_1_; };

extern "C" void func_ov003_0217f118(void*);

// USA: func_ov003_0217f260
extern "C" ARM void func_ov003_0217f260(struct Struct_ov003_0217f260* arg0) {
    func_ov003_0217f118(arg0);
    arg0->unknown_1_ = 1;
}
