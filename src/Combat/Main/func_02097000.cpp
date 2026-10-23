#include <globaldefs.h>

struct Struct_02097000 { char unknown_0_[0x30]; };
struct Struct_02097000_2 { unsigned short unknown_0_; char unknown_2_[6]; struct Struct_02097000* unknown_8_; };
typedef void (*Type_02097000)(struct Struct_02097000_2*, struct Struct_02097000*);

// USA: func_02097000
extern "C" ARM int func_02097000(struct Struct_02097000_2* arg0, Type_02097000 arg1) {
    int var0;
    struct Struct_02097000* var1;
    int var2;
    var1 = arg0->unknown_8_;
    if (var1 == NULL || (var0 = arg0->unknown_0_) == 0 || arg1 == NULL) return 0;
    for (var2 = 0; var2 < var0; var1++) {
        arg1(arg0, var1);
        var2++;
    }
    return 1;
}
