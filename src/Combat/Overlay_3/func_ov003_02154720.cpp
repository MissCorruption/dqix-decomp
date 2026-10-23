#include <globaldefs.h>
#include "GameState/GameState.h"
#if defined(jpn)
enum { Enum_ov003_02154720_76=0x48 };
#else
enum { Enum_ov003_02154720_76=0x4c };
#endif
struct Struct_02000c9c_81 { unsigned int unknown_0_; unsigned short unknown_4_,unknown_6_,unknown_8_,unknown_a_; unsigned char unknown_c_,unknown_d_,unknown_e_[2]; };
struct Struct_ov003_02154720 { char unknown_0_[0xf78]; unsigned char unknown_f78_[4],unknown_f7c_; };
struct Struct_ov003_02154720_2 {
 void* unknown_0_;void* unknown_4_;void* unknown_8_;void* unknown_c_;void* unknown_10_;void* unknown_14_;void* unknown_18_;void* unknown_1c_;void* unknown_20_;void* unknown_24_;void* unknown_28_;
 char unknown_2c_[0x54];char unknown_80_[0xc];char unknown_8c_[4];char unknown_90_[0x54];char unknown_e4_[0x18];char unknown_fc_[0x18];char unknown_114_[Enum_ov003_02154720_76];
 char unknown_160_[0x10];unsigned char unknown_170_,unknown_171_;char unknown_172_[2];unsigned int unknown_174_;
 char unknown_178_[0x18];Struct_02000c9c_81 unknown_190_[4];int unknown_1d0_,unknown_1d4_,unknown_1d8_;unsigned int unknown_1dc_;
 short unknown_1e0_,unknown_1e2_,unknown_1e4_,unknown_1e6_,unknown_1e8_,unknown_1ea_,unknown_1ec_,unknown_1ee_,unknown_1f0_;
 unsigned char unknown_1f2_[4],unknown_1f6_,unknown_1f7_,unknown_1f8_,unknown_1f9_,unknown_1fa_,unknown_1fb_;unsigned int unknown_1fc_;int unknown_200_,unknown_204_;
 char unknown_208_[0x330-0x208];int unknown_330_,unknown_334_;unsigned char unknown_338_,unknown_339_,unknown_33a_;
};
extern "C" void func_02074af4(void*);
extern "C" void func_0205a444(char*);
struct Struct_02081ee4;
struct Struct_02081ee4_2;
extern "C" void func_02081ee4(Struct_02081ee4*, Struct_02081ee4_2*);
extern "C" void func_0208247c(void*);
struct Struct_0201099c_14;
extern "C" void func_020dfc40(Struct_0201099c_14*);
extern "C" void func_ov023_021e20c0(void*);
extern "C" void func_020de848(void*);
extern "C" unsigned int func_020100a8(GameState*);
extern "C" void* memset(void*,int,unsigned int);
extern "C" unsigned int func_020114ec(char*, void*);
extern "C" void func_ov003_0215873c(void*);
// USA: func_ov003_02154720
extern "C" ARM void func_ov003_02154720(void* arg0,unsigned char arg1) {
 unsigned char var0=arg1;
 Struct_ov003_02154720_2* var1=(Struct_ov003_02154720_2*)arg0;
 Struct_ov003_02154720* var2;
 unsigned char var3;
 int var4;
 GameState* var5;
 int var6;
 var1->unknown_170_=0;var1->unknown_171_=0;func_02074af4(var1->unknown_160_);
 var1->unknown_174_=(*(volatile unsigned int*)0x04000000&0x1f00)>>8;
 *(volatile unsigned int*)0x04000000=(*(volatile unsigned int*)0x04000000&~0x1f00)|0x100;
 var5=GameState::GetInstance();
 var2=(Struct_ov003_02154720*)func_02010828(var5);
 var1->unknown_0_=0;var1->unknown_4_=0;var1->unknown_c_=0;var1->unknown_8_=0;var1->unknown_10_=0;var1->unknown_14_=0;var1->unknown_18_=0;var1->unknown_20_=0;var1->unknown_24_=0;var1->unknown_28_=0;
 func_0205a444((char*)var1->unknown_2c_);
 func_02081ee4((Struct_02081ee4*)var1->unknown_80_, (Struct_02081ee4_2*)var1->unknown_8c_);
 func_0208247c(var1->unknown_90_);
 func_020dfc40((Struct_0201099c_14*)var1->unknown_e4_);
 func_020dfc40((Struct_0201099c_14*)var1->unknown_fc_);
 func_ov023_021e20c0(var1->unknown_114_);
 func_020de848(var1->unknown_178_);
 var1->unknown_1d0_=-1;var1->unknown_1d4_=0;var1->unknown_1d8_=0;var1->unknown_1dc_=0;
 var1->unknown_1e0_=-1;var1->unknown_1e2_=-1;var1->unknown_1e4_=-1;var1->unknown_1e6_=-1;var1->unknown_1e8_=-1;var1->unknown_1ea_=-1;var1->unknown_1ee_=-1;var1->unknown_1ec_=var1->unknown_1ee_;var1->unknown_1f0_=-1;
 var1->unknown_1f7_=func_020100a8(var5);
 var1->unknown_1f8_=0;var1->unknown_1f9_=0;var1->unknown_1fa_=0;var1->unknown_1fb_=0;var1->unknown_1fc_=0;var1->unknown_200_=0;var1->unknown_204_=0;
 var1->unknown_330_=0;var1->unknown_334_=0;var1->unknown_338_=0;var1->unknown_339_=0;var1->unknown_33a_=0;
 for(var6=0;var6<4;var6++) { var1->unknown_1f2_[var6]=0;memset(&var1->unknown_190_[var6],0,4); }
 var1->unknown_1f6_=func_020114ec((char*)var5, var1->unknown_1f2_);
 Struct_ov003_02154720* var7=(Struct_ov003_02154720*)func_02010828(var5);
 var3=var1->unknown_1f6_;
 for(int var8=0;var8<var3;var8++) {
  int var9;
  bool var10=false;
  var9=(signed char)var1->unknown_1f2_[var8];
  for(int var11=0;var11<var7->unknown_f7c_;var11++) if(var9==var7->unknown_f78_[var11]) var10=true;
  if(!var10) { var1->unknown_1f2_[var8]=0xff;var1->unknown_1f6_--; }
 }
 for(var4=0;var4<var3-1;var4++) {
  if(var1->unknown_1f2_[var4]==0xff) for(int var12=var4+1;var12<var3;var12++) if(var1->unknown_1f2_[var12]!=0xff) {var1->unknown_1f2_[var4]=var1->unknown_1f2_[var12];var1->unknown_1f2_[var12]=0xff;break;}
 }
 func_ov003_0215873c(var1);
 if(var0) var1->unknown_1fc_|=1;
 var1->unknown_1fb_=var2->unknown_f7c_!=1;
}
