#include "GameState/GameState.h"
struct Struct_0202df68 { unsigned char unknown_0_[0x58]; int unknown_58_; unsigned char unknown_5c_[0x194]; int unknown_1f0_; unsigned unknown_1f4_; };
extern "C" void func_0202e9a4(Struct_0202df68*,int);
extern "C" {
#if defined(jpn)
extern unsigned data_02104040;
#define InterpolationCounter data_02104040
#else
extern unsigned data_02104300;
#define InterpolationCounter data_02104300
#endif
// USA: func_0202f0e0
void func_0202f0e0(Struct_0202df68* arg0) {
 if(!arg0->unknown_1f4_) return;
 unsigned var0=GameState::GetInstance()->GetEffectiveDeltaTime();
 int var1=arg0->unknown_58_;
 int var2;
 if(var0>=arg0->unknown_1f4_) { arg0->unknown_1f4_=0; var2=arg0->unknown_1f0_; }
 else {
  float var3=(float)var1;
  float var4=(float)(arg0->unknown_1f0_-var1);
  float var5=(float)var0/(float)arg0->unknown_1f4_;
  var2=(int)(var3+var4*var5);
  arg0->unknown_1f4_-=var0;
  ++InterpolationCounter;
 }
 func_0202e9a4(arg0,var2);
}
}
