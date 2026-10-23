#include <globaldefs.h>

struct Struct_ov014_02187228 { Struct_ov014_02187228* unknown_0_; };

extern "C" int func_02080468(void* arg0, int arg1);

// USA: func_ov014_02187228
extern "C" ARM void func_ov014_02187228(char* arg0, Struct_ov014_02187228* arg1) {
    *(Struct_ov014_02187228**)(arg0 + 0xbc) = *(Struct_ov014_02187228**)(arg0 + 0xb8);
    *(short*)(arg0 + 0x176) = 0x1b;
    void* var0 = *(void**)(arg0 + 0xc0);
    if (var0 != 0) {
        *(short*)(arg0 + 0x176) = (short)func_02080468(var0, 5);
    }
    if (arg1 == 0) return;

    Struct_ov014_02187228* var1 = *(Struct_ov014_02187228**)(arg0 + 0xb8);
    Struct_ov014_02187228* var2 = var1;
    short var3 = 0;
    Struct_ov014_02187228* var4 = *(Struct_ov014_02187228**)(arg0 + 0xb8);
    while (var1 != 0) {
        if (var3 % 16 == 0) { var2 = var1; var3 = 0; }
        if (var1 == arg1) break;
        var3 = (short)(var3 + 1);
        var1 = var1->unknown_0_;
    }
    if (var1 == 0) { var3 = 0; var2 = var4; }
    *(short*)(arg0 + 0x176) = *(short*)(arg0 + 0x176) + var3;
    *(Struct_ov014_02187228**)(arg0 + 0xbc) = var2;
}
