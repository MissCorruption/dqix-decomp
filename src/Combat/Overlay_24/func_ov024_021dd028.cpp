#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"
struct Struct_ov024_021dd028_2;
struct Struct_ov024_021dd028_4;
struct Struct_ov024_021dd028_5;
extern "C" int func_ov024_021dd260(Struct_ov024_021dd028_5*);
struct Struct_ov024_021dd028_6;
struct Struct_ov024_021dd028_7;
extern "C" int func_ov024_021ea78c(Struct_ov024_021dd028_7*, int, Struct_ov024_021dd028_6*);
extern "C" void func_ov000_02159eac(void*,void*,int);
extern "C" void func_ov000_0215a004(void*,int,int,int,void*,Struct_ov024_021dd028_4*,int,int);
extern "C" void func_02088b34(unsigned char*);
extern "C" unsigned short func_ov024_021da644(int,int,int);
extern "C" void* func_ov000_0215e958(void*);
extern "C" void func_ov024_021e8bf0(Struct_ov024_021dd028_2*,void*,unsigned short*);
extern "C" void func_ov000_0215a88c(void*,void*,int);
extern "C" void func_ov000_0215cd44(void*,void*,GameObject*,int,unsigned long long,unsigned char);
struct Struct_ov024_021dd028_8 {char unknown_0_[0x1c]; unsigned char unknown_1c_0_:7; unsigned char unknown_1c_7_:1;};
struct Struct_ov024_021dd028_2 {char unknown_0_[0xc];Struct_ov024_021dd028_8* unknown_c_;void* unknown_10_;int unknown_14_;char unknown_18_[0x75-0x18];unsigned char unknown_75_;};
struct Struct_ov024_021dd028 {unsigned int unknown_0_0_:10;unsigned int unknown_1_2_:10;unsigned int unknown_2_4_:10;unsigned int unknown_3_6_:2;};
struct Struct_ov024_021dd028_3 {unsigned int unknown_0_0_:19;unsigned int unknown_2_3_:5;unsigned int unknown_3_0_:8;};
struct Struct_ov024_021dd028_4 {char unknown_0_[0x1c];Struct_ov024_021dd028_3 unknown_1c_;int unknown_20_;Struct_ov024_021dd028 unknown_24_;Struct_ov024_021dd028 unknown_28_;};
static inline unsigned short inline_ov000_0215a908_2(GameObject* arg0){ SDK_NULL_ASSERT(arg0); return arg0->currentStats_->primaryStats.currHP; }
// USA: func_ov024_021dd028
extern "C" ARM void* func_ov024_021dd028(Struct_ov024_021dd028_2* arg0,int arg1,int arg2,Struct_ov024_021dd028_4* arg3,int arg4,int arg5,unsigned char arg6){
    GameObject* var0=GetCombatantByID((int)arg0->unknown_10_,arg2);
    if(!var0)return 0;
    int var1=1;
    if(func_ov024_021dd260((Struct_ov024_021dd028_5*)var0)){
        if(arg3->unknown_1c_.unknown_2_3_==7)var1=0;
    }
    union {struct {int unknown_0_;int unknown_4_;};unsigned long long unknown1_0_;} var2;
    var2.unknown_0_=0;
    var2.unknown_4_=0;
    unsigned short var3=0;
    if(arg6 && var1){
        if(func_ov024_021ea78c((Struct_ov024_021dd028_7*)arg0, arg2, (Struct_ov024_021dd028_6*)arg3)){
            func_ov000_02159eac(arg0->unknown_10_,&var2,0x29);
            func_ov000_0215a004(arg0->unknown_10_,arg1,arg2,inline_ov000_0215a908_2(var0)-1,&var2,arg3,arg0->unknown_c_->unknown_1c_7_!=0,0);
            func_ov000_02159eac(arg0->unknown_10_,&var2,0xfe);
            func_02088b34((unsigned char*)var0->currentStats_);
            var3=0xc8;
        }else{
            func_ov000_0215a004(arg0->unknown_10_,arg1,arg2,0xffff,&var2,arg3,arg0->unknown_c_->unknown_1c_7_!=0,8);
            var2.unknown_0_=0;
            var2.unknown_4_=0;
            func_ov000_02159eac(arg0->unknown_10_,&var2,0xd);
            var3=func_ov024_021da644(arg2,arg3->unknown_28_.unknown_0_0_,arg3->unknown_28_.unknown_1_2_);
        }
        arg0->unknown_14_++;
    }else{
        var3=func_ov024_021da644(arg2,arg3->unknown_24_.unknown_1_2_,arg3->unknown_24_.unknown_2_4_);
        arg0->unknown_75_=0;
    }
    void* var4=func_ov000_0215e958(arg0->unknown_10_);
    if(!var4)return 0;
    func_ov024_021e8bf0(arg0,arg0->unknown_c_,&var3);
    func_ov000_0215a88c(arg0->unknown_10_,var4,var3);
    func_ov000_0215cd44(arg0->unknown_10_,var4,var0,0,var2.unknown1_0_,arg0->unknown_c_->unknown_1c_7_!=0);
    return var4;
}
