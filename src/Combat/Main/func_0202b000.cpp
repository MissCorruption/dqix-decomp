#include <globaldefs.h>
#if defined(jpn)
enum { kSelectionIndex = 0x753e - 0x6fc0 };
#else
enum { kSelectionIndex = 0x74fe - 0x6fc0 };
#endif
#include "GameState/GameState.h"
#include "NitroSDK/ProcessorContext.h"

struct BattleSelection0202b000 { unsigned char values[6]; };
struct BattleObject0202b000 {
    int active;
    unsigned short slot;
    char field_0x6[0x102c - 6];
    BattleSelection0202b000 selection;
};
extern "C" void func_0202aec0(BattleObject0202b000*);
extern "C" void func_020d8654();
extern "C" int func_020d4dd4();
extern "C" int func_0202d9e0();
extern "C" int func_020d472c(void*);
extern "C" void func_0202d688(int);
extern "C" int func_0202b1f4(BattleObject0202b000*, int);
extern "C" void func_0202dd28();
extern "C" int func_020d5974(void*, int, int);
extern "C" void func_020d8694();
extern "C" void func_0202ae30(void*);

// USA: func_0202b000
extern "C" ARM unsigned char func_0202b000(BattleObject0202b000* obj) {
    func_0202aec0(obj);
    func_020d8654();
    obj->slot = func_020d4dd4();
    int attempts = 0;
    while (!func_0202d9e0()) {
        attempts++;
        if (attempts > 5000) break;
        SleepCurrentContext(1);
    }
    func_020d472c((void*)func_0202ae30);
    func_0202d688(0x785);
    obj->active = 1;
    int result = func_0202b1f4(obj, 1);
    if (result) {
        func_0202dd28();
        func_0202b1f4(obj, 1);
    }
    func_020d5974(0, 255, 235);
    GameState* state = GameState::GetInstance();
    BattleSelection0202b000 selection = *(BattleSelection0202b000*)&state->unk_6fc0[kSelectionIndex];
    obj->selection = selection;
    func_020d8694();
    return result;
}
