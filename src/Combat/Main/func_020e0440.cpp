#include <globaldefs.h>
#include "Resource/CharacterCreationUI.h"
extern "C" int func_020dfbd4(short*);

struct Struct_020e0028 {
    int unknown_0_;
    int unknown_4_;
};

typedef int (*Type_020e0028)(struct Struct_020e0028 *);

extern "C" struct Struct_020e0028 *func_020e0310(struct Struct_0201099c_3 *arg0, int arg1, Type_020e0028 arg2);

// USA: func_020e0440
extern "C" ARM int func_020e0440(struct Struct_0201099c_3 *arg0, int arg1) {
    struct Struct_020e0028 *var0;
    if (arg0 == NULL) return 0;
    var0 = func_020e0310(arg0, arg1, (Type_020e0028)func_020dfbd4);
    if (var0 != NULL) return var0->unknown_4_;
    return 0;
}
