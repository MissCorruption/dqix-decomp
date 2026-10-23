#include <globaldefs.h>
#include "Resource/ActionDataTables.h"
struct Stats {unsigned short hp,mp;char p[0x1d];unsigned char state;char q[0x1a];unsigned char flags;};
struct GameObject {char p[0xc1];unsigned char low:4,state:4;char q[0x76];Stats* stats;
#if defined(jpn)
char r[8];
#else
char r[20];
#endif
unsigned char* actor;};
class GameState {public:static GameState* GetInstance();GameObject* GetCombatantByIndex(int);};
extern "C" GameObject* func_0200ff1c(GameState*,int);extern "C" int func_ov000_02153a8c(GameObject*);extern "C" int func_ov000_0215fc60(char*);
struct Skill {char p[8];unsigned int cost:8,rest8:24;unsigned int c,flags;char q[4];unsigned int low:12,type:4,high:16;};
extern "C" Skill* func_02079e2c(char*,int);extern "C" int func_02083b00(unsigned char*,int);extern "C" unsigned int func_020dd290(void*,unsigned int);extern "C" void func_ov000_0215a124(void*,int,int);extern "C" void* func_ov000_02160130();extern "C" void* func_ov000_02160f08(void*);
struct Obj02176150;extern "C" void func_ov000_02176150(Obj02176150*,unsigned short);extern "C" void func_02088db8(unsigned char*);struct Bytes02033b88;extern "C" void func_02033b88(Bytes02033b88*,int);
struct Work {unsigned short action,previous;char p[5];unsigned char count;};
struct HudSlot {char p[0xe];short mp;char q[0x3c];int id;
#if defined(jpn)
char r[0x438];
#else
char r[0x3f8];
#endif
};
struct Hud {char p[0x958];HudSlot slots[4];};
struct StateRow {short action,state,mode;};extern "C" const StateRow data_ov000_02182e24[];
inline int IsParty(int id){return (id>=0&&id<=3)?1:0;}
inline GameObject* GetUnit(int id){GameState* gs=GameState::GetInstance();return gs->GetCombatantByIndex(id);}
// USA: func_ov000_021537b8
extern "C" ARM void func_ov000_021537b8(void* self,int id,Work* work){
 GameState* gs=GameState::GetInstance();GameObject* unit=GetUnit(id);if(!unit)return;if(func_ov000_0215fc60((char*)self))return;
 Skill* skill=func_02079e2c((char*)func_020797dc(),(short)work->action);if(!skill)return;
 int consume=1;if(!IsParty(id)&&unit->stats->mp>=255)consume=0;if(func_ov000_02153a8c(unit))consume=0;
 if(consume){
  int cost=skill->cost;if(IsParty(id)){GameObject* member=func_0200ff1c(gs,id);if(member&&func_02083b00(member->actor,0x106))cost=func_020dd290(member,cost);}
  int insufficient=0;if(skill->cost<255){if(unit->stats->mp<cost)insufficient=1;}else if(unit->stats->mp==0)insufficient=1;
  if(!insufficient){
   func_ov000_0215a124(self,id,cost);Hud* hud=(Hud*)func_ov000_02160f08(func_ov000_02160130());HudSlot* slot;
   if(IsParty(id)){for(int i=0;i<4;i++){if(hud->slots[i].id==id){slot=&hud->slots[i];goto found;}}}
   slot=0;
found:
   if(slot){int mp=unit->stats->mp;func_ov000_02176150((Obj02176150*)slot,mp);slot->mp=mp;}
  }else{
   unsigned short action=0x1f8;if(skill->type==1)action=0x3a9;work->previous=work->action;work->count=0;work->action=action;
   if(skill->flags&1)unit->stats->flags|=8;else unit->stats->flags|=0x20;return;
  }
 }
 if(work->action==0x1dc){func_02088db8((unsigned char*)unit->stats);unit->state=1;func_02033b88((Bytes02033b88*)unit,0);return;}
 unsigned char state=0;int mode=0;const StateRow* row=data_ov000_02182e24;
 while(row->action!=-1){if(row->action==work->action){state=(unsigned char)row->state;mode=(unsigned char)row->mode;break;}row++;}
 unit->stats->state=state;unit->state=(unsigned char)mode;func_02033b88((Bytes02033b88*)unit,0);
}
