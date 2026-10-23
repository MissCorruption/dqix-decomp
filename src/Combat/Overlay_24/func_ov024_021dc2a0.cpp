#include <globaldefs.h>
#include "GameState/GameState.h"
extern "C" GameObject* func_ov000_021536f8(int,int);
extern "C" void* func_ov000_02160130();
struct Struct_ov024_021fea1c;
extern "C" int func_ov000_0215fb54(int, int, Struct_ov024_021fea1c*);
extern "C" void* func_ov000_02162d88(void*,int);
extern "C" int func_ov000_02161380(void*,int,int,int);
struct Struct_ov024_021dc2a0_8 {char unknown_0_[0xe];short unknown_e_;short unknown_10_;short unknown_12_;short unknown_14_;char unknown_16_;unsigned char unknown_17_;char unknown_18_[8];int unknown_20_;};
extern "C" Struct_ov024_021dc2a0_8* func_ov000_0215e938(void*);
struct Struct_ov000_0215fef0;
extern "C" void func_ov000_0215fef0(Struct_ov000_0215fef0*);
extern "C" Struct_ov024_021dc2a0_8* func_ov000_0215e958(void*);
extern "C" void func_ov000_0215fd7c(void*);
extern "C" void func_ov000_0215ffc4(void*,void*,int);
struct Struct_ov000_0215767c_4;
struct Struct_ov000_0215767c_5;
extern "C" void func_ov000_021600cc(Struct_ov000_0215767c_5*, Struct_ov000_0215767c_4*);
extern "C" void func_ov000_0215a88c(void*,void*,int);
extern "C" void func_ov000_0215cd44(void*,void*,GameObject*,int,int,int,int);
struct Struct_ov024_021fe6d0 {int unknown_0_[2];};
extern Struct_ov024_021fe6d0 data_ov024_021fe6d0;
struct Struct_ov024_021dc2a0 {unsigned int unknown_0_0_:12;unsigned int unknown_1_4_:20;};
struct Struct_ov024_021dc2a0_2 {unsigned int unknown_0_0_:5;unsigned int unknown_0_5_:7;unsigned int unknown_1_4_:20;};
struct Struct_ov024_021dc2a0_3 {unsigned int unknown_0_0_:10;unsigned int unknown_1_2_:10;unsigned int unknown_2_4_:10;unsigned int unknown_3_6_:2;};
struct Struct_ov024_021dc2a0_4 {char unknown_0_[4];Struct_ov024_021dc2a0 unknown_4_;char unknown_8_[0x10];Struct_ov024_021dc2a0_2 unknown_18_;char unknown_1c_[8];Struct_ov024_021dc2a0_3 unknown_24_;};
struct Struct_ov024_021dc2a0_5 {unsigned short unknown_0_;};
struct Struct_ov024_021dc2a0_6 {char unknown_0_[4];Struct_ov024_021dc2a0_5* unknown_4_;char unknown_8_[8];void* unknown_10_;int unknown_14_;};
struct Struct_ov024_021dc2a0_7 {char unknown_0_[0x188];unsigned short unknown_188_;unsigned short unknown_18a_;};
// USA: func_ov024_021dc2a0
extern "C" ARM void* func_ov024_021dc2a0(Struct_ov024_021dc2a0_6* arg0,short arg1,int arg2,Struct_ov024_021dc2a0_4* arg3,int arg4,int arg5,unsigned char arg6){
    GameObject* var0=func_ov000_021536f8((int)arg0->unknown_10_,arg1);
    if(!var0)return 0;
    void* var1=func_ov000_02160130();
    int var2=1;
    Struct_ov024_021fe6d0 var3=data_ov024_021fe6d0;
    var3.unknown_0_[0]=var0->obj3D_.unknown_2_;
    if(arg3->unknown_18_.unknown_0_5_==12){
        var2=func_ov000_0215fb54((int)arg0->unknown_10_, arg3->unknown_4_.unknown_0_0_, (Struct_ov024_021fea1c*)&var3);
        for(int var4=0;var4<var2;var4++){
            if(!func_ov000_02162d88(var1,var3.unknown_0_[var4])){var2=0;break;}
        }
    }
    int var5=-1;
    if(arg3->unknown_4_.unknown_0_0_==0xf2)var5=*(signed char*)((char*)var0+0x17c);
    int var6=0;
    if(arg6){
        for(int var7=0;var7<var2;var7++){
            for(int var8=0;var8<1;var8++){
                int var9=func_ov000_02161380(var1,var3.unknown_0_[var7],var5,1);
                if(var9>=0xc0){
                    Struct_ov024_021dc2a0_8* var10=func_ov000_0215e938(arg0->unknown_10_);
                    if(var10){
                        func_ov000_0215fef0((Struct_ov000_0215fef0*)var10);
                        var10->unknown_20_=0;
                        var10->unknown_e_=var9;
                        var10->unknown_17_=1;
                        GameObject* var11=func_ov000_021536f8((int)arg0->unknown_10_,var9);
                        if(var11){
                            Struct_ov024_021dc2a0_8* var12=func_ov000_0215e958(arg0->unknown_10_);
                            if(var12){
                                func_ov000_0215fd7c(var12);
                                var12->unknown_20_=0;
                                var12->unknown_e_=((Struct_ov024_021dc2a0_7*)var11)->unknown_188_;
                                var12->unknown_10_=((Struct_ov024_021dc2a0_7*)var11)->unknown_18a_;
                                var12->unknown_12_=((Struct_ov024_021dc2a0_7*)var11)->unknown_188_;
                                var12->unknown_14_=((Struct_ov024_021dc2a0_7*)var11)->unknown_18a_;
                                func_ov000_0215ffc4(var10,var12,0);
                                ((unsigned char*)arg0->unknown_10_)[0x8e02]++;
                                func_ov000_021600cc((Struct_ov000_0215767c_5*)arg0->unknown_4_, (Struct_ov000_0215767c_4*)var10);
                                var6++;
                                ((unsigned char*)arg0->unknown_10_)[0x8e01]++;
                                arg0->unknown_14_++;
                            }
                        }
                    }
                }
            }
        }
    }
    if(var6<=0){
        Struct_ov024_021dc2a0_8* var13=func_ov000_0215e958(arg0->unknown_10_);
        if(!var13)return 0;
        arg0->unknown_4_->unknown_0_=0x1f5;
        unsigned short var14=arg3->unknown_24_.unknown_2_4_;
        func_ov000_0215a88c(arg0->unknown_10_,var13,var14);
        GameObject* var15=func_ov000_021536f8((int)arg0->unknown_10_,arg1);
        if(!var15)return 0;
        func_ov000_0215cd44(arg0->unknown_10_,var13,var15,0,0,0,0);
        return var13;
    }
    return 0;
}
