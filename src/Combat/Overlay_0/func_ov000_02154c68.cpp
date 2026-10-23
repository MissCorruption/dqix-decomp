#include <globaldefs.h>
#include "Resource/ActionDataTables.h"
struct GameObject { char unknown_0_[0x17c]; unsigned char unknown_17c_; };
class GameState {public: static GameState* GetInstance();GameObject* GetCombatantByIndex(int);};
struct Struct_02010088;extern "C" int func_02010088(Struct_02010088*);
extern "C" int func_ov000_02153c0c(GameObject*);
extern "C" GameObject* func_0200fea4(GameState*,int);

struct Random;int NextRandomMax(Random*,int);
struct Struct_ov000_0215440c_3 { int unknown_0_[2]; unsigned int unknown_8_0_:8,unknown_9_0_:2,unknown_9_2_:22;int unknown_c_[2];unsigned int unknown_14_0_:28,unknown_17_4_:4;int unknown_18_;unsigned int unknown_1c_0_:14,unknown_1d_6_:5,unknown_1e_3_:13; };
struct Struct_ov000_02182ae4 { short unknown_0_[8]; };
extern "C" { extern const Struct_ov000_02182ae4 data_ov000_02182b34;int func_ov000_0215e9fc(Random*,short*,int,int);int func_ov000_02153e78(Random*,short*,int,int,int);int func_ov000_0215eb1c(Random*,short*,int,int); }
#define IsParty(n) ((n)>=0 && (n)<=3 ? 1 : 0)
// USA: func_ov000_02154c68
extern "C" ARM int func_ov000_02154c68(Random* arg0,int arg1,Struct_ov000_0215440c_3* arg2){
 if(!arg2)return -1;
 GameState* var0=GameState::GetInstance();func_020797dc();
 GameObject* var1=GameState::GetInstance()->GetCombatantByIndex(arg1);
 if(var1&&!func_02010088((Struct_02010088*)var1)&&!func_ov000_02153c0c(var1))return arg1;
 switch(arg2->unknown_1d_6_){case 3:case 4:case 5:case 7:case 8:case 11:break;default:return arg1;}
 int var2=arg2->unknown_9_0_;int var3=arg2->unknown_17_4_;int var4=0;
 if(!IsParty(arg1)){var1=func_0200fea4(var0,arg1);if(!var1)return arg1;var4=var1->unknown_17c_;}
 Struct_ov000_02182ae4 var5(data_ov000_02182b34);int var6;
 if(var2==1){
  if(var3==4){if(IsParty(arg1))var6=func_ov000_0215e9fc(arg0,var5.unknown_0_,8,1);else var6=func_ov000_02153e78(arg0,var5.unknown_0_,8,var4,1);}
  else if(var3==3){if(IsParty(arg1))var6=func_ov000_0215e9fc(arg0,var5.unknown_0_,8,1);else var6=func_ov000_0215eb1c(arg0,var5.unknown_0_,8,1);}
  else return arg1;
 }else if(var2==2){
  if(var3==4){if(IsParty(arg1))var6=func_ov000_0215e9fc(arg0,var5.unknown_0_,8,1);else var6=func_ov000_02153e78(arg0,var5.unknown_0_,8,var4,1);}
  else if(var3==3){if(IsParty(arg1))var6=func_ov000_0215e9fc(arg0,var5.unknown_0_,8,1);else var6=func_ov000_0215eb1c(arg0,var5.unknown_0_,8,1);}
  else return arg1;
 }else return arg1;
 if(var6>0)arg1=var5.unknown_0_[NextRandomMax(arg0,var6)];return arg1;
}
