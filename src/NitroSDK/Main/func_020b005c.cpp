#include <globaldefs.h>

struct Struct_020b005c { unsigned int unknown_0_[4]; };
struct Struct_0205a984_2 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    struct Struct_020b005c *unknown_4_;
};

// USA: func_020b005c
extern "C" ARM struct Struct_020b005c *func_020b005c(struct Struct_0205a984_2 *arg0, unsigned int arg1) {
    if (arg0->unknown_0_ > arg1) {
        return &arg0->unknown_4_[arg1];
    }
    return NULL;
}
