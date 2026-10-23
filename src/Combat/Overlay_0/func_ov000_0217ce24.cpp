#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"

#if defined(jpn)
enum {Enum_ov000_0217ce24_7520=0x1f98, Enum_ov000_0217ce24_6904=0x1bf8, Enum_ov000_0217ce24_336=0x144};
#else
enum {Enum_ov000_0217ce24_7520=0x1d60, Enum_ov000_0217ce24_6904=0x1af8, Enum_ov000_0217ce24_336=0x150};
#endif
struct Struct_ov000_021682ec_5 {
    char unknown_0_[0x68];int unknown_68_;
    char unknown_6c_[0x79-0x6c];unsigned char unknown_79_;
    char unknown_7a_[2];SafeAllocator unknown_7c_;char unknown_90_[0xb3-0x90];unsigned char unknown_b3_;
    char unknown_b4_[0x17c-0xb4];int unknown_17c_;
    char unknown_180_[8];char unknown_188_[0x956-0x188];unsigned char unknown_956_;
    char unknown_957_[Enum_ov000_0217ce24_6904-0x957];SafeAllocator unknown_1af8_;
    char unknown_1b0c_[Enum_ov000_0217ce24_7520-Enum_ov000_0217ce24_6904-0x14];signed char unknown_1d60_[8];signed char unknown_1d68_;
    char unknown_1d69_;signed char unknown_1d6a_;unsigned char unknown_1d6b_;
    char unknown_1d6c_[2];unsigned char unknown_1d6e_;char unknown_1d6f_[3];unsigned short unknown_1d72_;
    char unknown_1d74_[4];bool unknown_1d78_;
};
struct Struct_ov000_02182a74 {char unknown_0_[0xf78];signed char unknown_f78_[4];unsigned char unknown_f7c_;};
struct Struct_ov000_0217ce24_2 {char unknown_0_[0x56b];unsigned char unknown_56b_0_:4,unknown_56b_4_:4;};
struct Struct_ov000_0217ce24 {char unknown_0_[Enum_ov000_0217ce24_336];Struct_ov000_0217ce24_2* unknown_150_;};
struct Struct_0205c570;struct Struct_02108760;struct Struct_ov000_021735d0_3;struct Struct_ov000_021735d0_2;
struct Struct_0205d81c;struct Struct_0205d6a0;struct Struct_02092aa4;
extern "C" int func_0205d794(Struct_0205c570*);
extern "C" void func_0205eaa0(Struct_02108760*,int,int);
extern "C" void* func_02010828(GameState*);
extern "C" GameObject* func_0200ff1c(GameState*,int);
extern "C" Struct_ov000_021735d0_2* func_ov000_0217f8c0(Struct_ov000_021735d0_3*);
extern "C" int func_020100a8(GameState*);
extern "C" int func_ov000_0218155c(void*);
extern "C" void func_ov000_0217a9d0(int,int,int,Struct_0205d81c*);
extern "C" void func_02092aa4(Struct_02092aa4*, int);
extern "C" void func_02092a74(SafeAllocator*,SafeAllocator*);
extern "C" int func_ov000_0217c5f4(void*);
extern "C" void func_0205d6a0(Struct_0205d6a0*,int);
extern Struct_02108760 data_02108760;
extern "C" {
void func_02012fe4();int func_ov000_0217c594(void*,int);
void* func_ov000_02161318(void*,int);int func_ov000_0217f5dc(void*);
void func_ov000_02177038(void*,int,int,int,int);
void func_ov000_02176634(void*,void*,int,int,int);
int func_020dd3cc(int);int func_ov000_0217c514(int,int);
void func_ov000_02176e3c(void*,int,int,int,int,int);
void func_ov000_0217c638(void*,int,int);
}

// USA: func_ov000_0217ce24
extern "C" ARM void func_ov000_0217ce24(Struct_ov000_021682ec_5* arg0,int arg1,int arg2)
{
    func_02012fe4();
    arg0->unknown_1d72_|=0x100;
    int var0=func_0205d794((Struct_0205c570*)arg0->unknown_188_);
    if(var0<0)var0=0;
    arg0->unknown_1d6a_=var0;
    if(func_ov000_0217c594(arg0,5)){
        arg0->unknown_956_=0;
        func_0205eaa0(&data_02108760,1,0);
        GameState* var1=GameState::GetInstance();
        Struct_ov000_02182a74* var2=(Struct_ov000_02182a74*)func_02010828(var1);
        signed char var3=0;bool var4=false;
        unsigned char var5=0;unsigned char var6=var2->unknown_f7c_;
        for(;var5<var6;var5++){
            int var7=var2->unknown_f78_[var5];
            Struct_ov000_0217ce24* var8=(Struct_ov000_0217ce24*)func_0200ff1c(var1,var7);
            if(var8){
                bool var9=var8->unknown_150_?var8->unknown_150_->unknown_56b_0_!=0:false;
                if(var9)var4=true;
                void* var10=func_ov000_02161318(arg0,var7);
                if(var10&&func_ov000_0217f5dc(var10))var3++;
            }
        }
        if(arg0->unknown_79_<var3)var3=arg0->unknown_79_;
        switch(arg0->unknown_1d6a_){
        case 0:
            func_ov000_02177038(arg0,0,arg0->unknown_1d60_[arg0->unknown_1d68_],arg1,arg2);
            if(var2->unknown_f7c_==1||var4||arg0->unknown_1d78_||var3==1){
                arg0->unknown_1d6b_=0;arg0->unknown_1d68_++;arg0->unknown_1d60_[arg0->unknown_1d68_]=12;
                func_ov000_02176634(arg0,func_ov000_0217f8c0((Struct_ov000_021735d0_3*)arg0),12,arg1,arg2);
            }else{
                arg0->unknown_1d6b_=0;arg0->unknown_1d68_++;arg0->unknown_1d60_[arg0->unknown_1d68_]=3;
                func_ov000_02176634(arg0,func_ov000_0217f8c0((Struct_ov000_021735d0_3*)arg0),3,arg1,arg2);
            }
            break;
        case 1:
            func_ov000_02177038(arg0,0,arg0->unknown_1d60_[arg0->unknown_1d68_],arg1,arg2);
            arg0->unknown_1d6e_=0;arg0->unknown_1d6b_=0;arg0->unknown_1d68_++;arg0->unknown_1d60_[arg0->unknown_1d68_]=5;
            if(var2->unknown_f7c_==1||var4||var3==1){
                int var11=(signed char)func_020100a8(var1);
                arg0->unknown_68_=func_020dd3cc(var11);
                arg0->unknown_68_=func_ov000_0217c514(var11,arg0->unknown_68_);
                arg0->unknown_1d60_[arg0->unknown_1d68_]=6;
                if(arg0->unknown_68_==0){
                    arg0->unknown_1d60_[arg0->unknown_1d68_]=43;
                    func_ov000_02176634(arg0,func_ov000_02161318(arg0,var11),43,arg1,arg2);
                    break;
                }
            }
            {Struct_ov000_021735d0_2* var12=func_ov000_0217f8c0((Struct_ov000_021735d0_3*)arg0);
            func_ov000_02176634(arg0,var12,arg0->unknown_1d60_[arg0->unknown_1d68_],arg1,arg2);}
            func_ov000_0217a9d0(6,func_ov000_0218155c(arg0),4,(Struct_0205d81c*)arg0->unknown_188_);
            break;
        case 2:
            arg0->unknown_79_=var3;
            func_ov000_02177038(arg0,0,arg0->unknown_1d60_[arg0->unknown_1d68_],arg1,arg2);
            arg0->unknown_1d6b_=0;arg0->unknown_1d68_++;arg0->unknown_1d60_[arg0->unknown_1d68_]=8;
            func_ov000_02176634(arg0,func_ov000_0217f8c0((Struct_ov000_021735d0_3*)arg0),8,arg1,arg2);
            break;
        case 3:
            func_ov000_02176e3c(arg0,0,arg0->unknown_1d60_[arg0->unknown_1d68_],arg1,arg2,1);
            arg0->unknown_1d68_++;arg0->unknown_1d60_[arg0->unknown_1d68_]=9;
            arg0->unknown_1af8_.Reset();
            func_02092aa4((Struct_02092aa4*)&arg0->unknown_7c_, (signed char)arg0->unknown_17c_);
            func_02092a74(&arg0->unknown_7c_,&arg0->unknown_1af8_);
            arg0->unknown_b3_|=8;
            break;
        }
    }else if(func_ov000_0217c5f4(arg0)){
        arg0->unknown_956_=0;
        func_0205d6a0((Struct_0205d6a0*)arg0->unknown_188_,0);
        arg0->unknown_1d60_[arg0->unknown_1d68_]=0;arg0->unknown_1d68_--;
        func_ov000_0217c638(arg0,arg1,arg2);
    }
}
