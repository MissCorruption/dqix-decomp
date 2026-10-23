#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Util/Random.h"

struct Stats_021e67c8 {
    char pad0[0x21];
    unsigned char rank21;
    char pad22[0x40 - 0x22];
    unsigned char rate40;
};

struct Cbt_021e67c8 {
    char pad0[0x138];
    struct Stats_021e67c8* stats;
};

struct Ctx_021e67c8 {
    char pad0[0x10];
    void* battle;
};

extern "C" signed char func_ov000_02159e60(void* obj, int mode);
struct Cbt_021e67c8* GetCombatantByID(int, int);
extern "C" float func_02074938(int v);
struct GameObject;
extern "C" int func_ov024_021e67b0(GameObject*);
struct ArrayContainsByteStruct;
extern "C" int func_02086ef0(ArrayContainsByteStruct*, int);
extern "C" void func_ov000_0215a8d4(unsigned char*, int);
extern "C" int func_ov000_02156068(void* battle, int id, int kind, int mode);
struct FlagObj_021dd260;
extern "C" int func_ov024_021dd260(FlagObj_021dd260*);

// USA: func_ov024_021e67c8
extern "C" ARM int func_ov024_021e67c8(struct Ctx_021e67c8* ctx, int mode, int targetId) {
    void* battle = ctx->battle;
    int level = func_ov000_02159e60(battle, mode);
    float rate = (level + 5) * NextRandomFloatBetween((struct Random*)battle, 0.8f, 1.0f);
    if (rate > 100.0f) {
        rate = 100.0f;
    }
    struct Cbt_021e67c8* target = GetCombatantByID((int)ctx->battle, targetId);
    if (target) {
        rate = rate * (target->stats->rate40 / 100.0f);
    }
    if (target) {
        if (target->stats->rank21 <= 3) {
            rate = rate * func_02074938((signed char)target->stats->rank21);
        }
        if (func_ov024_021e67b0((GameObject*)target)) {
            rate = rate * func_02074938(1);
        }
        if (func_02086ef0((ArrayContainsByteStruct*)(func_02010828(GameState::GetInstance())), targetId) &&
            target && target->stats->rank21 == 1) {
            func_ov000_0215a8d4((unsigned char*)ctx->battle, 0);
        }
    }
    if (func_ov000_02156068(ctx->battle, targetId, 0, 1)) {
        rate = NextRandomMax((struct Random*)ctx->battle, 2);
    }
    if (func_ov024_021dd260((FlagObj_021dd260*)target)) {
        rate = 0.5f * rate;
    }
    return rate;
}
