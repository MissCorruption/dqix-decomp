#include <globaldefs.h>

struct Struct_ov031_02241694;
extern "C" int func_ov031_02241480(Struct_ov031_02241694*, int, char*, int, int);

// USA: func_ov031_02241694
extern "C" ARM int func_ov031_02241694(Struct_ov031_02241694* arg0, int arg1) {
    char var0[2];
    int var1;
    int var2;
    int var3 = 0;

    var0[0] = 0;
    var0[1] = 0;
    var1 = 0;
    while (var0[var1 & 1] != 13 || var0[(var1 - 1) & 1] != 10) {
        var2 = func_ov031_02241480(arg0, arg1, var0 + (var1 & 1), 1, 0);
        if (var2 <= 0) return var2;
        var3 += var2;
        var1++;
    }
    return var3;
}
