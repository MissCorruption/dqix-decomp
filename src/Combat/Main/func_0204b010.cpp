#include <globaldefs.h>
#include "std_library_functions.h"

extern unsigned int data_020e7b98[][4];

struct Struct_0204b010 {
    char unknown_0_[0x14];
    void* unknown_14_;
    unsigned int unknown_18_;
    char unknown_1c_[3];
    unsigned char unknown_1f_;
};

// USA: func_0204b010
extern "C" ARM void func_0204b010(Struct_0204b010* arg0, void* arg1) {
    if (arg1 == NULL) arg1 = arg0->unknown_14_;
    if (arg1 == NULL) return;
    memset(arg1, 0, data_020e7b98[arg0->unknown_1f_][arg0->unknown_18_]);
}
