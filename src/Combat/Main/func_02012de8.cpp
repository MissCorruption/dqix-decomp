#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/Brightness.h"
#include "NitroSDK/Filesystem/FSInnerDefs.h"

struct Struct_02012de8 { unsigned int unknown_0_; };

extern "C" void* func_020d6c00(void);
extern "C" void* func_0202ae18(void);
extern "C" int func_0202b7d8(int* arg0);
extern "C" int func_02046708(struct Struct_02012de8* arg0, unsigned int arg1);
extern "C" int func_020bbdcc(int arg0);
extern "C" int func_020ce89c(int arg0, int arg1, int arg2);
extern "C" int func_020cedc0(int arg0);
extern "C" int func_0200fb8c(int* arg0);
extern "C" void func_ov017_02199e98(void* arg0);
extern "C" int func_020cede0(void);

// USA: func_02012de8
extern "C" ARM void func_02012de8(void) {
    struct Struct_02012de8* var0 = (struct Struct_02012de8*)func_020d6c00();
    int* var1 = (int*)func_0202ae18();

    int var2 = (*(volatile unsigned short*)0x027fffa8 & 0x8000) >> 15;
    if (var2) {
        if (func_0202b7d8(var1) && !func_02046708(var0, 0x1000000)) {
            goto skipFirst;
        }
        if (!func_02046708(var0, 0x80)) {
            func_020bbdcc(0);
            func_020ce89c(0xc, 0, 0);
            if (func_020d1198() == 0) {
                func_020bbdcc(0x7f);
            }
            return;
        }
    skipFirst:
        if (!func_02046708(var0, 0x400000)) {
            func_020cedc0(0);
        }
        if (!func_0202b7d8(var1)) return;
        if (func_02046708(var0, 0x1000000)) return;
        {
            int var3 = func_0200fb8c((int*)GameState::GetInstance());
            if (var3 == 0) return;
            func_ov017_02199e98((void*)var3);
        }
        return;
    }

    if (func_020cede0()) return;
    func_020cedc0(1);
    {
        int var4 = func_0200fb8c((int*)GameState::GetInstance());
        if (var4 == 0) return;
        WriteBrightnessToHardware((GameResources*)var4);
    }
}
