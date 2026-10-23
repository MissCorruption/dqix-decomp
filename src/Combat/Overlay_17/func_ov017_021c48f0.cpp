#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"
struct Struct_02040774_2; struct Struct_02033834; struct Struct_02010604; struct Struct_0202c1a4;
struct Struct_020fdd44 { unsigned short unknown_0_; unsigned short unknown_2_0_:2,unknown_2_2_:14; };
struct Struct_ov017_021c48f0_3 { int unknown_0_,unknown_4_,unknown_8_; };
union Struct_ov017_021c48f0_4 { Struct_ov017_021c48f0_3 unknown_0_; Vector3i unknown1_0_; };
struct Struct_ov017_021c48f0_5 { unsigned char unknown_0_,unknown_1_[3]; unsigned short unknown_4_; unsigned char unknown_6_,unknown_7_; unsigned short unknown_8_; short unknown_a_,unknown_c_,unknown_e_,unknown_10_; };
struct Struct_ov017_021c48f0_6 { Object3D unknown_0_; char unknown_ac_[2]; short unknown_ae_; char unknown_b0_[0xd4-0xb0]; Vector3i unknown_d4_; unsigned char unknown_e0_; char unknown_e1_[0x130-0xe1]; unsigned int unknown_130_; char unknown_134_[0x158-0x134]; Vector3i unknown_158_; unsigned short unknown_164_,unknown_166_; };
struct Struct_ov017_021c48f0_7 { char unknown_0_[0x130]; unsigned int* unknown_130_; };
#if defined(jpn)
struct Struct_ov017_021c48f0_8 { char unknown_0_[3]; unsigned char unknown_3_; char unknown_4_[0xfd-4]; unsigned char unknown_101_; };
#else
struct Struct_ov017_021c48f0_8 { char unknown_0_[3]; unsigned char unknown_3_; char unknown_4_[0x101-4]; unsigned char unknown_101_; };
#endif
struct Struct_ov017_021c48f0 { char unknown_0_[0xf7d]; unsigned char unknown_f7d_; };
#if defined(jpn)
struct Struct_ov017_021c48f0_2 { char unknown_0_[0x34c0]; unsigned char* unknown_36d0_; char unknown_34c4_[0x3524-0x34c4]; Struct_ov017_021c48f0_8* unknown_3734_; };
#else
struct Struct_ov017_021c48f0_2 { char unknown_0_[0x36d0]; unsigned char* unknown_36d0_; char unknown_36d4_[0x3734-0x36d4]; Struct_ov017_021c48f0_8* unknown_3734_; };
#endif
extern "C" int func_02039888(void*); extern "C" void func_02039d58(unsigned char*);
extern "C" GameObject* func_0200ff58(GameState*,int); extern "C" int func_020546a8(void*);
extern "C" unsigned short* func_02012fe4(); extern "C" void func_02039d24(unsigned char*);
extern "C" void func_020407b4(Struct_02040774_2*,int,int,int); extern "C" void func_02033874(Struct_02033834*,int); extern "C" void func_02033b88(Struct_02010604*,int);
extern "C" void func_ov017_02193428(void*,void*); extern "C" void func_02026bc8(unsigned char*,int);
extern "C" int func_0202c1a4(Struct_0202c1a4*);
extern "C" void func_ov017_0219dc90(GameResources*,int,int,int,int);
extern "C" Struct_020fdd44* func_02027ca4(); extern "C" Struct_020fdd44* func_02028bd0(Struct_020fdd44*,int);
extern "C" void func_ov017_021c8f3c(int,int); extern "C" void __clear(void*,int);
extern "C" void func_ov017_021c95ec(int,int,int,int,int,Struct_ov017_021c48f0_3,int,int,int);
extern "C" void func_ov017_021c9168(int,int,int,int,Struct_ov017_021c48f0_3,Struct_ov017_021c48f0_3,int);
extern "C" void func_ov017_021c927c(int,int,int,Struct_ov017_021c48f0_3,int,int,int);
extern "C" int func_0202c508(void*); extern "C" void func_ov017_021ce400(int,int);
extern "C" int func_02039790(void*,int); extern "C" void func_ov017_021bd4d0(void*,int,int,int); extern "C" void func_ov017_021c3e18(unsigned char);

// USA: func_ov017_021c48f0
extern "C" ARM void func_ov017_021c48f0(int arg0,Struct_ov017_021c48f0_5* arg1,GameState* arg2,GameResources* arg3,Struct_0202c1a4* arg4) {
    int var0;
    Struct_020fdd44* var1;
    Struct_ov017_021c48f0_8* var2;
    var2=((Struct_ov017_021c48f0_2*)arg3)->unknown_3734_;
    int var3=arg1->unknown_4_;
    Vector3i var4;
    var4.x=arg1->unknown_a_<<5; var4.y=arg1->unknown_c_<<5; var4.z=arg1->unknown_e_<<5;
    if(var3==10000) var3=0x170c; else if(var3==10100) var3=0x1901;
    int var5=0; var0=0;
    GameObject* var6[4]; var6[var5++]=arg2->GetPartyMemberByIndex(arg0);
    if(var6[0]!=NULL) {
        GameObject* var7=var6[0];
        if(*((Struct_ov017_021c48f0_7*)var7)->unknown_130_&1) { var0=func_02039888(var7); GameObject* var8=arg2->GetPartyMemberByIndex(var0); if(var8!=NULL) func_02039d58((unsigned char*)var8); }
        else { func_02039d58((unsigned char*)var7); var0=arg0; }
        for(int var9=0;var9<4;var9++) { GameObject* var10=func_0200ff58(arg2,var9); if(var10!=NULL && arg0==func_020546a8(var10)) var6[var5++]=var10; }
        int var11=(var2->unknown_3_==0 || var2->unknown_101_==0)?1:0;
        for(int var12=0;var12<var5;var12++) {
            GameObject* var13=var6[var12];
            if(var13==NULL) continue;
            if(!var13->obj3D_.IsVisible() && var11) {
                if(arg1->unknown_7_==0 || var3!=*func_02012fe4()) var13->obj3D_.MakeVisible();
                func_02039d24((unsigned char*)var13);
                if(arg1->unknown_4_==10000 && func_02039888(var13)!=-1) func_020407b4((Struct_02040774_2*)var13,0xff000,0,0xff000);
                else var13->obj3D_.position_=var4;
                func_02033874((Struct_02033834*)var13,arg1->unknown_10_);
                if(var12!=0) func_02033b88((Struct_02010604*)var13,0);
                ((Struct_ov017_021c48f0_6*)var6[var12])->unknown_d4_=var4;
                ((Struct_ov017_021c48f0_6*)var6[var12])->unknown_e0_|=0x20;
            }
            if(arg1->unknown_4_==10000 && var0==var13->obj3D_.unknown_4_ && var11) {
                func_020407b4((Struct_02040774_2*)var6[var12],0x5f0a,0x3614,0x570);
                func_02033874((Struct_02033834*)var6[var12],0x4b66);
            }
            var13->obj3D_.EnableFlag(0x4000000);
            if(var2->unknown_3_==0) func_ov017_02193428(var13,0);
            func_02026bc8(((Struct_ov017_021c48f0_2*)arg3)->unknown_36d0_,var13->obj3D_.unknown_4_);
        }
    }
    if(func_0202c1a4(arg4)==0) {
        func_ov017_0219dc90(arg3,arg0,arg1->unknown_4_,arg1->unknown_6_,arg1->unknown_8_);
        var1=func_02028bd0(func_02027ca4(),var3);
        if(var1!=NULL) {
            int var14;
            Struct_ov017_021c48f0_4 var15,var16,var17;
            Struct_ov017_021c48f0_3 var18,var19,var20;
            for(int var21=0;var21<12;var21++) {
                int var22=var1->unknown_2_0_*12+0x70;
                GameObject* var23=arg2->GetMaybeFieldMonsterByIndex(var21+var22);
                if(var23==NULL || var23->obj3D_.unknown_2_<0) continue;
                int var24;
                int var25=var23->obj3D_.unknown_2_;
                var15=*(Struct_ov017_021c48f0_4*)&var23->obj3D_.position_;
                var16=*(Struct_ov017_021c48f0_4*)&var23->obj3D_.rotation_;
                var24=((Struct_ov017_021c48f0_6*)var23)->unknown_166_;
                func_ov017_021c8f3c(var21+var22,arg0);
                switch(((Struct_ov017_021c48f0_6*)var23)->unknown_130_) {
                case 1: __clear(&var18,12); func_ov017_021c95ec(var3,var21,var25,1,-1,var18,0,0,0); break;
                case 2: func_ov017_021c9168(var3,var21,var25,((Struct_ov017_021c48f0_6*)var23)->unknown_164_,var15.unknown_0_,var16.unknown_0_,arg0); break;
                case 3: var17.unknown1_0_=((Struct_ov017_021c48f0_6*)var23)->unknown_158_; func_ov017_021c927c(var3,var21,var25,var17.unknown_0_,var14,3,-1); break;
                case 4: __clear(&var19,12); func_ov017_021c95ec(var3,var21,var25,4,var24,var19,0,0,0); break;
                case 5: var14=((Struct_ov017_021c48f0_6*)var23)->unknown_ae_; var17.unknown1_0_=((Struct_ov017_021c48f0_6*)var23)->unknown_158_; func_ov017_021c927c(var3,var21,var25,var17.unknown_0_,var14,5,var24); break;
                case 6: var14=((Struct_ov017_021c48f0_6*)var23)->unknown_ae_; var17.unknown1_0_=((Struct_ov017_021c48f0_6*)var23)->unknown_158_; func_ov017_021c927c(var3,var21,var25,var17.unknown_0_,var14,6,var24); break;
                case 7: var14=((Struct_ov017_021c48f0_6*)var23)->unknown_ae_; var17.unknown1_0_=((Struct_ov017_021c48f0_6*)var23)->unknown_158_; func_ov017_021c927c(var3,var21,var25,var17.unknown_0_,var14,7,var24); break;
                case 9: __clear(&var20,12); func_ov017_021c95ec(var3,var21,var25,9,arg0,var20,0,0,0); break;
                }
            }
        }
    }
    Struct_ov017_021c48f0* var26=(Struct_ov017_021c48f0*)func_02010828(arg2);
    if(func_0202c508(arg4) && var26->unknown_f7d_!=0) func_ov017_021ce400(var26->unknown_f7d_,*func_02012fe4());
    if(arg2->GetPartyMemberByIndex(var0)!=NULL && func_02039790(arg2->GetPartyMemberByIndex(var0),0x20)) func_ov017_021bd4d0(var2,(unsigned char)var0,0,1);
    if(var3==*func_02012fe4()) func_ov017_021c3e18(0);
}
