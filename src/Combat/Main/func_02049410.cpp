#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_02049410 {
    char unknown_0_[0x13c];
    char* unknown_13c_;
};

// USA: func_02049410
extern "C" ARM void func_02049410(struct Struct_02049410* arg0, void* arg1, int arg2) {
    if (arg0->unknown_13c_ == NULL) return;
    if ((unsigned int)arg2 >= 0x10) return;
    memcpy(arg0->unknown_13c_ + 0x24, arg1, arg2);
    arg0->unknown_13c_[0x34] = (char)arg2;
}
