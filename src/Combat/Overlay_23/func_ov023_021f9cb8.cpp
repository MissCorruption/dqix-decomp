#include <globaldefs.h>

extern "C" int func_ov023_021f6f10(void*);
extern "C" void* func_ov011_021849c8(void*);
extern "C" void* func_ov023_021f6880(void*, int);

// USA: func_ov023_021f9cb8
extern "C" ARM void* func_ov023_021f9cb8(void* arg0, void* arg1, void* arg2) {
    void* var0;
    void* var1;
    unsigned short var2;
    if (!arg2) {
        return 0;
    }
    if (func_ov023_021f6f10(arg2) != 8) {
        return 0;
    }
    var2 = *(unsigned short*)((char*)arg2 + 0x34);
    var0 = func_ov011_021849c8(arg1);
    var1 = func_ov023_021f6880(var0, var2);
    if (!var1) {
        return 0;
    }
    if (func_ov023_021f6f10(var1) != 6) {
        return 0;
    }
    return var1;
}
