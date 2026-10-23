#include <globaldefs.h>
#include "Resource/ActionDataTables.h"
#include "std_library_functions.h"
struct GameObject {char p[0x138];void* stats;
#if defined(jpn)
char q[8];
#else
char q[20];
#endif
unsigned char* actor;};
class GameState {public:static GameState* GetInstance();};
struct Skill {char p[8];unsigned int low8:8,side:2,rest8:22;char q[8];unsigned int low14:28,mode:4;unsigned int low18:5,type:7,rest18:20;unsigned int low1c:14,repeats:5,rest1c:13;};
extern "C" Skill* func_02079e2c(char*,int);extern "C" GameObject* func_0200ff1c(GameState*,int);extern "C" int func_ov000_021543f4(GameObject*);
struct Info {unsigned short action;unsigned char target,group;};struct S02053dc0;extern "C" Info* func_02053dc0(S02053dc0*);
extern "C" int func_02083b00(unsigned char*,int);extern "C" void func_ov000_02153cc0(int,int,int*);
struct Random;extern "C" int func_ov000_0215fbe0(Random*,int);int NextRandomMax(Random*,int);
struct Bits {unsigned int first:1,second:1,rest:30;};struct Ids {short v[8];};
extern "C" {extern const Ids data_ov000_02182b74;int func_ov000_02153f98(void*,int,int,short*);void func_ov000_02153aa4(void*,int,int*);void func_ov000_02153c24(void*,int*);int func_ov000_02153e78(void*,short*,int,int,int);int func_ov000_0215eb1c(void*,short*,int,int);int func_ov000_0215e9fc(void*,short*,int,int);}
// USA: func_ov000_021540fc
extern "C" ARM int func_ov000_021540fc(Random* self,int id,int action,short* output){
 GameState* gs=GameState::GetInstance();Skill* skill=func_02079e2c((char*)func_020797dc(),(short)action);if(!skill)return 0;
 GameObject* unit=func_0200ff1c(gs,id);if(!unit)return 0;
 if(func_ov000_021543f4(unit))return func_ov000_02153f98(self,id,action,output);
 Info* info=func_02053dc0((S02053dc0*)unit);if(!info)return 0;
 int count=0;int side=skill->side;int mode=skill->mode;
 if(mode==6){if(func_02083b00(unit->actor,0xe6))mode=3;else mode=2;}
 if(mode==5){Bits* bits=(Bits*)(unit->actor+0x2f4);if(!bits)return 0;if(bits->second)mode=3;else if(bits->first)mode=4;else mode=2;}
 if(mode==1){output[count++]=id;}
 else if(side==1){
  if(mode==2){int target=info->target;func_ov000_02153aa4(self,info->group,&target);output[count++]=target;}
  else if(mode==4){int group=info->group;func_ov000_02153c24(self,&group);count=func_ov000_02153e78(self,output,8,group,1);}
  else if(mode==3)count=func_ov000_0215eb1c(self,output,8,1);
 }else if(side==2){
  if(mode==2||mode==7||mode==8){int target=info->target;if(skill->type!=0x12)func_ov000_02153cc0((int)self,id,&target);output[count++]=target;}
  else if(mode==3||mode==4){if(skill->type!=0x21)count=func_ov000_0215e9fc(self,output,8,1);else count=func_ov000_0215e9fc(self,output,8,0);}
 }
 Ids selected(data_ov000_02182b74);short* ptr=selected.v;int repeat=func_ov000_0215fbe0(self,(signed char)skill->repeats);
 if(repeat>0){for(int i=0;i<repeat;i++){ptr[i]=output[NextRandomMax(self,count)];}memset(output,0,count*2);memcpy(output,selected.v,repeat*2);count=repeat;}
 return count;
}
