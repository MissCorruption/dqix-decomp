#include <globaldefs.h>

extern "C" void* func_ov031_022133f8(unsigned int arg0);
extern "C" int func_ov031_022134b0(void);
extern "C" int func_ov031_0220d540(void);
extern "C" ARM int func_ov031_02214c44(char* arg0);
extern "C" int func_ov031_0221508c(char* arg0, int arg1);
extern "C" int func_ov031_02214c94(char* arg0);
extern "C" int func_ov031_02214d80(char* arg0);
extern "C" int func_ov031_02214ea8(char* arg0);

// USA: func_ov031_02214a04
extern "C" ARM int func_ov031_02214a04(void) {
    char* var0 = (char*)func_ov031_022133f8(0x10);
    int var1 = func_ov031_022134b0();
    int var2 = func_ov031_0220d540();
    int var3 = var1;
    if (var1 == 2 && var2 == 3) {
        var3 = func_ov031_02214c44(var0);
    } else if (var1 == 6) {
        var3 = func_ov031_0221508c(var0, var1);
    } else if (var2 == 3 || var2 == 6) {
        var3 = func_ov031_0221508c(var0, var1);
        if (var3 != 7) {
            if (var3 == 3) var3 = func_ov031_02214c94(var0);
            else if (var3 == 4) var3 = func_ov031_02214d80(var0);
            else if (var3 == 5) var3 = func_ov031_02214ea8(var0);
        }
    }
    return var3;
}
