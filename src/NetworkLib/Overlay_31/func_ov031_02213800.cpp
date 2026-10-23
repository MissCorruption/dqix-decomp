#include <globaldefs.h>

struct Struct_ov031_02213800 {
    char unknown_0_[0xd0c];
    unsigned char unknown_d0c_0_ : 4;
};

extern "C" struct Struct_ov031_02213800* func_ov031_022133f8(int arg0);
extern "C" ARM int func_ov031_022157c4(void *arg0);
extern "C" ARM int func_ov031_02215718(int arg0);

// USA: func_ov031_02213800
extern "C" ARM int func_ov031_02213800(char* arg0) {
    Struct_ov031_02213800* var0 = func_ov031_022133f8(0x10);
    unsigned int var1 = var0->unknown_d0c_0_;
    if (var1 == 0 || var1 == 4) {
        unsigned int var2 = (*(unsigned short*)(arg0 + 0x2c) >> 4) & 1;
        if (var2 == 1) {
            if (func_ov031_022157c4(arg0 + 0xc) == 1) return 6;
        }
    }
    var1 = var0->unknown_d0c_0_;
    if (var1 == 0 || var1 == 5) {
        unsigned int var3 = (*(unsigned short*)(arg0 + 0x2c) >> 4) & 1;
        if (var3 == 1) {
            if (func_ov031_02215718((int)(arg0 + 0xc)) == 1) return 7;
        }
    }
    return -1;
}
