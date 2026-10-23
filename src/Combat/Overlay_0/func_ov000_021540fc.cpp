#include <globaldefs.h>
#include "Resource/ActionDataTables.h"
#include "std_library_functions.h"
struct GameObject {char unknown_0_[0x138];void* unknown_138_;
#if defined(jpn)
char unknown_13c_[8];
#else
char unknown1_13c_[20];
#endif
unsigned char* unknown_150_;};
class GameState {public:static GameState* GetInstance();};
struct Struct_ov000_021537b8_4 {char unknown_0_[8];unsigned int unknown_8_0_:8,unknown_9_0_:2,unknown_9_2_:22;char unknown_c_[8];unsigned int unknown_14_0_:28,unknown_17_4_:4;unsigned int unknown_18_0_:5,unknown_18_5_:7,unknown_19_4_:20;unsigned int unknown_1c_0_:14,unknown_1d_6_:5,unknown_1e_3_:13;};
extern "C" Struct_ov000_021537b8_4* func_02079e2c(char*,int);extern "C" GameObject* func_0200ff1c(GameState*,int);extern "C" int func_ov000_021543f4(GameObject*);
struct Struct_ov000_021540fc {unsigned short unknown_0_;unsigned char unknown_2_,unknown_3_;};struct Struct_02053dc0;extern "C" Struct_ov000_021540fc* func_02053dc0(Struct_02053dc0*);
extern "C" int func_02083b00(unsigned char*,int);extern "C" void func_ov000_02153cc0(int,int,int*);
struct Random;extern "C" int func_ov000_0215fbe0(Random*,int);int NextRandomMax(Random*,int);
struct Struct_ov000_021540fc_2 {unsigned int unknown_0_0_:1,unknown_0_1_:1,unknown_0_2_:30;};struct Struct_ov000_02182ae4 {short unknown_0_[8];};
extern "C" {extern const Struct_ov000_02182ae4 data_ov000_02182b74;int func_ov000_02153f98(void*,int,int,short*);void func_ov000_02153aa4(void*,int,int*);void func_ov000_02153c24(void*,int*);int func_ov000_02153e78(void*,short*,int,int,int);int func_ov000_0215eb1c(void*,short*,int,int);int func_ov000_0215e9fc(void*,short*,int,int);}
// USA: func_ov000_021540fc
extern "C" ARM int func_ov000_021540fc(Random* arg0,int arg1,int arg2,short* arg3){
 GameState* var0=GameState::GetInstance();Struct_ov000_021537b8_4* var1=func_02079e2c((char*)func_020797dc(),(short)arg2);if(!var1)return 0;
 GameObject* var2=func_0200ff1c(var0,arg1);if(!var2)return 0;
 if(func_ov000_021543f4(var2))return func_ov000_02153f98(arg0,arg1,arg2,arg3);
 Struct_ov000_021540fc* var3=func_02053dc0((Struct_02053dc0*)var2);if(!var3)return 0;
 int var4=0;int var5=var1->unknown_9_0_;int var6=var1->unknown_17_4_;
 if(var6==6){if(func_02083b00(var2->unknown_150_,0xe6))var6=3;else var6=2;}
 if(var6==5){Struct_ov000_021540fc_2* var7=(Struct_ov000_021540fc_2*)(var2->unknown_150_+0x2f4);if(!var7)return 0;if(var7->unknown_0_1_)var6=3;else if(var7->unknown_0_0_)var6=4;else var6=2;}
 if(var6==1){arg3[var4++]=arg1;}
 else if(var5==1){
  if(var6==2){int var8=var3->unknown_2_;func_ov000_02153aa4(arg0,var3->unknown_3_,&var8);arg3[var4++]=var8;}
  else if(var6==4){int var9=var3->unknown_3_;func_ov000_02153c24(arg0,&var9);var4=func_ov000_02153e78(arg0,arg3,8,var9,1);}
  else if(var6==3)var4=func_ov000_0215eb1c(arg0,arg3,8,1);
 }else if(var5==2){
  if(var6==2||var6==7||var6==8){int var10=var3->unknown_2_;if(var1->unknown_18_5_!=0x12)func_ov000_02153cc0((int)arg0,arg1,&var10);arg3[var4++]=var10;}
  else if(var6==3||var6==4){if(var1->unknown_18_5_!=0x21)var4=func_ov000_0215e9fc(arg0,arg3,8,1);else var4=func_ov000_0215e9fc(arg0,arg3,8,0);}
 }
 Struct_ov000_02182ae4 var11(data_ov000_02182b74);short* var12=var11.unknown_0_;int var13=func_ov000_0215fbe0(arg0,(signed char)var1->unknown_1d_6_);
 if(var13>0){for(int var14=0;var14<var13;var14++){var12[var14]=arg3[NextRandomMax(arg0,var4)];}memset(arg3,0,var4*2);memcpy(arg3,var11.unknown_0_,var13*2);var4=var13;}
 return var4;
}
