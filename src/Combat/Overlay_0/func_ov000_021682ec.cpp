#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Filesystem/BackgroundLoader.h"
#include "Filesystem/FileIO.h"
#include "Resource/GameResources.h"
struct Struct_ov000_021682ec {char unknown_0_[0x49c];unsigned char unknown_49c_0_:1,unknown_49c_1_:7;};
struct Struct_ov000_021682ec_2 {char unknown_0_[0x52c];SafeAllocator unknown_52c_,unknown_540_;};
struct Struct_ov000_021682ec_3 {char unknown_0_[0x13c];int* unknown_13c_;
#if defined(jpn)
char unknown_140_[4];
#else
char unknown1_140_[16];
#endif
Struct_ov000_021682ec* unknown_150_;Struct_ov000_021682ec_2* unknown_154_;};
inline int inline_ov000_021682ec(Struct_ov000_021682ec_3* arg0,int arg1){return arg0->unknown_13c_?(*arg0->unknown_13c_=arg1):0;}
struct Struct_ov000_021682ec_4 {signed char unknown_0_;unsigned char unknown_1_;short unknown_2_,unknown_4_;};
struct Struct_ov000_021682ec_5 {
#if defined(jpn)
char unknown_0_[0x79c6];
#else
char unknown1_0_[0x77d6];
#endif
Struct_ov000_021682ec_4 unknown_77d6_[4];unsigned char unknown_77ee_;inline int inline_ov000_021682ec_2(){return unknown_77ee_;}};
extern "C" GameObject* func_0200ff1c(GameState*,int);extern "C" int func_02046b08(void**);extern "C" void func_02072c9c(int,char*);
struct Struct_0203d028_11;extern "C" void func_0203dafc(Struct_0203d028_11*);struct Struct_02013fb4;extern "C" void func_ov000_0216d1c4(int,Struct_02013fb4*,int,int*);struct Struct_02010604;extern "C" void func_02033b88(Struct_02010604*,int);
extern "C" {int sprintf(char*,const char*,...);void func_ov000_0216867c(Struct_ov000_021682ec_5*,int);extern const char data_ov000_02183ad8[],data_ov000_02183ae0[],data_ov000_02183afb[],data_ov000_02183b03[];}
// USA: func_ov000_021682ec
extern "C" ARM void func_ov000_021682ec(Struct_ov000_021682ec_5* arg0){
 int var0=arg0->unknown_77ee_;BackgroundLoader* var1;GameState* var2;SafeAllocator* var3;int var4;Struct_ov000_021682ec_4* var5;GameObject* var6; if(var0==0)return;var2=GameState::GetInstance();var1=BackgroundLoader::GetInstance();void** var7=(void**)GetGameResources()->unknown_ptr_array_36fc[1];
 char var8[64];ObjectArchiveLoadInfo var9,var10;char var11[8];void* var12;unsigned int var13;const void* var14;unsigned int var15;int var16;
 for(var4=0;var4<arg0->inline_ov000_021682ec_2();var4++){
  var5=&arg0->unknown_77d6_[var4];
  if(var5->unknown_1_==0){
   if(!func_02046b08(var7))return;var6=func_0200ff1c(var2,var5->unknown_0_);if(var6)var6->obj3D_.RemoveAllAnimationPackages();var1->AddFence();func_02072c9c(var5->unknown_0_,var11);sprintf(var8,data_ov000_02183ad8,var11);
   if(var6&&((Struct_ov000_021682ec_3*)var6)->unknown_150_->unknown_49c_0_==1)var8[0]='w';
   var5->unknown_2_=var1->QueueLoadFileInGP2(data_ov000_02183ae0,var8,0);sprintf(var8,data_ov000_02183afb,var11);var5->unknown_4_=var1->QueueLoadFileInGP2(data_ov000_02183ae0,var8,0);var5->unknown_1_++;
  }else if(var5->unknown_1_==1){
   if(!var1->GetTaskStatus(var5->unknown_2_))continue;var6=func_0200ff1c(var2,var5->unknown_0_);
   if(var6&&var1->GetDetailedTaskStatus(var5->unknown_2_)==2){
    var1->GetLoadedFileByID(var5->unknown_2_,&var12,&var13);Struct_ov000_021682ec_2* var17=((Struct_ov000_021682ec_3*)var6)->unknown_154_;
    if(var17&&var12){var3=&var17->unknown_52c_;var3->Reset();func_0203dafc((Struct_0203d028_11*)&var9);var9.unk_10=1;var9.packageID=0;var9.fileData=var12;var9.unk_8=var13;var9.allocator=var3;var6->obj3D_.LoadFromCCHROrCMOTArchive(&var9,0);}
   }
   var1->RemoveTask(var5->unknown_2_);var5->unknown_2_=0xffff;var5->unknown_1_++;
  }else if(var5->unknown_1_==2){
   if(!var1->GetTaskStatus(var5->unknown_4_))continue;var6=func_0200ff1c(var2,var5->unknown_0_);
   if(var6&&var1->GetDetailedTaskStatus(var5->unknown_4_)==2){
    var1->GetLoadedFileByID(var5->unknown_4_,&var12,&var13);Struct_ov000_021682ec_2* var18=((Struct_ov000_021682ec_3*)var6)->unknown_154_;
    if(var18&&var12){var3=&var18->unknown_540_;var3->Reset();func_0203dafc((Struct_0203d028_11*)&var10);var10.unk_10=1;var10.packageID=1;var10.fileData=var12;var10.unk_8=var13;var10.allocator=var3;var6->obj3D_.LoadFromCCHROrCMOTArchive(&var10,0);
     if(FindFilesInNarcBySubstring(var12,data_ov000_02183b03,&var14,&var15,1)){func_ov000_0216d1c4((int)var3,(Struct_02013fb4*)var14,var15,&var16);inline_ov000_021682ec((Struct_ov000_021682ec_3*)var6,var16);}
     func_02033b88((Struct_02010604*)var6,0);
    }
   }
   var1->RemoveTask(var5->unknown_4_);var5->unknown_4_=0xffff;func_ov000_0216867c(arg0,var5->unknown_0_);
  }
 }
}
