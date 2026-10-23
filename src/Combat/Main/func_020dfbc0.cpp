#include <globaldefs.h>

struct Struct_020df850_4 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
};

// USA: func_020dfbc0
extern "C" ARM int func_020dfbc0(struct Struct_020df850_4* arg0) {
    return (int)((char*)(arg0->unknown_0_ << 3) + (arg0->unknown_2_ << 3));
}
