#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

struct Struct_ov003_0217f230 { char unknown_0_[0xc]; void* unknown_c_; };

extern "C" void func_ov003_0216d5f0(void*);

// USA: func_ov003_0217f230
extern "C" ARM void func_ov003_0217f230(struct Struct_ov003_0217f230* arg0) {
    if (arg0->unknown_c_) {
        func_ov003_0216d5f0(arg0->unknown_c_);
    }
}
