#include <globaldefs.h>

struct Struct_ov031_02239284 { unsigned char unknown_0_[2]; unsigned short unknown_2_; };
extern Struct_ov031_02239284* data_ov031_02290d14;

// USA: func_ov031_02239284
extern "C" ARM int func_ov031_02239284(unsigned char* arg0) {
    Struct_ov031_02239284* var0 = data_ov031_02290d14;
    unsigned int var1 = 1;
    unsigned short var2 = var1;
    unsigned short var3 = var0->unknown_2_;
    do {
        if (var3 & (var1 << var2)) {
            int var4 = (var2 - 1) * 0x1e;
            unsigned char* var5 = (unsigned char*)var0 + 0x24 + var4;
            if (arg0[0] == var5[0] && arg0[1] == var5[1] && arg0[2] == var5[2] &&
                arg0[3] == var5[3] && arg0[4] == var5[4] && arg0[5] == var5[5]) {
                return *(unsigned short*)((char*)var0 + var4 + 0x2a);
            }
        }
        var2++;
    } while (var2 < 2);
    return 0;
}
