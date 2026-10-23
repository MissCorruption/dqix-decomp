#include <globaldefs.h>

#if defined(jpn)
#define REGION_OFFSET_0 0x430
#else
#define REGION_OFFSET_0 0x3f0
#endif


// USA: func_ov000_02171bc0
extern "C" ARM int func_ov000_02171bc0(char* arg0) {
    signed char var0 = 0;
    for (int var1 = 0; var1 < 0x10; var1++) {
        void* var2 = *(void**)(arg0 + var1 * 4 + REGION_OFFSET_0);
        if (var2 != 0) {
            short var3 = *(short*)((char*)var2 + 0x18);
            if (var3 > 0) {
                var0 = (signed char)(var0 + 1);
            }
        }
    }
    return var0;
}
