#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_0202c288 {
    char unknown_0_[0xd];
    unsigned char unknown_d_;
};
struct Struct_0202b2f0 {
    int unknown_0_;
    char unknown_4_[0x1000 - 4];
    struct Struct_0202c288 unknown_1000_;
};

extern "C" void func_020d8654(void);
extern "C" void func_020d8694(void);
extern "C" int func_0202c1c0(struct Struct_0202b2f0* arg0, int arg1);
extern "C" void func_0202c3e0(void* arg0);
extern "C" void func_020ac4f8(int arg0);
unsigned long long GetCurrentTimestamp(void);

// USA: func_0202c288
extern "C" ARM void func_0202c288(struct Struct_0202b2f0* arg0) {
    func_020d8654();
    int var0 = (*(int*)arg0 != 0);
    unsigned char var1 = arg0->unknown_1000_.unknown_d_;

    if (!var0) {
        arg0->unknown_1000_.unknown_d_ = 1;
    } else {
        arg0->unknown_1000_.unknown_d_ = 0;
        int var2;
        for (var2 = 0; var2 < 4; var2++) {
            if (func_0202c1c0(arg0, var2)) {
                (*((unsigned char*)arg0 + 0x100d))++;
            }
        }
        func_0202c3e0(arg0);
    }

    if (*(int*)arg0 == 5) {
        unsigned char var3 = arg0->unknown_1000_.unknown_d_;
        if (var3 == 1) {
            if (var1 > 1) {
                func_020ac4f8(1);
                goto done;
            }
        }

        if (var3 > 1) {
            if (var1 == 1) {
                GameState* var4 = GameState::GetInstance();
                var4->altTimestamp_ = GetCurrentTimestamp();
            }
        }
    }

done:
    func_020d8694();
}
