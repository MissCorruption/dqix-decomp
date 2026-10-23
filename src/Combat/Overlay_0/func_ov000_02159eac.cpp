#include <globaldefs.h>

struct Struct_ov000_02159eac {
    unsigned long long unknown_0_;
};

// USA: func_ov000_02159eac
extern "C" ARM void func_ov000_02159eac(void* arg0, struct Struct_ov000_02159eac* arg1, unsigned int arg2) {
    if (arg2 > 31) {
        arg1->unknown_0_ |= ((unsigned long long)(1 << (arg2 - 31)) << 32) & 0xFFFFFFFF00000000ULL;
    } else {
        arg1->unknown_0_ |= (unsigned long long)(1 << arg2) & 0xFFFFFFFFULL;
    }
}
