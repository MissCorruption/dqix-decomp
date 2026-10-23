#include <globaldefs.h>

struct Struct_02079e2c;
typedef int (*Type_02079e2c)(void*);
extern "C" void* func_02079e60(struct Struct_02079e2c* arg0, int arg1, Type_02079e2c arg2);

struct Struct_020797e8;
extern "C" int func_020797e8(struct Struct_020797e8* arg0);

// USA: func_02079e2c
extern "C" ARM void* func_02079e2c(char* arg0, int arg1) {
    void* var0 = func_02079e60((struct Struct_02079e2c*)arg0, arg1, (Type_02079e2c)func_020797e8);
    if (var0 != 0) return var0;
    return func_02079e60((struct Struct_02079e2c*)(arg0 + 0xc), arg1, (Type_02079e2c)func_020797e8);
}
