#include <globaldefs.h>
struct Struct_ov000_021700dc {char unknown_0_[0xc];short unknown_c_;char unknown_e_[2];signed char unknown_10_[8],unknown_18_;char unknown_19_[0xb];unsigned char unknown_24_;char unknown_25_[0x27];int unknown_4c_;
#if defined(jpn)
char unknown_50_[0x424];
#else
char unknown1_50_[0x3e4];
#endif
float unknown_434_;};
struct Struct_ov000_021537b8_5 {char unknown_0_[0x3b];unsigned char unknown_3b_0_:3,unknown_3b_3_:1,unknown_3b_4_:4;};
struct GameObject {char unknown_0_[0x138];Struct_ov000_021537b8_5* unknown_138_;};
class GameState {public:static GameState* GetInstance();GameObject* GetCombatantByIndex(int);};
struct Struct_ov000_021700dc_2 {
#if defined(jpn)
char unknown_0_[0x3508];
#else
char unknown1_0_[0x3718];
#endif
void* unknown_3718_;};
struct Struct_ov000_021700dc_3 {char unknown_0_[0x17c];int unknown_17c_;};
extern "C" int func_ov000_021719f8(int*);extern "C" int func_0200fb8c(int*);extern "C" void* func_ov000_02160f08(void*);extern "C" void func_ov000_02170078(char*);
struct Struct_ov000_02184288_2 {int unknown_0_,unknown_4_,unknown_8_;};extern int data_ov000_02183ff0;extern Struct_ov000_02184288_2 data_ov000_02184288;
extern "C" {void* func_ov017_021b8468(void*);int func_ov000_0217ae90(void*);int func_ov000_0217b380(void*,int,int);int func_ov000_0217b518(void*,int,int);int func_ov000_0217b6d0(void*,int,int);int func_ov000_0217b8a4(void*,int,int);int func_ov000_0217bb2c(void*,int,int);int func_ov000_0217bdf4(void*,int,int);int func_ov000_0217bfbc(void*,int,int);int func_ov000_0217c094(void*);}
// USA: func_ov000_021700dc
extern "C" ARM int func_ov000_021700dc(Struct_ov000_021700dc* arg0){
 if(arg0->unknown_4c_<0)return -1;if(!(arg0->unknown_24_&1))return -1;if(arg0->unknown_c_==0)return -1;
 if(func_ov000_021719f8((int*)arg0)){arg0->unknown_10_[arg0->unknown_18_]=100;return 100;}
 GameState* var0=GameState::GetInstance();Struct_ov000_021700dc_2* var1=(Struct_ov000_021700dc_2*)func_0200fb8c((int*)var0);if(!var1)return -1;
 void* var2=var1->unknown_3718_;if(!var2)return -1;var2=func_ov017_021b8468(var2);if(!var2)return -1;Struct_ov000_021700dc_3* var3=(Struct_ov000_021700dc_3*)func_ov000_02160f08(var2);if(!var3)return -1;
 GameObject* var4=var0->GetCombatantByIndex(var3->unknown_17c_);
 if(var4&&var4->unknown_138_->unknown_3b_3_){if(var4->unknown_138_->unknown_3b_4_==1)arg0->unknown_434_+=0.2f;else arg0->unknown_434_+=0.05f;if(arg0->unknown_434_>=3.141592f)arg0->unknown_434_=0.0f;}
 func_ov000_02170078((char*)arg0);
 switch(arg0->unknown_10_[arg0->unknown_18_]){
 case 13:return func_ov000_0217ae90(arg0);
 case 14:return func_ov000_0217b380(arg0,data_ov000_02183ff0,data_ov000_02184288.unknown_4_);
 case 15:return func_ov000_0217b518(arg0,data_ov000_02183ff0,data_ov000_02184288.unknown_4_);
 case 16:return func_ov000_0217b6d0(arg0,data_ov000_02183ff0,data_ov000_02184288.unknown_4_);
 case 17:return func_ov000_0217b8a4(arg0,data_ov000_02183ff0,data_ov000_02184288.unknown_4_);
 case 18:case 19:case 20:return func_ov000_0217bb2c(arg0,data_ov000_02183ff0,data_ov000_02184288.unknown_4_);
 case 21:return func_ov000_0217bdf4(arg0,data_ov000_02183ff0,data_ov000_02184288.unknown_4_);
 case 26:return func_ov000_0217bfbc(arg0,data_ov000_02183ff0,data_ov000_02184288.unknown_4_);
 case 27:return func_ov000_0217bfbc(arg0,data_ov000_02183ff0,data_ov000_02184288.unknown_4_);
 case 28:return func_ov000_0217bfbc(arg0,data_ov000_02183ff0,data_ov000_02184288.unknown_4_);
 case 29:return func_ov000_0217bfbc(arg0,data_ov000_02183ff0,data_ov000_02184288.unknown_4_);
 case 30:return func_ov000_0217bfbc(arg0,data_ov000_02183ff0,data_ov000_02184288.unknown_4_);
 case 37:return func_ov000_0217bfbc(arg0,data_ov000_02183ff0,data_ov000_02184288.unknown_4_);
 case 38:return func_ov000_0217bfbc(arg0,data_ov000_02183ff0,data_ov000_02184288.unknown_4_);
 case 39:return func_ov000_0217bfbc(arg0,data_ov000_02183ff0,data_ov000_02184288.unknown_4_);
 case 40:return func_ov000_0217bfbc(arg0,data_ov000_02183ff0,data_ov000_02184288.unknown_4_);
 case 100:return func_ov000_0217c094(arg0);
 default:return -1;
 }
}
