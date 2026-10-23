#include <globaldefs.h>

extern "C" ARM void* func_020421b0(int arg0);
extern "C" ARM void func_0205b530(void* arg0, void* arg1, short arg2, short arg3, int arg4, int arg5);
extern "C" ARM void* __clear(void* arg0, int arg1);

extern unsigned char data_020ee94c;

// USA: func_020e2110
extern "C" ARM void func_020e2110(void* arg0) {
    void* var0 = *(void**)((char*)arg0 + 4);
    void* var1 = *(void**)((char*)var0 + 4);
    unsigned char var2 = ((unsigned char*)var0)[0x3a];
    unsigned char var3 = ((unsigned char*)var0)[0x3b];

    void* var4 = func_020421b0(1);
    void* var5 = func_020421b0(6);
    if (var4 != 0 && var5 != 0) {
        int var6, var7;
        int var8 = var2 - 9;
        for (var6 = 8, var7 = 0; var7 < var8 >> 3; var6 += 8, var7++) {
            func_0205b530(var1, var4, var6, 0, 8, 0xf);
            func_0205b530(var1, var5, var6, (short)(var3 - 8), 8, 0xf);
        }
    }

    void* var9 = func_020421b0(3);
    void* var10 = func_020421b0(4);
    if (var9 != 0 && var10 != 0) {
        int var11, var12;
        int var13 = var3 - 9;
        for (var11 = 8, var12 = 0; var12 < var13 >> 3; var11 += 8, var12++) {
            func_0205b530(var1, var9, 0, var11, 8, 0xf);
            func_0205b530(var1, var10, (short)(var2 - 8), var11, 8, 0xf);
        }
    }

    short var14[4];
    short var15[4];
    __clear(var14, 8);
    short var16 = (short)(var2 - 8);
    var14[1] = var16;
    var14[3] = var16;
    __clear(var15, 8);
    short var17 = (short)(var3 - 8);
    var15[2] = var17;
    var15[3] = var17;

    int var18;
    for (var18 = 0; var18 < 4; var18++) {
        int var19 = (&data_020ee94c)[var18];
        void* var20 = func_020421b0(var19);
        if (var20 != 0) {
            func_0205b530(var1, var20, var14[var18], var15[var18], 8, 0xf);
        }
    }
}
