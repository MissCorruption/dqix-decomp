#include <globaldefs.h>

struct Struct_0202ecfc {
    char unknown_0_[0x168];
    unsigned int unknown_168_;
};

// USA: func_0202ecfc
extern "C" ARM void func_0202ecfc(struct Struct_0202ecfc* arg0) {
    arg0->unknown_168_ &= ~0x1;
}
