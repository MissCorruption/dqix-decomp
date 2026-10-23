#include <globaldefs.h>
struct Struct_02000c9c_32 {char unknown_0_[0x34];unsigned short unknown_34_,unknown_36_;int inline_ov000_0215f7a8_3(){ return unknown_34_; }int inline_ov000_0215f7a8_2(){ return unknown_36_; }};
struct Struct_ov000_0215f7a8 {unsigned int unknown_0_;unsigned int unknown_4_0_:10,unknown_5_2_:22;};
struct GameObject {char unknown_0_[0x134];Struct_02000c9c_32* unknown_134_;void* unknown_138_;
#if defined(jpn)
char unknown_13c_[8];
#else
char unknown1_13c_[20];
#endif
Struct_ov000_0215f7a8* unknown_150_;};
class GameState {public:static GameState* GetInstance();GameObject* GetCombatantByIndex(int);};
extern "C" GameObject* func_0200ff1c(GameState*,int);
struct Random;Random* GetBTRandom();int NextRandomMax(Random*,int);
struct Struct_ov000_021540fc {char unknown_0_[0xc];int unknown_c_;};
struct Struct_ov000_0215767c_2 {char unknown_0_[0x8e18];Struct_ov000_021540fc* unknown_8e18_;int unknown_8e1c_;int unknown_8e20_;char unknown_8e24_[0x25];unsigned char unknown_8e49_;};
struct Struct_ov000_02182ae4 {short unknown_0_[8];};
extern "C" {extern const Struct_ov000_02182ae4 data_ov000_02182b94;extern const int data_ov000_02182c04[];int func_ov000_0215ed34(void*,short*,int);int func_ov000_0215eb1c(void*,short*,int,int);int func_ov000_0215e9fc(void*,short*,int,int);int func_ov000_02155f9c(void*,int,int);}
inline GameObject* inline_ov000_021537b8_2(int arg0){GameState* var0=GameState::GetInstance();return var0->GetCombatantByIndex(arg0);}
inline int inline_ov000_0215f7a8(Struct_02000c9c_32* arg0){int var0=arg0->inline_ov000_0215f7a8_2();int var1=arg0->inline_ov000_0215f7a8_3();return var1+var0;}
// USA: func_ov000_0215f7a8
extern "C" ARM int func_ov000_0215f7a8(Struct_ov000_0215767c_2* arg0,short* arg1,int arg2){
 Random* var0=GetBTRandom();if(arg0->unknown_8e18_->unknown_c_>=0)return 0;
 short var1[3];int var2=func_ov000_0215ed34(arg0,var1,3);short* var3=var1;for(int var4=0;var4<var2;var4++,var3++)if((unsigned int)(*var3-0x26)<=2)return 0;
 if(arg0->unknown_8e20_==0&&arg0->unknown_8e49_==1)return 1;
 int var5=0;int var6=0;Struct_ov000_02182ae4 var7(data_ov000_02182b94);short* var8=var7.unknown_0_;short var9=func_ov000_0215eb1c(arg0,var8,8,1);short var10=0;
 for(;var10<var9;var10++,var8++){if(!func_ov000_02155f9c(arg0,*var8,0))break;}
 if(var10==var9)return 1;
 var8=var7.unknown_0_;for(var10=0;var10<var9;var10++,var8++){GameObject* var11=inline_ov000_021537b8_2(*var8);if(var11)var6+=inline_ov000_0215f7a8(var11->unknown_134_);}
 var6/=var9;
 var8=var7.unknown_0_;var9=func_ov000_0215e9fc(arg0,var8,8,1);
 for(var10=0;var10<var9;var10++,var8++){GameObject* var12=inline_ov000_021537b8_2(*var8);if(var12)var5+=inline_ov000_0215f7a8(var12->unknown_134_);}
 var5/=var9;if(var6*3<=var5)return 1;
 GameState* var13=GameState::GetInstance();const int* var14=data_ov000_02182c04;int var15=0;
 for(int var16=0;var16<arg2;var16++,arg1++){GameObject* var17=func_0200ff1c(var13,*arg1);if(var17){int var18=10+(int)(0.05f*(float)(unsigned short)var17->unknown_150_->unknown_4_0_);if(var15<var18)var15=var18;}}
 if(var15<var14[arg0->unknown_8e1c_])var15=var14[arg0->unknown_8e1c_];
 arg0->unknown_8e1c_++;return NextRandomMax(var0,100)<var15;
}
