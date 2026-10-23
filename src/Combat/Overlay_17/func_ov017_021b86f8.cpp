#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"
#include "Resource/TextQueue.h"
#include "Resource/Brightness.h"

struct EffectParam020708c8;
struct FlagWord02046708;

struct BattleScene021b86f8 {
    char unk_0[0x24];
    unsigned short activeCombatantId;
    char unk_26[0x6ac - 0x26];
    void* field_0x6ac;
    char unk_6b0[0x6b4 - 0x6b0];
    unsigned short state;
    unsigned short flags;
};

extern char data_02109bf4[];
#if defined(jpn)
extern char data_ov017_021d83e7[];
#endif

extern "C" void func_020421a0(void);
extern "C" int func_020100a8(GameState* gs);
extern "C" GameObject* func_0200ff94(GameState* battleStruct, int combatantId);
extern "C" EffectParam020708c8* func_020704fc(void);
extern "C" FlagWord02046708* func_020d6c00(void);
extern "C" void* func_02012fe4(void);
extern "C" void* func_020d7a50(void);
extern "C" int func_020e51cc(int value);
extern "C" void* func_ov000_02160f08(void* obj);
extern "C" void func_ov000_02172850(void* obj);
extern "C" float func_020709ac(unsigned char* obj);
extern "C" void func_020708c8(EffectParam020708c8* obj, unsigned int value);
extern "C" int abs(int x);
void SetMainBrightness(GameResources* res, int level, int b);
extern "C" int func_02046708(FlagWord02046708* word, unsigned int mask);
struct FlagWord020466f4;
extern "C" void func_020466f4(FlagWord020466f4* word, unsigned int bits);
extern "C" void func_020dc2d0(int mode);
extern "C" int func_0209ca68(char* p);
extern "C" void func_0209c530(void* p);
extern "C" void func_ov017_021c9c64(unsigned short a, int b);
extern "C" void func_ov017_021c98f4(int target, int flag);

// USA: func_ov017_021b86f8
extern "C" ARM void func_ov017_021b86f8(BattleScene021b86f8* self, int combatantId, int showMessage, int arg3) {
    if (self->field_0x6ac == NULL) return;
    if (combatantId != self->activeCombatantId || self->state != 2) return;
    GameState* gs = GameState::GetInstance();
    func_020421a0();
    GameObject* combatant = func_0200ff94(gs, func_020100a8(gs));
    GameResources* res = GetGameResources();
    EffectParam020708c8* effect = func_020704fc();
    FlagWord02046708* flagWord = func_020d6c00();
    func_02012fe4();
    if (combatant != NULL) {
        if (showMessage) {
#if defined(jpn)
            func_020d7e10(func_020d7a50(), data_ov017_021d83e7, 0, 0, 1);
#else
            func_020d7e10(func_020d7a50(), (void*)func_020e51cc(0x23), 0, 0, 1
#if !defined(jpn)
                , 1
#endif
            );
#endif

        }
        func_ov000_02172850(func_ov000_02160f08(self->field_0x6ac));
    }
    if ((int)func_020709ac((unsigned char*)effect) > 0x1e) {
        func_020708c8(effect, 0x1e);
    }
    if (abs(GetBrightness((GameResources*)res, false)) == 0x10) {
        SetMainBrightness(res, 0, 0x1e);
    }
    if (func_02046708(flagWord, 1)) {
        func_020466f4((FlagWord020466f4*)flagWord, 1);
        func_020dc2d0(0);
    }
    if (func_0209ca68(data_02109bf4) == 2) {
        func_0209c530(data_02109bf4);
    }
    func_020466f4((FlagWord020466f4*)flagWord, 0x200);
    ClearFlags04(res, 0x40);
    ClearFlags04(res, 4);
    ClearFlags04(res, 0x10);
    ClearFlags04(res, 2);
    ClearFlags00(res, 4);
    self->flags |= 0x2000;
    self->state = 3;
    func_ov017_021c9c64(combatantId, arg3);
    func_ov017_021c98f4(combatantId, 1);
}
