#include <globaldefs.h>
#include "Resource/ActionDataTables.h"
#include "std_library_functions.h"
struct Struct_ov000_021537b8_5 {char unknown_0_[0x22];unsigned short unknown_22_0_:12,unknown_23_4_:2,unknown_23_6_:2;char unknown_24_[0x12];short unknown_36_;char unknown_38_[3];unsigned char unknown_3b_;};
struct GameObject {char unknown_0_[0x138];Struct_ov000_021537b8_5* unknown_138_;
#if defined(jpn)
char unknown_13c_[8];
#else
char unknown1_13c_[20];
#endif
unsigned char* unknown_150_;};
class GameState {public:static GameState* GetInstance();GameObject* GetCombatantByIndex(int);};
struct Struct_ov000_0215767c_8 {char unknown_0_[0x1c];short unknown_1c_,unknown_1e_;unsigned short unknown_20_;char unknown_22_[0xe];int unknown_30_;};
struct Struct_ov000_0215767c_9 {char unknown_0_[0xe];short unknown_e_;char unknown_10_[7];unsigned char unknown_17_;char unknown_18_[0xc];};
struct Struct_ov000_0215767c_10 {unsigned short unknown_0_;char unknown_2_[7];unsigned char unknown_9_;char unknown_a_;unsigned char unknown_b_0_:1,unknown_b_1_:7;char unknown_c_[4];Struct_ov000_0215767c_8* unknown_10_;char unknown_14_[0x14];};
struct Struct_ov000_0215767c_2 {char unknown_0_[0x8e00];unsigned char unknown_8e00_;char unknown_8e01_[0x17];char* unknown_8e18_;char unknown_8e1c_[0x58];Struct_ov000_0215767c_9* unknown_8e74_;char unknown_8e78_[8];unsigned char unknown_8e80_,unknown_8e81_;char unknown_8e82_[0x14];unsigned char unknown_8e96_;};
struct Struct_ov000_0215767c {char unknown_0_[0x18];unsigned int unknown_18_0_:5,unknown_18_5_:7,unknown_19_4_:20;char unknown_1c_[0x14];short unknown_30_;};
struct Struct_ov000_02182ae4 {short unknown_0_[8];};struct Struct_ov000_02182a74 {short unknown_0_[4];};struct Struct_ov000_0215767c_3 {char unknown_0_[0x678];};
extern "C" GameObject* func_0200ff1c(GameState*,int);extern "C" GameObject* func_0200fea4(GameState*,int);
extern "C" int func_ov000_02159c58(void*,int);extern "C" int func_0208555c(unsigned char*);struct Random;int NextRandomMax(Random*,int);
struct Struct_02088418;extern "C" int func_02088418(Struct_02088418*,int,int);extern "C" int func_ov000_02157cc4(GameObject*);extern "C" void func_02088474(void*,int,int);
extern "C" int func_ov000_02159d94(void*, int);extern "C" void func_0208a910(int*);struct Struct_02070b6c_3;extern "C" void* func_02070fd0(Struct_02070b6c_3*,int);
struct Struct_0204887c;extern "C" void func_0204887c(Struct_0204887c*,char*);extern "C" Struct_ov000_0215767c* func_02079e2c(char*,int);
extern "C" void func_ov000_02157cdc(void*);extern "C" void* func_ov000_0215e918(void*);extern "C" void func_02089758(unsigned char*);
extern "C" int func_ov000_02156050(GameObject*);extern "C" int func_ov000_021543f4(GameObject*);
struct Struct_ov000_0215767c_5;struct Struct_ov000_0215767c_4;extern "C" void func_ov000_021600cc(Struct_ov000_0215767c_5*,Struct_ov000_0215767c_4*);
struct Struct_ov000_0215767c_7;struct Struct_ov000_0215767c_6;extern "C" void func_ov000_02160068(Struct_ov000_0215767c_7*,Struct_ov000_0215767c_6*);
extern "C" {
extern const Struct_ov000_02182ae4 data_ov000_02182c54,data_ov000_02182c64;extern const Struct_ov000_02182a74 data_ov000_02182a74;
int func_ov000_0215e9fc(void*,short*,int,int);int func_ov000_02159cb4(void*,int);int func_ov000_02155f9c(void*,int,int);
void func_ov024_021f73b8(Struct_ov000_0215767c_3*);void func_ov024_021f8f20(Struct_ov000_0215767c_3*,void*,int,Struct_ov000_0215767c_10*);
int func_ov000_0215704c(void*,int);int func_0208a91c(int*,void*,int,int*,short*);
int func_ov000_0215833c(void*,int,Struct_ov000_0215767c_10*);int func_ov000_0215f67c(void*,int);
}
inline int inline_ov000_021537b8(int arg0){return (arg0>=0&&arg0<=3)?1:0;}
// USA: func_ov000_0215767c
extern "C" ARM void func_ov000_0215767c(Struct_ov000_0215767c_2* arg0,Struct_ov000_0215767c_10* arg1,Struct_ov000_0215767c_10* arg2){
 GameState* var0=GameState::GetInstance();Struct_02108e10* var1 = func_020797dc();int var2=(short)arg1->unknown_10_->unknown_20_;GameObject* var3=GameState::GetInstance()->GetCombatantByIndex(var2);if(!var3)return;
 Struct_ov000_02182ae4 var4(data_ov000_02182c54);signed char var5=0;bool var6=false;bool var7=false;arg0->unknown_8e96_=0;
 if(inline_ov000_021537b8(var2)){
  if(func_ov000_02159c58(arg0,arg1->unknown_0_)){
   var4.unknown_0_[var5++]=var2;Struct_ov000_02182a74 var8(data_ov000_02182a74);int var9=func_ov000_0215e9fc(arg0,var8.unknown_0_,4,1);
   if(var9!=4)arg1->unknown_0_=func_ov000_02159cb4(arg0,var2);
   else {var7=true;for(int var10=0;var10<var9;var10++){int var11=var8.unknown_0_[var10];if(var4.unknown_0_[0]!=var11)var4.unknown_0_[var5++]=var11;}}
  }else{
   var4.unknown_0_[var5++]=var2;GameObject* var12=func_0200ff1c(var0,var2);int var13=0;
   if(var12&&func_0208555c(var12->unknown_150_)&&!func_ov000_02155f9c(arg0,var2,0)&&!NextRandomMax((Random*)arg0,4)&&func_02088418((Struct_02088418*)var12->unknown_138_,9,0)){
    arg0->unknown_8e96_=func_ov000_02157cc4(var12);func_02088474(var12->unknown_138_,9,0);var13=1;
   }
   if(!var13&&arg1->unknown_0_!=0x1f6){Struct_ov000_0215767c_3 var14;func_ov024_021f73b8(&var14);func_ov024_021f8f20(&var14,arg0,var2,arg1);}
  }
 }else{
  var4.unknown_0_[var5++]=var2;GameObject* var15=func_0200fea4(GameState::GetInstance(),var2);int var16=func_ov000_02159d94(arg0, var2);int var17=1;
  if(func_ov000_0215704c(arg0,var2))var6=true;
  else if(arg1->unknown_0_==0x1f7&&!func_ov000_02155f9c(arg0,var2,1))var17=0;
  else if(var16==2)var17=0;
  if(!var17){
   Struct_ov000_02182ae4 var18(data_ov000_02182c64);int var19=0;int var20;func_0208a910(&var20);
   arg1->unknown_0_=func_0208a91c(&var20,arg0,(unsigned short)var2,&var19,var18.unknown_0_);Struct_ov000_0215767c* var21=func_02079e2c((char*)var1,(short)arg1->unknown_0_);
   if(var21){while(var21->unknown_18_5_==0x22){void* var22=func_02070fd0((Struct_02070b6c_3*)(arg0->unknown_8e18_+0x684),var21->unknown_30_);if(var22){func_0204887c((Struct_0204887c*)var15,(char*)var22);var15->unknown_138_->unknown_36_=var21->unknown_30_;}
    memset(var18.unknown_0_,-1,16);var19=0;arg1->unknown_0_=func_0208a91c(&var20,arg0,(unsigned short)var2,&var19,var18.unknown_0_);var21=func_02079e2c((char*)var1,(short)arg1->unknown_0_);if(!var21)break;
   }}
   arg1->unknown_9_=0;for(int var23=0;var23<var19;var23++){Struct_ov000_0215767c_9* var24=&arg0->unknown_8e74_[arg0->unknown_8e81_];func_ov000_02157cdc(var24);var24->unknown_e_=var18.unknown_0_[var23];var24->unknown_17_=1;func_ov000_021600cc((Struct_ov000_0215767c_5*)arg1,(Struct_ov000_0215767c_4*)var24);arg0->unknown_8e81_++;}
  }
 }
 for(signed char var25=0;var25<var5;var25++){
  Struct_ov000_0215767c_8* var26=(Struct_ov000_0215767c_8*)func_ov000_0215e918(arg0);if(!var26)break;memset(var26,0,0x30);var26->unknown_1c_=-1;var26->unknown_30_=0;int var27=var4.unknown_0_[var25];int var28=0;var26->unknown_20_=var27;
  if(!var7)var28=func_ov000_0215833c(arg0,var27,arg1);
  GameObject* var29=GameState::GetInstance()->GetCombatantByIndex(var27);if(var29)func_02089758((unsigned char*)var29->unknown_138_);
  if(!var28){
   if(func_ov000_02155f9c(arg0,var27,0)){arg1->unknown_0_=0x1f7;arg1->unknown_9_=0;if(func_ov000_02156050(var3))var3->unknown_138_->unknown_3b_|=2;}
   else if(var6){arg1->unknown_0_=0x1f7;arg1->unknown_9_=0;if((unsigned char)var3->unknown_138_->unknown_23_4_==1){arg0->unknown_8e96_=func_ov000_02157cc4(var3);func_02088474(var3->unknown_138_,10,0);var3->unknown_138_->unknown_3b_|=2;}}
   else if(func_ov000_021543f4(var3)){arg1->unknown_0_=func_ov000_0215f67c(arg0,var27);arg1->unknown_9_=0;}
  }
  func_ov000_02160068((Struct_ov000_0215767c_7*)arg2,(Struct_ov000_0215767c_6*)var26);arg0->unknown_8e00_++;
 }
 arg2->unknown_0_=arg1->unknown_0_;arg2->unknown_b_0_=arg1->unknown_b_0_;
}
