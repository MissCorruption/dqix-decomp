#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/Brightness.h"
#include "NitroSDK/Filesystem/FSInnerDefs.h"

struct FlagWord02046708 { unsigned int flags; };

extern "C" void* func_020d6c00(void);
extern "C" void* func_0202ae18(void);
extern "C" int func_0202b7d8(int* obj);
extern "C" int func_02046708(struct FlagWord02046708* word, unsigned int mask);
extern "C" int func_020bbdcc(int a);
extern "C" int func_020ce89c(int a, int b, int c);
extern "C" int func_020cedc0(int a);
extern "C" int func_0200fb8c(int* obj);
extern "C" void func_ov017_02199e98(void* obj);
extern "C" int func_020cede0(void);

// USA: func_02012de8
extern "C" ARM void func_02012de8(void) {
    struct FlagWord02046708* p1 = (struct FlagWord02046708*)func_020d6c00();
    int* p2 = (int*)func_0202ae18();

    int bit15 = (*(volatile unsigned short*)0x027fffa8 & 0x8000) >> 15;
    if (bit15) {
        if (func_0202b7d8(p2) && !func_02046708(p1, 0x1000000)) {
            goto skipFirst;
        }
        if (!func_02046708(p1, 0x80)) {
            func_020bbdcc(0);
            func_020ce89c(0xc, 0, 0);
            if (func_020d1198() == 0) {
                func_020bbdcc(0x7f);
            }
            return;
        }
    skipFirst:
        if (!func_02046708(p1, 0x400000)) {
            func_020cedc0(0);
        }
        if (!func_0202b7d8(p2)) return;
        if (func_02046708(p1, 0x1000000)) return;
        {
            int word = func_0200fb8c((int*)GameState::GetInstance());
            if (word == 0) return;
            func_ov017_02199e98((void*)word);
        }
        return;
    }

    if (func_020cede0()) return;
    func_020cedc0(1);
    {
        int word = func_0200fb8c((int*)GameState::GetInstance());
        if (word == 0) return;
        WriteBrightnessToHardware((GameResources*)word);
    }
}
