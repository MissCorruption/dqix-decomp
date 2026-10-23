#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "GameState/GameState.h"
#include "std_library_functions.h"

struct Struct_ov008_0218b1e0 { unsigned short unknown_0_0_ : 14; unsigned short unknown_1_6_ : 1; unsigned short unknown_1_7_ : 1; };

// USA: func_ov008_0218b1e0
extern "C" ARM void func_ov008_0218b1e0(void* arg0) {
    GameState* var0 = GameState::GetInstance();
    unsigned char* var1 = (unsigned char*)var0 + R(0x3bc + 0x6c00, 0x1fc + 0x7000);
    unsigned char* var2 = var1 + 4;
    for (int var3 = 0; var3 < 0x10; var2 += 0x2c, var3++) {
        struct Struct_ov008_0218b1e0* var4 = (struct Struct_ov008_0218b1e0*)(var2 + 0x12);
        if (!var4->unknown_1_6_) {
            memcpy(var2, (char*)arg0 + R(0xdec, 0xdf0), 0x2c);
            var1[0]++;
            return;
        }
    }
}
