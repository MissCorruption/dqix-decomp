#include <globaldefs.h>

struct Struct_02079ee0;
struct Struct_02079ee0_2;
struct Struct_020797f8;
typedef int (*Type_02079ee0)(struct Struct_02079ee0*);

extern "C" struct Struct_02079ee0* func_02079f20(struct Struct_02079ee0_2* arg0, int arg1, Type_02079ee0 arg2);
extern "C" int func_020797f8(struct Struct_020797f8* arg0);

// USA: func_02079ee0
extern "C" ARM struct Struct_02079ee0* func_02079ee0(void* arg0, int arg1) {
    struct Struct_02079ee0* var0;
    if (arg1 == 0) return NULL;
    var0 = func_02079f20((struct Struct_02079ee0_2*)((char*)arg0 + 0x18), arg1, (Type_02079ee0)func_020797f8);
    if (var0 != NULL) return var0;
    return func_02079f20((struct Struct_02079ee0_2*)((char*)arg0 + 0x24), arg1, (Type_02079ee0)func_020797f8);
}
