#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

struct Struct_ov003_0217ef0c { char unknown_0_; unsigned char unknown_1_; };

extern "C" void func_ov003_0217e67c(void*);

// USA: func_ov003_0217ef0c
extern "C" ARM void func_ov003_0217ef0c(struct Struct_ov003_0217ef0c* arg0) {
    func_ov003_0217e67c(arg0);
    arg0->unknown_1_ = 1;
}
