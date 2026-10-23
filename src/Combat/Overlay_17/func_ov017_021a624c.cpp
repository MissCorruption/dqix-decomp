#include <globaldefs.h>

#include "Combat/BattleSkillEligibility.h"
#include "GameState/GameState.h"
#include "Grotto/Main/GrottoStruct.h"
#include "Resource/GameResources.h"
#include "World/Zone3D.h"

#if defined(jpn)
#define GLOB1C_FLAG_021a624c 0x868
#else
#define GLOB1C_FLAG_021a624c 0x998
#endif

#if defined(jpn)
#define func_020daf90 func_020dc998
#endif

extern "C" void* func_0202ae18(void);
extern "C" Zone3D* func_02012fe4(void);
extern "C" int func_0202c540(void* arg0);

extern "C" int func_02039750(void* arg0);
extern "C" int func_020421a0();
extern "C" void* func_020daf90(void);
extern "C" int func_02046b08(void** arg0);

struct Struct_02015a2c_2;
extern "C" int func_02015a2c(struct Struct_02015a2c_2* arg0);

extern "C" int func_020db2d4(void* arg0);

extern "C" void func_ov017_021a5bac(unsigned char* arg0);
extern "C" void func_ov017_021a5b48(unsigned char* arg0);
extern "C" void func_ov017_021a5cbc(GameResources* arg0);

typedef union {
    unsigned short unknown_0_;
    struct {
        unsigned short unknown_0_0_ : 2;
        unsigned short unknown_0_2_ : 4;
        unsigned short unknown_0_6_ : 1;
        unsigned short unknown_0_7_ : 1;
        unsigned short unknown_1_0_ : 5;
        unsigned short unknown_1_5_ : 1;
        unsigned short unknown_1_6_ : 2;
    };
} Struct_ov017_021a624c;

static inline Struct_ov017_021a624c inline_ov017_021a624c() {
    return *(volatile Struct_ov017_021a624c*)0x400000a;
}

static inline Struct_ov017_021a624c inline_ov017_021a624c_2() {
    volatile Struct_ov017_021a624c* var0 = (volatile Struct_ov017_021a624c*)0x400000c;
    return *var0;
}

// USA: func_ov017_021a624c
extern "C" ARM void func_ov017_021a624c(GameResources* arg0) {
    void* var0 = func_0202ae18();
    GameState* var1 = GameState::GetInstance();
    GameObject* var2 = var1->GetProtagonist();
    if (var2 == 0) return;

    int var3 = func_02039750(var2);
    int var4 = func_020421a0();
    GrottoStruct* var5;
    Zone3D_StructPtr_8* var6;
    Zone3D* var7 = func_02012fe4();
    var6 = var7->pUnknownStruct_8_;
    var5 = var1->GetGrottoStruct();
    void* var8 = func_020daf90();

    if (var1->GetGrottoStruct()->unknown_0[0] == 0 ||
        arg0->unknown_4080_ != 0 || var3 != -1 ||
        !func_02046b08((void**)arg0->unknown_ptr_array_36fc[0]) ||
        func_0202c540(var0) ||
        func_020117f0(GameState::GetInstance()) != 0 ||
        *(int*)((char*)var4 + GLOB1C_FLAG_021a624c) != 0 ||
        func_02015a2c((struct Struct_02015a2c_2*)var7) ||
        var6 == 0 || var6->unknown_c_low_ != 0 ||
        func_020db2d4(var8)) {
        var5->unknown_0[2] = 1;
        func_ov017_021a5bac((unsigned char*)arg0);
    } else if (*(int*)(arg0->unknown_4094 + 0x12c) == 0) {
        *(Struct_ov017_021a624c*)arg0->unknown_ptr_array_4088[0] = inline_ov017_021a624c();
        *(Struct_ov017_021a624c*)arg0->unknown_ptr_array_4088[1] = inline_ov017_021a624c_2();
        var5->unknown_0[2] = 0;
        func_ov017_021a5b48((unsigned char*)arg0);
        *(int*)(arg0->unknown_4094 + 0x12c) = 1;
    } else {
        func_ov017_021a5cbc(arg0);
    }
}
