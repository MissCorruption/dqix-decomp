#include <globaldefs.h>

struct Struct_0205bb84;
extern "C" int func_0205bb84(struct Struct_0205bb84* arg0);
extern "C" void func_0205bb04(void* arg0, int arg1);

struct Struct_0205bacc {
    int unknown_0_;
};

// USA: func_0205bacc
extern "C" ARM void func_0205bacc(struct Struct_0205bacc* arg0, int arg1) {
    if (arg1 < 0) return;
    arg0->unknown_0_ = arg1;
    if (func_0205bb84((struct Struct_0205bb84*)arg0) < arg1) return;
    func_0205bb04(arg0, arg1 - 1);
}
