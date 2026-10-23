#include <globaldefs.h>
#include "Util/Random.h"

extern "C" int func_ov000_0215eb1c(struct Random* arg0, short* arg1, int arg2, int arg3);
extern "C" int func_ov024_021edcc8(void* arg0, int arg1);
extern "C" int func_ov024_021ed890(struct Random** arg0, int* arg1, short* arg2);

struct Struct_ov024_021f2f78 { int unknown_0_; };
struct Struct_ov024_021fed5c { short unknown_0_[8]; };
extern struct Struct_ov024_021fed5c data_ov024_021fed5c;

// USA: func_ov024_021f2f78
extern "C" ARM int func_ov024_021f2f78(struct Struct_ov024_021f2f78* arg0, int arg1, int arg2, int* arg3, short* arg4) {
    struct Struct_ov024_021fed5c var0 = data_ov024_021fed5c;
    int var1 = func_ov000_0215eb1c((struct Random*)arg0->unknown_0_, var0.unknown_0_, 8, 1);
    if (var1 <= 0) return 0;
    *arg3 = 0;
    for (int var2 = 0; var2 < var1; var2++) {
        if (!func_ov024_021edcc8(arg0, var0.unknown_0_[var2])) continue;
        int var3 = *arg3;
        *arg3 = var3 + 1;
        arg4[var3] = var0.unknown_0_[var2];
    }
    if (*arg3 <= 0) return 0;
    func_ov024_021ed890((struct Random**)arg0, arg3, arg4);
    return 1;
}
