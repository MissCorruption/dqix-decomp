#include <globaldefs.h>
#include "Resource/MessageSystem.h"

struct Struct_02108760;
extern "C" void func_0205eaa0(struct Struct_02108760* arg0, int arg1, int arg2);

extern int data_02108760;
extern int data_02107820;

// USA: func_020455f8
ARM void Struct_02021b84::func_020455f8() {
    if (unknown_19b3_ == 1 || unknown_19b2_ == 0) {
        return;
    }
    switch (unknown_99c_) {
        case 0:
            func_0205eaa0((struct Struct_02108760*)&data_02108760, 0xa, (int)&data_02107820);
            break;
        case 1:
            func_0205eaa0((struct Struct_02108760*)&data_02108760, 0xc, (int)&data_02107820);
            break;
        case 2:
            func_0205eaa0((struct Struct_02108760*)&data_02108760, 0xb, (int)&data_02107820);
            break;
    }
    unknown_19b3_ = 1;
}
