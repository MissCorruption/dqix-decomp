#include <globaldefs.h>

struct Stats_021eda78 {
    char pad0[0x21];
    unsigned char rank21;
};

struct Cbt_021eda78 {
    char pad0[0x138];
    struct Stats_021eda78* stats;
};

struct Battle_021eda78;

struct Ctx_021eda78 {
    struct Battle_021eda78* battle;
};

struct Cbt_021eda78* GetCombatantByID(int, int);
struct GameObject;
extern "C" int func_ov024_021eda60(GameObject*);
extern "C" int func_ov024_021edbc0(GameObject*);
extern "C" int func_ov024_021edbd8(GameObject*);
extern "C" int func_ov024_021edbf0(GameObject*);
struct S_flag4000000;
extern "C" int func_ov024_021edc08(S_flag4000000*);
struct S_flag100000;
extern "C" int func_ov024_021edc20(S_flag100000*);
struct S_flag200000;
extern "C" int func_ov024_021edc38(S_flag200000*);
struct FlagObj_021e47dc;
extern "C" int func_ov024_021e47dc(FlagObj_021e47dc*);
struct S_flag40000000;
extern "C" int func_ov024_021edc50(S_flag40000000*);
struct S_flag80000000;
extern "C" int func_ov024_021edc68(S_flag80000000*);
struct S_state21_021edc80;
extern "C" int func_ov024_021edc80(S_state21_021edc80*);
struct S_state21_021edca4;
extern "C" int func_ov024_021edca4(S_state21_021edca4*);

static inline int IsRank1(struct Cbt_021eda78* c) {
    return c->stats->rank21 == 1;
}

static inline int IsRank2(struct Cbt_021eda78* c) {
    return c->stats->rank21 == 2;
}

// USA: func_ov024_021eda78
extern "C" ARM int func_ov024_021eda78(struct Ctx_021eda78* ctx, int id) {
    struct Cbt_021eda78* c = GetCombatantByID((int)ctx->battle, id);
    if (!c) {
        return 0;
    }
    if (func_ov024_021eda60((GameObject*)c)) {
        return 1;
    }
    if (func_ov024_021edbc0((GameObject*)c)) {
        return 1;
    }
    if (IsRank1(c)) {
        return 1;
    }
    if (IsRank2(c)) {
        return 1;
    }
    if (func_ov024_021edbd8((GameObject*)c)) {
        return 1;
    }
    if (func_ov024_021edbf0((GameObject*)c)) {
        return 1;
    }
    if (func_ov024_021edc08((S_flag4000000*)c)) {
        return 1;
    }
    if (func_ov024_021edc20((S_flag100000*)c)) {
        return 1;
    }
    if (func_ov024_021edc38((S_flag200000*)c)) {
        return 1;
    }
    if (func_ov024_021e47dc((FlagObj_021e47dc*)c)) {
        return 1;
    }
    if (func_ov024_021edc50((S_flag40000000*)c)) {
        return 1;
    }
    if (func_ov024_021edc68((S_flag80000000*)c)) {
        return 1;
    }
    if (func_ov024_021edc80((S_state21_021edc80*)c)) {
        return 1;
    }
    if (func_ov024_021edca4((S_state21_021edca4*)c)) {
        return 1;
    }
    return func_ov024_021edc20((S_flag100000*)c);
}
