#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov000_0217fcc4_1096 = 0x488 };
#else
enum { Enum_ov000_0217fcc4_1096 = 0x448 };
#endif

// USA: func_ov000_0217fcc4
extern "C" ARM void func_ov000_0217fcc4(void* arg0, int arg1) {
    if (arg1 < 0) {
        int var0;
        for (var0 = 0; var0 < 4; var0++) {
            signed char var1 = *((signed char*)arg0 + var0 + 0x6c);
            void* var2 = (char*)arg0 + 0x158 + 0x800 + var1 * Enum_ov000_0217fcc4_1096;
            if (*(int*)((char*)var2 + 0x4c) >= 0) {
                unsigned char var3 = *((unsigned char*)var2 + 0x24);
                var3 &= ~1;
                *((unsigned char*)var2 + 0x24) = var3;
            }
        }
        return;
    }
    int var4;
    for (var4 = 0; var4 < 4; var4++) {
        signed char var5 = *((signed char*)arg0 + var4 + 0x6c);
        void* var6 = (char*)arg0 + 0x158 + 0x800 + var5 * Enum_ov000_0217fcc4_1096;
        if (arg1 == *(int*)((char*)var6 + 0x4c)) {
            unsigned char var7 = *((unsigned char*)var6 + 0x24);
            var7 &= ~1;
            *((unsigned char*)var6 + 0x24) = var7;
            return;
        }
    }
}
