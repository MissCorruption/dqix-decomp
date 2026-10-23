#include <globaldefs.h>
#include "GameState/GameState.h"

extern char data_020feffc[];

extern "C" int func_0202d6a8(void);
extern "C" int func_0202d0b4(void);
void SleepCurrentContext(unsigned int);
extern "C" int func_0202dc40(int arg0, void* arg1);
unsigned long long GetCurrentTimestamp(void);

// USA: func_0202b840
extern "C" ARM int func_0202b840(int* arg0, int arg1) {
    int var0;
    GameState* var1;

    if (arg1 < 0) {
        return 1;
    }

    var0 = 0;
    while (func_0202d6a8() == 2) {
        func_0202d0b4();
        var0++;
        if (var0 > 0x1388) {
            return 0;
        }
        SleepCurrentContext(1);
    }

    var0 = 0;
    while (func_0202d6a8() != 1) {
        var0++;
        if (var0 > 0x1388) {
            return 0;
        }
        SleepCurrentContext(1);
    }

    func_0202dc40(5, data_020feffc + arg1 * 0xc0);
    *arg0 = 6;

    var1 = GameState::GetInstance();
    var1->altTimestamp_ = GetCurrentTimestamp();

    return 1;
}
