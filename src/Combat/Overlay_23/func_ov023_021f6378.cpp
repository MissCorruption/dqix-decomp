#include <globaldefs.h>

extern "C" void* func_ov011_021849c8(void*);
extern "C" void* func_ov023_021f6880(void*, int);
extern "C" unsigned short func_ov023_021f6f10(void*);

// USA: func_ov023_021f6378
extern "C" ARM int func_ov023_021f6378(void* arg0, int arg1) {
    void* var0 = func_ov011_021849c8(arg0);
    char* var1 = (char*)func_ov023_021f6880(var0, arg1);
    if (!var1) return 0;
    int var2 = func_ov023_021f6f10(var1);
    int var3;
    if (var2 != 8) var3 = 0;
    else var3 = *(unsigned short*)(var1 + 0x38);
    return var3;
}
