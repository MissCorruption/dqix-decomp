#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Filesystem/BackgroundLoader.h"

#if defined(jpn)
enum {Enum_ov000_021735d0_7520=0x1f98, Enum_ov000_021735d0_23756=0x5a6c};
#else
enum {Enum_ov000_021735d0_7520=0x1d60, Enum_ov000_021735d0_23756=0x5ccc};
#endif
struct Struct_ov000_021682ec_5 {
    char unknown_0_[0x118]; int unknown_118_;
    char unknown_11c_[0x188-0x11c]; char unknown_188_[0x94];
    bool unknown_21c_,unknown_21d_;
    char unknown_21e_[0x8a4-0x21e]; char unknown_8a4_[0x20],unknown_8c4_[0x20],unknown_8e4_[0x20];
    char unknown_904_[8]; int unknown_90c_;
    char unknown_910_[0x940-0x910]; int unknown_940_,unknown_944_; int unknown_948_,unknown_94c_;
    char unknown_950_[Enum_ov000_021735d0_7520-0x950]; signed char unknown_1d60_[8]; signed char unknown_1d68_;
    char unknown_1d69_[7]; bool unknown_1d70_; char unknown_1d71_; unsigned short unknown_1d72_;
    char unknown_1d74_[13]; unsigned char unknown_1d81_;
};
struct Struct_ov000_021735d0 {char unknown_0_[Enum_ov000_021735d0_23756]; signed int unknown_5ccc_0_:1,unknown_5ccc_1_:1,unknown_5ccc_2_:30;};
struct Struct_ov000_021735d0_2 {char unknown_0_[0x10];signed char unknown_10_[8];signed char unknown_18_;char unknown_19_[0x24-0x19];unsigned char unknown_24_;};
struct Struct_ov000_021735d0_3;struct Struct_02020cb8_5;struct Struct_ov000_021735d0_4;struct Struct_ov000_021735d0_5;
extern "C" int func_0204b5e8(Struct_02020cb8_5*,int,int);
extern "C" Struct_ov000_021735d0_2* func_ov000_0217f8c0(Struct_ov000_021735d0_3*);
extern "C" void func_ov000_02175440(void*);
extern "C" void func_ov000_02174fc0(void*);
extern "C" void func_ov000_021754fc(Struct_ov000_021735d0_4*,int);
extern "C" void func_ov000_02180b50(Struct_ov000_021735d0_5*);
extern "C" int func_020100a8(GameState*);
extern "C" int func_0202b7d8(int*);
extern "C" {
int* func_0202ae18(); void func_020dc7e8(int,int); int func_0205d0e0(void*,int);
void func_ov000_02175fc8(void*);void func_ov000_02174d08(void*);void func_ov000_02175024(void*,int);
void* func_ov000_02161318(void*,int);
void func_ov000_0217f304(void*,int,int,void*);void func_ov000_0217c908(void*,int,int);
void func_ov000_02176e3c(void*,void*,int,int,int,int);
int func_ov000_0217fd60(void*,int);void func_ov000_021751ac(void*);
void func_ov000_0217f00c(void*,int,int);void func_ov000_02175258(void*);
void func_ov000_0218099c(void*,int);void func_ov000_02180a64(void*);
}
extern int data_ov000_02183ff0;extern int data_ov000_02184288[];

// USA: func_ov000_021735d0
extern "C" ARM void func_ov000_021735d0(Struct_ov000_021682ec_5* arg0,int arg1)
{
    arg0->unknown_94c_=arg1;
    func_0204b5e8((Struct_02020cb8_5*)arg0->unknown_8a4_,-arg0->unknown_940_,-arg0->unknown_944_);
    func_0204b5e8((Struct_02020cb8_5*)arg0->unknown_8c4_,0,0);
    func_0204b5e8((Struct_02020cb8_5*)arg0->unknown_8e4_,0,0);
    GameState* var0=GameState::GetInstance();func_0202ae18();
    if(((Struct_ov000_021735d0*)var0)->unknown_5ccc_1_)func_020dc7e8(0,-1);
    if(!arg1)arg1=1;
    int var1=1;
    Struct_ov000_021735d0_2* var2=func_ov000_0217f8c0((Struct_ov000_021735d0_3*)arg0);
    if(var2&&var2->unknown_10_[var2->unknown_18_]==100)var1=0;
    if(var1){
        func_ov000_02175440(arg0);
        var2=func_ov000_0217f8c0((Struct_ov000_021735d0_3*)arg0);
        int var3;bool var4=arg0->unknown_21c_,var5=arg0->unknown_21d_;var3=0;
        if(var2&&!(arg0->unknown_1d72_&0x200)&&arg0->unknown_1d60_[arg0->unknown_1d68_]!=6&&arg0->unknown_1d60_[arg0->unknown_1d68_]!=7&&!(var2->unknown_24_&1))var3=1;
        if(var3){arg0->unknown_21c_=false;arg0->unknown_21d_=false;}
        arg0->unknown_118_=func_0205d0e0(arg0->unknown_188_,arg1);
        if(var3){if(var4)arg0->unknown_21c_=true;if(var5)arg0->unknown_21d_=true;}
    }
    func_ov000_02175fc8(arg0);func_ov000_02174d08(arg0);func_ov000_02174fc0(arg0);
    func_ov000_02175024(arg0,arg1);func_ov000_021754fc((Struct_ov000_021735d0_4*)arg0,arg1);
    if(arg0->unknown_1d72_&0x200){
        void* var6=func_ov000_02161318(arg0,(signed char)func_020100a8(GameState::GetInstance()));
        func_ov000_0217f304(arg0,data_ov000_02183ff0,data_ov000_02184288[1],var6);
        func_ov000_0217c908(arg0,data_ov000_02183ff0,data_ov000_02184288[1]);
        func_ov000_02180b50((Struct_ov000_021735d0_5*)arg0);
        int var7=arg0->unknown_1d60_[arg0->unknown_1d68_]==100;
        if(var7 & func_0202b7d8(func_0202ae18())){
            if(arg0->unknown_1d81_==1){
                for(int var8=0;var8<2;var8++)func_ov000_02176e3c(arg0,var6,23,data_ov000_02183ff0,data_ov000_02184288[1],0);
                arg0->unknown_1d81_=2;
            }else if(arg0->unknown_1d81_==0)arg0->unknown_1d81_=1;
        }
    }
    if(arg0->unknown_1d72_&0x400)func_ov000_02180b50((Struct_ov000_021735d0_5*)arg0);
    if(!func_ov000_0217fd60(arg0,-1)){
        if(arg0->unknown_1d70_&&arg0->unknown_90c_>=0){BackgroundLoader* var9=BackgroundLoader::GetInstance();var9->RemoveTask(arg0->unknown_90c_);arg0->unknown_90c_=-1;}
    }else{
        func_ov000_021751ac(arg0);
        if(!(arg0->unknown_1d72_&0x200)){
            if(arg0->unknown_1d60_[arg0->unknown_1d68_]==13){if(!(arg0->unknown_1d72_&4))func_ov000_0217f00c(arg0,data_ov000_02183ff0,data_ov000_02184288[1]);}
            else func_ov000_0217c908(arg0,data_ov000_02183ff0,data_ov000_02184288[1]);
            func_ov000_02175258(arg0);func_ov000_0218099c(arg0,arg1);func_ov000_02180a64(arg0);
        }
    }
}
