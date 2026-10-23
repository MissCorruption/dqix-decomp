#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_ov031_02291eae {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_[4][20];
};
#if defined(jpn)
#define data_ov031_02291eae data_ov031_02292aae
#endif
extern Struct_ov031_02291eae data_ov031_02291eae;
extern unsigned char data_ov031_02291e04[];

// USA: func_ov031_02243018
extern "C" ARM int func_ov031_02243018(Script::Parameter* arg0) {
    arg0[0].ToString();
    Struct_ov031_02291eae var0;
    memset(&var0, 0, 0x52);
    var0.unknown_0_ = arg0[1].ToInt();
    var0.unknown_1_ = arg0[2].ToInt() - 1;
    unsigned char* var1 = var0.unknown_2_[var0.unknown_1_];
    const char* var2 = arg0[3].ToString();
    int var3 = strlen(var2);
    for (int var4 = 0; var4 < var3; ++var4) {
        char var5 = *var2;
        unsigned char var6;
        if (var5 >= '0' && var5 <= '9') var6 = var5 - '0';
        else if (var5 >= 'A' && var5 <= 'E') var6 = var5 - '7';
        else if (var5 >= 'a' && var5 <= 'e') var6 = var5 - 'W';
        else var6 = 0;
        ++var2;
        if (var4 % 2 == 0) *var1 |= var6 << 4;
        else { *var1 |= var6; ++var1; }
    }
    memcpy(&data_ov031_02291eae, &var0, 0x52);
#if defined(jpn)
    *(const char**)(data_ov031_02291e04 + 0x10) = arg0[4].ToString();
#else
    *(const char**)(data_ov031_02291e04 + 0x34) = arg0[4].ToString();
#endif
    *(unsigned short*)(data_ov031_02291e04 + 8) = arg0[5].ToInt();
    return 1;
}
