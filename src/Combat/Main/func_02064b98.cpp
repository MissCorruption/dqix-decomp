#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void func_02010774(char* arg0, int arg1);
extern "C" void func_020107a8(char* arg0, int arg1);
extern "C" void func_020107dc(char* arg0, int arg1);

// USA: func_02064b98
extern "C" ARM void func_02064b98(unsigned char* arg0, int arg1) {
    unsigned char* var0;
    if ((arg1 >= 0x1068 && arg1 <= 0x106a) || (arg1 >= 0x2328 && arg1 <= 0x2330)) {
        arg0[0x332] = 1;
        arg0 += 0x1c;
        var0 = arg0;
    } else if ((arg1 >= 0x6a4 && arg1 <= 0x6aa) || (arg1 >= 0x708 && arg1 <= 0x710) ||
               (arg1 >= 0x1770 && arg1 <= 0x1771) || (arg1 >= 0x1e14 && arg1 <= 0x1e1d)) {
        arg0[0x332] = 2;
        arg0 += 0x38;
        var0 = arg0;
    } else if ((arg1 >= 0xc8 && arg1 <= 0xdb) || (arg1 >= 0x1e7a && arg1 <= 0x1e81)) {
        arg0[0x332] = 3;
        arg0 += 0x54;
        var0 = arg0;
    } else if ((arg1 >= 0x834 && arg1 <= 0x83d) || (arg1 >= 0x206d && arg1 <= 0x206f)) {
        arg0[0x332] = 4;
        arg0 += 0x70;
        var0 = arg0;
    } else {
        arg0[0x332] = 0;
        var0 = arg0;
    }
    GameState* var1 = GameState::GetInstance();
    func_02010774((char*)var1, var0[0]);
    func_020107a8((char*)var1, var0[1]);
    func_020107dc((char*)var1, var0[2]);
}
