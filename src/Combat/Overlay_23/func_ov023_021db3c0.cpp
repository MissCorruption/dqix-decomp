#include <globaldefs.h>

extern "C" void __clear(void* arg0, int arg1);
#if defined(jpn)
extern "C" int sprintf(void*, const void*, ...);
#else
extern "C" int sprintf(void* arg0, const void* arg1, ...);
#endif
extern "C" int func_020420e8(void* arg0, int arg1);
extern "C" void func_0204f41c(void* arg0, short arg1, short arg2, void* arg3, int arg4, int arg5, void* arg6, void* arg7, int arg8);
extern char data_ov023_021fdb28;
#if defined(jpn)
extern const char data_ov023_021fcdec[];
extern "C" void func_02050678(void*, int, short, void*, int, int, void*, void*);
#endif

// USA: func_ov023_021db3c0
extern "C" ARM void func_ov023_021db3c0(void* arg0, int arg1, short arg2, float arg3, unsigned char arg4) {
#if defined(jpn)
    int var0;
    int var1 = arg4;
    int var2 = (int)(10.0f * arg3);
    var0 = var2;
    var2 %= 10;
    var0 /= 10;
    char var3[3];
    __clear(var3, 3);
    sprintf(var3, (void*)data_ov023_021fcdec, var2);
    short var4;
    short var5;
    func_02050678(arg0, arg1, arg2, var3, 8, var1, &var4, &var5);
    arg1 = (short)(arg1 - 2);
    var3[0] = '.';
    func_02050678(arg0, arg1, arg2, var3, 8, var1, &var4, &var5);
    arg1 = (short)(arg1 - 7);
    do {
        int var6 = var0 % 10;
        var0 /= 10;
        char var7[2];
        __clear(var7, 2);
        sprintf(var7, (void*)data_ov023_021fcdec, var6);
        func_02050678(arg0, arg1, arg2, var7, 8, var1, &var4, &var5);
        arg1 = (short)(arg1 - 6);
    } while (var0 != 0);

#else
    char var8[0x40];
    __clear(var8, 0x40);
    sprintf(var8, &data_ov023_021fdb28, (double)arg3);
    int var9 = func_020420e8(var8, 0);
    short var10 = (short)(arg1 - var9);
    short var11;
    short var12;
    func_0204f41c(arg0, var10, arg2, var8, 8, arg4, &var11, &var12, 0);

#endif
}
