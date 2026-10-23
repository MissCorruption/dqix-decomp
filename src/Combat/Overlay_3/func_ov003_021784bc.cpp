#include <globaldefs.h>

struct Struct_0207cf30_3 { short* unknown_0_; signed char* unknown_4_; short unknown_8_; };
extern "C" signed char func_020a0b3c(struct Struct_0207cf30_3* arg0, int arg1);
extern "C" int func_02086d20(unsigned char* arg0);
extern "C" int func_0207c7a0(void* arg0, int arg1, int arg2);

// USA: func_ov003_021784bc
extern "C" ARM int func_ov003_021784bc(void* arg0, int arg1, unsigned int arg2, int arg3) {
    int var0 = 0;
    unsigned int var1 = (arg2 >= 8 && arg2 <= 9);
    if (var1) {
        void* var2 = arg0;
        if (arg2 == 9) {
            var2 = (char*)arg0 + 0x204 + 0xc00;
        }
        signed char var3 = func_020a0b3c((struct Struct_0207cf30_3*)var2, arg1);
        int var4 = func_02086d20((unsigned char*)arg0);
        var0 = (arg3 * 8 + 0x63) - (var3 + var4);
    } else {
        unsigned int var5 = (arg2 <= 7);
        if (var5) {
            var0 = 0x63 - func_0207c7a0((char*)arg0 + 0x1d4, arg1, 9);
        }
    }
    return var0;
}
