#include "NitroSDK/OverlayMD5.h"

// USA: func_ov031_02222830
extern "C" THUMB void func_ov031_02222830(void* arg0, int arg1, unsigned int arg2) {
    char* var0 = (char*)arg0;
    unsigned int var1 = 0;
    if (var1 < arg2) {
        do {
            var1++;
            *var0 = (char)arg1;
            var0++;
        } while (var1 < arg2);
    }
}
