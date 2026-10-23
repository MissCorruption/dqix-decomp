#include <globaldefs.h>

extern "C" int func_020d2ff0(const char* arg0);
extern "C" int func_02001aec(unsigned char* arg0, unsigned char* arg1, int arg2);
extern "C" int func_02005a94(void* arg0);

// USA: func_0204fc40
extern "C" ARM int func_0204fc40(void* arg0, char** arg1, char* arg2, short* arg3, int arg4) {
    int var0 = func_020d2ff0(arg2);
    char* var1 = *arg1;
    if (func_02001aec((unsigned char*)var1, (unsigned char*)arg2, var0) == 0) {
        var1 += var0;
        short var2;
        for (var2 = 0; var2 < arg4; var2++) {
            int var3 = func_02005a94(var1);
            arg3[var2] = (short)var3;
            if (var2 == arg4 - 1) break;
            while (*var1 != ',') var1++;
            var1++;
        }
        while (*var1 != '>' && *var1 != 0) var1++;
        *arg1 = var1 + 1;
        return 1;
    }
    return 0;
}
