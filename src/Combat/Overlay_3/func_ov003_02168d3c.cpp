#include <globaldefs.h>
extern "C" void* memset(void*, int, unsigned int);
#include "GameState/GameState.h"

struct Struct_0205d81c;
struct Struct_0201099c_3;
struct Struct_020465c0;
extern "C" void* func_020421a0();
extern "C" void func_0205deb4(Struct_0205d81c*, int, int);
extern "C" int func_020e0434(Struct_0201099c_3*, int);
extern "C" int func_02042058(char*, const char*);
extern "C" void func_ov003_0216abd8(void*, char*);
extern "C" void func_ov003_02169c3c(void*);
extern "C" int func_ov003_02169eec(void*, void*);
extern "C" void func_02046380(void*);
extern "C" void func_020465c0(Struct_020465c0*, int, int);
extern "C" void func_020465f0(unsigned char*, int, unsigned char);
extern "C" void func_0205d6e4(Struct_0205d81c*, int);
extern "C" void* func_0205d81c(Struct_0205d81c*, int);
extern "C" int func_ov003_02169938(int, int);
#if defined(jpn)
extern "C" void func_0204500c(void*, int, int);
extern "C" void func_020474a8(void*, int, int, char*);
enum { Enum_ov003_02168d3c_228=0xe0, Enum_ov003_02168d3c_2464=0x870, Enum_ov003_02168d3c_6574=0x17de, Enum_ov003_02168d3c_2400=0x800 };
#else
extern "C" void func_0204500c(void*, int, int, int);
extern "C" void func_02046608(void*, int, int, char*, int, int, int);
enum { Enum_ov003_02168d3c_228=0xe4, Enum_ov003_02168d3c_2464=0x9a0, Enum_ov003_02168d3c_6574=0x19ae, Enum_ov003_02168d3c_2400=0x960 };
#endif
struct Struct_ov003_02168d3c {
    char unknown_0_[0x64];
    char unknown_64_[0x18];
    char* unknown_7c_;
    char unknown_80_[Enum_ov003_02168d3c_228-0x80];
    char unknown_e4_[0x404];
    unsigned char unknown_4e8_;
    char unknown_4e9_[2];
    unsigned char unknown_4eb_;
    unsigned char unknown_4ec_;
    char unknown_4ed_[2];
    unsigned char unknown_4ef_[4];
    unsigned char unknown_4f3_[4];
    char unknown_4f7_;
    unsigned int unknown_4f8_;
    char unknown_4fc_[0xa4];
    unsigned int unknown_5a0_;
};
struct Struct_ov003_02168d3c_2 {
    char unknown_0_[Enum_ov003_02168d3c_2464-8];
    int unknown_998_;
    int unknown_99c_;
    int unknown_9a0_;
    char unknown_9a4_[Enum_ov003_02168d3c_6574-Enum_ov003_02168d3c_2464-4];
    unsigned char unknown_19ae_;
};
struct Struct_ov003_02168d3c_3 { char unknown_0_[0xf68]; unsigned int unknown_f68_; unsigned int unknown_f6c_; };
static inline void inline_ov003_02168d3c(Struct_ov003_02168d3c_2* arg0, int arg1) {
#if defined(jpn)
    func_0204500c(arg0,arg1,0);
#else
    func_0204500c(arg0,arg1,0,0xe3);
#endif
}
static inline void inline_ov003_02168d3c_2(Struct_ov003_02168d3c_2* arg0,int arg1,char* arg2) {
#if defined(jpn)
    func_020474a8(arg0,0xc,arg1,arg2);
#else
    func_02046608(arg0,0xc,arg1,arg2,0xe3,0,1);
#endif
}
// USA: func_ov003_02168d3c
extern "C" ARM void func_ov003_02168d3c(Struct_ov003_02168d3c* arg0, void* arg1, int arg2) {
    GameState* var0=GameState::GetInstance();
    Struct_ov003_02168d3c_2* var1=(Struct_ov003_02168d3c_2*)func_020421a0();
    Struct_ov003_02168d3c_3* var2=(Struct_ov003_02168d3c_3*)func_02010828(var0);
    if(var1->unknown_9a0_==3) var1->unknown_19ae_=0;
    if(arg0->unknown_4e8_==0) {
        func_0205deb4((Struct_0205d81c*)arg0->unknown_e4_,1,1);
        if(arg2==0x3f2) {
            int var3=-1;
            if(var2->unknown_f68_>=0x3b9ac618) var3=(short)(arg2+5);
            else if(var2->unknown_f6c_<1000) var3=(short)(arg2+3);
            if(var3>=0) {
                memset(arg0->unknown_7c_,0,Enum_ov003_02168d3c_2400);
                int var4=func_020e0434((Struct_0201099c_3*)arg0->unknown_64_,var3);
                func_02042058(arg0->unknown_7c_,(const char*)var4);
                func_ov003_0216abd8(arg0,arg0->unknown_7c_);
                inline_ov003_02168d3c(var1,(int)arg0->unknown_7c_);
                arg0->unknown_4e8_=3;
                return;
            }
            unsigned int var5=var2->unknown_f6c_/1000;
            int var6=1;
            for(int var7=3;var7>=0;--var7) {
                unsigned int var8=var5/var6;
                unsigned int var9=var5/(var6*10);
                arg0->unknown_4f3_[var7]=var8-var9*10;
                var6*=10;
            }
            arg0->unknown_4f8_=var5*1000;
        } else if(arg2==0x3fc) {
            int var10=-1;
            if(var2->unknown_f68_==0) var10=(short)(arg2+3);
            else if(var2->unknown_f6c_>=0x989298) var10=(short)(arg2+4);
            if(var10>=0) {
                memset(arg0->unknown_7c_,0,Enum_ov003_02168d3c_2400);
                int var11=func_020e0434((Struct_0201099c_3*)arg0->unknown_64_,var10);
                func_02042058(arg0->unknown_7c_,(const char*)var11);
                func_ov003_0216abd8(arg0,arg0->unknown_7c_);
                inline_ov003_02168d3c(var1,(int)arg0->unknown_7c_);
                arg0->unknown_4e8_=3;
                return;
            }
            func_02046380(var1);
            func_020465c0((Struct_020465c0*)var1,0,var2->unknown_f68_);
            func_020465f0((unsigned char*)var1,0,0);
            unsigned int var12=var2->unknown_f68_/1000;
            unsigned int var13=var2->unknown_f6c_/1000;
            int var14=1;
            if(0x270f-var13<var12) var12=0x270f-var13;
            for(int var15=3;var15>=0;--var15) {
                unsigned int var16=var12/var14;
                unsigned int var17=var12/(var14*10);
                arg0->unknown_4f3_[var15]=var16-var17*10;
                var14*=10;
            }
            arg0->unknown_4f8_=var12*1000;
        }
        int var18=func_020e0434((Struct_0201099c_3*)arg0->unknown_64_,(short)arg2);
        inline_ov003_02168d3c(var1,var18);
        arg0->unknown_4e8_++;
    } else if(arg0->unknown_4e8_==1) {
        if(var1->unknown_9a0_==3) {
            func_ov003_02169c3c(arg0);
            func_0205deb4((Struct_0205d81c*)arg0->unknown_e4_,0,0);
            func_0205deb4((Struct_0205d81c*)arg0->unknown_e4_,2,0);
            arg0->unknown_4e8_++;
        }
    } else if(arg0->unknown_4e8_==2) {
        int var19=func_ov003_02169eec(arg0,arg1);
        if(var19==-1) return;
        if(var19==-2) {
            func_0205d6e4((Struct_0205d81c*)arg0->unknown_e4_,1);
            func_0205deb4((Struct_0205d81c*)arg0->unknown_e4_,1,1);
            memset(arg0->unknown_7c_,0,Enum_ov003_02168d3c_2400);
            int var20=func_020e0434((Struct_0201099c_3*)arg0->unknown_64_,0x406);
            func_02042058(arg0->unknown_7c_,(const char*)var20);
            func_ov003_0216abd8(arg0,arg0->unknown_7c_);
            inline_ov003_02168d3c(var1,(int)arg0->unknown_7c_);
            arg0->unknown_4e8_++;
            return;
        }
        if(var19!=0) return;
        func_0205d6e4((Struct_0205d81c*)arg0->unknown_e4_,1);
        void* var21=func_0205d81c((Struct_0205d81c*)arg0->unknown_e4_,1);
        *(unsigned short*)((char*)var21+0xc2)=1;
        bool var22=false;
        bool var23=false;
        int var24=(short)arg2;
        if(var24==0x3f2) {
            if(var2->unknown_f68_+arg0->unknown_5a0_>0x3b9ac618) {
                var23=true;
                var24=(short)(var24+4);
            } else if(func_ov003_02169938((int)arg0,-arg0->unknown_5a0_)) {
                var22=true;
                var2->unknown_f68_+=arg0->unknown_5a0_;
            }
        } else if(var24==0x3fc) {
            if(arg0->unknown_5a0_<=var2->unknown_f68_) {
                if(var2->unknown_f6c_+arg0->unknown_5a0_>0x98967f) {
                    var23=true;
                    var24=(short)(var24+4);
                } else {
                    var2->unknown_f68_-=arg0->unknown_5a0_;
                    func_ov003_02169938((int)arg0,arg0->unknown_5a0_);
                    var22=true;
                }
            }
        }
        if(var22) {
            arg0->unknown_4eb_=1;
            memset(arg0->unknown_7c_,0,Enum_ov003_02168d3c_2400);
            func_02046380(var1);
            func_020465c0((Struct_020465c0*)var1,0,arg0->unknown_5a0_);
            func_020465f0((unsigned char*)var1,0,0);
            int var25=func_020e0434((Struct_0201099c_3*)arg0->unknown_64_,(short)(var24+1));
            inline_ov003_02168d3c_2(var1,var25,arg0->unknown_7c_);
            func_ov003_0216abd8(arg0,arg0->unknown_7c_);
            inline_ov003_02168d3c(var1,(int)arg0->unknown_7c_);
            arg0->unknown_4e8_++;
        } else if(var23) {
            func_02046380(var1);
            func_020465c0((Struct_020465c0*)var1,0,0x3b9ac618-var2->unknown_f68_);
            func_020465f0((unsigned char*)var1,0,0);
            int var26=func_020e0434((Struct_0201099c_3*)arg0->unknown_64_,var24);
            inline_ov003_02168d3c_2(var1,var26,arg0->unknown_7c_);
            func_ov003_0216abd8(arg0,arg0->unknown_7c_);
            inline_ov003_02168d3c(var1,(int)arg0->unknown_7c_);
            arg0->unknown_4e8_++;
        } else {
            memset(arg0->unknown_7c_,0,Enum_ov003_02168d3c_2400);
            int var27=func_020e0434((Struct_0201099c_3*)arg0->unknown_64_,(short)(var24+2));
            func_02042058(arg0->unknown_7c_,(const char*)var27);
            var27=func_020e0434((Struct_0201099c_3*)arg0->unknown_64_,var24);
            func_02042058(arg0->unknown_7c_,(const char*)var27);
            inline_ov003_02168d3c(var1,(int)arg0->unknown_7c_);
            for(int var28=0;var28<4;++var28) arg0->unknown_4ef_[var28]=0;
            arg0->unknown_5a0_=0;
            arg0->unknown_4e8_=1;
        }
    } else if(arg0->unknown_4e8_==3) {
        if(var1->unknown_998_==0) { arg0->unknown_4ec_=6; arg0->unknown_4e8_=0; }
    }
}
