#include <globaldefs.h>

struct Struct_020e8b6c {
    signed char unknown_0_;
    signed char unknown_1_;
};
extern struct Struct_020e8b6c data_020e8b6c[];

// USA: func_0208538c
extern "C" ARM int func_0208538c(unsigned char* arg0) {
    int var0;
    signed char var1;
    for (var0 = 0; (var1 = data_020e8b6c[var0].unknown_0_) != -1; var0++) {
        signed char var2 = data_020e8b6c[var0].unknown_1_;
        if (*(short*)(arg0 + var2 * 0x20 + 0x100 + 0xac) > 0) {
            int var3 = *(int*)(arg0 + var1 * 0x2c + 0x2f4);
            if (((unsigned int)var3 << 15) >> 31) {
                return 1;
            }
        }
    }
    return 0;
}
