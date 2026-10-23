#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
enum { Enum_ov003_02171764_1836 = 0x628 };
enum { Enum_ov003_02171764_1824 = 0x61c };
enum { Enum_ov003_02171764_1820 = 0x618 };
enum { Enum_ov003_02171764_686 = 0x28a };
#else
enum { Enum_ov003_02171764_1836 = 0x72c };
enum { Enum_ov003_02171764_1824 = 0x720 };
enum { Enum_ov003_02171764_1820 = 0x71c };
enum { Enum_ov003_02171764_686 = 0x2ae };
#endif

extern "C" void* func_0202ae18(void);
extern "C" void* func_0202ae24(void);

struct Struct_0202b2f0;
extern "C" int func_0202c578(struct Struct_0202b2f0* arg0, int arg1);

struct Struct_0202c508;
extern "C" int func_0202c508(struct Struct_0202c508* arg0);

extern "C" void func_ov017_021d1810(int, int, signed char);
extern "C" int* func_020936f8(void);
extern "C" void func_02094030(int* arg0, unsigned short arg1, short arg2, unsigned char arg3);
extern "C" void func_0202c21c(struct Struct_0202b2f0* arg0, int arg1);

extern "C" void func_0202b0f4(void* arg0);
extern "C" void func_ov003_02171e1c(void*, void*);
extern "C" int func_0205e488(void* arg0);

// USA: func_ov003_02171764
extern "C" ARM void func_ov003_02171764(char* arg0) {
    GameState* var0 = GameState::GetInstance();
    struct Struct_0202b2f0* var1 = (struct Struct_0202b2f0*)func_0202ae18();
    void* var2 = func_0202ae24();

    if (func_0202c578(var1, *(unsigned char*)(arg0 + 0x199)) != 0) {
        if (func_0202c508((struct Struct_0202c508*)var1) != 0) {
            func_ov017_021d1810(4, -1, 0);
            int* var3 = func_020936f8();
            func_02094030(var3, 4, -1, 0);
        }
        func_0202c21c(var1, *(unsigned char*)(arg0 + 0x199));
    }

    int var4 = var0->GetEffectiveDeltaTime();
    *(int*)(arg0 + Enum_ov003_02171764_1836) = var4;
    if ((unsigned int)var4 > 0xbb8) {
        func_0202b0f4(var1);
        arg0[0] = 4;
        return;
    }

    if (*(int*)(arg0 + Enum_ov003_02171764_1824) != 0 && *(int*)(arg0 + Enum_ov003_02171764_1820) != 0) {
        func_ov003_02171e1c(arg0, arg0 + Enum_ov003_02171764_686);
        func_0202b0f4(var1);
        arg0[0] = 4;
    }

    if (func_0205e488(var2) != 0) {
        *(int*)(arg0 + Enum_ov003_02171764_1824) = 1;
    }
}
