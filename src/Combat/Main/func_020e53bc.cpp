#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_020e53bc_3;
extern "C" unsigned int func_020e544c(Struct_020e53bc_3* arg0);

struct Struct_020e53bc;
struct Struct_020e545c;
typedef void (*Type_020e53bc)(Struct_020e53bc*, Struct_020e545c*);
extern "C" int func_020e545c(Struct_020e53bc* arg0, Type_020e53bc arg1);

struct Struct_020e53bc_2 {
    unsigned int unknown_0_;
    void* unknown_4_;
    void* unknown_8_;
};

// USA: func_020e53bc
extern "C" ARM int func_020e53bc(struct Struct_020e53bc_2* arg0, struct Struct_020e53bc_2* arg1, unsigned char* arg2, Type_020e53bc arg3) {
    *arg2 = 0;
    if (arg1 == 0) return 0;
    memcpy(arg0, arg1, 4);
    arg0->unknown_4_ = (char*)arg1 + 4;
    arg0->unknown_8_ = (char*)arg1 + (func_020e544c((Struct_020e53bc_3*)arg0) + 4);
    if ((unsigned int)arg0->unknown_0_ >> 31) {
        *arg2 = 1;
        return 1;
    }
    func_020e545c((Struct_020e53bc*)arg0, arg3);
    arg0->unknown_0_ = (arg0->unknown_0_ & ~0x80000000) | 0x80000000;
    arg1->unknown_0_ = (arg1->unknown_0_ & ~0x80000000) | 0x80000000;
    return 1;
}
