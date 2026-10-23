#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Filesystem/BackgroundLoader.h"
#include "Resource/Brightness.h"

struct EffectParam020708c8;
struct Obj020d7aa0;
extern "C" void* func_0202ae18();
extern "C" EffectParam020708c8* func_020704fc();
extern "C" void* func_0202ae24();
extern "C" void func_020708c8(EffectParam020708c8*, unsigned int);
extern "C" int func_ov017_021959b4();
extern "C" void func_020531f0(GameObject*);
extern "C" void func_ov000_02160fa8(void*, int);
extern "C" int func_ov000_02160fd4(void*, int);
extern "C" int func_ov017_02195658(GameResources*);
extern "C" int func_020a35e0(unsigned char*, unsigned char);
extern "C" void func_ov017_021c8b78(unsigned short);
extern "C" void func_020a367c(unsigned char*, int);
extern "C" int func_020100a8(GameState*);
extern "C" int func_020535c8(signed char*);
#if defined(jpn)
#define func_ov000_02165490 func_ov000_02166bdc
#endif
extern "C" int func_020535e0(int*);
extern "C" Obj020d7aa0* func_020d7a50();
extern "C" void func_020d7aa0(Obj020d7aa0*);
extern "C" void func_ov017_021bd5d0(int);
extern "C" int func_02046b08(void**);
extern "C" void func_ov017_02191234(GameResources*);
extern "C" unsigned int* func_020d6c00();
extern "C" void func_020466e4(unsigned int*, unsigned int);
extern "C" void func_02012de8();
extern "C" void func_ov000_02164280(void*);
extern "C" void func_ov000_02166e5c(void*);
extern "C" void func_ov000_021643d4(void*);
extern "C" void func_ov000_02164fac(void*);
extern "C" void func_ov000_02165490(void*);
extern "C" void func_ov000_02166880(unsigned char*);
extern "C" void func_ov000_02166978(void*);
extern "C" void func_0205ea20(void*, int);
extern "C" void func_ov017_021c812c(int, int);
extern "C" void func_ov017_021c8398(int, int);
extern "C" void func_ov017_021c839c(int, int);
extern "C" void func_ov000_02160d80(void*, int);
extern unsigned char data_02108760;
struct BattleConfig02163db4 {
    char pad_0[8]; unsigned short eventTag; char pad_a[2]; int mode;
    char pad_10[0x2a - 0x10]; signed char partyId; char pad_2b; int field_2c;
    char pad_30[0x40 - 0x30];
};
struct BattleScene02163db4 {
#if defined(jpn)
    char pad_0[0x21c]; BattleConfig02163db4* config;
    char pad_2a4[0xe44 - 0x220]; unsigned short field_ec8;
#else
    char pad_0[0x2a0]; BattleConfig02163db4* config;
    char pad_2a4[0xec8 - 0x2a4]; unsigned short field_ec8;
#endif
};
#define REG_DISPLAY_CONTROL (*(volatile unsigned int*)0x04000000)
#define REG_BLEND_CONTROL (*(volatile unsigned short*)0x04000050)
static inline void ClearPartyBit(unsigned char* config, unsigned char index) {
    func_020a367c(config, index);
}

// USA: func_ov000_02163db4
extern "C" ARM void func_ov000_02163db4(BattleScene02163db4* scene) {
    GameState* state = GameState::GetInstance();
    GameResources* resources = GetGameResources();
    BackgroundLoader* loader = BackgroundLoader::GetInstance();
    func_0202ae18();
    EffectParam020708c8* effect = func_020704fc();
    func_0202ae24();
    SetBrightness(resources, -16, 0);
    func_020708c8(effect, 0);
    if (func_ov017_021959b4()) {
        for (int i = 0; i < 4; i++) {
            GameObject* combatant = func_0200ff1c(state, i);
            if (combatant) func_020531f0(combatant);
        }
        func_ov000_02160fa8(scene, 0x2000000);
    }
    BattleConfig02163db4* config = scene->config;
    int partyId = func_ov017_02195658(resources);
    if (func_020a35e0((unsigned char*)config, partyId & 0xff)) {
        if (config->partyId == partyId) {
            func_ov000_02160fa8(scene, 0x2000000);
            func_ov017_021c8b78(config->eventTag);
        }
        ClearPartyBit((unsigned char*)config, partyId);
    }
    if (scene->config->partyId != func_020100a8(state) && !func_ov000_02160fd4(scene, 2)) return;
    for (int i = 0; i < 4; i++) {
        GameObject* combatant = func_0200ff1c(state, i);
        if (!combatant) continue;
        if (func_020a35e0((unsigned char*)scene->config, i & 0xff)) {
            if (func_020535c8((signed char*)combatant)) func_020531f0(combatant);
        } else {
            if (func_020535e0((int*)combatant)) func_020531f0(combatant);
        }
    }
    func_020d7aa0(func_020d7a50());
    if (scene->config->mode >= 0) func_ov017_021bd5d0(scene->config->mode);
    if (loader->GetNumQueuedTasks() > 0) return;
    if (!func_02046b08((void**)resources->unknown_ptr_array_36fc[1])) return;
    func_ov017_02191234(resources);
    SetFlags00(resources, 0x10);
    unsigned int* data = func_020d6c00();
    func_020466e4(data, 1);
    func_020466e4(data, 2);
    func_020466e4(data, 0x2000);
    func_02012de8();
    func_ov000_02164280(scene);
    if (scene->config->mode == 0x1a && !state->GetGameObjectByIndex(1)) func_ov000_02166e5c(scene);
    func_02012de8();
    func_ov000_021643d4(scene);
    func_02012de8();
    func_ov000_02164fac(scene);
    func_02012de8();
    func_ov000_02165490(scene);
    func_02012de8();
    func_ov000_02166880((unsigned char*)scene);
    func_02012de8();
    func_ov000_02166978(scene);
    func_02012de8();
    func_0205ea20(&data_02108760, 0x65);
    REG_DISPLAY_CONTROL = (REG_DISPLAY_CONTROL & ~0x1f00) | 0x1100;
    REG_BLEND_CONTROL = 0;
    if (scene->config->field_2c) {
        func_ov017_021c812c((unsigned char)scene->config->partyId, 1);
        func_ov017_021c8398((unsigned char)scene->config->partyId, 1);
        func_ov017_021c839c((unsigned char)scene->config->partyId, 1);
    } else {
        func_ov000_02160fa8(scene, 0x200000);
    }
    if (scene->field_ec8 == 0x785d || scene->field_ec8 == 0x77f7 || scene->field_ec8 == 0x77f5) {
        SetFlags04(resources, 0x200000);
    }
    func_ov000_02160d80(scene, 1);
}
