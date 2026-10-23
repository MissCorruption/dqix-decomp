#include <globaldefs.h>

struct Struct_0200fd38_4 {
    char unknown_0_[0x21];
    unsigned char unknown_21_;
};

struct Struct_ov024_021eda78_3 {
    char unknown_0_[0x138];
    struct Struct_0200fd38_4* unknown_138_;
};

struct Struct_0200fd38_3;

struct Struct_ov024_021eda78_4 {
    struct Struct_0200fd38_3* unknown_0_;
};

struct Struct_ov024_021eda78_3* GetCombatantByID(int, int);
struct GameObject;
extern "C" int func_ov024_021eda60(GameObject*);
extern "C" int func_ov024_021edbc0(GameObject*);
extern "C" int func_ov024_021edbd8(GameObject*);
extern "C" int func_ov024_021edbf0(GameObject*);
struct Struct_ov024_021eda78_5;
extern "C" int func_ov024_021edc08(Struct_ov024_021eda78_5*);
struct Struct_ov024_021eda78_6;
extern "C" int func_ov024_021edc20(Struct_ov024_021eda78_6*);
struct Struct_ov024_021eda78_7;
extern "C" int func_ov024_021edc38(Struct_ov024_021eda78_7*);
struct Struct_ov024_021e4604;
extern "C" int func_ov024_021e47dc(Struct_ov024_021e4604*);
struct Struct_ov024_021eda78_8;
extern "C" int func_ov024_021edc50(Struct_ov024_021eda78_8*);
struct Struct_ov024_021eda78_9;
extern "C" int func_ov024_021edc68(Struct_ov024_021eda78_9*);
struct Struct_ov024_021eda78;
extern "C" int func_ov024_021edc80(Struct_ov024_021eda78*);
struct Struct_ov024_021eda78_2;
extern "C" int func_ov024_021edca4(Struct_ov024_021eda78_2*);

static inline int inline_ov024_021eda78(struct Struct_ov024_021eda78_3* arg0) {
    return arg0->unknown_138_->unknown_21_ == 1;
}

static inline int inline_ov024_021eda78_2(struct Struct_ov024_021eda78_3* arg0) {
    return arg0->unknown_138_->unknown_21_ == 2;
}

// USA: func_ov024_021eda78
extern "C" ARM int func_ov024_021eda78(struct Struct_ov024_021eda78_4* arg0, int arg1) {
    struct Struct_ov024_021eda78_3* var0 = GetCombatantByID((int)arg0->unknown_0_, arg1);
    if (!var0) {
        return 0;
    }
    if (func_ov024_021eda60((GameObject*)var0)) {
        return 1;
    }
    if (func_ov024_021edbc0((GameObject*)var0)) {
        return 1;
    }
    if (inline_ov024_021eda78(var0)) {
        return 1;
    }
    if (inline_ov024_021eda78_2(var0)) {
        return 1;
    }
    if (func_ov024_021edbd8((GameObject*)var0)) {
        return 1;
    }
    if (func_ov024_021edbf0((GameObject*)var0)) {
        return 1;
    }
    if (func_ov024_021edc08((Struct_ov024_021eda78_5*)var0)) {
        return 1;
    }
    if (func_ov024_021edc20((Struct_ov024_021eda78_6*)var0)) {
        return 1;
    }
    if (func_ov024_021edc38((Struct_ov024_021eda78_7*)var0)) {
        return 1;
    }
    if (func_ov024_021e47dc((Struct_ov024_021e4604*)var0)) {
        return 1;
    }
    if (func_ov024_021edc50((Struct_ov024_021eda78_8*)var0)) {
        return 1;
    }
    if (func_ov024_021edc68((Struct_ov024_021eda78_9*)var0)) {
        return 1;
    }
    if (func_ov024_021edc80((Struct_ov024_021eda78*)var0)) {
        return 1;
    }
    if (func_ov024_021edca4((Struct_ov024_021eda78_2*)var0)) {
        return 1;
    }
    return func_ov024_021edc20((Struct_ov024_021eda78_6*)var0);
}
