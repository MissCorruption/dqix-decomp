#include <globaldefs.h>


// USA: func_ov031_02222818
extern "C" THUMB void func_ov031_02222818(unsigned char* arg0, const unsigned char* arg1, unsigned int arg2) {
    unsigned int var0 = 0;
    if (var0 < arg2) {
        do {
            arg0[var0] = arg1[var0];
            var0++;
        } while (var0 < arg2);
    }
}
