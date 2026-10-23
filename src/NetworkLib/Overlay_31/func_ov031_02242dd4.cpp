#include <globaldefs.h>

struct Struct_ov031_0224954c {
    unsigned int unknown_0_[9];
};

extern Struct_ov031_0224954c data_ov031_0224954c;

// USA: func_ov031_02242dd4
extern "C" ARM int func_ov031_02242dd4(char* arg0, unsigned int arg1) {
    Struct_ov031_0224954c var0 = data_ov031_0224954c;
    unsigned int* var1 = var0.unknown_0_;
    int var2;
    int var3 = 0;
    var2 = 0;
    bool var4 = false;
    do {
        unsigned int var5 = var1[var2];
        if (arg1 >= var5) {
            unsigned int var6 = arg1 / var5;
            unsigned int var7 = var6 * var5;
            var4 = true;
            if (arg0 != 0) {
                arg0[var3] = var6 + '0';
            }
            arg1 -= var7;
            var3++;
        } else if (var4 != 0) {
            if (arg0 != 0) {
                arg0[var3] = '0';
            }
            var3++;
        }
        var2++;
    } while (var2 < 9);
    if (arg0 != 0) {
        arg0[var3] = arg1 + '0';
    }
    return var3 + 1;
}
