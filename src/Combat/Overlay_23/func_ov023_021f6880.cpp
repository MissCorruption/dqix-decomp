#include <globaldefs.h>

struct Struct_ov004_02153978;
extern "C" unsigned int func_ov023_021f6f08(struct Struct_ov004_02153978*);

// USA: func_ov023_021f6880
extern "C" ARM void* func_ov023_021f6880(void** arg0, int arg1) {
    void* var0 = *arg0;
    while (var0 != 0) {
        if ((int)func_ov023_021f6f08((struct Struct_ov004_02153978*)var0) == arg1) return var0;
        var0 = *(void**)((char*)var0 + 0x18);
    }
    return 0;
}
