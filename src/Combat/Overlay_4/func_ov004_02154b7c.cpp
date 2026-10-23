#include <globaldefs.h>

extern char* data_ov004_021707c0;

extern "C" void func_ov004_02153978(void* arg0, short* arg1, short* arg2, short* arg3);
extern "C" short func_ov004_021537e0(void);
extern "C" short func_ov004_021538f0(void);
extern "C" short func_ov004_02153860(void);
extern "C" void func_ov023_021f645c(void* arg0, int arg1, int arg2, int arg3);
extern "C" void func_ov023_021f64a8(void* arg0, int arg1, int arg2, int arg3);
extern "C" void* func_ov011_021849c8(void*);
extern "C" void* func_ov023_021f6880(void*, int);
extern "C" int func_ov023_021f6f10(void* arg0);
extern "C" int func_ov023_021f809c(void*, void*);

// USA: func_ov004_02154b7c
extern "C" ARM int func_ov004_02154b7c(void* arg0) {
    short var0, var1, var2;
    func_ov004_02153978(arg0, &var0, &var1, &var2);

    int var3 = 0x32;
    unsigned short var4;
    if (var0 == 0) {
        var4 = (unsigned short)(short)(int)*(short*)(data_ov004_021707c0 + 0x7a);
    } else if (var1 == 0) {
        var4 = func_ov004_021537e0();
        var3 = 0x33;
    } else if (var0 == 3) {
        var4 = func_ov004_021538f0();
        var3 = 0x34;
    } else {
        var4 = func_ov004_02153860();
        var3 = 0x34;
    }

    func_ov023_021f645c(arg0, 7, var3, 0xf);
    func_ov023_021f64a8(arg0, 0x14, var4, 0xf);

    void* var5 = func_ov023_021f6880(func_ov011_021849c8(arg0), 0x10);
    if (!var5) return 0;
    if (func_ov023_021f6f10(var5) != 6) return 0;
    func_ov023_021f809c(var5, arg0);
    return 0;
}
