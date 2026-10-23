#include <globaldefs.h>

struct Struct_ov011_02184c30;
extern "C" int func_ov011_02184c30(struct Struct_ov011_02184c30* arg0);

extern "C" void* func_ov017_021b2164(void);
extern "C" void* func_ov011_021849c8(void*);
extern "C" void* func_ov023_021f6880(void*, int);
extern "C" void func_ov011_02184a0c(void*, unsigned short);

// USA: func_ov011_02185948
extern "C" ARM int func_ov011_02185948(struct Struct_ov011_02184c30* arg0) {
    int var0 = func_ov011_02184c30(arg0);
    void* var1 = func_ov017_021b2164();
    void* var2 = func_ov011_021849c8(var1);
    void* var3 = func_ov023_021f6880(var2, var0);
    if (!var3) return 0;
    func_ov011_02184a0c(var1, (unsigned short)var0);
    return 1;
}
