#include <globaldefs.h>

struct Struct_ov031_02225580_2 { int unknown_0_; int unknown_4_; };
struct Struct_ov031_02222ddc_6 { int unknown_0_, unknown_4_; Struct_ov031_02225580_2* unknown_8_; };
extern "C" Struct_ov031_02225580_2* func_ov031_0223baa0(Struct_ov031_02222ddc_6* arg0, int arg1);

struct Struct_ov031_02225580 { unsigned char unknown_0_[0xfc]; Struct_ov031_02222ddc_6* unknown_fc_; };
extern Struct_ov031_02225580* data_ov031_02250bfc;

struct Struct_ov031_02225580_3 { int unknown_0_; };
struct Struct_ov031_02225580_4 { int unknown_0_; };
extern "C" void func_ov031_02224ca4(int arg0, int arg1, struct Struct_ov031_02225580_3 arg2, struct Struct_ov031_02225580_4 arg3);
extern "C" void func_ov031_0223e2b8(void* arg0, int arg1);
extern "C" void func_ov031_02225604(void* arg0);

// USA: func_ov031_02225580
extern "C" ARM void func_ov031_02225580(void* arg0) {
    Struct_ov031_02225580_2* var0 = func_ov031_0223baa0(data_ov031_02250bfc->unknown_fc_, 0);
    int var1 = var0->unknown_0_;
    Struct_ov031_02225580* var2 = data_ov031_02250bfc;
    unsigned char var3 = *((unsigned char*)var2 + 0x11d);
    struct Struct_ov031_02225580_4 var4;
    struct Struct_ov031_02225580_3 var5;
    var4.unknown_0_ = (unsigned int)(var1 & 0x1ff0000) >> 0x10;
    var5.unknown_0_ = (var1 & 0xff) + 0xc;
    func_ov031_02224ca4(var3, 4, var5, var4);
    if (var5.unknown_0_ < 0xc0) return;
    func_ov031_0223e2b8(arg0, (int)func_ov031_02225604);
}
