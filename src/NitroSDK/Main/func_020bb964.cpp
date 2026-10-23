#include <globaldefs.h>

struct Struct_020bb964 {
    int unknown_0_;
    unsigned int unknown_4_;
};

// USA: func_020bb964
extern "C" ARM unsigned short func_020bb964(Struct_020bb964* arg0, unsigned int arg1) {
    return (unsigned short)((arg1 + 1) % arg0->unknown_4_);
}
