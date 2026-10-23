#include <globaldefs.h>
extern "C" int func_020de56c(void*);

struct Struct_0201099c_9;
struct Struct_020de5b0_2;
typedef int (*Type_020de5fc)(struct Struct_0201099c_9*);
extern "C" struct Struct_0201099c_9* func_020de650(struct Struct_020de5b0_2* arg0, int arg1, Type_020de5fc arg2);
extern short data_020ee794[];

// USA: func_020de5fc
extern "C" ARM int func_020de5fc(struct Struct_020de5b0_2* arg0) {
    short* var0 = data_020ee794;
    int var1;
    for (var1 = 0; var1 < 2; var1++, var0++) {
        struct Struct_0201099c_9* var2 = func_020de650(arg0, *var0, (Type_020de5fc)func_020de56c);
        if (var2 != NULL) {
            *(short*)((char*)var2 + 0x16) = 0xfc;
        }
    }
    return 1;
}
