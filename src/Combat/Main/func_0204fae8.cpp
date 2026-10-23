#include <globaldefs.h>
#include "Resource/FontGlyphTable.h"
#if defined(jpn)
#define data_020f0303 data_020f0330
#define data_020f0306 data_020f0333
#endif
struct Struct_0204fae8 {
    unsigned char unknown_0_[0xa8];
    short unknown_a8_;
    short unknown_aa_;
    unsigned char unknown_ac_[0xc5 - 0xac];
    unsigned char unknown_c5_;
};
extern "C" void func_0204e038(Struct_0204fae8*, char*, int, int, int, int, int, int);
extern char data_020f0303[];
extern char data_020f0306[];
// USA: func_0204fae8
extern "C" ARM void func_0204fae8(Struct_0204fae8* arg0) {
    short var0 = 0;
    short var1 = (short)(arg0->unknown_aa_ << 3) - 11;
    short var2 = var0;
    if (arg0->unknown_c5_ & 0x10) {
        var1 += 3;
        var2 = 3;
    }
    var0 += 4;
    var0 -= var2;
    char* var3 = func_02042a50(8, data_020f0303);
    if (var3) func_0204e038(arg0, var3, var0, var1, 8, 8, 0xf0, 0xf);
    var0 = (short)((short)(arg0->unknown_a8_ << 3) - 10) + var2;
    var3 = func_02042a50(8, data_020f0306);
    if (var3) func_0204e038(arg0, var3, (short)(var0 - 1), var1, 8, 8, 0xf0, 0xf);
}
