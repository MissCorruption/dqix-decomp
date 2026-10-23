#include <globaldefs.h>

struct Struct_ov031_02290c40 { void* unknown_0_; };
extern Struct_ov031_02290c40 data_ov031_02290c40;

struct Struct_ov031_02227630 { void* unknown_0_; void* unknown_4_; int unknown_8_; };

extern "C" Struct_ov031_02227630* func_ov031_0223bfa0(int);
extern "C" int func_ov031_0223b61c(void*, int*, int);

// USA: func_ov031_02227630
extern "C" ARM Struct_ov031_02227630* func_ov031_02227630(void* arg0) {
    int var0 = *(int*)((char*)data_ov031_02290c40.unknown_0_ + 0x60);
    Struct_ov031_02227630* var1 = func_ov031_0223bfa0(var0);
    int var2;
    int var3 = func_ov031_0223b61c(arg0, &var2, 4);
    char* var4 = (char*)var3 + 0x20;
    var1->unknown_8_ = var3;
    var1->unknown_0_ = var4 + 0x10;
    var1->unknown_4_ = var4 + *(int*)(var4 + 4) + 8;
    return var1;
}
