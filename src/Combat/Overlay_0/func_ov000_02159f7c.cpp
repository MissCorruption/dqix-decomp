#include <globaldefs.h>

extern "C" int func_ov000_0215fd90(void* arg0, int arg1);

struct Struct_ov000_02159f7c {
    unsigned long long unknown_0_;
};

#define TEST_BIT_CONST(bits, n) (((bits)->unknown_0_ & (1ULL << (n))) != 0)

// USA: func_ov000_02159f7c
extern "C" ARM int func_ov000_02159f7c(void* arg0, struct Struct_ov000_02159f7c* arg1) {
    if (TEST_BIT_CONST(arg1, 5)) goto ret1;
    if (TEST_BIT_CONST(arg1, 6)) goto ret1;
    if (TEST_BIT_CONST(arg1, 9)) goto ret1;
    if (TEST_BIT_CONST(arg1, 10)) goto ret1;
    if (TEST_BIT_CONST(arg1, 12)) goto ret1;
    if (func_ov000_0215fd90(arg1, 0x26) == 0) goto ret0;
ret1:
    return 1;
ret0:
    return 0;
}
