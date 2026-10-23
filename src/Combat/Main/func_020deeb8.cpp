#include <globaldefs.h>
extern "C" void func_020de6c8(void*, void*, void*);
#include "std_library_functions.h"


struct Struct_020deeb8 {
    unsigned char unknown_0_[0xc];
    int unknown_c_;
    int unknown_10_;
};

// USA: func_020deeb8
extern "C" ARM int func_020deeb8(int arg0, Struct_020deeb8* arg1, int arg2, int arg3, int arg4) {
    func_020de6c8((void*)(arg0), (void*)(arg3), (void*)(arg4));
    memset(arg1, 0, 0xc);
    arg1->unknown_c_ = arg2;
    arg1->unknown_10_ = 0;
    return 1;
}
