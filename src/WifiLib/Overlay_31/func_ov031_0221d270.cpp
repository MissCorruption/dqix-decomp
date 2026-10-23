#include <globaldefs.h>

// USA: func_ov031_0221d270
extern "C" THUMB int func_ov031_0221d270(const unsigned char* arg0, int arg1) {
    int var0 = 0;
    if (var0 < arg1) {
        do {
            unsigned char var1 = *arg0;
            arg0++;
            if (var1 < 0x20 || var1 > 0x7f) return -1;
            var0++;
        } while (var0 < arg1);
    }
    return 0;
}
