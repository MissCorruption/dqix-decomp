#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_0216664c_1116 = 0x284 };
enum { Enum_ov003_0216664c_1184 = 0x2c8 };
#else
enum { Enum_ov003_0216664c_1116 = 0x45c };
enum { Enum_ov003_0216664c_1184 = 0x4a0 };
#endif


extern "C" void func_ov003_021666c4(void* arg0);

// USA: func_ov003_0216664c
extern "C" ARM void func_ov003_0216664c(void* arg0) {
    int var0 = *(int*)((char*)arg0 + Enum_ov003_0216664c_1116);
    int var1 = 0;
    if (var0 & 0x10) {
        signed char var2 = *((signed char*)arg0 + Enum_ov003_0216664c_1184);
        var1 = 1;
        *((signed char*)arg0 + Enum_ov003_0216664c_1184) = var2 + 1;
    } else if (var0 & 0x20) {
        signed char var3 = *((signed char*)arg0 + Enum_ov003_0216664c_1184);
        var1 = 1;
        *((signed char*)arg0 + Enum_ov003_0216664c_1184) = var3 - 1;
    }
    signed char var4 = *((signed char*)arg0 + Enum_ov003_0216664c_1184);
    if (var4 >= 2) {
        *((signed char*)arg0 + Enum_ov003_0216664c_1184) = 0;
    } else if (var4 < 0) {
        *((signed char*)arg0 + Enum_ov003_0216664c_1184) = 1;
    }
    if (var1) {
        func_ov003_021666c4(arg0);
    }
}
