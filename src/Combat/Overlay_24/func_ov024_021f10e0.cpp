#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" int func_ov000_0215e9fc(int arg0, short* arg1, int arg2, int arg3);
struct Struct_ov024_021ed9dc { void* unknown_0_; };
extern "C" int func_ov024_021ed9dc(struct Struct_ov024_021ed9dc* arg0, int arg1);

struct Struct_ov024_021fef0c { short unknown_0_[8]; };
extern struct Struct_ov024_021fef0c data_ov024_021fef0c;

// USA: func_ov024_021f10e0
extern "C" ARM int func_ov024_021f10e0(struct Struct_ov024_021ed9dc* arg0, int arg1, int arg2, int* arg3, void* arg4) {
    struct Struct_ov024_021fef0c var0 = data_ov024_021fef0c;
    int var1 = func_ov000_0215e9fc((int)arg0->unknown_0_, var0.unknown_0_, 4, 1);
    if (var1 <= 0) return 0;

    int var2 = 0;
    int var3;
    for (var3 = 0; var3 < var1; var3++) {
        if (func_ov024_021ed9dc(arg0, var0.unknown_0_[var3])) {
            var2 = 1;
            break;
        }
    }
    if (!var2) return 0;

    *arg3 = var1;
    memcpy(arg4, var0.unknown_0_, 0x10);
    return 1;
}
