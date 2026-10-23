#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_020de714_3;
extern "C" int func_020de7a4(Struct_020de714_3* arg0);

struct Struct_020de714;
struct Struct_020de7d0;
typedef void (*Type_020de714)(Struct_020de714*, Struct_020de7d0*);
extern "C" int func_020de7d0(Struct_020de714* arg0, Type_020de714 arg1);

struct Struct_020de714_2 {
    char unknown_0_[8];
    unsigned int unknown_8_;
    void* unknown_c_;
    void* unknown_10_;
};

// USA: func_020de714
extern "C" ARM int func_020de714(struct Struct_020de714_2* arg0, struct Struct_020de714_2* arg1, unsigned char* arg2, Type_020de714 arg3) {
    *arg2 = 0;
    if (arg1 == 0) return 0;
    memcpy(arg0, arg1, 0xc);
    arg0->unknown_c_ = (char*)arg1 + 0xc;
    arg0->unknown_10_ = (char*)arg1 + (func_020de7a4((Struct_020de714_3*)arg0) + 0xc);
    if ((unsigned int)arg0->unknown_8_ >> 31) {
        *arg2 = 1;
        return 1;
    }
    func_020de7d0((Struct_020de714*)arg0, arg3);
    arg0->unknown_8_ = (arg0->unknown_8_ & ~0x80000000) | 0x80000000;
    arg1->unknown_8_ = (arg1->unknown_8_ & ~0x80000000) | 0x80000000;
    return 1;
}
