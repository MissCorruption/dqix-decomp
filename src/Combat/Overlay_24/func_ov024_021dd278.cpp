#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"
struct Struct_02010088;
extern "C" int func_02010088(Struct_02010088*);
extern "C" void func_0208902c(unsigned char*, int);
extern "C" void func_ov000_02159eac(void*,void*,int);
extern "C" GameObject* func_0200ff1c(GameState*,int);
extern "C" unsigned short func_ov024_021da644(int,int,int);
extern "C" void* func_ov000_0215e958(void*);
extern "C" void func_ov000_0215a88c(void*,void*,int);
extern "C" void func_ov000_0215cd44(void*,void*,GameObject*,int,unsigned long long,unsigned char);
struct Struct_ov024_021dd278_3 {char unknown_0_[0x1c];unsigned char unknown_1c_0_:7;unsigned char unknown_1c_7_:1;};
struct Struct_ov024_021dd278_4 {char unknown_0_[0xc];Struct_ov024_021dd278_3* unknown_c_;void* unknown_10_;int unknown_14_;};
struct Struct_ov024_021dd278_5 {unsigned int unknown_0_0_:12;unsigned int unknown_1_4_:10;unsigned int unknown_2_6_:10;};
struct Struct_ov024_021dd278_6 {unsigned int unknown_0_0_:10;unsigned int unknown_1_2_:10;unsigned int unknown_2_4_:10;unsigned int unknown_3_6_:2;};
struct Struct_ov024_021dd278_7 {char unknown_0_[4];Struct_ov024_021dd278_5 unknown_4_;char unknown_8_[0x18];Struct_ov024_021dd278_6 unknown_20_;Struct_ov024_021dd278_6 unknown_24_;};
struct Struct_ov024_021dd278 {unsigned int unknown_0_0_:20;unsigned int unknown_2_4_:10;unsigned int unknown_3_6_:2;};
struct Struct_ov024_021dd278_2 {char unknown_0_[0x10];Struct_ov024_021dd278 unknown_10_;char unknown_14_[0x26];unsigned char unknown_3a_;unsigned char unknown_3b_0_:1;unsigned char unknown_3b_1_:7;};
static inline int inline_ov000_021537b8(int arg0){return arg0>=0 && arg0<=3;}
// USA: func_ov024_021dd278
extern "C" ARM void* func_ov024_021dd278(Struct_ov024_021dd278_4* arg0,int arg1,int arg2,Struct_ov024_021dd278_7* arg3,int arg4,int arg5,unsigned char arg6){
    GameObject* var0=GetCombatantByID((int)arg0->unknown_10_,arg1);
    if(!var0)return 0;
    GameObject* var1=GetCombatantByID((int)arg0->unknown_10_,arg2);
    if(!var1)return 0;
    int var2=0;
    if(func_02010088((Struct_02010088*)var1))var2=1;
    unsigned short var3=arg3->unknown_4_.unknown_0_0_;
    union {struct{int unknown_0_;int unknown_4_;};unsigned long long unknown1_0_;} var4;
    var4.unknown_0_=0;var4.unknown_4_=0;
    unsigned short var5;
    if(arg6 && var2){
        float var6=1.0f;
        switch(var3){
        case 0x27:var6=0.5f;break;
        case 0x26:
        case 0x54:
            if(inline_ov000_021537b8(arg1)){
                unsigned short var7=((Struct_ov024_021dd278_2*)var0->currentStats_)->unknown_10_.unknown_2_4_;
                if(var7<=arg3->unknown_4_.unknown_1_4_)var6=0.25f;
                else if(var7>=arg3->unknown_4_.unknown_2_6_)var6=0.5f;
                else var6=(25.0f+(float)(int)((25.0f/(arg3->unknown_4_.unknown_2_6_-arg3->unknown_4_.unknown_1_4_))*(var7-arg3->unknown_4_.unknown_1_4_)))/100.0f;
            }else var6=0.5f;
            break;
        }
        short var8=(int)(var6*(float)(unsigned int)var1->currentStats_->primaryStats.maxHP);
        func_0208902c((unsigned char*)var1->currentStats_, var8);
        func_ov000_02159eac(arg0->unknown_10_,&var4,3);
        ((Struct_ov024_021dd278_2*)var1->currentStats_)->unknown_3b_0_=1;
        if(inline_ov000_021537b8(arg2)){
            GameObject* var9=func_0200ff1c(GameState::GetInstance(),arg2);
            if(var9)((Struct_ov024_021dd278_2*)var9->currentStats_)->unknown_3a_=1;
        }
        var5=func_ov024_021da644(arg2,arg3->unknown_20_.unknown_2_4_,arg3->unknown_24_.unknown_0_0_);
        arg0->unknown_14_++;
    }else{
        if(var2)var5=0x21;
        else var5=func_ov024_021da644(arg2,arg3->unknown_24_.unknown_1_2_,arg3->unknown_24_.unknown_2_4_);
    }
    void* var10=func_ov000_0215e958(arg0->unknown_10_);
    if(!var10)return 0;
    func_ov000_0215a88c(arg0->unknown_10_,var10,var5);
    func_ov000_0215cd44(arg0->unknown_10_,var10,var1,0,var4.unknown1_0_,arg0->unknown_c_->unknown_1c_7_!=0);
    return var10;
}
