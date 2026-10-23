#include <globaldefs.h>
#include <std_library_functions.h>

extern "C" ARM void func_ov000_0216f82c(unsigned char* arg0, const int* arg1)
{
    int var0 = *arg1 % 9;
    int var1 = *arg1 / 9;
    unsigned char var2[6];
    if (var1 % 2 == 0) {
        if (var0 == 0) {
            if (var1 == 0) {
                var2[0] = 255;
                var2[1] = var0 + (var1 + 1) * 9;
                var2[2] = 255;
                var2[3] = var0 + 1 + var1 * 9;
                var2[4] = 255;
                var2[5] = 255;
            } else if (var1 == 8) {
                var2[0] = 255;
                var2[1] = 255;
                var2[2] = 255;
                var2[3] = var0 + 1 + var1 * 9;
                var2[4] = 255;
                var2[5] = var0 + (var1 - 1) * 9;
            } else {
                var2[0] = 255;
                var2[1] = var0 + (var1 + 1) * 9;
                var2[2] = 255;
                var2[3] = var0 + 1 + var1 * 9;
                var2[4] = 255;
                var2[5] = var0 + (var1 - 1) * 9;
            }
        } else if (var0 == 8) {
            if (var1 == 0) {
                var2[0] = var0 - 1 + (var1 + 1) * 9;
                var2[1] = 255;
                var2[2] = var0 - 1 + var1 * 9;
                var2[3] = 255;
                var2[4] = 255;
                var2[5] = 255;
            } else if (var1 == 8) {
                var2[0] = 255;
                var2[1] = 255;
                var2[2] = var0 - 1 + var1 * 9;
                var2[3] = 255;
                var2[4] = var0 - 1 + (var1 - 1) * 9;
                var2[5] = 255;
            } else {
                var2[0] = var0 - 1 + (var1 + 1) * 9;
                var2[1] = 255;
                var2[2] = var0 - 1 + var1 * 9;
                var2[3] = 255;
                var2[4] = var0 - 1 + (var1 - 1) * 9;
                var2[5] = 255;
            }
        } else {
            if (var1 == 0) {
                var2[0] = var0 - 1 + (var1 + 1) * 9;
                var2[1] = var0 + (var1 + 1) * 9;
                var2[2] = var0 - 1 + var1 * 9;
                var2[3] = var0 + 1 + var1 * 9;
                var2[4] = 255;
                var2[5] = 255;
            } else if (var1 == 8) {
                var2[0] = 255;
                var2[1] = 255;
                var2[2] = var0 - 1 + var1 * 9;
                var2[3] = var0 + 1 + var1 * 9;
                var2[4] = var0 - 1 + (var1 - 1) * 9;
                var2[5] = var0 + (var1 - 1) * 9;
            } else {
                var2[0] = var0 - 1 + (var1 + 1) * 9;
                var2[1] = var0 + (var1 + 1) * 9;
                var2[2] = var0 - 1 + var1 * 9;
                var2[3] = var0 + 1 + var1 * 9;
                var2[4] = var0 - 1 + (var1 - 1) * 9;
                var2[5] = var0 + (var1 - 1) * 9;
            }
        }
    } else {
        if (var0 == 0) {
            if (var1 == 8) {
                var2[0] = 255;
                var2[1] = 255;
                var2[2] = 255;
                var2[3] = var0 + 1 + var1 * 9;
                var2[4] = var0 + (var1 - 1) * 9;
                var2[5] = var0 + 1 + (var1 - 1) * 9;
            } else {
                var2[0] = var0 + (var1 + 1) * 9;
                var2[1] = var0 + 1 + (var1 + 1) * 9;
                var2[2] = 255;
                var2[3] = var0 + 1 + var1 * 9;
                var2[4] = var0 + (var1 - 1) * 9;
                var2[5] = var0 + 1 + (var1 - 1) * 9;
            }
        } else if (var0 == 7) {
            if (var1 == 8) {
                var2[0] = 255;
                var2[1] = 255;
                var2[2] = var0 - 1 + var1 * 9;
                var2[3] = 255;
                var2[4] = var0 + (var1 - 1) * 9;
                var2[5] = var0 + 1 + (var1 - 1) * 9;
            } else {
                var2[0] = var0 + (var1 + 1) * 9;
                var2[1] = var0 + 1 + (var1 + 1) * 9;
                var2[2] = var0 - 1 + var1 * 9;
                var2[3] = 255;
                var2[4] = var0 + (var1 - 1) * 9;
                var2[5] = var0 + 1 + (var1 - 1) * 9;
            }
        } else if (var0 < 7) {
            if (var1 == 8) {
                var2[0] = 255;
                var2[1] = 255;
                var2[2] = var0 - 1 + var1 * 9;
                var2[3] = var0 + 1 + var1 * 9;
                var2[4] = var0 + (var1 - 1) * 9;
                var2[5] = var0 + 1 + (var1 - 1) * 9;
            } else {
                var2[0] = var0 + (var1 + 1) * 9;
                var2[1] = var0 + 1 + (var1 + 1) * 9;
                var2[2] = var0 - 1 + var1 * 9;
                var2[3] = var0 + 1 + var1 * 9;
                var2[4] = var0 + (var1 - 1) * 9;
                var2[5] = var0 + 1 + (var1 - 1) * 9;
            }
        } else {
            var2[0] = 255;
            var2[1] = 255;
            var2[2] = 255;
            var2[3] = 255;
            var2[4] = 255;
            var2[5] = 255;
        }
    }
    INLINE_MEMCPY(arg0, var2, sizeof(var2));
}
