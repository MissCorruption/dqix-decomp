#include <globaldefs.h>

extern "C" void func_0204e1c8(int arg0, void* arg1, void* arg2, void* arg3, int arg4, int arg5, int arg6, int arg7);

// USA: func_ov023_021e2030
extern "C" ARM void func_ov023_021e2030(int arg0, int arg1, int arg2, void* arg3) {
    short var0;
    for (int var1 = 0; var1 < 2; var1++) {
        var0 = (short)(arg2 + (var1 << 3));
        for (int var2 = 0; var2 < 2; var2++) {
            short var3 = (short)(arg1 + (var2 << 3));
            func_0204e1c8(arg0, arg3, (void*)(int)var3, (void*)(int)var0, 8, 8, 0xf0, 0xf);
            arg3 = (char*)arg3 + 0x20;
        }
    }
}
