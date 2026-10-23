#include <globaldefs.h>

extern "C" void* func_ov011_021849c8(int arg0);
extern "C" void* func_ov023_021f6880(void* arg0, int arg1);
extern "C" int func_ov023_021f6f10(void);
extern "C" void func_ov023_021f809c(void* arg0, int arg1);

// USA: func_ov023_021f6630
extern "C" ARM void func_ov023_021f6630(int arg0, int arg1, short arg2, short arg3) {
    void* var0 = func_ov011_021849c8(arg0);
    void* var1 = func_ov023_021f6880(var0, arg1);
    if (var1 == NULL) {
        return;
    }
    int var2 = func_ov023_021f6f10();
    if (var2 != 6) {
        return;
    }
    short* var3 = (short*)((char*)var1 + 0x100);
    var3[2] = arg2;
    var3[3] = arg3;
    func_ov023_021f809c(var1, arg0);
}
