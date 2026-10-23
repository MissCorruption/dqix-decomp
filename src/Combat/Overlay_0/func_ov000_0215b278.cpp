#include <globaldefs.h>
#include "std_library_functions.h"
union Struct_ov000_021573a8_2 { struct { short unknown1_0_,unknown1_2_; }; struct { unsigned short unknown_0_,unknown_2_; }; };
struct GameObject { char unknown_0_[0x138]; Struct_ov000_021573a8_2* unknown_138_; int inline_ov000_0215b278() const { return unknown_138_->unknown1_0_; } int inline_ov000_0215b278_2() const { return unknown_138_->unknown1_2_; } };
class GameState { public: static GameState* GetInstance(); GameObject* GetCombatantByIndex(int); };
struct Struct_ov000_0215440c_2 { void* unknown_0_; void* unknown_4_; unsigned char unknown_8_; };
struct Struct_ov000_0215b278 { void* unknown_0_[6]; char unknown_18_[4]; short unknown_1c_,unknown_1e_; unsigned short unknown_20_,unknown_22_,unknown_24_; unsigned char unknown_26_[6],unknown_2c_,unknown_2d_; char unknown_2e_[2]; int unknown_30_; };
struct Struct_ov000_021537b8 { unsigned short unknown_0_; char unknown_2_[9]; unsigned char unknown_b_; };
struct Struct_ov000_0215b278_2 { char unknown_0_[0xe]; unsigned short unknown_e_; char unknown_10_[7]; unsigned char unknown_17_; };
struct Struct_ov000_0215b278_3 { char unknown_0_[0x20]; int unknown_20_; };
extern "C" Struct_ov000_0215b278* func_ov000_02160094(Struct_ov000_0215440c_2*,int);
extern "C" void* func_ov000_0215e9d8(void*);
extern "C" void func_ov000_02160030(void*);
extern "C" void* func_ov000_0215e918(void*);
extern "C" void* func_ov000_0215e938(void*);
extern "C" void func_ov000_02157cdc(void*);
extern "C" void func_ov000_0215ffc4(void*,void*,int);
extern "C" void func_ov000_0215a88c(void*,void*,int);
struct Struct_ov000_0215767c_7; struct Struct_ov000_0215767c_6; struct Struct_ov000_0215767c_5; struct Struct_ov000_0215767c_4;
extern "C" void func_ov000_02160068(Struct_ov000_0215767c_7*,Struct_ov000_0215767c_6*);
extern "C" void func_ov000_021600cc(Struct_ov000_0215767c_5*,Struct_ov000_0215767c_4*);
extern "C" { Struct_ov000_0215b278_3* func_ov000_0215e958(void*); void func_ov000_0215ccbc(void*,Struct_ov000_0215b278_3*,GameObject*,short,short,short,unsigned long long,unsigned char); }
inline int inline_ov000_021537b8(unsigned short arg0) { int var0=0; if(arg0<=3) var0=1; return var0; }
struct Struct_ov000_0215440c { unsigned short unknown_0_; char unknown_2_[7]; unsigned char unknown_9_; };
struct Entry { char unknown_0_[0xe]; short unknown_e_; char unknown_10_[0xd]; unsigned char unknown_1d_0_:1, unknown_1d_1_:1, unknown_1d_2_:6; };
extern "C" Entry* func_ov000_021600f8(Struct_ov000_0215440c*,int);
// USA: func_ov000_0215b278
extern "C" ARM void func_ov000_0215b278(unsigned char* arg0,Struct_ov000_0215440c* arg1) {
 if(arg1->unknown_0_!=0x20b) return;
 for(int var0=0;var0<arg1->unknown_9_;var0++) {
  Entry* var1=func_ov000_021600f8(arg1,var0);
  if(!var1) continue;
  int var2=var1->unknown_e_;
  GameState* var3=GameState::GetInstance();
  GameObject* var4=var3->GetCombatantByIndex(var2);
  if(!var4) continue;
  Struct_ov000_021537b8* var5=(Struct_ov000_021537b8*)func_ov000_0215e9d8(arg0);
  if(!var5) continue; func_ov000_02160030(var5);
  Struct_ov000_0215b278* var6=(Struct_ov000_0215b278*)func_ov000_0215e918(arg0);
  if(!var6) continue; memset(var6,0,0x30);var6->unknown_1c_=-1;var6->unknown_30_=0;
  Struct_ov000_0215b278_2* var7=(Struct_ov000_0215b278_2*)func_ov000_0215e938(arg0);
  if(!var7) continue;func_ov000_02157cdc(var7);
  var5->unknown_0_=0x3b1;
  var6->unknown_20_=var1->unknown_e_;var6->unknown_22_=var4->unknown_138_->unknown_0_;var6->unknown_24_=var4->unknown_138_->unknown_2_;
  memcpy(var7,var1,0x24);
  func_ov000_02160068((Struct_ov000_0215767c_7*)var5,(Struct_ov000_0215767c_6*)var6);
  func_ov000_021600cc((Struct_ov000_0215767c_5*)var5,(Struct_ov000_0215767c_4*)var7);
  var5->unknown_b_|=4;
  (*(int*)(arg0+0x8e24))++; arg0[0x8e00]++;arg0[0x8e01]++;
  if(var1->unknown_1d_1_) {
   Struct_ov000_021537b8* var8=(Struct_ov000_021537b8*)func_ov000_0215e9d8(arg0);
   if(!var8) continue;func_ov000_02160030(var8);
   var6=(Struct_ov000_0215b278*)func_ov000_0215e918(arg0);
   if(!var6) continue;memset(var6,0,0x30);var6->unknown_1c_=-1;var6->unknown_30_=0;
   Struct_ov000_0215b278_2* var9=(Struct_ov000_0215b278_2*)func_ov000_0215e938(arg0);
   if(!var9) continue;func_ov000_02157cdc(var9);
   Struct_ov000_0215b278_3* var10=func_ov000_0215e958(arg0);
   if(!var10)continue;memset(var10,0,0x20);var10->unknown_20_=0;
   var8->unknown_0_=0x39c;
   var6->unknown_20_=var1->unknown_e_;var6->unknown_22_=var4->unknown_138_->unknown_0_;var6->unknown_24_=var4->unknown_138_->unknown_2_;
   var8->unknown_b_|=4;
   {int var11=var4->inline_ov000_0215b278_2();int var12=var4->inline_ov000_0215b278();
   func_ov000_0215ccbc(arg0,var10,var4,0,var12,var11,0,0);}
   func_ov000_0215a88c(arg0,var10,0x35);
   var9->unknown_e_=var1->unknown_e_;var9->unknown_17_=1;
   func_ov000_0215ffc4(var9,var10,0);
   arg0[0x8e02]++;
   func_ov000_02160068((Struct_ov000_0215767c_7*)var8,(Struct_ov000_0215767c_6*)var6);
   func_ov000_021600cc((Struct_ov000_0215767c_5*)var8,(Struct_ov000_0215767c_4*)var9);
   (*(int*)(arg0+0x8e24))++; arg0[0x8e00]++;arg0[0x8e01]++;arg0[0x8e02]++;
  }
 }
}
