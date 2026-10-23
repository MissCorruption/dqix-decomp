#include <globaldefs.h>
#include "Input/Input.h"

extern "C" int func_020421a0();

#if defined(jpn)
#define RG(usa, jpn) (jpn)
#else
#define RG(usa, jpn) (usa)
#endif

// USA: func_ov002_0216885c
extern "C" ARM void func_ov002_0216885c(char* arg0) {
    char* var0 = (char*)func_020421a0();
    int var1 = *(int*)(var0 + RG(0x998, 0x868));
    if (var1 != 0) {
        unsigned char var2 = *(unsigned char*)(arg0 + 0x2000 + RG(0x454, 0x288));
        unsigned char var3 = *(unsigned char*)(arg0 + 0x2000 + RG(0x455, 0x289));
        if (var2 >= var3) {
            (*(int*)(arg0 + 0x1000 + RG(0xbc0, 0xa88)))++;
        }
        int var4 = *(int*)(var0 + RG(0x9a0, 0x870));
        if (var4 != 3) {
            return;
        }
        if (!g_keyManager.TestKeysPressed(0x603)) {
            if (!g_touchInput.IsPressed()) {
                return;
            }
        }
        (*(int*)(arg0 + 0x1000 + RG(0xbc0, 0xa88)))--;
    } else {
        (*(int*)(arg0 + 0x1000 + RG(0xbc0, 0xa88)))++;
    }
}
