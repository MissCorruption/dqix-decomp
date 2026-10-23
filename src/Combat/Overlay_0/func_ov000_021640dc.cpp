#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/Brightness.h"

extern "C" void func_ov000_02160fa8(void* work, int mask);
extern "C" int func_ov000_02160fd4(void* work, int mask);
extern "C" int func_ov017_02195658(GameResources* res);
extern "C" int func_020a35e0(unsigned char* obj, unsigned char index);
extern "C" void func_020a367c(unsigned char* obj, int index);

extern "C" void func_ov017_021c8b78(unsigned short tag);
extern "C" int func_020100a8(GameState* battleStruct);
extern "C" void func_ov000_0215f03c(struct BattleData021640dc* data);
extern "C" void func_ov000_021663a0(struct BattleScene021640dc* scene);
extern "C" void func_ov000_02164d74(struct BattleScene021640dc* scene);
extern "C" void func_ov000_021674f4(unsigned char* scene, int flag);
extern "C" unsigned char* func_0208a9b4(void);
extern "C" void func_0208b4c0(unsigned char* obj);
extern "C" void func_ov000_02160d80(void* p, int val);
extern "C" void func_ov000_021750e4(void* obj);
extern "C" void func_ov000_021760d4(void* obj);

struct Formation021640dc {
    unsigned char field_0x0;
    unsigned char field_0x1_0 : 4;
    unsigned char field_0x1_4 : 4;
};

struct BattleData021640dc {
    char pad_0[0x81b0];
    struct Formation021640dc formation;
};

struct BattleConfig021640dc {
    char pad_0[8];
    unsigned short eventTag;
    char pad_a[2];
    int field_0xc;
    char pad_10[0x2a - 0x10];
    signed char partyId;
    char pad_2b;
    int field_0x2c;
    int field_0x30;
};

struct TurnState021640dc {
    char pad_0[0x1b];
    signed char partyId;
    char pad_1c[4];
    int field_0x20;
    unsigned short eventTag;
};

struct BattleScene021640dc {
#if defined(jpn)
    char pad_0[0x218];
#else
    char pad_0[0x29c];
#endif
    struct BattleData021640dc* data;
    struct BattleConfig021640dc* config;
#if defined(jpn)
    char pad_2a4[0x371c - 0x220];
#else
    char pad_2a4[0x3760 - 0x2a4];
#endif
    struct TurnState021640dc turn;
#if defined(jpn)
    char pad_3788[0x56b0 - 0x3744];
#else
    char pad_3788[0x54bc - 0x3788];
#endif
    unsigned char field_0x54bc;
};

static inline void ClearPartyBit(unsigned char* obj, unsigned char index) {
    func_020a367c(obj, index);
}

static inline struct Formation021640dc* GetFormation(struct BattleData021640dc* data) {
    return &data->formation;
}

// USA: func_ov000_021640dc
extern "C" ARM void func_ov000_021640dc(struct BattleScene021640dc* scene) {
    GameState* gs = GameState::GetInstance();
    GameResources* res = GetGameResources();
    if (res->unknown_flag_42e2 != 0) {
        func_ov000_02160fa8(scene, 0x2000000);
        return;
    }
    struct BattleConfig021640dc* config = scene->config;
    int partyId = func_ov017_02195658(res);
    if (func_020a35e0((unsigned char*)config, partyId)) {
        if (config->partyId == partyId) {
            func_ov000_02160fa8(scene, 0x2000000);
            func_ov017_021c8b78(config->eventTag);
        }
        ClearPartyBit((unsigned char*)config, partyId);
        return;
    }
    if (!func_ov000_02160fd4(scene, 4)) {
        return;
    }
    if (!func_ov000_02160fd4(scene, 0x200000)) {
        return;
    }
    if (scene->config->partyId != func_020100a8(gs)) {
        func_ov000_0215f03c(scene->data);
    }
    func_ov000_021663a0(scene);
    func_ov000_02164d74(scene);
    scene->config->field_0x30 = 0;
    func_ov000_021674f4((unsigned char*)scene, scene->config->field_0x2c == 0);
    func_0208b4c0(func_0208a9b4());
    func_ov000_02160d80(scene, 7);
    func_ov000_02160fa8(scene, 0x10000);
    func_ov000_02160fa8(scene, 0x40000000);
    scene->turn.eventTag = scene->config->eventTag;
    scene->field_0x54bc = GetFormation(scene->data)->field_0x1_0;
    scene->turn.field_0x20 = scene->config->field_0xc;
    scene->turn.partyId = scene->config->partyId;
    func_ov000_021750e4(&scene->turn);
    func_ov000_021760d4(&scene->turn);
    ClearFlags00(res, 0x10);
}
