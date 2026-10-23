#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_ov011_02184c30;
extern "C" int func_ov011_02184c30(struct Struct_ov011_02184c30* arg0);

extern "C" void* func_ov017_021b2164(void);
extern "C" void* func_ov011_021845f8(void* arg0, int arg1);
extern "C" void* func_ov011_021849c8(void* arg0);
extern "C" void func_ov023_021f6844(void* arg0, int arg1);

// USA: func_ov011_02186c28
extern "C" ARM int func_ov011_02186c28(struct Struct_ov011_02184c30* arg0) {
    int var0 = func_ov011_02184c30(arg0);
    void* var1 = func_ov017_021b2164();
    void* var2 = func_ov011_021845f8(var1, var0);
    if (var2 == 0) return 0;
    func_ov023_021f6844(func_ov011_021849c8(var1), var0);
    ((SafeAllocator*)((char*)var2 + 4))->Reset();
    return 1;
}
