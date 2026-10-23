#include <globaldefs.h>

struct Struct_ov001_0215af34 { unsigned int unknown_0_; Struct_ov001_0215af34* unknown_4_; };
extern "C" void func_ov017_021d6148(Struct_ov001_0215af34* arg0, unsigned int arg1);
typedef void (*Type_ov001_0215af34)(Struct_ov001_0215af34*, float);

extern "C" float func_ov017_021d6110(void*);
extern "C" double func_02009598(double, double);

// USA: func_ov001_0215af8c
extern "C" ARM int func_ov001_0215af8c(void* arg0) {
    float var0 = func_ov017_021d6110(arg0);
    float var1 = func_ov017_021d6110((char*)arg0 + 0x8);
    double var2 = (double)var0;
    double var3 = (double)var1;
    float var4 = (float)func_02009598(var2, var3);
    ((Type_ov001_0215af34)func_ov017_021d6148)((Struct_ov001_0215af34*)((char*)arg0 + 0x10), var4);
    return 1;
}
