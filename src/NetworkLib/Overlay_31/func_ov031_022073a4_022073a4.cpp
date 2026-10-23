#include <globaldefs.h>

struct Struct_ov031_022073a4 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned int unknown_4_;
};
extern "C" int func_ov031_02206150(int, int, int, unsigned int, unsigned int, int);

// USA: func_ov031_022073a4
extern "C" ARM int func_ov031_022073a4(int arg0, int arg1, int arg2, int arg3, const Struct_ov031_022073a4* arg4) {
    unsigned short var0;
    unsigned int var1;
    if (arg4) {
        unsigned short var2 = arg4->unknown_2_;
        unsigned int var3 = arg4->unknown_4_;
        var0 = ((var2 >> 8) & 0xff) | ((var2 << 8) & 0xff00);
        var1 = ((var3 >> 24) & 0xff) | ((var3 >> 8) & 0xff00) |
                  ((var3 << 8) & 0xff0000) | ((var3 << 24) & 0xff000000);
    } else {
        var0 = 0;
        var1 = 0;
    }
    return func_ov031_02206150(arg0, arg1, arg2, var0, var1, arg3);
}
