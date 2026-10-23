#include <globaldefs.h>
extern "C" int func_02023a9c(char*, int);

// USA: func_02026a78
extern "C" ARM int func_02026a78(char* arg0) {
#if defined(jpn)
    enum { Enum_02026a78_1920 = 0x6d4 };
#else
    enum { Enum_02026a78_1920 = 0x780 };
#endif
    unsigned char var0 = 0;
    int var1;
    for (var1 = 0; var1 < *(unsigned char*)(arg0 + Enum_02026a78_1920); var1++) {
        if (func_02023a9c((char*)(arg0), (int)(var1))) {
            var0++;
        }
    }
    return var0;
}
