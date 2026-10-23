#include <globaldefs.h>
#include "GameState/GameState.h"

struct CounterBlk {
    char pad[0xd];
    unsigned char count;
};
struct SearchStruct {
    int field_0;
    char pad[0x1000 - 4];
    struct CounterBlk blk;
};

extern "C" void func_020d8654(void);
extern "C" void func_020d8694(void);
extern "C" int func_0202c1c0(struct SearchStruct* obj, int value);
extern "C" void func_0202c3e0(void* obj);
extern "C" void func_020ac4f8(int flag);
unsigned long long GetCurrentTimestamp(void);

// USA: func_0202c288
extern "C" ARM void func_0202c288(struct SearchStruct* obj) {
    func_020d8654();
    int flag = (*(int*)obj != 0);
    unsigned char saved = obj->blk.count;

    if (!flag) {
        obj->blk.count = 1;
    } else {
        obj->blk.count = 0;
        int i;
        for (i = 0; i < 4; i++) {
            if (func_0202c1c0(obj, i)) {
                (*((unsigned char*)obj + 0x100d))++;
            }
        }
        func_0202c3e0(obj);
    }

    if (*(int*)obj == 5) {
        unsigned char cur = obj->blk.count;
        if (cur == 1) {
            if (saved > 1) {
                func_020ac4f8(1);
                goto done;
            }
        }

        if (cur > 1) {
            if (saved == 1) {
                GameState* bs = GameState::GetInstance();
                bs->altTimestamp_ = GetCurrentTimestamp();
            }
        }
    }

done:
    func_020d8694();
}
