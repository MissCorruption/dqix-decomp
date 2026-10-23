#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

struct Struct_ov024_021de274 {
    unsigned int unknown_0_0_ : 10;
    unsigned int unknown_1_2_ : 10;
    unsigned int unknown_2_4_ : 10;
    unsigned int unknown_3_6_ : 2;
};

struct Struct_ov024_021de274_2 {
    char unknown_0_[0x20];
    struct Struct_ov024_021de274 unknown_20_;
    struct Struct_ov024_021de274 unknown_24_;
};

struct Struct_ov024_021de274_3 { unsigned char unknown_0_0_ : 7; unsigned char unknown_0_7_ : 1; };

struct Struct_ov024_021de274_4 {char unknown_0_[0x20]; short unknown_20_;};
struct Struct_ov024_021de274_5 {char unknown_0_[0x10];Struct_ov024_021de274_4* unknown_10_;};
struct Struct_ov024_021de274_6 {char unknown_0_[4];Struct_ov024_021de274_5* unknown_4_;void* unknown_8_;void* unknown_c_;void* unknown_10_;char unknown_14_[0x61];unsigned char unknown_75_;};

struct Struct_ov000_021584e8;

extern "C" unsigned short func_ov024_021da644(int arg0, int arg1, int arg2);
extern "C" struct Struct_ov000_021584e8* func_ov000_0215e958(void* arg0);
extern "C" void func_ov000_0215a88c(void* arg0, void* arg1, int arg2);
extern "C" short func_ov000_0215a1d4(void* arg0, int arg1, int arg2, short* arg3);
extern "C" void func_ov000_02159eac(void* arg0, unsigned long long* arg1, int arg2);
extern "C" short func_ov000_0215a124(void* arg0, int arg1, int arg2);
extern "C" void func_ov000_0215ccbc(void* arg0, struct Struct_ov000_021584e8* arg1, GameObject* arg2,
                            short arg3, short arg4, short arg5, unsigned long long arg6, unsigned char arg7);

static inline int inline_ov024_021dc540(GameObject* arg0) { SDK_NULL_ASSERT(arg0); return arg0->currentStats_->primaryStats.currHP; }

extern "C" void func_ov000_0215fe84(void*,void*,int);
extern "C" void func_ov024_021e8bf0(Struct_ov024_021de274_6*,void*,unsigned short*);
static inline int inline_ov000_021537b8(int arg0){return arg0>=0 && arg0<=3;}
// USA: func_ov024_021de274
extern "C" ARM Struct_ov000_021584e8* func_ov024_021de274(Struct_ov024_021de274_6* arg0,short arg1,int arg2,Struct_ov024_021de274_2* arg3,int arg4,int arg5,unsigned char arg6){
 GameObject* var0;
 GameObject* var1;
 int var2;
 int var3=arg4;
 var0=GetCombatantByID((int)arg0->unknown_10_,arg0->unknown_4_->unknown_10_->unknown_20_);
 if(!var0)return 0;
 var1=GetCombatantByID((int)arg0->unknown_10_,arg2);
 if(!var1)return 0;
 var2=arg6;
 int var4=var1->currentStats_->primaryStats.currMP;
 if(var4<arg4)arg4=var4;
 unsigned long long var5=0;
 unsigned long long var6=0;
 unsigned short var7=0;
 if(var2 && arg4>0){
  var7=func_ov024_021da644(arg2,arg3->unknown_20_.unknown_2_4_,arg3->unknown_24_.unknown_0_0_);
  func_ov000_02159eac(arg0->unknown_10_,&var5,1);
  func_ov000_02159eac(arg0->unknown_10_,&var5,0x2a);
 }else{
#if defined(jpn)
  if(var3<=0)var7=0x1b;
  else var7=0x1f;
#else
  if(var3>0)var7=0x1f;
  else var7=func_ov024_021da644(arg2,0x26d,0x1b);
#endif
  arg4=0;
  arg0->unknown_75_=0;
 }
 short var8=var1->currentStats_->primaryStats.currMP;
 int var9=1;
 if(!inline_ov000_021537b8(arg2) && var1->currentStats_->primaryStats.currMP>=0xff)var9=0;
 if(var9)var8=func_ov000_0215a124(arg0->unknown_10_,arg2,arg4);
 if((unsigned short)arg0->unknown_4_->unknown_10_->unknown_20_!=arg2){
  short var10=0;
  short var11=func_ov000_0215a1d4(arg0->unknown_10_,arg1,arg4,&var10);
  if(var2 && arg4>0){
   func_ov000_02159eac(arg0->unknown_10_,&var6,0x22);
   Struct_ov000_021584e8* var12=func_ov000_0215e958(arg0->unknown_10_);
   if(!var12)return 0;
   func_ov000_0215a88c(arg0->unknown_10_,var12,0x26c);
   func_ov000_0215ccbc(arg0->unknown_10_,var12,var0,-arg4,var0->currentStats_->primaryStats.currHP,var11,var6,0);
   func_ov000_0215fe84(arg0->unknown_8_,var12,0);
   ++*((unsigned char*)arg0->unknown_10_+0x8e02);
  }
 }
 Struct_ov000_021584e8* var13=func_ov000_0215e958(arg0->unknown_10_);
 if(!var13)return 0;
 func_ov024_021e8bf0(arg0,arg0->unknown_c_,&var7);
 func_ov000_0215a88c(arg0->unknown_10_,var13,var7);
 Struct_ov024_021de274_3* var14=(Struct_ov024_021de274_3*)((char*)arg0->unknown_c_+0x1c);
 func_ov000_0215ccbc(arg0->unknown_10_,var13,var1,arg4,inline_ov024_021dc540(var1),var8,var5,var14->unknown_0_7_!=0);
 return var13;
}
