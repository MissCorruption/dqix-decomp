#include <globaldefs.h>

// USA: func_ov025_021ed444
#pragma optimize_for_size off
#pragma opt_common_subs off
extern "C" ARM int func_ov025_021ed444(char* arg0, int arg1, int arg2, int arg3, int arg4, short arg5, unsigned short arg6) {
    if (arg3 >= 6) return -1;
    int var0 = -1;
    if (arg1 != 0) {
        unsigned char var1 = *(unsigned char*)(arg0 + 0x150);
        if (var1 < 0x10) {
            short var2 = *(short*)(arg0 + 0x15c);
            int var3;
            for (var3 = var1 - 1; var3 >= var2; var3--) {
                int var4 = var3 + 1;
                *(unsigned short*)(arg0 + var4 * 2) = *(unsigned short*)(arg0 + var3 * 2);
                *(short*)(arg0 + var4 * 2 + 0x20) = *(short*)(arg0 + var3 * 2 + 0x20);
                *(unsigned char*)(arg0 + var4 + 0xa0) = *(unsigned char*)(arg0 + var3 + 0xa0);
                *(int*)(arg0 + var4 * 4 + 0xb0) = *(int*)(arg0 + var3 * 4 + 0xb0);
                *(short*)(arg0 + var4 * 2 + 0x60) = *(short*)(arg0 + var3 * 2 + 0x60);
                *(short*)(arg0 + var4 * 2 + 0x40) = *(short*)(arg0 + var3 * 2 + 0x40);
                *(unsigned short*)(arg0 + var4 * 2 + 0x80) = *(unsigned short*)(arg0 + var3 * 2 + 0x80);
            }
            *(unsigned short*)(arg0 + var2 * 2) = arg1;
            *(short*)(arg0 + var2 * 2 + 0x20) = arg2;
            *(unsigned char*)(arg0 + var2 + 0xa0) = arg3;
            *(int*)(arg0 + var2 * 4 + 0xb0) = arg4;
            if (*(short*)(arg0 + 0x152) == 0x7fff) {
                *(short*)(arg0 + 0x152) = 0;
            }
            *(short*)(arg0 + 0x152) = *(short*)(arg0 + 0x152) + 1;
            short var5 = *(short*)(arg0 + 0x152);
            *(short*)(arg0 + var2 * 2 + 0x60) = var5;
            *(short*)(arg0 + var2 * 2 + 0x40) = arg5;
            *(unsigned short*)(arg0 + var2 * 2 + 0x80) = arg6;
            var1 = *(unsigned char*)(arg0 + 0x150);
            *(unsigned char*)(arg0 + 0x150) = var1 + 1;
            var0 = var5;
        }
    }
    return var0;
}
