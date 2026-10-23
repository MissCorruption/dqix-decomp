#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void func_020488ec(char* arg0);
extern "C" GameObject* func_0200fea4(GameState* arg0, int arg1);

// USA: func_ov000_02161274
extern "C" ARM void func_ov000_02161274(GameObject* arg0) {
    if (arg0 == NULL) {
        return;
    }
    void* var0 = *(void**)((char*)arg0 + 0x144);
    if (var0 == NULL) {
        return;
    }
    short var1 = *(short*)((char*)var0 + 8);
    GameState* var2 = GameState::GetInstance();
    int var3 = 0;
    while (var3 < 8) {
        GameObject* var4 = func_0200fea4(var2, var3 + 0xc0);
        if (var4 != NULL && var4 != arg0) {
            void* var5 = *(void**)((char*)var4 + 0x144);
            if (var5 != NULL) {
                short var6 = *(short*)((char*)var5 + 8);
                if (var6 == var1) {
                    unsigned char* var7 = *(unsigned char**)((char*)var4 + 0x138);
                    if (var7[0x25] == 0 && *((unsigned char*)var4 + 0x18d) == 0) {
                        var7[0x25] = 1;
                        *((unsigned char*)var4 + 0x18d) = 1;
                        func_020488ec((char*)var4);
                        return;
                    }
                }
            }
        }
        var3++;
    }
}
