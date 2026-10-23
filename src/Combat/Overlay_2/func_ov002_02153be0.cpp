#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" float _ffltu(unsigned int v);
extern "C" float _fdiv(float arg0, float arg1);
extern "C" float _fmul(float a, float b);
extern "C" int _ffix(float v);

// USA: func_ov002_02153be0
extern "C" ARM int func_ov002_02153be0(void* arg0, unsigned char* arg1, int arg2) {
    int var0 = 0;
    unsigned int var1 = *(unsigned int*)(arg1 + 0x18);
    if (((var1 << 14) >> 30) == 1) {
        GameObject* var2 = func_0200ff1c(GameState::GetInstance(), arg2);
        if (var2 == 0) {
            return 0;
        }

        if (*(unsigned int*)(arg1 + 0x10) & 0x8000) {
            unsigned int var3 = *(unsigned int*)((char*)var2->baseStats_ + 0x3c);
            unsigned int var4 = (unsigned short)((var3 << 2) >> 22);
            unsigned int var5 = *(unsigned int*)(arg1 + 4);

            if (var4 <= ((var5 << 10) >> 22)) {
                unsigned int var6 = *(unsigned int*)(arg1 + 0x14);
                var0 = (var6 << 18) >> 25;
            } else if (var4 >= (var5 >> 22)) {
                unsigned int var7 = *(unsigned int*)(arg1 + 0x14);
                var0 = (var7 << 11) >> 25;
            } else {
                unsigned int var8 = *(unsigned int*)(arg1 + 0x14);
                int var9 = (var8 << 11) >> 25;
                int var10 = (var8 << 18) >> 25;
                float var11 = _fdiv(_ffltu(var9 - var10), _ffltu((var5 >> 22) - ((var5 << 10) >> 22)));
                var0 = _ffix(_fmul(var11, _ffltu(var4 - ((var5 << 10) >> 22)))) + var10;
            }
        }
    }
    return var0;
}
