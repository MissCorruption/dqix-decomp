#if defined(jpn)
enum { RegionOffsete78 = 0xdf4 };
#else
enum { RegionOffsete78 = 0xe78 };
#endif

#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_ov000_02160f20(void* obj);
extern "C" int func_ov000_021627fc(void* obj);
struct List021600f8;
extern "C" void* func_ov000_021600f8(struct List021600f8* list, int index);
extern "C" void func_02049ae4(unsigned char* obj);
extern "C" int func_02048c10(unsigned char* obj);
extern "C" void func_0204a030(unsigned char*, int);
extern "C" void func_02033920(void* a, int b, int c);

extern char data_ov025_021ef404[];
extern "C" unsigned char _ZZ16GetTimer021ef974vE1s;

struct Obj021dc220 {
    char pad0[RegionOffsete78];
    unsigned char field_e78;
    char pad1[0x33];
    int field_eac;
};

struct ListNode02160094_dc220 {
    char pad0[0x20];
    unsigned short id;
    char pad1[0xc];
    struct ListNode02160094_dc220* next;
};

struct List02160094_dc220 {
    char pad0[0x10];
    struct ListNode02160094_dc220* head;
};

// USA: func_ov025_021dc220
extern "C" ARM void func_ov025_021dc220(void* obj) {
    struct Obj021dc220* self = (struct Obj021dc220*)obj;
    GameState* battle = GameState::GetInstance();
    void* slot = func_ov000_02160f20(obj);
    short idx = -1;

    if (func_ov000_021627fc(obj)) {
        *(int*)(data_ov025_021ef404 + 4) = 1;
        self->field_eac = 6;
        {
            void* node8 = func_ov000_021600f8((struct List021600f8*)slot, 0);
            if (node8 != NULL) {
                idx = *(short*)((char*)node8 + 0xe);
            }
        }
    } else {
        self->field_eac = 3;
    }

    if (slot != NULL) {
        struct List02160094_dc220* list = (struct List02160094_dc220*)slot;
        struct ListNode02160094_dc220* node = list->head;
        int allowDefault = 1;
        while (node != NULL) {
            GameObject* combatant = battle->GetCombatantByIndex(node->id);
            if (combatant != NULL) {
                func_02049ae4((unsigned char*)combatant);
                if (idx >= 0) {
                    int allow = allowDefault;
                    if (func_02048c10((unsigned char*)combatant) || self->field_e78 == 0) {
                        allow = 0;
                    }
                    if (allow) {
                        if (_ZZ16GetTimer021ef974vE1s != 0) {
                            func_0204a030((unsigned char*)combatant, idx);
                        } else {
                            func_02033920(combatant, idx, 1);
                        }
                    }
                }
            }
            node = node->next;
        }
    }
}
