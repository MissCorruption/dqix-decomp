#include <globaldefs.h>

extern "C" unsigned char* func_020421a0();
extern "C" void func_0204f41c(void* arg0, int arg1, int arg2, void* arg3, int arg4, int arg5, short* arg6, short* arg7, int arg8);

extern const short data_020e7e44[];
extern const short data_020e7e4c[];

// USA: func_020654b8
extern "C" ARM void func_020654b8(unsigned char* arg0, void* arg1, void* arg2, int arg3, short arg4, unsigned char arg5) {
    short var0;
    short var1;
    void* var2;
    void* var3;
    int var4;
    unsigned char var5;
    var2 = *(void**)((char*)arg2 + 0x18);
    if (var2 == 0) return;
    var3 = *(void**)var2;
    var4 = (short)(arg4 - (short)(*(short*)((char*)(*(void**)((char*)arg0 + 0x34)) + 0xae) * 8));
    var5 = ((unsigned char*)func_020421a0() + 0x1000)[0x95b];
    if (var5 & 0x80) {
        for (unsigned char var6 = 0; var6 < 4; var6++) {
            func_0204f41c(arg1, (short)(arg3 + data_020e7e4c[var6]), (short)(var4 + data_020e7e44[var6]), var3, 10, 1, &var0, &var1,
                          (arg0 + 0x1000)[0x9dc]);
        }
        func_0204f41c(arg1, (short)(arg3 + 1), (short)(var4 + 1), var3, 10, arg5, &var0, &var1, (arg0 + 0x1000)[0x9dc]);
    } else if (var5 & 2) {
        func_0204f41c(arg1, (short)(arg3 + 1), (short)(var4 + 1), var3, 10, 1, &var0, &var1, (arg0 + 0x1000)[0x9dc]);
        func_0204f41c(arg1, (short)arg3, (short)var4, var3, 10, arg5, &var0, &var1, (arg0 + 0x1000)[0x9dc]);
    } else {
        func_0204f41c(arg1, arg3, var4, var3, 10, arg5, &var0, &var1, (arg0 + 0x1000)[0x9dc]);
    }
}
