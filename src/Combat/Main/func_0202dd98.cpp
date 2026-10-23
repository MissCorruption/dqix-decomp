#include <globaldefs.h>
#if defined(jpn)
#define data_021023c0 data_02102100
#endif

struct BattleDispatchState { char pad0[0x10]; int state_; char pad14[0x34 - 0x14]; int mode_; };
struct BattleEffectContext { char data_[0x820]; };
extern BattleDispatchState data_021015a0;
extern BattleEffectContext data_021023c0, data_02102be0;
extern "C" int func_0202d0b4();
extern "C" void func_0202dd28();
extern "C" int func_020d68d0(void*);
extern "C" void func_0202c848(int);
extern "C" int func_0202d54c();
extern "C" int func_020d5f88(void*);
extern "C" int func_0202cca4();

static inline int CurrentState() { return data_021015a0.state_; }

// USA: func_0202dd98
extern "C" ARM void func_0202dd98() {
    if (data_021015a0.state_ == 1) return;
    if (data_021015a0.state_ == 2) {
        if (!func_0202d0b4()) func_0202dd28();
        return;
    }
    if (data_021015a0.state_ != 6 && data_021015a0.state_ != 5 && data_021015a0.state_ != 4) {
        data_021015a0.state_ = 3;
        func_0202dd28();
        return;
    }
    data_021015a0.state_ = 3;
    switch (data_021015a0.mode_) {
    case 3: {
        int result;
        int state = CurrentState();
        if (state != 6) result = 0;
        else {
            data_021015a0.state_ = state;
            int status = func_020d68d0(&data_021023c0);
            if (status) { func_0202c848(status); result = 0; }
            else if (!func_0202d54c()) result = 0;
            else result = 1;
        }
        if (!result) func_0202dd28();
        break;
    }
    case 5:
        if (func_020d5f88(&data_02102be0)) { func_0202dd28(); break; }
    case 1:
        if (!func_0202d54c()) func_0202dd28();
        break;
    case 2: {
        int result;
        int status = func_020d68d0(&data_021023c0);
        if (status) { func_0202c848(status); result = 0; }
        else if (func_0202cca4()) result = 1;
        else { func_0202dd28(); result = 0; }
        if (!result) func_0202dd28();
        break;
    }
    case 4:
        if (func_020d5f88(&data_02102be0)) { func_0202dd28(); break; }
    case 0:
        if (!func_0202cca4()) func_0202dd28();
        break;
    }
}
