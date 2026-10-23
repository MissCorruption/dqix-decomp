#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"
struct Struct_ov024_021da670;
struct Struct_ov024_021da670_3;
extern "C" void* func_ov000_0215e958(void*);
extern "C" void func_ov000_02159eac(void*,void*,int);
extern "C" void func_ov000_0215cd44(void*,void*,GameObject*,int,unsigned long long,int);
extern "C" void func_ov000_021554f4(void*,int,int,Struct_ov024_021da670_3*,int,int);
struct Struct_02088f68;
extern "C" void func_02088f68(Struct_02088f68*);
extern "C" void func_02088474(void*,int,int);
struct Struct_ov024_021da670_6;
extern "C" int func_ov024_021da998(Struct_ov024_021da670_6*);
extern "C" void func_0208826c(unsigned char*);
extern "C" void func_020883cc(unsigned char*);
struct Struct_ov024_021da670_7;
extern "C" int func_ov024_021da9b0(Struct_ov024_021da670_7*);
extern "C" int func_020882f8(unsigned char*);
struct Struct_ov024_021da670_8;
extern "C" int func_ov024_021da9c8(Struct_ov024_021da670_8*);
extern "C" unsigned short func_ov024_021e9018(Struct_ov024_021da670*,int,int,int);
extern "C" void func_ov024_021e8cfc(Struct_ov024_021da670*,GameObject*,int,int);
extern "C" void func_ov000_0215a88c(void*,void*,int);
struct Struct_ov024_021da670 {char unknown_0_[0x10];void* unknown_10_;};
struct Struct_ov024_021da670_2 {unsigned int unknown_0_0_:12;unsigned int unknown_1_4_:20;};
struct Struct_ov024_021da670_3 {char unknown_0_[4];Struct_ov024_021da670_2 unknown_4_;};
struct Struct_ov024_021da670_4 {unsigned short unknown_0_0_:2;unsigned short unknown_0_2_:4;unsigned short unknown_0_6_:6;unsigned short unknown_1_4_:2;unsigned short unknown_1_6_:2;};
struct Struct_ov024_021da670_5 {char unknown_0_[0x22];Struct_ov024_021da670_4 unknown_22_;};
static inline unsigned char inline_ov017_021c6d50_4(Struct_ov024_021da670_5* arg0){ return arg0->unknown_22_.unknown_1_4_; }
// USA: func_ov024_021da670
extern "C" ARM void* func_ov024_021da670(Struct_ov024_021da670* arg0,int arg1,int arg2,Struct_ov024_021da670_3* arg3){
    GameObject* var0=GetCombatantByID((int)arg0->unknown_10_,arg2);
    if(!var0)return 0;
    unsigned short var1=arg3->unknown_4_.unknown_0_0_;
    int var2=0;
    union {struct{int unknown_0_;int unknown_4_;};unsigned long long unknown1_0_;} var3;
    var3.unknown_0_=0;var3.unknown_4_=0;
    if(arg2!=arg1){
        void* var4=func_ov000_0215e958(arg0->unknown_10_);
        if(!var4)return 0;
        if(var1==0x150)func_ov000_02159eac(arg0->unknown_10_,&var3,4);
        func_ov000_0215cd44(arg0->unknown_10_,var4,var0,0,var3.unknown1_0_,0);
        return var4;
    }
    if(var1==0xe1 || var1==0x395){
        GameObject* var5=GetCombatantByID((int)arg0->unknown_10_,arg1);
        if(var5){
            func_ov000_021554f4(arg0->unknown_10_,arg1,arg1,arg3,0,2);
            var5->currentStats_->primaryStats.currHP=0;
            func_02088f68((Struct_02088f68*)var5->currentStats_);
        }
    }else if(var1==0x384){
        func_ov000_02159eac(arg0->unknown_10_,&var3,0x1a);
    }else if(var1==0x385){
        func_ov000_02159eac(arg0->unknown_10_,&var3,0x10);
    }else if(var1==0x3aa){
        func_ov000_02159eac(arg0->unknown_10_,&var3,0x19);
    }else if(inline_ov017_021c6d50_4((Struct_ov024_021da670_5*)var0->currentStats_)){
        func_ov000_02159eac(arg0->unknown_10_,&var3,0xb);
        switch(inline_ov017_021c6d50_4((Struct_ov024_021da670_5*)var0->currentStats_)){
        case 1:
            var2=0x93;
            func_02088474(var0->currentStats_,10,0);
            break;
        case 2:
            ((unsigned char*)arg0->unknown_10_)[0x8e96]=func_ov024_021da998((Struct_ov024_021da670_6*)var0);
            var2=0x94;
            func_0208826c((unsigned char*)var0->currentStats_);
            func_ov000_02159eac(arg0->unknown_10_,&var3,0x18);
            break;
        case 3:
            var2=0x95;
            func_020883cc((unsigned char*)var0->currentStats_);
            func_ov000_02159eac(arg0->unknown_10_,&var3,0x17);
            break;
        }
        ((Struct_ov024_021da670_5*)var0->currentStats_)->unknown_22_.unknown_1_4_=0;
    }else if(func_ov024_021da9b0((Struct_ov024_021da670_7*)var0)){
        var2=0x70;
    }else if(func_020882f8((unsigned char*)var0->currentStats_)){
        var2=0x44;
    }else if(func_ov024_021da9c8((Struct_ov024_021da670_8*)var0)){
        var2=func_ov024_021e9018(arg0,arg2,((Struct_ov024_021da670_5*)var0->currentStats_)->unknown_22_.unknown_0_2_,1);
        func_ov000_02159eac(arg0->unknown_10_,&var3,0x27);
    }
    if(((unsigned char*)arg0->unknown_10_)[0x8e96])func_ov024_021e8cfc(arg0,var0,0,0);
    void* var6=func_ov000_0215e958(arg0->unknown_10_);
    if(!var6)return 0;
    if(var2)func_ov000_0215a88c(arg0->unknown_10_,var6,var2);
    func_ov000_0215cd44(arg0->unknown_10_,var6,var0,0,var3.unknown1_0_,0);
    return var6;
}
