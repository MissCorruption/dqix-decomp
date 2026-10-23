#include <globaldefs.h>

struct Struct_02097054_6 { char unknown_0_[0x30]; };
struct Struct_02097054_5 { unsigned short unknown_0_; char unknown_2_[6]; struct Struct_02097054_6* unknown_8_; };
typedef int (*Type_020971a8)(struct Struct_02097054_6*);

// USA: func_020971a8
extern "C" ARM struct Struct_02097054_6* func_020971a8(struct Struct_02097054_5* arg0, int arg1, Type_020971a8 arg2) {
    struct Struct_02097054_6* var0 = arg0->unknown_8_;
    int var1, var2, var3, var4, var5;
    struct Struct_02097054_6* var6;
    if (var0 == NULL || arg2 == NULL) return NULL;
    var5 = arg0->unknown_0_;
    if (var5 == 0) return NULL;
    var2 = var5 - 1;
    var1 = 0;
    while (var1 <= var2) {
        var3 = var1 + ((var2 - var1 + 1) >> 1);
        var6 = var0 + var3;
        var4 = arg2(var6);
        if (var4 == arg1) return var6;
        if (var4 > arg1) var2 = var3 - 1;
        else var1 = var3 + 1;
    }
    return NULL;
}
