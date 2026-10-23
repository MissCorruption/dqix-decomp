#include <globaldefs.h>
#include "NitroSDK/Memory.h"

struct Struct_ov031_02209ff0_3 { unsigned char unknown_0_[0x30]; unsigned char unknown_30_; char unknown_31_[3]; unsigned char unknown_34_[0x20]; char unknown_54_[0x20]; unsigned char unknown_74_[0x20]; char unknown_94_[0x3c1]; unsigned char unknown_455_; };
struct Struct_ov031_02209ff0 { char unknown_0_[0xc]; Struct_ov031_02209ff0_3* unknown_c_; char unknown_10_[8]; unsigned short unknown_18_; char unknown_1a_[2]; void* unknown_1c_; };
struct Struct_ov031_02209ff0_2 { unsigned char unknown_0_, unknown_1_, unknown_2_, unknown_3_[2], unknown_5_, unknown_6_[3], unknown_9_, unknown_a_, unknown_b_[32], unknown_2b_, unknown_2c_[32]; };
extern void* (*data_ov031_0224c994)(unsigned int);
extern void (*data_ov031_0224c9c0)(void*);
extern unsigned short data_ov031_022496fc[] __attribute__((aligned(4)));
extern "C" unsigned int func_ov031_02207c98();
extern "C" void func_ov031_02209cf8(void*,int);
extern "C" void func_ov031_02207aa4(Struct_ov031_02209ff0_3*,void*,unsigned short);
extern "C" void func_ov031_022037a8(void*,int,int,int,Struct_ov031_02209ff0*);
extern "C" void func_ov031_022098ac(void*,int,int);

// USA: func_ov031_02209ff0
extern "C" ARM void func_ov031_02209ff0(Struct_ov031_02209ff0* arg0) {
    Struct_ov031_02209ff0_3* var0=arg0->unknown_c_;
    Struct_ov031_02209ff0_2* var1=(Struct_ov031_02209ff0_2*)data_ov031_0224c994(0x98);
    if(!var1) { var0->unknown_455_=9; return; }
    var1->unknown_9_=3; var1->unknown_a_=0;
    unsigned int var2=func_ov031_02207c98();
    var0->unknown_34_[0]=var2>>24; var0->unknown_34_[1]=var2>>16;
    var0->unknown_34_[2]=var2>>8; var0->unknown_34_[3]=var2;
    func_ov031_02209cf8(var0->unknown_34_+4,28);
    VectorizedInvertedMemcpy(var0->unknown_34_,var1->unknown_b_,32);
    func_ov031_02207aa4(var0,arg0->unknown_1c_,arg0->unknown_18_);
    int var3;
    char* var4;
    if(!var0->unknown_30_) { var1->unknown_2b_=0; var4=(char*)var1->unknown_2c_; }
    else { var1->unknown_2b_=32; VectorizedInvertedMemcpy(var0->unknown_74_,var1->unknown_2c_,32); var4=(char*)var1->unknown_2c_+32; }
    var3=0;
    var4[0]=0; var4[1]=4; var4+=2;
    do {
        var4[0]=data_ov031_022496fc[var3]>>8;
        var4[1]=data_ov031_022496fc[var3];
        var4+=2;
    } while((unsigned int)++var3<2);
    var4[0]=1; var4[1]=0;
    var4+=2;
    var3=var4-(char*)var1;
    var3-=5;
    int var5=var3-4;
    var1->unknown_0_=0x16; var1->unknown_1_=3; var1->unknown_2_=0;
    var1->unknown_3_[0]=var3>>8; var1->unknown_3_[1]=var3;
    var1->unknown_5_=1;
    var1->unknown_6_[0]=var5>>16;
    var1->unknown_6_[1]=var5>>8;
    var1->unknown_6_[2]=var5;
    func_ov031_022037a8(var1,var3+5,0,0,arg0);
    func_ov031_022098ac(var0,(int)&var1->unknown_5_,var3);
    data_ov031_0224c9c0(var1);
}
