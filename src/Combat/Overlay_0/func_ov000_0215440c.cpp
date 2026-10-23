#include <globaldefs.h>
#include "Resource/ActionDataTables.h"
#include "std_library_functions.h"
struct Struct_ov000_021537b8_5 { char unknown_0_[0x2e]; short unknown_2e_; };
struct GameObject { char unknown_0_[0x138]; Struct_ov000_021537b8_5* unknown_138_; char unknown_13c_[0x17c - 0x13c]; unsigned char unknown_17c_; char unknown_17d_[2]; unsigned char unknown_17f_; unsigned char unknown_180_; };
class GameState {public: static GameState* GetInstance();GameObject* GetCombatantByIndex(int);};
struct Struct_02010088;extern "C" int func_02010088(Struct_02010088*);
extern "C" int func_ov000_02153c0c(GameObject*);
extern "C" GameObject* func_0200fea4(GameState*,int);
extern "C" int func_ov000_0215fc60(char*);
struct Struct_ov000_021537b8_4 {char unknown_0_[8];unsigned int unknown_8_0_:8,unknown_9_0_:2,unknown_9_2_:22;char unknown_c_[8];unsigned int unknown_14_0_:28,unknown_17_4_:4;unsigned int unknown_18_0_:5,unknown_18_5_:7,unknown_19_4_:20;unsigned int unknown_1c_0_:14,unknown_1d_6_:5,unknown_1e_3_:13;};
extern "C" Struct_ov000_021537b8_4* func_02079e2c(char*,int);extern "C" int func_ov000_02159d94(void*, int);
struct Random;extern "C" int func_ov000_0215fbe0(Random*,int);int NextRandomMax(Random*,int);
struct Entry { char unknown_0_[0x20]; short unknown_20_; };
struct Struct_ov000_0215440c_3 { short unknown_0_; char unknown_2_[7]; unsigned char unknown_9_; char unknown_a_[6]; Entry* unknown_10_; };
struct Struct_ov000_0215440c_2;struct Struct_ov000_0215440c_4 { char unknown_0_[0x20]; unsigned short unknown_20_; };extern "C" Struct_ov000_0215440c_4* func_ov000_02160094(Struct_ov000_0215440c_2*,int);
struct Struct_ov000_0215440c;struct Struct_ov000_0215440c_5 { char unknown_0_[0xe]; short unknown_e_; };extern "C" Struct_ov000_0215440c_5* func_ov000_021600f8(Struct_ov000_0215440c*,int);
struct Struct_ov000_0215440c_6 { unsigned char unknown_0_; unsigned char unknown_1_0_:4,unknown_1_4_:2,unknown_1_6_:2; char unknown_2_[4]; unsigned char unknown_6_[8]; unsigned char unknown_e_0_:4,unknown_e_4_:4; char unknown_f_[0x18-0xf]; };
struct Struct_ov000_02182ae4 { short unknown_0_[8]; };
extern "C" {extern const Struct_ov000_02182ae4 data_ov000_02182c84;extern const Struct_ov000_02182ae4 data_ov000_02182b64;extern const Struct_ov000_02182ae4 data_ov000_02182ae4;
int func_ov000_02153e78(Random*,short*,int,int,int);int func_ov000_0215eb1c(Random*,short*,int,int);int func_ov000_0215e9fc(Random*,short*,int,int);int func_ov000_02154a04(Random*,int,int,short*);}
inline int inline_ov000_0215440c(Entry* arg0){return arg0->unknown_20_;}
inline int inline_ov000_0215440c(Struct_ov000_021537b8_5* arg0){return arg0->unknown_2e_;}
inline int inline_ov000_0215440c(Struct_ov000_0215440c_5* arg0){return arg0->unknown_e_;}
inline int inline_ov000_0215440c(Struct_ov000_02182ae4* arg0,int arg1){return arg0->unknown_0_[arg1];}
inline GameObject* inline_ov000_0215440c_2(int arg0){return func_0200fea4(GameState::GetInstance(),arg0);}
inline GameObject* inline_ov000_021537b8_2(int arg0){return GameState::GetInstance()->GetCombatantByIndex(arg0);}
// USA: func_ov000_0215440c
extern "C" ARM int func_ov000_0215440c(Random* arg0,Struct_ov000_0215440c_3* arg1,short* arg2){
 Struct_02108e10* var0 = func_020797dc();
 if(func_ov000_0215fc60((char*)arg0)){
  Struct_ov000_0215440c_4* var1=func_ov000_02160094((Struct_ov000_0215440c_2*)arg1,0);
  if(var1){int var2=(var1->unknown_20_>=0xc0&&var1->unknown_20_<=0xc7)?1:0;if(var2){arg2[0]=0;return 1;}}
 }
 Struct_ov000_021537b8_4* var3=func_02079e2c((char*)var0,arg1->unknown_0_);if(!var3)return 0;
 int var4=0;
 GameObject* var5=inline_ov000_0215440c_2(inline_ov000_0215440c(arg1->unknown_10_));if(!var5)return var4;
 int var6=0;
 if(func_ov000_02159d94(arg0, inline_ov000_0215440c(arg1->unknown_10_))!=2){
  if(var5->unknown_17f_){
   if((var3->unknown_17_4_==2||var3->unknown_17_4_==5)&&var3->unknown_9_0_==1){
    GameObject* var7=inline_ov000_021537b8_2(inline_ov000_0215440c(var5->unknown_138_));
    if(var7&&!func_02010088((Struct_02010088*)var7)&&!func_ov000_02153c0c(var7)){arg2[0]=inline_ov000_0215440c(var5->unknown_138_);var4++;var6=1;}
   }
  }else if(var5->unknown_180_)var6=1;
 }
 if(!var6){
  if(var3->unknown_17_4_==4||var3->unknown_17_4_==3){
   Struct_ov000_02182ae4 var8=data_ov000_02182c84;short* var9=var8.unknown_0_;int var10=var5->unknown_17c_;short var11=0;
   if(var3->unknown_9_0_==2){
    if(arg1->unknown_9_){
     Struct_ov000_0215440c_5* var12=func_ov000_021600f8((Struct_ov000_0215440c*)arg1,0);
     if(var12){GameObject* var13=inline_ov000_0215440c_2(inline_ov000_0215440c(var12));if(var13)var10=var13->unknown_17c_;}
    }
    if(var3->unknown_17_4_==4)var11=func_ov000_02153e78(arg0,var8.unknown_0_,8,var10,0);
    else if(var3->unknown_17_4_==3)var11=func_ov000_0215eb1c(arg0,var8.unknown_0_,8,0);
   }else if(var3->unknown_9_0_==1){
    var11=func_ov000_0215e9fc(arg0,var9,8,0);
   }
   if(var3->unknown_18_5_==0x21){
    Struct_ov000_0215440c_6* var14=(Struct_ov000_0215440c_6*)((char*)arg0+0x81b0);int var15=0;int var16=0;
    for(int var17=0;var17<var14->unknown_1_4_;var17++){var15+=var14[var17].unknown_e_4_;Struct_ov000_02182ae4 var18=data_ov000_02182b64;var16+=func_ov000_02153e78(arg0,var18.unknown_0_,8,var17,0);}
    if(var15>=5){memcpy(arg2,&var8,sizeof(var8));return var11;}
    if(var16>5)var16=5;
    var4=0;int var19=var16-var15;
    for(int var20=0;var20<var14->unknown_1_4_;var20++){
     for(int var21=0;var21<var14[var20].unknown_e_0_;var21++){
      int var22=var14[var20].unknown_6_[var21]+0xc0;
      GameObject* var23=GameState::GetInstance()->GetCombatantByIndex((short)var22);
      if(!var23)continue;
      if(func_ov000_02153c0c(var23))continue;
      if(func_02010088((Struct_02010088*)var23)){if(var19>0){arg2[var4]=var22;var4++;var19--;}}
      else{arg2[var4]=var22;var4++;}
      if(var4>=5)break;
     }
    }
   }else{
    for(long var24=0;var24<var11;var24++){
     short var25=var9[var24];
     GameState* var26=GameState::GetInstance();
     GameObject* var27=var26->GetCombatantByIndex(var25);
     if(var3->unknown_18_5_==0x12||var3->unknown_18_5_==0x21||(!func_02010088((Struct_02010088*)var27)&&!func_ov000_02153c0c(var27))){arg2[var4]=var9[var24];var4++;}
    }
   }
  }else{
   for(int var28=0;var28<arg1->unknown_9_;var28++){
    Struct_ov000_0215440c_5* var29=func_ov000_021600f8((Struct_ov000_0215440c*)arg1,var28);
    GameObject* var30=inline_ov000_021537b8_2(inline_ov000_0215440c(var29));
    if(!var30)continue;
    if(var3->unknown_18_5_==0x12||var3->unknown_18_5_==0x21||(!func_02010088((Struct_02010088*)var30)&&!func_ov000_02153c0c(var30))){arg2[var4]=inline_ov000_0215440c(var29);var4++;}
   }
  }
 }
 if(var4>0){
  Struct_ov000_02182ae4 var31=data_ov000_02182ae4;short* var32=var31.unknown_0_;
  int var33=func_ov000_0215fbe0(arg0,(signed char)var3->unknown_1d_6_);
  if(var33>0){for(int var34=0;var34<var33;var34++){var32[var34]=arg2[NextRandomMax(arg0,var4)];}memset(arg2,0,var4*2);memcpy(arg2,var31.unknown_0_,var33*2);var4=var33;}
  return var4;
 }
 return func_ov000_02154a04(arg0,(unsigned short)inline_ov000_0215440c(arg1->unknown_10_),(unsigned short)arg1->unknown_0_,arg2);
}
