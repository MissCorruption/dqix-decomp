#include <globaldefs.h>

extern int data_01ffd348;
extern signed char data_01ffd364;

struct Struct_020e8f20 {
    int unknown_0_;
    int unknown_4_;
};
extern struct Struct_020e8f20 data_020e8f20[];

// USA: func_020a18f4
extern "C" ARM int func_020a18f4(unsigned int arg0) {
    int var0 = 0;
    if (arg0 < 0x23) {
        signed char* var1 = &data_01ffd364 + data_01ffd348 * 6;
        var0 = ((int)arg0 == var1[data_020e8f20[arg0].unknown_0_]);
    }
    return var0;
}
