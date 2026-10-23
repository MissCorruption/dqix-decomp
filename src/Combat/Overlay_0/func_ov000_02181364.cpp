#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_ov000_02161318(void* arg0, int arg1);
extern "C" void func_ov000_02174b14(void* arg0);

// USA: func_ov000_02181364
extern "C" ARM void func_ov000_02181364(void* arg0) {
    unsigned char* var0 = (unsigned char*)func_02010828(GameState::GetInstance());
    unsigned char var1 = var0[0xf7c];
    unsigned char var2;
    for (var2 = 0; var2 < var1; var2++) {
        unsigned char var3 = (var0 + var2)[0xf78];
        void* var4 = func_ov000_02161318(arg0, var3);
        if (var4 != NULL) {
            signed char var5 = *(signed char*)((char*)var4 + 0x18);
            char* var6 = (char*)var4 + var5;
            *(unsigned char*)(var6 + 0x10) = 100;
            unsigned char var7 = *(unsigned char*)((char*)var4 + 0x24);
            var7 &= ~4;
            *(unsigned char*)((char*)var4 + 0x24) = var7;
        }
    }
    func_ov000_02174b14(arg0);
}
