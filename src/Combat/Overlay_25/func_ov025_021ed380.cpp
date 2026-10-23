#include <globaldefs.h>

// USA: func_ov025_021ed380
extern "C" ARM int func_ov025_021ed380(char* arg0, int arg1, int arg2, int arg3, int arg4, short arg5, unsigned short arg6) {
    if (arg3 >= 6) return -1;

    int var0 = -1;
    if (arg1 != 0) {
        unsigned char var1 = *(unsigned char*)(arg0 + 0x150);
        if (var1 < 0x10) {
            *(unsigned short*)(arg0 + var1 * 2) = arg1;
            var1 = *(unsigned char*)(arg0 + 0x150);
            *(short*)(arg0 + var1 * 2 + 0x20) = arg2;
            var1 = *(unsigned char*)(arg0 + 0x150);
            *(unsigned char*)(arg0 + var1 + 0xa0) = arg3;
            var1 = *(unsigned char*)(arg0 + 0x150);
            *(int*)(arg0 + var1 * 4 + 0xb0) = arg4;

            if (*(short*)(arg0 + 0x152) == 0x7fff) {
                *(short*)(arg0 + 0x152) = 0;
            }
            *(short*)(arg0 + 0x152) = *(short*)(arg0 + 0x152) + 1;
            short var2 = *(short*)(arg0 + 0x152);

            var1 = *(unsigned char*)(arg0 + 0x150);
            *(short*)(arg0 + var1 * 2 + 0x60) = var2;
            var1 = *(unsigned char*)(arg0 + 0x150);
            *(short*)(arg0 + var1 * 2 + 0x40) = arg5;
            var1 = *(unsigned char*)(arg0 + 0x150);
            *(unsigned short*)(arg0 + var1 * 2 + 0x80) = arg6;
            var1 = *(unsigned char*)(arg0 + 0x150);
            *(unsigned char*)(arg0 + 0x150) = var1 + 1;
            var0 = var2;
        }
    }
    return var0;
}
