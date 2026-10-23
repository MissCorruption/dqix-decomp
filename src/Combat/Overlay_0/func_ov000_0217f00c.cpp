#include <globaldefs.h>
#include "Input/Input.h"
struct Struct_ov000_021700dc {char unknown_0_[0x10];signed char unknown_10_[8],unknown_18_;char unknown_19_[0x17];signed char* unknown_30_;signed char unknown_34_;char unknown_35_[3];void* unknown_38_;char unknown_3c_[0x10];int unknown_4c_;
#if defined(jpn)
char unknown_50_[0x431];
#else
char unknown1_50_[0x3f1];
#endif
unsigned char unknown_441_;char unknown_442_[6];};
struct Struct_ov000_021682ec_5 {char unknown_0_[0x6c];signed char unknown_6c_[4];char unknown_70_[4];signed char unknown_74_[4],unknown_78_;char unknown_79_[0x9f];int unknown_118_;char unknown_11c_[0x60];int unknown_17c_;char unknown_180_[0x7d8];Struct_ov000_021700dc unknown_958_[4];};
struct Struct_0205d81c;extern "C" unsigned char* func_0205d81c(Struct_0205d81c*,int);struct Struct_ov000_02171640;extern "C" int func_ov000_02171698(Struct_ov000_02171640*);struct Struct_ov000_02171968;extern "C" int func_ov000_021719c0(Struct_ov000_02171968*);extern "C" int func_0205bafc(void*);extern "C" void func_02050400(unsigned char*,int);extern "C" void func_ov000_0217f78c(void*);
extern "C" {void func_ov000_0217fa60(void*);void func_ov000_02174c14(void*);void func_ov000_0217f304(void*,int,int,void*);int func_ov000_021700dc(void*);void func_ov000_0217edd4(void*,signed char*,signed char*);void func_ov000_0217ee7c(signed char*,signed char*,signed char,int);void func_ov000_02176634(void*,void*,int,int,int);int func_ov000_0217c158(void*);void func_ov000_02177038(void*,void*,int,int,int);}
// USA: func_ov000_0217f00c
extern "C" ARM void func_ov000_0217f00c(Struct_ov000_021682ec_5* arg0,int arg1,int arg2){
 if(arg0->unknown_17c_<0){if(g_keyManager.TestKeysPressed(0x802)||g_touchInput.pressed_){func_ov000_0217fa60(arg0);func_ov000_02174c14(arg0);}return;}
 for(int var0=0;var0<4;var0++){
  Struct_ov000_021700dc* var1=&arg0->unknown_958_[arg0->unknown_6c_[var0]];if(arg0->unknown_17c_!=var1->unknown_4c_)continue;
  unsigned char* var2;func_ov000_0217f304(arg0,arg1,arg2,var1);int var3=func_ov000_021700dc(var1);
  switch(var3){
  case -3:func_ov000_0217fa60(arg0);func_ov000_02174c14(arg0);break;
  case -2:func_ov000_0217f78c(arg0);break;
  case 15:case 16:case 17:case 18:{
   int var4=0;func_ov000_0217edd4(arg0,arg0->unknown_74_,&arg0->unknown_78_);signed char var5=arg0->unknown_78_;var1->unknown_30_=arg0->unknown_74_;var1->unknown_34_=var5;var1->unknown_441_=arg1;func_ov000_02176634(arg0,var1,var3,arg1,arg2);
   var2=func_0205d81c((Struct_0205d81c*)var1->unknown_38_,(unsigned char)var3);
   if(var3==15){if(func_ov000_02171698((Struct_ov000_02171640*)var1)>4)var4=1;}
   else if(var3==16){if(func_ov000_021719c0((Struct_ov000_02171968*)var1)>4)var4=1;}
   else if(var3==17){if(func_0205bafc((char*)var1->unknown_38_+0x54)>4)var4=1;}
   if(var2)func_02050400(var2,var4);break;
  }
  case 19:{
   func_ov000_0217edd4(arg0,arg0->unknown_74_,&arg0->unknown_78_);func_ov000_0217ee7c(arg0->unknown_74_,&arg0->unknown_78_,-1,1);signed char var6=arg0->unknown_78_;var1->unknown_30_=arg0->unknown_74_;var1->unknown_34_=var6;var1->unknown_441_=arg1;func_ov000_02176634(arg0,var1,var3,arg1,arg2);break;}
  case 20:{
   func_ov000_0217edd4(arg0,arg0->unknown_74_,&arg0->unknown_78_);func_ov000_0217ee7c(arg0->unknown_74_,&arg0->unknown_78_,(signed char)var1->unknown_4c_,2);signed char var7=arg0->unknown_78_;var1->unknown_30_=arg0->unknown_74_;var1->unknown_34_=var7;var1->unknown_441_=arg1;func_ov000_02176634(arg0,var1,var3,arg1,arg2);break;}
  default:func_ov000_02176634(arg0,var1,var3,arg1,arg2);break;
  }
  if(func_ov000_0217c158(var1))arg0->unknown_118_=1;
  func_ov000_02177038(arg0,var1,var1->unknown_10_[var1->unknown_18_],arg1,arg2);break;
 }
}
