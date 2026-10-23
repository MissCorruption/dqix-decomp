#include <globaldefs.h>

#if defined(jpn)
static const int kCount=0x2498, kStride=0x8e0;
#else
static const int kCount=0x2788, kStride=0x99c;
#endif

// USA: func_ov023_021f0360
extern "C" ARM void* func_ov023_021f0360(void* arg0, int arg1) {
    unsigned char* var0 = (unsigned char*)arg0 + 0x118;
    int var1;
    for (var1 = 0; var1 < *((unsigned char*)arg0 + kCount); var1++) {
        if (*var0 == arg1) {
            return var0;
        }
        var0 += kStride;
    }
    return 0;
}
