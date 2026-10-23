#include <globaldefs.h>

extern "C" void* func_ov011_021849c8(void*);
extern "C" void* func_ov023_021f6880(void*, int);
#if defined(jpn)
#define func_ov024_021f6f10 func_ov023_021f6f10
extern "C" int func_ov023_021f6f10(void* arg0);
#else
extern "C" int func_ov024_021f6f10(void* arg0);
#endif
extern "C" void func_ov023_021fbdcc(void*, int);

// USA: func_ov004_021556dc
extern "C" ARM int func_ov004_021556dc(void* arg0) {
    void* var0 = func_ov023_021f6880(func_ov011_021849c8(arg0), 0x2e);
    if (!var0) return 0;
    if (func_ov024_021f6f10(var0) != 0x10) return 0;
    func_ov023_021fbdcc(var0, -1);
    return 0;
}
