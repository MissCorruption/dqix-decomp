#include <globaldefs.h>

struct Struct_ov011_02184c30 { unsigned int unknown_0_, unknown_4_; };
extern "C" int func_ov011_02184c30(struct Struct_ov011_02184c30*);
struct Struct_ov011_02188934 { unsigned int unknown_0_[8]; };
extern Struct_ov011_02188934 data_ov011_02188934;
#define CALL(x) func_ov011_02184c30(x)

// USA: func_ov011_02186440
extern "C" ARM int func_ov011_02186440(struct Struct_ov011_02184c30* arg0, int arg1) {
    Struct_ov011_02188934 var0;
    int var1 = CALL(arg0++);
    var0 = data_ov011_02188934;
    unsigned int* var2 = &var0.unknown_0_[var1 * 4];
    arg1--;
    while (arg1 != 0) {
        int var3 = CALL(arg0++);
        unsigned int var4 = *var2++;
        ((void (*)(int))var4)(var3);
        arg1--;
    }
    return 1;
}
