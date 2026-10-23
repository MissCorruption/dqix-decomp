#include <globaldefs.h>
struct Struct_ov000_021573a8_2 { unsigned short unknown_0_,unknown_2_,unknown_4_,unknown_6_; char unknown_8_[0x41];unsigned char unknown_49_; };
struct Struct_ov000_021573a8 { char unknown_0_[0x10];unsigned int unknown_10_0_:19,unknown_12_3_:1,unknown_12_4_:12; };
struct GameObject { char unknown_0_[0x138];Struct_ov000_021573a8_2* unknown_138_;char unknown_13c_[0xc];Struct_ov000_021573a8* unknown_148_; unsigned int inline_ov000_021573a8()const{return unknown_138_->unknown_2_;} unsigned int inline_ov000_021573a8_2()const{return unknown_138_->unknown_6_;} };
class GameState {public:static GameState* GetInstance();GameObject* GetCombatantByIndex(int);};
extern "C" GameObject* func_0200ff1c(GameState*,int);extern "C" GameObject* func_0200fea4(GameState*,int);
struct Struct_02085c80 {char unknown_0_[0x29c];unsigned int unknown_29c_0_:4,unknown_29c_4_:5,unknown_29d_1_:23;char unknown_2a0_[0xc];short unknown_2ac_;};
extern "C" unsigned char* func_02053c6c(unsigned char*);
extern "C" float func_02084fc8(char*);extern "C" int func_02085c80(Struct_02085c80*);
struct Random;int NextRandomMax(Random*,int);float NextRandomFloatBetween(Random*,float,float);
#define IsParty(n) ((n)>=0&&(n)<=3?1:0)
// USA: func_ov000_021573a8
extern "C" ARM int func_ov000_021573a8(Random* arg0,int arg1,int arg2,int arg3){
 if(arg3<=0)return 0;
 GameState* var0=GameState::GetInstance();
 GameObject* var1=GameState::GetInstance()->GetCombatantByIndex(arg2);
 if(!var1)return 0;
 float var2;
 if(IsParty(arg1)) {
  GameObject* var3=func_0200ff1c(var0,arg1);if(!var3)return 0;
  Struct_02085c80* var4=(Struct_02085c80*)func_02053c6c((unsigned char*)var3);if(!var4)return 0;
  if(var4->unknown_2ac_<=0)return 0;if(var4->unknown_29c_4_!=3)return 0;
  {unsigned int var5=var3->inline_ov000_021573a8_2();unsigned int var6=var3->inline_ov000_021573a8();if(var6>=var5)return 0;}
  float var7=(float)(int)var1->unknown_138_->unknown_49_;if(var7<=0)return 0;
  var7/=100.0f;
  float var8=func_02084fc8((char*)var4);
  float var9=(float)func_02085c80(var4);
  float var10=(var8+var9)/100.0f;
  float var11=(float)arg3*var10;
  int var12=NextRandomMax(arg0,2);
  float var13=NextRandomFloatBetween(arg0,0,var11);
  var2=1.0f+(float)var12;
  var2+=var7*var13;
  if(var8+var9<var2)var2=var8+var9;
  unsigned int var14=var1->unknown_138_->unknown_2_;if((float)var14<var2)var2=(float)var14;
 }else {
  GameObject* var15=func_0200fea4(GameState::GetInstance(),arg1);if(!var15)return 0;
  if(!var15->unknown_148_)return 0;if(!var15->unknown_148_->unknown_12_3_)return 0;
  if(var15->unknown_138_->unknown_2_<0xff&&var15->unknown_138_->unknown_2_>=var15->unknown_138_->unknown_6_)return 0;
  int var16=NextRandomMax(arg0,2);
  var2=0.1f*(float)arg3;
  var2+=1.0f+(float)var16;
  unsigned int var17=var1->unknown_138_->unknown_2_;if((float)var17<var2)var2=(float)var17;
 }
 return (int)var2;
}
