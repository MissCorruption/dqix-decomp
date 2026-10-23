#include <globaldefs.h>

struct Struct_ov001_0215af34 { unsigned int unknown_0_; Struct_ov001_0215af34* unknown_4_; };
extern "C" void func_ov017_021d6148(Struct_ov001_0215af34* arg0, unsigned int arg1);
typedef void (*Type_ov001_0215af34)(Struct_ov001_0215af34*, float);

extern "C" float func_ov017_021d6110(void*);
extern "C" double func_02008dcc(double);

// USA: func_ov001_0215af60
extern "C" ARM int func_ov001_0215af60(void* arg0) {
    float var0 = func_ov017_021d6110(arg0);
    float var1 = (float)func_02008dcc((double)(var0));
    ((Type_ov001_0215af34)func_ov017_021d6148)((Struct_ov001_0215af34*)((char*)arg0 + 0x8), var1);
    return 1;
}
