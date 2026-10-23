#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_ov011_02184c30;
extern "C" int func_ov011_02184c30(struct Struct_ov011_02184c30* arg0);
extern "C" void* func_ov017_021b2164(void);
extern "C" void* func_ov011_021845f8(void* arg0, int arg1);
extern "C" void func_0207df90(char* arg0);
extern "C" void func_0207dfac(char* arg0);

// USA: func_ov011_02184fb0
extern "C" ARM int func_ov011_02184fb0(struct Struct_ov011_02184c30* arg0) {
    int var0 = func_ov011_02184c30(arg0);
    func_ov011_02184c30((struct Struct_ov011_02184c30*)((char*)arg0 + 8));
    func_ov011_02184c30((struct Struct_ov011_02184c30*)((char*)arg0 + 0x10));
    void* var1 = func_ov017_021b2164();
    void* var2 = func_ov011_021845f8(var1, var0);
    if (var2 == 0) return 0;
    SafeAllocator* var3 = (SafeAllocator*)((char*)var2 + 4);
    void* var4 = var3->Allocate(0x7c);
    if (var4 == 0) return 0;
    func_0207df90((char*)var4 + 4);
    func_0207dfac((char*)var4 + 4);
    return 1;
}
