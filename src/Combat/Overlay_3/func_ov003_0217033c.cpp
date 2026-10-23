#include <globaldefs.h>

struct Struct_0205a254;
struct Struct_0205a254_2;
#if defined(jpn)
extern "C" void func_020e27ec(Struct_0205a254*, int, short, short);
#endif
extern "C" void func_ov003_021703f0(void*, short*, short*);
extern "C" void func_0205a370(Struct_0205a254*, int);
extern "C" Struct_0205a254_2* func_0205a3d0(Struct_0205a254*, int);
struct Struct_0205a330;
extern "C" void func_0205a330(Struct_0205a330*, int);
extern "C" void func_0205ae8c(void*);

// USA: func_ov003_0217033c
extern "C" ARM void func_ov003_0217033c(char* arg0) {
    Struct_0205a254* var0 = *(Struct_0205a254**)(arg0 + 0xa4);
    if (var0 == NULL) return;

    short var1, var2;
    func_ov003_021703f0(arg0, &var1, &var2);

    Struct_0205a254_2* var3;
    if (var1 != 0 && var2 != 0) {
        func_0205a370(var0, 0);
        var3 = func_0205a3d0(var0, 0);
        if (var3 != NULL) {
            *(unsigned char*)((char*)var3 + 0x15) |= 8;
        }
        func_0205a330((Struct_0205a330*)var0, 2);
#if defined(jpn)
        func_020e27ec(var0, 0, var1, var2);
#else
        short var4, var5;
        var5 = var2;
        var4 = var1;
        var3 = func_0205a3d0(var0, 0);
        if (var3 != NULL) {
            *(short*)((char*)var3 + 0x4) = var4;
            *(short*)((char*)var3 + 0x6) = var5;
        }
#endif
        func_0205ae8c(arg0 + 0x68);
        return;
    }
    var3 = func_0205a3d0(var0, 0);
    if (var3 != NULL) {
        *(unsigned char*)((char*)var3 + 0x15) &= ~8;
    }
}
