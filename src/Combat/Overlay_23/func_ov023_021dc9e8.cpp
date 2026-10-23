#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_0200fb8c(int* arg0);
extern "C" int func_ov023_021ddbb8(void* arg0, int arg1, int arg2);
extern "C" void func_ov023_021db2e4(volatile int* arg0);
extern "C" int func_ov023_021dc354(void* arg0);
extern "C" void func_ov023_021dc134(void* arg0, int arg1, int arg2);
extern "C" void func_ov023_021dbfd0(void* arg0, void* arg1);

#if defined(jpn)
#define FIELD_OFFSET(value) ((value) - 0x84)
#else
#define FIELD_OFFSET(value) (value)
#endif

// USA: func_ov023_021dc9e8
extern "C" ARM void func_ov023_021dc9e8(void* arg0, void* arg1, int arg2, int arg3, unsigned short arg4) {
    func_0200fb8c((int*)GameState::GetInstance());
    func_ov023_021ddbb8(arg0, -16, 1);

    func_ov023_021db2e4((volatile int*)((char*)arg0 + FIELD_OFFSET(0x734)));
    for (int var0 = 0; var0 < 7; var0++) {
        func_ov023_021db2e4((volatile int*)((char*)arg0 + FIELD_OFFSET(0x738) + var0 * 4));
    }

    func_ov023_021dc354(arg0);
    signed char var1 = *(signed char*)((char*)arg0 + FIELD_OFFSET(0x77b));
    func_ov023_021dc134(arg0, arg2, var1);

    unsigned short var2 = *(unsigned short*)((char*)arg0 + FIELD_OFFSET(0x774));
    *(unsigned short*)((char*)arg0 + FIELD_OFFSET(0x774)) = var2 | arg4;

    func_ov023_021dbfd0(arg0, arg1);
    *(int*)((char*)arg0 + 0x48) = arg3;
}
