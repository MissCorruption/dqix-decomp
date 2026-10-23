#include <globaldefs.h>

struct Struct_02072a68_2;

extern "C" void* func_02072a68(struct Struct_02072a68_2* arg0, int arg1);

struct Struct_02081214 {
    struct Struct_02072a68_2* unknown_0_;
};

// USA: func_02081214
extern "C" ARM void* func_02081214(struct Struct_02081214* arg0, int arg1) {
    return func_02072a68(arg0->unknown_0_, arg1);
}
