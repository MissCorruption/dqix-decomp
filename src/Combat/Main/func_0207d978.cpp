#include <globaldefs.h>

struct Struct_0207d7f4 { unsigned short unknown_0_; unsigned short unknown_2_; unsigned int unknown_4_; unsigned int unknown_8_; };
extern "C" struct Struct_0207d7f4* func_0207d9bc(struct Struct_0207d7f4* arg0, unsigned short arg1);

// USA: func_0207d978
extern "C" ARM int func_0207d978(struct Struct_0207d7f4* arg0, unsigned short arg1) {
    struct Struct_0207d7f4* var0 = func_0207d9bc(arg0, arg1);
    int var1;
    if (var0 == NULL) return 0;
    for (var1 = 0; var1 < 4; var1++) {
        signed char* var2 = (signed char*)var0 + var1;
        if (var2[8] < 0) return 0;
    }
    return 1;
}
