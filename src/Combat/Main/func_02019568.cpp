#if defined(jpn)
enum { Enum_02019568_1052 = 0x43c };
#else
enum { Enum_02019568_1052 = 0x41c };
#endif

#include <globaldefs.h>
#include "Graphics/LightingManager.h"
#include "GameState/GameState.h"

struct Struct_020177d4;
struct Struct_02019568;
extern "C" struct Struct_02019568* func_0201f2a4(struct Struct_020177d4* arg0, int arg1);

struct Struct_02013380;
extern "C" void func_02013380(struct Struct_02013380* arg0, int arg1, int arg2);

struct Struct_02019568_2 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
};

// USA: func_02019568
extern "C" ARM void func_02019568(void* arg0, int arg1) {
    GameState::GetInstance();
    void* var0 = LightingManager::GetInstance();
    int var1 = *(int*)((char*)var0 + 0x98);

    void* var2 = *(void**)((char*)arg0 + Enum_02019568_1052);
    while (var2 != NULL) {
        int var3 = *(int*)var2;
        int var4 = 0;
        if (var3 >= 0) {
            var4 = var3 & 0xff;
        }
        for (int var5 = 0; var5 < *(int*)((char*)var2 + 0x14); var5++) {
            struct Struct_02019568* var6 = func_0201f2a4((struct Struct_020177d4*)((char*)var2 + 4), var5);
            struct Struct_02019568_2* var7 = (struct Struct_02019568_2*)((char*)(*(void**)((char*)var2 + 0x44)) + var5 * 0x70);

            if (var7->unknown_2_ & 4) {
                var7->unknown_2_ &= ~0x20;
            } else {
                var7->unknown_2_ |= 0x20;
            }

            if (*(unsigned short*)((char*)var6 + 6) & 0x10) {
                func_02013380((struct Struct_02013380*)var7, var4, 1);
            }

            if (!(*(unsigned short*)((char*)var6 + 6) & (1 << var1))) {
                func_02013380((struct Struct_02013380*)var7, var4, 0);
            }

            if (arg1 != 0) {
                if (*(unsigned short*)((char*)var6 + 6) & 0x20) {
                    func_02013380((struct Struct_02013380*)var7, var4, 0);
                }
            } else {
                if (*(unsigned short*)((char*)var6 + 6) & 0x40) {
                    func_02013380((struct Struct_02013380*)var7, var4, 0);
                }
            }

            var7->unknown_2_ &= ~0x40;
        }
        var2 = *(void**)((char*)var2 + 0x54);
    }
}
