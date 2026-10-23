#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_020df850;
struct Struct_020dfa68;
typedef int (*Type_020df850)(struct Struct_020df850 *, struct Struct_020dfa68 *);
extern "C" int func_020dfa68(struct Struct_020df850 *, Type_020df850);

struct Struct_020df850_4;
extern "C" int func_020dfbc0(struct Struct_020df850_4 *);

struct Struct_020df850_3 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned int unknown_4_0_ : 15;
    unsigned int unknown_5_7_ : 1;
    unsigned int unknown_6_0_ : 16;
    void *unknown_8_;
    unsigned int unknown_c_;
};

// USA: func_020dfabc
extern "C" ARM int func_020dfabc(struct Struct_020df850_3 *arg0, struct Struct_020df850_3 *arg1, char *arg2, Type_020df850 arg3) {
    *arg2 = 0;
    if (arg1 == NULL) return 0;
    memcpy(arg0, arg1, 8);
    arg0->unknown_8_ = (void *)((char *)arg1 + 8);
    arg0->unknown_c_ = (unsigned int)((func_020dfbc0((struct Struct_020df850_4 *)arg0) + 8) + (char *)arg1);
    if (arg0->unknown_5_7_) {
        *arg2 = 1;
        return 1;
    }
    func_020dfa68((struct Struct_020df850 *)arg0, arg3);
    arg0->unknown_5_7_ = 1;
    arg1->unknown_5_7_ = 1;
    return 1;
}
