#include <globaldefs.h>

struct Struct_ov011_02184c30;
extern "C" int func_ov011_02184c30(Struct_ov011_02184c30*);

// USA: func_ov011_02185720
extern "C" ARM int func_ov011_02185720(Struct_ov011_02184c30* arg0) {
    int var0 = func_ov011_02184c30(arg0);
    int var1 = func_ov011_02184c30((Struct_ov011_02184c30*)((char*)arg0 + 8));
    if (var0 == 0) {
        unsigned int* var2 = (unsigned int*)0x4000000;
        *var2 = (*var2 & ~0x1f00) | (var1 << 8);
    } else if (var0 == 1) {
        unsigned int* var3 = (unsigned int*)0x4001000;
        *var3 = (*var3 & ~0x1f00) | (var1 << 8);
    }
    return 1;
}
