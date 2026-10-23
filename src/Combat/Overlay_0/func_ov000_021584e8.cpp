#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov000_021584e8;

extern "C" void func_ov000_0215a88c(void* arg0, void* arg1, int arg2);
extern "C" void func_ov000_0215fe84(void* arg0, void* arg1, int arg2);
extern "C" void func_ov000_02159eac(void* arg0, void* arg1, int arg2);
extern "C" void func_ov000_0215ccbc(
    void* arg0, struct Struct_ov000_021584e8* arg1, GameObject* arg2, short arg3, short arg4, short arg5,
    unsigned long long arg6, unsigned char arg7);

static inline short inline_ov000_021584e8(ModifiableCombatStats* arg0) { return arg0->primaryStats.currHP; }
static inline short inline_ov000_021584e8_2(ModifiableCombatStats* arg0) { return arg0->primaryStats.currMP; }

// USA: func_ov000_021584e8
extern "C" ARM void func_ov000_021584e8(void* arg0, struct Struct_ov000_021584e8* arg1, GameObject* arg2,
                                        void* arg3, int arg4, unsigned char arg5) {
    func_ov000_0215a88c(arg0, arg1, (unsigned short)arg4);
    func_ov000_0215fe84(arg3, arg1, 1);
    ((unsigned char*)arg0)[0x8e02]++;
    unsigned long long var0 = 0;
    func_ov000_02159eac(arg0, &var0, arg5);
    func_ov000_0215ccbc(
        arg0, arg1, arg2, 0, inline_ov000_021584e8(arg2->currentStats_), inline_ov000_021584e8_2(arg2->currentStats_), var0, 0);
}
