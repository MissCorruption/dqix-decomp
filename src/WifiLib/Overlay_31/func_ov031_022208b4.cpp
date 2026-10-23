#include <globaldefs.h>

// USA: func_ov031_022208b4
extern "C" THUMB int func_ov031_022208b4(unsigned char* arg0, const char* arg1, int arg2) {
    int var0;
    int var1 = 0;
    int var2 = 0;
    if (arg2 > 0) do {
        var0 = arg1[var2];
        switch (var0) {
        case '0': case '1': case '2': case '3': case '4':
        case '5': case '6': case '7': case '8': case '9':
            var1 += var0 - '0';
            break;
        case 'a': case 'b': case 'c': case 'd': case 'e': case 'f':
            var1 += var0 - 'a' + 10;
            break;
        case 'A': case 'B': case 'C': case 'D': case 'E': case 'F':
            var1 += var0 - 'A' + 10;
            break;
        default:
            return 0;
        }
        if (var2 % 2 == 0) {
            var1 <<= 4;
        } else {
            arg0[var2 / 2] = var1;
            var1 = 0;
        }
        var2++;
    } while (var2 < arg2);
    return 1;
}
