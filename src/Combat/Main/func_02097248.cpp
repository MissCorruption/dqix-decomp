#include <globaldefs.h>

extern "C" int func_02097280(void*, int, int);

struct Struct_02097248 { int unknown_0_; int unknown_4_; int unknown_8_; };

// USA: func_02097248
extern "C" ARM int func_02097248(void* arg0, struct Struct_02097248* arg1) {
    arg1->unknown_4_ = func_02097280(arg0, arg1->unknown_4_, 0);
    arg1->unknown_8_ = func_02097280(arg0, arg1->unknown_8_, 0);
    return 1;
}
