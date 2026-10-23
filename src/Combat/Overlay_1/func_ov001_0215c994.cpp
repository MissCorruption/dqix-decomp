#include <globaldefs.h>
#include "Combat/Overlay_1/EventArgs.h"

extern "C" int func_ov017_021d60f4(void* arg0);
extern "C" float func_ov017_021d6110(void* arg0);
extern "C" const char* func_ov017_021d612c(void* arg0);
extern "C" int func_ov001_0215ab20(int arg0);
extern "C" void func_ov001_0215a364(void* arg0, Struct_ov001_02158efc arg1, int arg2, int arg3, const char* arg4);

// USA: func_ov001_0215c994
extern "C" ARM int func_ov001_0215c994(void* arg0, int arg1) {
    // `label` is DECLARED first on purpose even though it is DEFINED last. Declaration order
    // participates in callee-saved colouring: with `id` declared first, `id` took r4 and the `mode`
    // param took r5 — the exact inversion of the target. Hoisting this declaration above `id` flips
    // that pair (mode->r4, id->r5) and byte-matches. Nothing else about the code changes.
    const char* var0;
    int var1 = func_ov017_021d60f4(arg0);
    Struct_ov001_02158efc var2;
    // 4096.0f * x -> _fmul(0x45800000, x) then _ffix : the float->fx32 idiom. The constant must be
    // the LEFT operand or the argument registers swap.
    var2.unknown_0_ = (int)(4096.0f * func_ov017_021d6110((char*)arg0 + 8));
    var2.unknown_8_ = (int)(4096.0f * func_ov017_021d6110((char*)arg0 + 0x10));
    var2.unknown_4_ = 0xa000;
    int var3 = func_ov017_021d60f4((char*)arg0 + 0x18);
    var0 = 0;
    if (arg1 >= 5) {
        var0 = func_ov017_021d612c((char*)arg0 + 0x20);
    }
    void* var4 = (void*)func_ov001_0215ab20(var1);
    if (var4 == 0) {
        return 0;
    }
    func_ov001_0215a364(var4, var2, var3, 1, var0);
    return 1;
}
