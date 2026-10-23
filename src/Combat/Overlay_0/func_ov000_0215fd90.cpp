#include <globaldefs.h>

struct Struct_ov000_0215fd90 {
    unsigned long long unknown_0_;
};

// USA: func_ov000_0215fd90
extern "C" ARM int func_ov000_0215fd90(struct Struct_ov000_0215fd90* arg0, unsigned int arg1) {
    unsigned long long var0;
    if (arg1 > 31) {
        var0 = arg0->unknown_0_ & (((unsigned long long)(1 << (arg1 - 31)) << 32) & 0xFFFFFFFF00000000ULL);
    } else {
        var0 = arg0->unknown_0_ & ((long long)(1 << arg1) & 0xFFFFFFFFULL);
    }
    return var0 != 0;
}
