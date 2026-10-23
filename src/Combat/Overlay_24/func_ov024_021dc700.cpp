#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"
extern "C" void* func_02010828(GameState*);
struct Struct_02048150;
extern "C" int func_02086ef0(Struct_02048150*, int);
extern "C" void func_ov000_0215a8d4(unsigned char*, int);
extern "C" short func_ov000_0215a16c(void*,int,int,short*);
extern "C" void* func_ov000_0215e958(void*);
extern "C" void func_ov000_0215a004(void*,int,int,int,void*,void*,int,int);
extern "C" void func_ov000_02159eac(void*,void*,int);
extern "C" void func_ov000_0215a88c(void*,void*,int);
extern "C" unsigned short func_ov024_021da644(int,int,int);
extern "C" void func_ov000_0215ccbc(void*,void*,GameObject*,short,short,short,unsigned long long,unsigned char);
struct Struct_ov024_021dc700_3 {char unknown_0_[0x1c];unsigned char unknown_1c_0_:7;unsigned char unknown_1c_7_:1;};
struct Struct_ov024_021dc700_4 {char unknown_0_[0xc];Struct_ov024_021dc700_3* unknown_c_;void* unknown_10_;char unknown_14_[0x6d-0x14];unsigned char unknown_6d_;};
struct Struct_ov024_021dc700_5 {unsigned int unknown_0_0_:10;unsigned int unknown_1_2_:10;unsigned int unknown_2_4_:10;unsigned int unknown_3_6_:2;};
struct Struct_ov024_021dc700 {unsigned int unknown_0_0_:12;unsigned int unknown_1_4_:20;};
struct Struct_ov024_021dc700_2 {char unknown_0_[4];Struct_ov024_021dc700 unknown_4_;char unknown_8_[0x18];Struct_ov024_021dc700_5 unknown_20_;Struct_ov024_021dc700_5 unknown_24_;};
static inline unsigned short inline_ov024_021dc700(GameObject* arg0){ return arg0->currentStats_->primaryStats.maxHP; }
// USA: func_ov024_021dc700
extern "C" ARM void* func_ov024_021dc700(Struct_ov024_021dc700_4* arg0,int arg1,int arg2,Struct_ov024_021dc700_2* arg3,int arg4,int arg5,unsigned char arg6){
    GameObject* var0=GetCombatantByID((int)arg0->unknown_10_,arg1);
    if(!var0)return 0;
    GameObject* var1=GetCombatantByID((int)arg0->unknown_10_,arg2);
    if(!var1)return 0;
    unsigned short var2=inline_ov024_021dc700(var1);
    if(var1->currentStats_->primaryStats.currHP>=var2)arg4=0;
    unsigned short var3=var0->currentStats_->primaryStats.currHP;
    if(var3<=1)arg4=0;
    if(arg2==arg1)arg4=0;
    if(arg4>var3)arg4=var3-1;
    unsigned short var4;
    if(arg6 && arg4>0){
        var4=func_ov024_021da644(arg2,arg3->unknown_20_.unknown_2_4_,arg3->unknown_24_.unknown_0_0_);
        void* var5=func_02010828(GameState::GetInstance());
        if(func_02086ef0((Struct_02048150*)var5, arg1) && var1->currentStats_->primaryStats.currHP==1 && arg3->unknown_4_.unknown_0_0_==0xb7)
            func_ov000_0215a8d4((unsigned char*)arg0->unknown_10_, 2);
    }else{
        arg4=0;
        var4=func_ov024_021da644(arg2,arg3->unknown_24_.unknown_1_2_,arg3->unknown_24_.unknown_2_4_);
        arg0->unknown_6d_=0;
    }
    void* var6=func_ov000_0215e958(arg0->unknown_10_);
    if(!var6)return 0;
    func_ov000_0215a88c(arg0->unknown_10_,var6,var4);
    union {struct{int unknown_0_;int unknown_4_;};unsigned long long unknown1_0_;} var7;
    var7.unknown_0_=0;var7.unknown_4_=0;
    func_ov000_0215a004(arg0->unknown_10_,arg1,arg1,arg4,&var7,arg3,arg0->unknown_c_->unknown_1c_7_!=0,0);
    var7.unknown_0_=0;var7.unknown_4_=0;
    short var8=0;
    short var9=func_ov000_0215a16c(arg0->unknown_10_,arg2,arg4,&var8);
    func_ov000_02159eac(arg0->unknown_10_,&var7,0x25);
    unsigned short var10=var1->currentStats_->primaryStats.currMP;
    unsigned char var11;
    if(arg0->unknown_c_->unknown_1c_7_)var11=1;else var11=0;
    func_ov000_0215ccbc(arg0->unknown_10_,var6,var1,-var8,var9,var10,var7.unknown1_0_,var11);
    return var6;
}
