#if defined(jpn)
enum { Enum_ov017_021b1d44_620 = 0xc };
#else
enum { Enum_ov017_021b1d44_620 = 0x26c };
#endif

#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory.h"

struct Struct_0204693c;
extern "C" void func_0204693c(struct Struct_0204693c* arg0);

struct Struct_ov017_021b1d44 { char unknown_0_[0xc]; unsigned short unknown_c_0_ : 13; unsigned short unknown_d_5_ : 3; };
struct Struct_ov017_021b1d44_2 { char unknown_0_[0x5d00]; struct Struct_ov017_021b1d44 unknown_5d00_; };

struct Struct_ov017_021b1d44_3 { unsigned char unknown_0_[0x3c]; int unknown_3c_[8]; };

// USA: func_ov017_021b1d44
extern "C" ARM int func_ov017_021b1d44(unsigned char* arg0, int arg1, int arg2) {
    func_0204693c((struct Struct_0204693c*)arg0);
    arg0[0] = 0x2c;
    *(int*)(arg0 + 8) = 0;
    arg0[0x20] = 0;
    arg0[0x21] = (unsigned char)arg1;
    *(int*)(arg0 + 0x24) = 0;
    ((SafeAllocator*)(arg0 + 0xc))->ResetAllocatorPointer();
    arg0[0x32] = 0;
    if (arg2 != 0) {
        arg0[0x28] = 0;
        arg0[0x29] = 0;
        VectorizedMemset(arg0 + 0x2a, 0, 8);
    }
    *(int*)(arg0 + 0x34) = 0;
    *(int*)(arg0 + 0x38) = 0;
    if ((arg0[0x21] & 0x40) != 0) {
        struct Struct_ov017_021b1d44_3* var0 = (struct Struct_ov017_021b1d44_3*)arg0;
        for (int var1 = 0; var1 < 8; var1++) {
            var0->unknown_3c_[var1] = -1;
        }
        return 0;
    }
    struct Struct_ov017_021b1d44_2* var2 =
        (struct Struct_ov017_021b1d44_2*)((char*)GameState::GetInstance() + Enum_ov017_021b1d44_620);
    if ((var2->unknown_5d00_.unknown_c_0_ & 8) == 0) {
        unsigned char var3 = arg0[0x21];
        if ((var3 & 4) == 0 && (var3 & 2) == 0 && (var3 & 0x20) == 0) {
            arg0[0x21] = var3 | 0x10;
        }
    }
    return 1;
}
