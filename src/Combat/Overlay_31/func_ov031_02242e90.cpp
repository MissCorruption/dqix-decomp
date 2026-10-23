#include <globaldefs.h>

enum Enum_ov031_02242e90 { Enum_ov031_02242e90_0 = 0, Enum_ov031_02242e90_1 = 1 };

// USA: func_ov031_02242e90
extern "C" ARM int func_ov031_02242e90(const signed char* arg0, const signed char* arg1) {
    int var0;
    Enum_ov031_02242e90 var1;
    int var2;
    int var3;
    goto compare;
advance:
    if (var2 == 0 || var2 == ' ') return 0;
    ++arg0;
    ++arg1;
compare:
    var3 = *arg1;
    var1 = Enum_ov031_02242e90_0;
    if (var3 >= 'A' && var3 <= 'Z') var1 = Enum_ov031_02242e90_1;
    var2 = *arg0;
    if (var1) var3 += 32;
    var1 = Enum_ov031_02242e90_0;
    if (var2 >= 'A' && var2 <= 'Z') var1 = Enum_ov031_02242e90_1;
    var0 = var1 ? var2 + 32 : var2;
    if (var0 == var3) goto advance;
    return -1;
}
