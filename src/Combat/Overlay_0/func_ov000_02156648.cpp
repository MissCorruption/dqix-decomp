#include <globaldefs.h>
struct Struct_ov000_021537b8_5 {char unknown_0_[0x10];unsigned int unknown_10_0_:10,unknown_11_2_:10,unknown_12_4_:10,unknown_13_6_:2;unsigned int unknown_14_;};
struct GameObject {char unknown_0_[0x138];Struct_ov000_021537b8_5* unknown_138_;
#if defined(jpn)
char unknown_13c_[8];
#else
char unknown1_13c_[20];
#endif
unsigned char* unknown_150_;
};
class GameState {public:static GameState* GetInstance();GameObject* GetCombatantByIndex(int);};
extern "C" GameObject* func_0200ff1c(GameState*,int);
extern "C" int func_ov000_02156af0(GameObject*);extern "C" int func_ov000_02156b08(GameObject*);extern "C" int func_ov000_02156b20(GameObject*);
extern "C" void func_02088aa8(unsigned char*);extern "C" void func_02088af0(unsigned char*);
extern "C" int func_020851d8(unsigned char*);extern "C" int func_02085204(unsigned char*);
struct Random {char unknown_0_[0x8e95];unsigned char unknown_8e95_;};int NextRandomMax(Random*,int);float NextRandomFloatBetween(Random*,float,float);
struct Struct_ov000_02156648 {char unknown_0_[0x1c];unsigned char unknown_1c_;};
struct Struct_ov000_021537b8 {char unknown_0_[0xa];unsigned char unknown_a_;};
struct Struct_ov000_0215440c_3 {unsigned int unknown_0_;unsigned int unknown_4_0_:12,unknown_5_4_:10,unknown_6_6_:10;unsigned int unknown_8_0_:8,unknown_9_0_:2,unknown_9_2_:22;unsigned int unknown_c_;unsigned int unknown_10_;unsigned int unknown_14_0_:7,unknown_14_7_:7,unknown_15_6_:7,unknown_16_5_:11;unsigned int unknown_18_0_:16,unknown_1a_0_:2,unknown_1a_2_:9,unknown_1b_3_:5;};
extern "C" {int func_ov000_02156068(void*,int,int,int);float func_ov000_02156b38(void*,int,int);}
#define IsParty(n) ((n)>=0&&(n)<=3?1:0)
struct Struct_02000c9c_27 {char unknown_0_[0xe95];unsigned char unknown_e95_;};
inline void inline_ov000_02156648(Random* arg0,int arg1){((Struct_02000c9c_27*)((char*)arg0+0x8000))->unknown_e95_=arg1;}
// USA: func_ov000_02156648
extern "C" ARM int func_ov000_02156648(Random* arg0,int arg1,int arg2,Struct_ov000_02156648* arg3,Struct_ov000_0215440c_3* arg4,Struct_ov000_021537b8* arg5,unsigned char arg6){
 GameState* var0=GameState::GetInstance();GameObject* var1=GameState::GetInstance()->GetCombatantByIndex(arg2);
 arg0->unknown_8e95_=0;
 if(arg4->unknown_4_0_!=0x150){
  if(var1&&func_ov000_02156af0(var1)&&arg4->unknown_9_0_==1){arg3->unknown_1c_|=0x40;return 0;}
  if(var1&&func_ov000_02156b08(var1)&&arg4->unknown_9_0_==1){arg3->unknown_1c_|=0x20;return 0;}
 }
 if((arg4->unknown_10_&0x40)&&var1){
  if(var1->unknown_138_->unknown_14_&0x100000){arg5->unknown_a_|=8;arg3->unknown_1c_|=8;func_02088aa8((unsigned char*)var1->unknown_138_);return 0;}
  if(var1->unknown_138_->unknown_14_&0x200000){arg5->unknown_a_|=0x10;arg3->unknown_1c_|=0x10;func_02088af0((unsigned char*)var1->unknown_138_);return 0;}
 }
 if(arg6)return 1;
 if(func_ov000_02156068(arg0,arg2,0,1)&&!(arg4->unknown_10_&0x1000000))return 0;
 float var2=100.0f;int var3=NextRandomMax(arg0,100);
 if(IsParty(arg1)){
  GameObject* var4=func_0200ff1c(var0,arg1);if(!var4)return 0;
  if((arg4->unknown_10_&0x40000)&&func_020851d8(var4->unknown_150_))return 1;
  if((arg4->unknown_10_&0x10000)&&func_02085204(var4->unknown_150_)){if(NextRandomMax(arg0,4)==0)return 0;}
 }
 if(arg4->unknown_1a_0_==1){
  if(IsParty(arg1)){
   GameObject* var5=func_0200ff1c(var0,arg1);if(!var5)return 0;
   unsigned int var6=(unsigned short)var5->unknown_138_->unknown_11_2_;unsigned int var7=(unsigned short)var5->unknown_138_->unknown_12_4_;
   unsigned int var8=0;int var9=0;
   if(arg4->unknown_10_&0x4000){var8=var6;var9=1;}else if(arg4->unknown_10_&0x8000){var8=var7;var9=1;}
   if(var9){
    if(var8<=arg4->unknown_5_4_)var2=(float)arg4->unknown_14_7_;
    else if(var8>=arg4->unknown_6_6_)var2=(float)arg4->unknown_15_6_;
    else {unsigned int var10=arg4->unknown_14_7_;float var11=(float)(var8-arg4->unknown_5_4_);float var12=(float)(arg4->unknown_15_6_-var10);float var13=(float)(arg4->unknown_6_6_-arg4->unknown_5_4_);var2=(float)(var10+(int)(var11*(var12/var13)));}
   }else{float var14=(float)arg4->unknown_14_7_;float var15=(float)arg4->unknown_15_6_;var2=(float)(int)NextRandomFloatBetween(arg0,var14,var15);}
  }else var2=(float)arg4->unknown_14_0_;
  float var16=func_ov000_02156b38(arg0,arg2,arg4->unknown_1b_3_);
  if(var16>0.0f){if(arg5->unknown_a_&1)return 1;if(var16<1.0f)inline_ov000_02156648(arg0,1);if(var2<100.0f)inline_ov000_02156648(arg0,1);}
  var2=0.5f+var2*var16;
 }
 if(arg4->unknown_10_&8){GameObject* var17=GameState::GetInstance()->GetCombatantByIndex(arg1);if(func_ov000_02156b20(var17)){if(NextRandomMax(arg0,8)<5)return 0;}}
 return var3<(int)var2;
}
