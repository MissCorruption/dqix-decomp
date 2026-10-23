#include <globaldefs.h>
#include "std_library_functions.h"

extern int data_ov012_0218b312;
extern "C" int func_02099304(const char* arg0, int arg1, int arg2, int arg3, void* arg4, int arg5, int arg6, void* arg7, void* arg8);

// USA: func_ov012_0218ae74
extern "C" ARM int func_ov012_0218ae74(unsigned char* arg0, const char* arg1) {
    arg0[0x1335] = 1;
    int var0 = 1;

    memset(*(void**)(arg0 + 0x1374), 0, 0x960);

    func_02099304(arg1, *(int*)(arg0 + 0x13b0), *(int*)(arg0 + 0x13b4), *(int*)(arg0 + 0x13b8),
                  *(void**)(arg0 + 0x1374), 0x960, 0, arg0 + 0x1440, arg0 + 0x1400);

    char* var1 = (char*)*(void**)(arg0 + 0x1374);
    char* var2 = strstr(var1, (const char*)&data_ov012_0218b312);

    if (var2 == 0) {
        var0 = 0;
        arg0[0x14bd] = 0;
        arg0[0x1334] = 0;
        arg0[0x1335] = 0;
    } else if (arg0[0x14bd] == 0) {
        *var2 = 0;
    } else {
        var1 = var2 + strlen(*(char**)(arg0 + 0x13b0)) + 0xb;
    }

    memset(*(void**)(arg0 + 0x13bc), 0, 0xf2);
    unsigned int var3 = strlen(var1);
    memcpy(*(void**)(arg0 + 0x13bc), var1, var3);

    return var0;
}
