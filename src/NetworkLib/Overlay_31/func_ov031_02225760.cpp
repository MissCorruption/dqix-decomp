#include <globaldefs.h>

struct Struct_ov031_02225760_3 { unsigned char unknown_0_[0x30]; int* unknown_30_; };

struct Struct_ov031_02225760 { int unknown_0_; };
struct Struct_ov031_02225760_2 { int unknown_0_; };

extern Struct_ov031_02225760_3* data_ov031_02250bfc;
extern "C" void func_ov031_02224ca4(int arg0, int arg1, struct Struct_ov031_02225760 arg2, struct Struct_ov031_02225760_2 arg3);
extern "C" void func_ov031_0223e2b8(void* arg0, int arg1);
extern "C" void func_ov031_022257d4(void* arg0);

// USA: func_ov031_02225760
extern "C" ARM void func_ov031_02225760(void* arg0) {
    Struct_ov031_02225760_3* var0 = data_ov031_02250bfc;
    int var1 = *var0->unknown_30_;
    unsigned char var2 = *((unsigned char*)var0 + 0x11d);
    struct Struct_ov031_02225760_2 var3;
    struct Struct_ov031_02225760 var4;
    var3.unknown_0_ = (unsigned int)(var1 & 0x1ff0000) >> 0x10;
    var4.unknown_0_ = (var1 & 0xff) + 0xc;
    func_ov031_02224ca4(var2, 0, var4, var3);
    if (var4.unknown_0_ < 0xc0) return;
    func_ov031_0223e2b8(arg0, (int)func_ov031_022257d4);
}
