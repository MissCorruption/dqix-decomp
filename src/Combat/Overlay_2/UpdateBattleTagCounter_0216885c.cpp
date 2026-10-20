#include <globaldefs.h>
#include "Input/Input.h"

int GetGlobalField0x1c020421a0();
int CheckByteSetAndByteClear_02012aac(unsigned char* obj);
extern unsigned char data_02114e54;

#if defined(jpn)
#define RG(usa, jpn) (jpn)
#else
#define RG(usa, jpn) (usa)
#endif

// USA: func_ov002_0216885c
ARM void UpdateBattleTagCounter_0216885c(char* base) {
    char* field = (char*)GetGlobalField0x1c020421a0();
    int v998 = *(int*)(field + RG(0x998, 0x868));
    if (v998 != 0) {
        unsigned char b454 = *(unsigned char*)(base + 0x2000 + RG(0x454, 0x288));
        unsigned char b455 = *(unsigned char*)(base + 0x2000 + RG(0x455, 0x289));
        if (b454 >= b455) {
            (*(int*)(base + 0x1000 + RG(0xbc0, 0xa88)))++;
        }
        int v9a0 = *(int*)(field + RG(0x9a0, 0x870));
        if (v9a0 != 3) {
            return;
        }
        if (!g_keyManager.TestKeysPressed(0x603)) {
            if (!CheckByteSetAndByteClear_02012aac(&data_02114e54)) {
                return;
            }
        }
        (*(int*)(base + 0x1000 + RG(0xbc0, 0xa88)))--;
    } else {
        (*(int*)(base + 0x1000 + RG(0xbc0, 0xa88)))++;
    }
}
