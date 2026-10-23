#include <globaldefs.h>

struct Struct_020709c8;
extern "C" int func_020709c8(struct Struct_020709c8* arg0);

struct Struct_02070b6c_4;
struct Struct_02070b6c_3;
typedef int (*Type_02070e60)(struct Struct_02070b6c_4*);
extern "C" struct Struct_02070b6c_4* func_02070e60(struct Struct_02070b6c_3* arg0, int arg1, Type_02070e60 arg2);

// USA: func_02070fd0
extern "C" ARM struct Struct_02070b6c_4* func_02070fd0(struct Struct_02070b6c_3* arg0, int arg1) {
    return func_02070e60(arg0, arg1, (Type_02070e60)func_020709c8);
}
