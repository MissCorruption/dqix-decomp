#include <globaldefs.h>
#include "Resource/ActionDataTables.h"
struct Struct_ov000_021537b8_5 {unsigned short unknown_0_,unknown_2_;char unknown_4_[0x1d];unsigned char unknown_21_;char unknown_22_[0x1a];unsigned char unknown_3c_;};
struct GameObject {char unknown_0_[0xc1];unsigned char unknown_c1_0_:4,unknown_c1_4_:4;char unknown_c2_[0x76];Struct_ov000_021537b8_5* unknown_138_;
#if defined(jpn)
char unknown_13c_[8];
#else
char unknown1_13c_[20];
#endif
unsigned char* unknown_150_;};
class GameState {public:static GameState* GetInstance();GameObject* GetCombatantByIndex(int);};
extern "C" GameObject* func_0200ff1c(GameState*,int);extern "C" int func_ov000_02153a8c(GameObject*);extern "C" int func_ov000_0215fc60(char*);
struct Struct_ov000_021537b8_4 {char unknown_0_[8];unsigned int unknown_8_0_:8,unknown_9_0_:24;unsigned int unknown_c_,unknown_10_;char unknown_14_[4];unsigned int unknown_18_0_:12,unknown_19_4_:4,unknown_1a_0_:16;};
extern "C" Struct_ov000_021537b8_4* func_02079e2c(char*,int);extern "C" int func_02083b00(unsigned char*,int);extern "C" unsigned int func_020dd290(void*,unsigned int);extern "C" void func_ov000_0215a124(void*,int,int);extern "C" void* func_ov000_02160130();extern "C" void* func_ov000_02160f08(void*);
struct Struct_ov000_021537b8_6;extern "C" void func_ov000_02176150(Struct_ov000_021537b8_6*,unsigned short);extern "C" void func_02088db8(unsigned char*);struct Struct_02010604;extern "C" void func_02033b88(Struct_02010604*,int);
struct Struct_ov000_021537b8 {unsigned short unknown_0_,unknown_2_;char unknown_4_[5];unsigned char unknown_9_;};
struct Struct_ov000_021537b8_2 {char unknown_0_[0xe];short unknown_e_;char unknown_10_[0x3c];int unknown_4c_;
#if defined(jpn)
char unknown_50_[0x438];
#else
char unknown1_50_[0x3f8];
#endif
};
struct Struct_ov000_021537b8_3 {char unknown_0_[0x958];Struct_ov000_021537b8_2 unknown_958_[4];};
struct Struct_ov000_02182e24 {short unknown_0_,unknown_2_,unknown_4_;};extern "C" const Struct_ov000_02182e24 data_ov000_02182e24[];
inline int inline_ov000_021537b8(int arg0){return (arg0>=0&&arg0<=3)?1:0;}
inline GameObject* inline_ov000_021537b8_2(int arg0){GameState* var0=GameState::GetInstance();return var0->GetCombatantByIndex(arg0);}
// USA: func_ov000_021537b8
extern "C" ARM void func_ov000_021537b8(void* arg0,int arg1,Struct_ov000_021537b8* arg2){
 GameState* var0=GameState::GetInstance();GameObject* var1=inline_ov000_021537b8_2(arg1);if(!var1)return;if(func_ov000_0215fc60((char*)arg0))return;
 Struct_ov000_021537b8_4* var2=func_02079e2c((char*)func_020797dc(),(short)arg2->unknown_0_);if(!var2)return;
 int var3=1;if(!inline_ov000_021537b8(arg1)&&var1->unknown_138_->unknown_2_>=255)var3=0;if(func_ov000_02153a8c(var1))var3=0;
 if(var3){
  int var4=var2->unknown_8_0_;if(inline_ov000_021537b8(arg1)){GameObject* var5=func_0200ff1c(var0,arg1);if(var5&&func_02083b00(var5->unknown_150_,0x106))var4=func_020dd290(var5,var4);}
  int var6=0;if(var2->unknown_8_0_<255){if(var1->unknown_138_->unknown_2_<var4)var6=1;}else if(var1->unknown_138_->unknown_2_==0)var6=1;
  if(!var6){
   func_ov000_0215a124(arg0,arg1,var4);Struct_ov000_021537b8_3* var7=(Struct_ov000_021537b8_3*)func_ov000_02160f08(func_ov000_02160130());Struct_ov000_021537b8_2* var8;
   if(inline_ov000_021537b8(arg1)){for(int var9=0;var9<4;var9++){if(var7->unknown_958_[var9].unknown_4c_==arg1){var8=&var7->unknown_958_[var9];goto found;}}}
   var8=0;
found:
   if(var8){int var10=var1->unknown_138_->unknown_2_;func_ov000_02176150((Struct_ov000_021537b8_6*)var8,var10);var8->unknown_e_=var10;}
  }else{
   unsigned short var11=0x1f8;if(var2->unknown_19_4_==1)var11=0x3a9;arg2->unknown_2_=arg2->unknown_0_;arg2->unknown_9_=0;arg2->unknown_0_=var11;
   if(var2->unknown_10_&1)var1->unknown_138_->unknown_3c_|=8;else var1->unknown_138_->unknown_3c_|=0x20;return;
  }
 }
 if(arg2->unknown_0_==0x1dc){func_02088db8((unsigned char*)var1->unknown_138_);var1->unknown_c1_4_=1;func_02033b88((Struct_02010604*)var1,0);return;}
 unsigned char var12=0;int var13=0;const Struct_ov000_02182e24* var14=data_ov000_02182e24;
 while(var14->unknown_0_!=-1){if(var14->unknown_0_==arg2->unknown_0_){var12=(unsigned char)var14->unknown_2_;var13=(unsigned char)var14->unknown_4_;break;}var14++;}
 var1->unknown_138_->unknown_21_=var12;var1->unknown_c1_4_=(unsigned char)var13;func_02033b88((Struct_02010604*)var1,0);
}
