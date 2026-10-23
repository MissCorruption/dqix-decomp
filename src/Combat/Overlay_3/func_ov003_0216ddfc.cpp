#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_0216ddfc_5100 = 0x127c };
enum { Enum_ov003_0216ddfc_4776 = 0x1138 };
enum { Enum_ov003_0216ddfc_4716 = 0x10fc };
enum { Enum_ov003_0216ddfc_223 = 0xd7 };
#else
enum { Enum_ov003_0216ddfc_5100 = 0x13ec };
enum { Enum_ov003_0216ddfc_4776 = 0x12a8 };
enum { Enum_ov003_0216ddfc_4716 = 0x126c };
enum { Enum_ov003_0216ddfc_223 = 0xdf };
#endif

#include "GameState/GameState.h"

struct Struct_0205a254;
struct Struct_0205a254_2;
extern "C" void func_0205a370(struct Struct_0205a254* arg0, int arg1);
extern "C" struct Struct_0205a254_2* func_0205a3d0(struct Struct_0205a254* arg0, int arg1);
extern "C" void func_020e27ec(struct Struct_0205a254* arg0, int arg1, short arg2, short arg3);
extern "C" void func_0205a42c(struct Struct_0205a254* arg0, int arg1, int arg2);

struct Struct_0205a330;
extern "C" void func_0205a330(struct Struct_0205a330* arg0, int arg1);

struct Struct_02000c9c_8;
extern "C" int func_0200fb08(struct Struct_02000c9c_8*);

extern "C" void func_0205ae8c(void* arg0);

// USA: func_ov003_0216ddfc
extern "C" ARM void func_ov003_0216ddfc(char* arg0) {
    GameState* var0 = GameState::GetInstance();
    if (*(unsigned char*)(arg0 + Enum_ov003_0216ddfc_5100) & 4) {
        struct Struct_0205a254* var1 = *(struct Struct_0205a254**)(arg0 + Enum_ov003_0216ddfc_4776);
        if (var1 != 0) {
            func_0205a370(var1, 1);
            struct Struct_0205a254_2* var2 = func_0205a3d0(var1, 1);
            if (var2 != 0) {
                *(unsigned char*)((char*)var2 + 0x15) |= 8;
            }
            func_0205a330((struct Struct_0205a330*)var1, var0->GetTickCount());
            func_020e27ec(var1, 1, Enum_ov003_0216ddfc_223, 0x96);
            func_0205a42c(var1, 1, 0x10);
#if !defined(jpn)
            if (func_0200fb08((struct Struct_02000c9c_8*)GameState::GetInstance()) == 3) {
                func_020e27ec(var1, 1, 0xd7, 0x96);
            }
#endif
        }
        func_0205ae8c(arg0 + Enum_ov003_0216ddfc_4716);
        return;
    }

    struct Struct_0205a254* var3 = *(struct Struct_0205a254**)(arg0 + Enum_ov003_0216ddfc_4776);
    if (var3 == 0) return;
    struct Struct_0205a254_2* var4 = func_0205a3d0(var3, 1);
    if (var4 != 0) {
        *(unsigned char*)((char*)var4 + 0x15) &= ~8;
    }
}
