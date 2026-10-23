#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"
struct Struct_ov024_021de9dc_2;
struct Struct_ov024_021de9dc_3;
struct Struct_ov024_021dd028_6;
struct Struct_ov024_021dd028_7;
extern "C" int func_ov024_021ea78c(Struct_ov024_021dd028_7*, int, Struct_ov024_021dd028_6*);
extern "C" short func_ov000_0215a004(void*,int,int,int,void*,Struct_ov024_021de9dc_3*,int,int);
extern "C" void func_ov000_02159eac(void*,void*,int);
extern "C" int func_ov000_02159f18(void*,unsigned long long,int);
extern "C" void func_02088b34(unsigned char*);
extern "C" unsigned short func_ov024_021da644(int,int,int);
extern "C" void* func_ov000_0215e958(void*);
extern "C" void func_ov024_021e8bf0(Struct_ov024_021de9dc_2*,void*,unsigned short*);
extern "C" void func_ov000_0215a88c(void*,void*,int);
extern "C" void func_ov000_0215ccbc(void*,void*,GameObject*,short,short,short,unsigned long long,unsigned char);
struct Struct_ov024_021de9dc_4 {char unknown_0_[0x1c];unsigned char unknown_1c_0_:7;unsigned char unknown_1c_7_:1;};
struct Struct_ov024_021de9dc_2 {char unknown_0_[0xc];Struct_ov024_021de9dc_4* unknown_c_;void* unknown_10_;};
struct Struct_ov024_021de9dc {unsigned int unknown_0_0_:10;unsigned int unknown_1_2_:10;unsigned int unknown_2_4_:10;unsigned int unknown_3_6_:2;};
struct Struct_ov024_021de9dc_3 {char unknown_0_[0x20];Struct_ov024_021de9dc unknown_20_;Struct_ov024_021de9dc unknown_24_;Struct_ov024_021de9dc unknown_28_;};
static inline unsigned short inline_ov000_0215a908_2(GameObject* arg0){ SDK_NULL_ASSERT(arg0); return arg0->currentStats_->primaryStats.currHP; }
// USA: func_ov024_021de9dc
extern "C" ARM void* func_ov024_021de9dc(Struct_ov024_021de9dc_2* arg0,int arg1,int arg2,Struct_ov024_021de9dc_3* arg3,int arg4,int arg5,unsigned char arg6){
    GameObject* var0=GetCombatantByID((int)arg0->unknown_10_,arg2);
    if(!var0)return 0;
    short var1;
    int var2=0;
    unsigned short var3=0;
    union {struct{int unknown_0_;int unknown_4_;};unsigned long long unknown1_0_;} var4;
    var4.unknown_0_=0;var4.unknown_4_=0;
    var1=var0->currentStats_->primaryStats.currHP;
    if(arg6 && arg4>0){
        if(((unsigned char*)arg0->unknown_10_)[0x8e94] && func_ov024_021ea78c((Struct_ov024_021dd028_7*)arg0, arg2, (Struct_ov024_021dd028_6*)arg3)){
            arg4=0;
            var1=func_ov000_0215a004(arg0->unknown_10_,arg1,arg2,inline_ov000_0215a908_2(var0)-1,&var4,arg3,arg0->unknown_c_->unknown_1c_7_!=0,0x20);
            func_ov000_02159eac(arg0->unknown_10_,&var4,0x29);
            func_02088b34((unsigned char*)var0->currentStats_);
            var3=0xc8;
            var2=1;
        }
        if(!var2){
            var1=func_ov000_0215a004(arg0->unknown_10_,arg1,arg2,arg4,&var4,arg3,arg0->unknown_c_->unknown_1c_7_!=0,0x20);
            if(func_ov000_02159f18(arg0->unknown_10_,var4.unknown1_0_,2)){
                arg4=0;
                var3=func_ov024_021da644(arg2,arg3->unknown_28_.unknown_0_0_,arg3->unknown_28_.unknown_1_2_);
            }else{
                var3=func_ov024_021da644(arg2,arg3->unknown_20_.unknown_2_4_,arg3->unknown_24_.unknown_0_0_);
            }
        }
    }else{
        var3=func_ov024_021da644(arg2,arg3->unknown_24_.unknown_1_2_,arg3->unknown_24_.unknown_2_4_);
    }
    void* var5=func_ov000_0215e958(arg0->unknown_10_);
    if(!var5)return 0;
    func_ov024_021e8bf0(arg0,arg0->unknown_c_,&var3);
    func_ov000_0215a88c(arg0->unknown_10_,var5,var3);
    unsigned short var6=var0->currentStats_->primaryStats.currMP;
    unsigned char var7;
    if(arg0->unknown_c_->unknown_1c_7_)var7=1;else var7=0;
    func_ov000_0215ccbc(arg0->unknown_10_,var5,var0,arg4,var1,var6,var4.unknown1_0_,var7);
    return var5;
}
