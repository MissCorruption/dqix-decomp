#include <globaldefs.h>

#if defined(jpn)
enum { kResourceNodeOffset = 0x4fc };
#else
enum { kResourceNodeOffset = 0x70c };
#endif

#include "Resource/GameResources.h"
#include "GameState/GameState.h"
#include "Resource/Brightness.h"

struct Obj020397cc;
extern "C" void func_020397cc(Obj020397cc* obj, int arg1);
extern "C" int func_020100f8(char* obj);
extern "C" void func_020a27a0(void* obj);
extern "C" void func_020a2794(void* obj);
extern "C" void func_020397c0(void* obj);
extern "C" void func_ov017_0218d5ac(void* obj);
struct ListHead02046b38;
struct ListNode02046b38;
extern "C" int func_02046b38(ListHead02046b38* list, ListNode02046b38* target);
extern "C" void func_ov017_021b5a30(void* self);

typedef int (*StateFn_021b58b8)(void*);
struct FuncTable_021d6c04 { StateFn_021b58b8 fn[7]; };
extern FuncTable_021d6c04 data_ov017_021d6c04;

struct SelfState_021b58b8 {
    unsigned char pad0[0x1];
    unsigned char field1;
    unsigned char pad2[0x6];
    int field8;
    unsigned char pad3[0xc];
    unsigned short field18;
    unsigned char pad4[0x3a];
    unsigned char field54;
};

// USA: func_ov017_021b58b8
extern "C" ARM void func_ov017_021b58b8(SelfState_021b58b8* self, ListNode02046b38* arg1) {
    if (self->field18 != 0) {
        GameState* battleStruct = GameState::GetInstance();
        GameObject* combatant = battleStruct->GetUnknownGameObject();
        if (combatant != 0) {
            unsigned int val = (unsigned int)battleStruct->GetEffectiveDeltaTime();
            if (val < self->field18) {
                func_020397cc((Obj020397cc*)combatant, 1);
                *(unsigned short*)((char*)combatant + 0xb2) = 0;
                self->field18 = self->field18 - val;
                int flag = func_020100f8((char*)battleStruct);
                if (flag != 0) {
                    func_020a27a0((void*)flag);
                }
                GameResources* ov = GetGameResources();
                if (ov != 0) {
                    SetFlags04(ov, 0x80);
                }
            } else if (self->field54 == 0) {
                func_020397c0((void*)combatant);
                self->field18 = 0;
                int flag = func_020100f8((char*)battleStruct);
                if (flag != 0) {
                    func_020a2794((void*)flag);
                }
                GameResources* ov = GetGameResources();
                if (ov != 0) {
                    ClearFlags04(ov, 0x80);
                }
            }
        }
    }

    GameResources* ov = GetGameResources();
    if (ov != 0) {
        func_ov017_0218d5ac((void*)ov);
    }

    FuncTable_021d6c04 table = data_ov017_021d6c04;
    StateFn_021b58b8 fn = table.fn[self->field8];
    if (fn != 0) {
        self->field8 = fn(self);
    }

    if (func_02046b38((ListHead02046b38*)arg1, *(ListNode02046b38**)((char*)ov + 0x3000 + kResourceNodeOffset)) != 0) {
        self->field1 = 1;
        func_ov017_021b5a30(self);
    }
    if (self->field1 != 0) {
        ClearFlags04(ov, 0x40);
    }
}
