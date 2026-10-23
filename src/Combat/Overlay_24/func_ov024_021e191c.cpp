#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"
struct Struct_ov024_021dd028_5;
extern "C" int func_ov024_021dd260(Struct_ov024_021dd028_5*);
extern "C" int func_020881c4(unsigned char*);
extern "C" void func_02088220(void*, int);
extern "C" void func_02088150(void*);
extern "C" void* func_ov000_0215e958(void*);
extern "C" void func_ov000_0215a88c(void*,void*,int);
extern "C" void func_ov000_0215ffc4(void*,void*,int);
extern "C" void func_ov000_02159eac(void*,unsigned long long*,int);
extern "C" void func_ov000_0215cd44(void*,void*,GameObject*,short,unsigned long long,unsigned char);
extern "C" void func_ov000_0215af54(void*,int,int);
struct Struct_ov024_021e191c_3 {char unknown_0_[0x1c];unsigned char unknown_1c_0_:7;unsigned char unknown_1c_7_:1;unsigned char unknown_1d_;};
struct Struct_ov024_021e191c_4 {char unknown_0_[0xc];Struct_ov024_021e191c_3* unknown_c_;void* unknown_10_;char unknown_14_[0x58];unsigned char unknown_6c_;char unknown_6d_[7];unsigned char unknown_74_;};
struct Struct_ov024_021e191c_5 {unsigned int unknown_0_0_:12;unsigned int unknown_1_4_:20;};
struct Struct_ov024_021e191c {char unknown_0_[4];Struct_ov024_021e191c_5 unknown_4_;};
struct Struct_ov024_021e191c_2 {char unknown_0_[0x24];unsigned char unknown_24_;};
// USA: func_ov024_021e191c
extern "C" ARM void* func_ov024_021e191c(Struct_ov024_021e191c_4* arg0,int arg1,int arg2,Struct_ov024_021e191c* arg3){
 GameObject* var0=GetCombatantByID((int)arg0->unknown_10_,arg2);
 if(!var0)return 0;
 unsigned long long var1=0;
 if(func_ov024_021dd260((Struct_ov024_021dd028_5*)var0) || !func_020881c4((unsigned char*)var0->currentStats_)){
  void* var2=func_ov000_0215e958(arg0->unknown_10_);
  if(!var2)return 0;
  func_ov000_0215a88c(arg0->unknown_10_,var2,0x1f);
  func_ov000_0215cd44(arg0->unknown_10_,var2,var0,0,0,arg0->unknown_c_->unknown_1c_7_!=0);
  func_ov000_0215ffc4(arg0->unknown_c_,var2,0);
  ++*((unsigned char*)arg0->unknown_10_+0x8e02);
  arg0->unknown_74_=1;
 }else{
  int var3=((Struct_ov024_021e191c_2*)var0->currentStats_)->unknown_24_;
  int var4=var3;
  void* var5=func_ov000_0215e958(arg0->unknown_10_);
  if(!var5)return 0;
  func_ov000_0215cd44(arg0->unknown_10_,var5,var0,var3,var1,arg0->unknown_c_->unknown_1c_7_!=0);
  func_ov000_0215ffc4(arg0->unknown_c_,var5,0);
  ++*((unsigned char*)arg0->unknown_10_+0x8e02);
  func_ov000_0215a88c(arg0->unknown_10_,var5,0x1bc);
  if(arg3->unknown_4_.unknown_0_0_==0x20b){
   if(arg0->unknown_6c_ || var3>=3)var3=3;
   else var3=2;
  }
  if(var3<3){
  int var6=0;
  while(var3<3){
   ++var3;
   switch(var3){case 1:var6=0x31;break;case 2:var6=0x32;break;case 3:var6=0x33;break;}
   var1=0;
   func_ov000_02159eac(arg0->unknown_10_,&var1,0x23);
   void* var7=func_ov000_0215e958(arg0->unknown_10_);
   if(!var7)return 0;
   func_ov000_0215cd44(arg0->unknown_10_,var7,var0,var3,var1,arg0->unknown_c_->unknown_1c_7_!=0);
   func_ov000_0215ffc4(arg0->unknown_c_,var7,0);
   ++*((unsigned char*)arg0->unknown_10_+0x8e02);
   arg0->unknown_74_=1;
   func_ov000_0215a88c(arg0->unknown_10_,var7,var6);
  }
  func_02088220(var0->currentStats_,3);
  }
  if(arg0->unknown_6c_ || var4>=3){
   void* var8=func_ov000_0215e958(arg0->unknown_10_);
   if(!var8)return 0;
   func_02088150(var0->currentStats_);
   func_ov000_0215a88c(arg0->unknown_10_,var8,0x34);
   func_ov000_02159eac(arg0->unknown_10_,&var1,7);
   func_ov000_0215cd44(arg0->unknown_10_,var8,var0,4,var1,arg0->unknown_c_->unknown_1c_7_!=0);
   func_ov000_0215ffc4(arg0->unknown_c_,var8,0);
   ++*((unsigned char*)arg0->unknown_10_+0x8e02);
   arg0->unknown_74_=1;
   if(arg3->unknown_4_.unknown_0_0_==0x20b)arg0->unknown_c_->unknown_1d_|=2;
   else func_ov000_0215af54(arg0->unknown_10_,arg2,0);
  }
 }
 return 0;
}
