#include <globaldefs.h>

struct Struct_ov004_021536e0 { int unknown_0_, unknown_4_, unknown_8_; };

class Struct_ov004_021536e0_2 {
public:
    virtual void inline_ov004_021536e0(); virtual void inline_ov004_021536e0_2(); virtual void inline_ov004_021536e0_3(); virtual void inline_ov004_021536e0_4();
    virtual void inline_ov004_021536e0_5(); virtual void inline_ov004_021536e0_6(); virtual void inline_ov004_021536e0_7();
    virtual void inline_ov004_021536e0_8(const Struct_ov004_021536e0& arg0);
    virtual Struct_ov004_021536e0 inline_ov004_021536e0_9();
};

extern "C" void* func_ov011_021849c8(void* arg0);
extern "C" Struct_ov004_021536e0_2* func_ov023_021f6880(void* arg0, int arg1);
extern "C" int func_ov023_021f6378(void* arg0, int arg1);
extern "C" void* func_ov023_021f63ac(void* arg0, int arg1, int arg2);

// USA: func_ov004_021536e0
extern "C" ARM void func_ov004_021536e0(void* arg0, int arg1, int arg2) {
    Struct_ov004_021536e0_2* var0 = func_ov023_021f6880(func_ov011_021849c8(arg0), arg1);
    if (!var0) return;
    char* var1 = (char*)func_ov023_021f63ac(arg0, 4, func_ov023_021f6378(arg0, arg2));
    if (var1 != 0 && *var1 != 0) return;
    Struct_ov004_021536e0_2* var2 = func_ov023_021f6880(func_ov011_021849c8(arg0), arg2);
    if (!var2) return;
    const Struct_ov004_021536e0& var3 = var2->inline_ov004_021536e0_9();
    var0->inline_ov004_021536e0_8(var3);
}
