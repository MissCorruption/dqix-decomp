#include <globaldefs.h>

struct Struct_ov011_02184c30;
extern "C" int func_ov011_02184c30(struct Struct_ov011_02184c30* arg0);
struct Struct_ov011_02184c4c;
extern "C" float func_ov011_02184c4c(struct Struct_ov011_02184c4c* arg0);

extern "C" void* func_ov017_021b2164(void);
extern "C" void* func_ov011_021849c8(void*);
extern "C" void* func_ov023_021f6880(void*, int);
extern "C" void func_ov023_021fa078(void* arg0, void* arg1, unsigned short arg2, int* arg3, int arg4, int arg5);

// USA: func_ov011_02186018
extern "C" ARM int func_ov011_02186018(struct Struct_ov011_02184c30* arg0) {
    int var0 = func_ov011_02184c30(arg0);
    int var1[3];
    var1[0] = (int)(4096.0f * func_ov011_02184c4c((struct Struct_ov011_02184c4c*)((char*)arg0 + 8)));
    var1[1] = (int)(4096.0f * func_ov011_02184c4c((struct Struct_ov011_02184c4c*)((char*)arg0 + 0x10)));
    var1[2] = (int)(4096.0f * func_ov011_02184c4c((struct Struct_ov011_02184c4c*)((char*)arg0 + 0x18)));
    int var2 = (int)(4096.0f * func_ov011_02184c4c((struct Struct_ov011_02184c4c*)((char*)arg0 + 0x20)));
    int var3 = (int)(4096.0f * func_ov011_02184c4c((struct Struct_ov011_02184c4c*)((char*)arg0 + 0x28)));
    void* var4 = func_ov017_021b2164();
    void* var5 = func_ov011_021849c8(var4);
    if (!func_ov023_021f6880(var5, var0)) return 0;
    void* var6 = func_ov023_021f6880(var5, 0xffff);
    if (!var6) return 0;
    func_ov023_021fa078(var6, var4, var0, var1, var2, var3);
    return 1;
}
