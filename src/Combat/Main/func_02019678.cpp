#include <globaldefs.h>
#if defined(jpn)
enum { Enum_02019678_1052 = 0x43c };
#else
enum { Enum_02019678_1052 = 0x41c };
#endif

#include "Graphics/LightingManager.h"
#include "GameState/GameState.h"

struct Struct_020177d4;
struct Struct_02019568;
extern "C" struct Struct_02019568* func_0201f2a4(struct Struct_020177d4* arg0, int arg1);
struct Struct_02013380;
extern "C" void func_02013380(struct Struct_02013380* arg0, int arg1, int arg2);

struct Struct_02019678 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
};

// USA: func_02019678
extern "C" ARM void func_02019678(void* arg0) {
    GameState::GetInstance();
    LightingManager::GetInstance();
    void* var0 = *(void**)((char*)arg0 + Enum_02019678_1052);
    while (var0 != 0) {
        for (int var1 = 0; var1 < *(int*)((char*)var0 + 0x14); var1++) {
            func_0201f2a4((struct Struct_020177d4*)((char*)var0 + 4), var1);
            struct Struct_02019678* var2 = (struct Struct_02019678*)((char*)(*(void**)((char*)var0 + 0x44)) + var1 * 0x70);
            if (var2->unknown_2_ & 0x40) continue;
            int var3 = *(int*)var0;
            int var4 = 0;
            if (var3 >= 0) var4 = var3 & 0xff;
            func_02013380((struct Struct_02013380*)var2, var4, var2->unknown_2_ & 0x20);
        }
        var0 = *(void**)((char*)var0 + 0x54);
    }
}
