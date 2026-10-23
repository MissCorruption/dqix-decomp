#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Input/Input.h"

#if defined(jpn)
enum {Enum_ov000_0217ae90_130=0xc2,Enum_ov000_0217ae90_1085=0x47d,Enum_ov000_0217ae90_7538=0x1faa};
#else
enum {Enum_ov000_0217ae90_130=0x82,Enum_ov000_0217ae90_1085=0x43d,Enum_ov000_0217ae90_7538=0x1d72};
#endif
struct Struct_ov000_0217ae90_2 {
    char unknown_0_[8];signed char unknown_8_[8];signed char unknown_10_;char unknown_11_[3];
    signed char unknown_14_;unsigned char unknown_15_;short unknown_16_;
    signed char unknown_18_,unknown_19_,unknown_1a_,unknown_1b_;char unknown_1c_[2];short unknown_1e_;
    char unknown_20_[6];signed char unknown_26_;char unknown_27_[9];
};
struct Struct_0201099c_3;struct Struct_0205c570;struct Struct_0205da38;struct Struct_0205d6a0;
struct Struct_0203c108_3;struct Struct_02108760;
struct Struct_ov000_021682ec_5 {
    int unknown_0_;Struct_0201099c_3* unknown_4_;Struct_ov000_0217ae90_2 unknown_8_;
    Struct_0205c570* unknown_38_;char unknown_3c_[0x4c-0x3c];int unknown_4c_;
    char unknown_50_[Enum_ov000_0217ae90_130-0x50];short unknown_82_,unknown_84_;signed char unknown_86_;
    char unknown_87_[Enum_ov000_0217ae90_1085-Enum_ov000_0217ae90_130-5];signed char unknown_43d_;
    char unknown_43e_[6];unsigned char unknown_444_;
};
struct Struct_ov000_0217ab8c_2 {char unknown_0_[Enum_ov000_0217ae90_7538];unsigned short unknown_1d72_;};
#if defined(jpn)
struct Struct_ov000_02184294 {Struct_ov000_0217ab8c_2* unknown1_8_;void* unknown_0_;int unknown_8_;};
#else
struct Struct_ov000_02184294 {void* unknown_0_;int unknown_4_;Struct_ov000_0217ab8c_2* unknown1_8_;};
#endif
struct Struct_ov000_0217ae90 {char unknown_0_[0x3b];unsigned char unknown_3b_0_:3,unknown_3b_3_:1,unknown_3b_4_:4;};
struct Struct_ov000_0215ed8c_4 {char unknown_0_[0x138];Struct_ov000_0217ae90* unknown_138_;};
extern Struct_ov000_02184294 data_ov000_02184294;
extern Struct_02108760 data_02108760;
extern "C" GameObject* func_0200ff1c(GameState*,int);
extern "C" int func_02053c6c(unsigned char*);
extern "C" int func_0205d794(Struct_0205c570*);
extern "C" void func_0205eaa0(Struct_02108760*,int,int);
extern "C" int func_020e0434(Struct_0201099c_3*,int);
extern "C" void func_0203c108(Struct_0203c108_3*,char*);
extern "C" int func_ov000_0217ab48(void*);
extern "C" void func_0205d6a0(Struct_0205d6a0*,int);
extern "C" int func_0205da38(struct Struct_0205da38* arg0, int arg1);
extern "C" {
void func_02012fe4();
void* func_ov000_02174504(Struct_ov000_0217ab8c_2*);
int func_ov000_0217c2a0(void*);int func_ov000_0217aa78(void*,int,int);
void func_ov000_0217c32c(void*);void func_ov000_02171c04(void*);
}

// USA: func_ov000_0217ae90
extern "C" ARM int func_ov000_0217ae90(Struct_ov000_021682ec_5* arg0)
{
    Struct_ov000_0215ed8c_4* var0=(Struct_ov000_0215ed8c_4*)func_0200ff1c(GameState::GetInstance(),arg0->unknown_4c_);
    int var1=0;
    if(var0)var1=func_02053c6c((unsigned char*)var0);
    func_02012fe4();
    Struct_ov000_0217ae90_2* var2=&arg0->unknown_8_;
    var2->unknown_14_=func_0205d794(arg0->unknown_38_);
    var2->unknown_1e_=0;
    data_ov000_02184294.unknown1_8_->unknown_1d72_|=0x100;
    bool var3=g_keyManager.TestKeysPressed(0x601);
    bool var4=var3 | func_0205da38((Struct_0205da38*)arg0->unknown_38_,20);
    if(var4){
        arg0->unknown_444_=0;
        data_ov000_02184294.unknown_0_=func_ov000_02174504(data_ov000_02184294.unknown1_8_);
        switch(var2->unknown_14_){
        case 0:
            arg0->unknown_43d_=arg0->unknown_8_.unknown_8_[arg0->unknown_8_.unknown_10_];
            func_0205eaa0(&data_02108760,1,0);
            var2->unknown_10_++;var2->unknown_8_[var2->unknown_10_]=14;
            var2->unknown_15_=0;var2->unknown_19_=-1;var2->unknown_26_=-1;var2->unknown_1e_=1;
            if(func_ov000_0217c2a0(arg0)){
                var2->unknown_8_[var2->unknown_10_]=100;
                func_0203c108((Struct_0203c108_3*)arg0->unknown_50_,(char*)func_020e0434(arg0->unknown_4_,0x7534));
            }
            return var2->unknown_8_[var2->unknown_10_];
        case 1:
            arg0->unknown_43d_=arg0->unknown_8_.unknown_8_[arg0->unknown_8_.unknown_10_];
            func_0205eaa0(&data_02108760,1,0);
            if(arg0->unknown_82_){
                var2->unknown_10_++;var2->unknown_8_[var2->unknown_10_]=15;var2->unknown_18_=0;
                if(var1)var2->unknown_18_=func_ov000_0217aa78(arg0,arg0->unknown_82_,0);
                return var2->unknown_8_[var2->unknown_10_];
            }else{
                data_ov000_02184294.unknown1_8_->unknown_1d72_&=~0x100;
                var2->unknown_10_++;var2->unknown_8_[var2->unknown_10_]=27;var2->unknown_18_=-1;
                return var2->unknown_8_[var2->unknown_10_];
            }
        case 2:
            arg0->unknown_43d_=arg0->unknown_8_.unknown_8_[arg0->unknown_8_.unknown_10_];var2->unknown_1e_=3;
            func_0205eaa0(&data_02108760,1,0);
            func_0203c108((Struct_0203c108_3*)arg0->unknown_50_,(char*)func_020e0434(arg0->unknown_4_,0x7536));
            var2->unknown_10_++;var2->unknown_8_[var2->unknown_10_]=100;
            return var2->unknown_8_[var2->unknown_10_];
        case 3:
            arg0->unknown_43d_=arg0->unknown_8_.unknown_8_[arg0->unknown_8_.unknown_10_];
            func_0205eaa0(&data_02108760,1,0);
            if(arg0->unknown_84_){
                var2->unknown_10_++;var2->unknown_8_[var2->unknown_10_]=16;var2->unknown_16_=0;
                if(var1)var2->unknown_16_=func_ov000_0217aa78(arg0,arg0->unknown_84_,1);
                func_ov000_0217c32c(arg0);
                return var2->unknown_8_[var2->unknown_10_];
            }else{
                data_ov000_02184294.unknown1_8_->unknown_1d72_&=~0x100;
                var2->unknown_10_++;var2->unknown_8_[var2->unknown_10_]=28;var2->unknown_16_=-1;
                return var2->unknown_8_[var2->unknown_10_];
            }
        case 4:
            arg0->unknown_43d_=arg0->unknown_8_.unknown_8_[arg0->unknown_8_.unknown_10_];
            func_0205eaa0(&data_02108760,1,0);
            func_ov000_02171c04(arg0);
            if(arg0->unknown_86_){
                var2->unknown_10_++;var2->unknown_8_[var2->unknown_10_]=17;var2->unknown_1a_=0;
                return var2->unknown_8_[var2->unknown_10_];
            }else{
                data_ov000_02184294.unknown1_8_->unknown_1d72_&=~0x100;
                var2->unknown_10_++;var2->unknown_8_[var2->unknown_10_]=29;var2->unknown_1a_=-1;
                return var2->unknown_8_[var2->unknown_10_];
            }
        case 5:
            if(var0->unknown_138_->unknown_3b_3_){
                arg0->unknown_43d_=arg0->unknown_8_.unknown_8_[arg0->unknown_8_.unknown_10_];
                func_0205eaa0(&data_02108760,1,0);
                var2->unknown_10_++;var2->unknown_8_[var2->unknown_10_]=21;var2->unknown_1b_=0;
                return var2->unknown_8_[var2->unknown_10_];
            }
            break;
        }
    }else if(func_ov000_0217ab48(arg0)){
        var2->unknown_1e_=0;data_ov000_02184294.unknown1_8_->unknown_1d72_&=~0x100;
        func_0205d6a0((Struct_0205d6a0*)arg0->unknown_38_,1);
        return -2;
    }
    return -1;
}
