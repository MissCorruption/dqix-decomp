#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"
#include "Util/Random.h"
struct Struct_02070b6c_3;
struct Struct_ov024_021e2298_3 { unsigned short unknown_0_; unsigned char unknown_2_; unsigned char unknown_3_; int unknown_4_; void* unknown_8_; unsigned short unknown_c_; };
extern "C" Struct_ov024_021e2298_3* func_02070fd0(Struct_02070b6c_3*,int);
extern "C" short func_ov000_0215cda0(void*);
extern "C" void* func_ov000_0215e958(void*);
extern "C" void func_ov000_0215cd44(void*,void*,GameObject*,int,int,int,int);
struct Struct_ov024_021fe6ec { int unknown_0_[3]; };
extern Struct_ov024_021fe6ec data_ov024_021fe6ec;
struct Struct_ov024_021e2298_4 { unsigned short unknown_0_; char unknown_2_[0x14]; unsigned char unknown_16_; unsigned char unknown_17_; };
struct Struct_ov024_021e2298_5 {unsigned char unknown_0_0_:4;unsigned char unknown_0_4_:2;unsigned char unknown_0_6_:2;};
struct Struct_ov024_021e2298_6 {char unknown_0_[0x81b1];Struct_ov024_021e2298_5 unknown_81b1_;char unknown_81b2_[2];Struct_ov024_021e2298_4 unknown_81b4_[4];char unknown_8214_[0x8e18-0x81b4-4*0x18];char* unknown_8e18_;};
struct Struct_ov024_021e2298_7 {char unknown_0_[6];short unknown_6_;char unknown_8_[0x12];unsigned short unknown_1a_;unsigned short unknown_1c_;};
struct Struct_ov024_021e2298 {char unknown_0_[0x1c];unsigned char unknown_1c_0_:7;unsigned char unknown_1c_7_:1;};
struct Struct_ov024_021e2298_2 {char unknown_0_[4];Struct_ov024_021e2298_7* unknown_4_;char unknown_8_[4];Struct_ov024_021e2298* unknown_c_;Struct_ov024_021e2298_6* unknown_10_;int unknown_14_;char unknown_18_[0x6e - 0x18];unsigned char unknown_6e_;};
// USA: func_ov024_021e2298
extern "C" ARM void* func_ov024_021e2298(Struct_ov024_021e2298_2* arg0,int arg1,int arg2){
    GameObject* var0=GetCombatantByID((int)arg0->unknown_10_,arg2);
    if(!var0)return 0;
    Struct_ov024_021e2298_6* var1=arg0->unknown_10_;
    if(arg0->unknown_6e_==0){
        char* var2=var1->unknown_8e18_+0x284;
        Struct_ov024_021fe6ec var3=data_ov024_021fe6ec;
        int var4=NextRandomMax((Random*)var1,100);
        int var5=0;
        for(;var5<3;var5++){
            if(var3.unknown_0_[var5]>=var4)break;
            var4-=var3.unknown_0_[var5];
        }
        unsigned char var6=0;
        int var7=arg0->unknown_10_->unknown_81b1_.unknown_0_0_;
        for(int var8=0;var8<arg0->unknown_10_->unknown_81b1_.unknown_0_4_;var8++){
            Struct_ov024_021e2298_4* var9=&arg0->unknown_10_->unknown_81b4_[var8];
            Struct_ov024_021e2298_3* var10=func_02070fd0((Struct_02070b6c_3*)(var2+0x400),var9->unknown_0_);
            if(var10){
                if(var10->unknown_8_)var6|=1;
                if(var10->unknown_c_)var6|=2;
                if(var10->unknown_2_<7 && var5==1){var6|=4;var9->unknown_16_=1;}
                if(var10->unknown_3_<7 && var5==0){var6|=8;var9->unknown_17_=1;}
            }
        }
        arg0->unknown_6e_=1;
        arg0->unknown_14_++;
        arg0->unknown_4_->unknown_1c_=0x1f;
        if(var6&1){
            arg0->unknown_4_->unknown_1c_=0x263;
            if(var6&2){
                arg0->unknown_4_->unknown_1c_=0x1be;
                if(var6&4){
                    if(var7>1)arg0->unknown_4_->unknown_1c_=0x1bf;else arg0->unknown_4_->unknown_1c_=0x224;
                }else if(var6&8){
                    if(var7>1)arg0->unknown_4_->unknown_1c_=0x1c0;else arg0->unknown_4_->unknown_1c_=0x225;
                }
            }else if(var6&4){
                if(var7>1)arg0->unknown_4_->unknown_1c_=0x266;else arg0->unknown_4_->unknown_1c_=0x268;
            }else if(var6&8){
                if(var7>1)arg0->unknown_4_->unknown_1c_=0x267;else arg0->unknown_4_->unknown_1c_=0x269;
            }
        }else if(var6&4){
            if(var7>1)arg0->unknown_4_->unknown_1c_=0x264;else arg0->unknown_4_->unknown_1c_=0x26a;
        }else if(var6&8){
            if(var7>1)arg0->unknown_4_->unknown_1c_=0x265;else arg0->unknown_4_->unknown_1c_=0x26b;
        }
        arg0->unknown_4_->unknown_1a_=arg0->unknown_4_->unknown_1c_;
        arg0->unknown_4_->unknown_6_=func_ov000_0215cda0(arg0->unknown_10_);
    }
    void* var11=func_ov000_0215e958(arg0->unknown_10_);
    if(!var11)return 0;
    func_ov000_0215cd44(arg0->unknown_10_,var11,var0,0,0,0,arg0->unknown_c_->unknown_1c_7_!=0);
    return var11;
}
