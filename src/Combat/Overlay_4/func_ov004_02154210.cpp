#include <globaldefs.h>

extern "C" void* func_ov011_021849c8(void*);
extern "C" void* func_ov023_021f6880(void*, int);
extern "C" int func_ov023_021f6f10(void* arg0);
extern "C" void func_ov023_021fbdcc(void*, int);

// USA: func_ov004_02154210
extern "C" ARM int func_ov004_02154210(void* arg0) {
    void* var0 = func_ov023_021f6880(func_ov011_021849c8(arg0), 0x2e);
    if (!var0) return 0;
    if (func_ov023_021f6f10(var0) != 0x10) return 0;
    func_ov023_021fbdcc(var0, -1);
    return 0;
}
