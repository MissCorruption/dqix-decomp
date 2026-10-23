#include <globaldefs.h>

struct Struct_020b0094 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned int *unknown_4_;
};

extern "C" void func_020b02d0(struct Struct_020b0094 *arg0);

// USA: func_020b0094
extern "C" ARM void func_020b0094(char *arg0) {
    func_020b02d0((struct Struct_020b0094 *)(arg0 + 8));
}
