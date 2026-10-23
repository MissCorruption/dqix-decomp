#include "Combat/TryApplyElemFields.h"
#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"

struct Struct_0205d6a0;
extern "C" void func_0205d6a0(struct Struct_0205d6a0* arg0, int arg1);

extern "C" void func_ov023_021d921c(void* arg0, int arg1, int arg2, int arg3);

extern "C" void func_ov023_021d94e4(void* arg0, void* arg1, unsigned char arg2);

struct Struct_0205d81c;
struct Struct_0205d0e0;
extern "C" struct Struct_0205d0e0* func_0205d81c(struct Struct_0205d81c* arg0, int arg1);

struct Struct_0205d5d0;
// USA: func_ov023_021d90d0
extern "C" ARM int func_ov023_021d90d0(char* arg0) {
#if defined(jpn)
 enum {Enum_ov023_021d90d0_2400=0x800};
#else
 enum {Enum_ov023_021d90d0_2400=0x960};
#endif
    int var0 = GameState::GetInstance()->GetTickCount();
    if (var0 == 0) var0 = 1;
    unsigned char var1 = *(unsigned char*)(arg0 + 0x11c);

    if (var1 == 0) {
        func_0205d6a0((struct Struct_0205d6a0*)(arg0 + 0x20), 1);
        int var2 = *(unsigned char*)(arg0 + 0x11c) + 1;
        *(unsigned char*)(arg0 + 0x11c) = (unsigned char)var2;
        return var2;
    }
    if (var1 == 1) {
        *(unsigned char*)(arg0 + 0x118) = 0;
        *(unsigned char*)(arg0 + 0x11d) = 5;
        memset(*(void**)(arg0 + 0x4), 0, Enum_ov023_021d90d0_2400);
        func_ov023_021d94e4(arg0, *(void**)(arg0 + 4), *(unsigned char*)(arg0 + 0x118));
        func_ov023_021d921c(arg0, *(int*)(arg0 + 4), 0x1a, 0x14);
        int var3 = *(unsigned char*)(arg0 + 0x11c) + 1;
        *(unsigned char*)(arg0 + 0x11c) = (unsigned char)var3;
        return var3;
    }
    if (var1 != 2) return var0;

    signed char var4 = *(signed char*)(arg0 + 0x11d);
    if (var4 > 0) {
        int var5 = var4 - (signed char)var0;
        *(unsigned char*)(arg0 + 0x11d) = (unsigned char)var5;
        return var5;
    }

    *(unsigned char*)(arg0 + 0x11d) = 5;
    *(unsigned char*)(arg0 + 0x118) = *(unsigned char*)(arg0 + 0x118) + 1;
    memset(*(void**)(arg0 + 0x4), 0, Enum_ov023_021d90d0_2400);
    func_ov023_021d94e4(arg0, *(void**)(arg0 + 4), *(unsigned char*)(arg0 + 0x118));

#if defined(jpn)
    func_0205d5d0((struct Struct_0205d5d0*)(arg0 + 0x20), 0, *(int*)(arg0 + 4), 1);

#else
    unsigned char* var6 = (unsigned char*)func_0205d81c((struct Struct_0205d81c*)(arg0 + 0x20), 0);
    if (var6 != NULL) {
        var6[0xd8] |= 4;
        func_0205d5d0((struct Struct_0205d5d0*)(arg0 + 0x20), 0, *(int*)(arg0 + 4), 1, 0);
        var6[0xd8] &= ~4;
    }

#endif
    if (*(unsigned char*)(arg0 + 0x118) == 9) {
        int var7 = *(unsigned char*)(arg0 + 0x11c) + 1;
        *(unsigned char*)(arg0 + 0x11c) = (unsigned char)var7;
        return var7;
    }
    return *(unsigned char*)(arg0 + 0x118);
}
