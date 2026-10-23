#include <globaldefs.h>

extern "C" void* func_ov011_021849c8(void* arg0);
extern "C" void* func_ov023_021f6880(void* arg0, int arg1);
extern "C" short func_ov023_021f6f10(void* arg0);
extern "C" void* func_ov023_021fa598(void* arg0);

struct Struct_02072a68 { short unknown_0_; void* unknown_4_; };
struct Struct_02072a68_2 { struct Struct_02072a68* unknown_0_; short unknown_4_; };
extern "C" void* func_02072a68(struct Struct_02072a68_2* arg0, int arg1);

// USA: func_ov023_021f63ac
extern "C" ARM void* func_ov023_021f63ac(void* arg0, int arg1, int arg2) {
    void* var0 = func_ov011_021849c8(arg0);
    void* var1 = func_ov023_021f6880(var0, arg1);
    if (var1 == NULL) return NULL;
    if (func_ov023_021f6f10(var1) != 4) return NULL;
    struct Struct_02072a68_2* var2 = (struct Struct_02072a68_2*)func_ov023_021fa598(var1);
    return func_02072a68(var2, (short)arg2);
}
