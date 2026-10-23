#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
enum { Enum_ov003_0215e1ec_963 = 0x3db };
#else
enum { Enum_ov003_0215e1ec_963 = 0x3c3 };
#endif

extern "C" void __clear(void* arg0, int arg1);
extern "C" unsigned char func_02011494(char* arg0, void* arg1);

struct Struct_ov003_0215e1ec {
    unsigned int unknown_0_;
    unsigned short unknown_4_;
};

struct Struct_ov003_0215e1ec_2 {
    char unknown_0_[Enum_ov003_0215e1ec_963];
    unsigned char unknown_3c3_;
    unsigned char unknown_3c4_[4];
};

// USA: func_ov003_0215e1ec
extern "C" ARM void func_ov003_0215e1ec(struct Struct_ov003_0215e1ec_2* arg0) {
    GameState* var0 = GameState::GetInstance();
    unsigned char var1[4];
    __clear(var1, 4);
    int var2 = func_02011494((char*)var0, var1);
    arg0->unknown_3c3_ = 0;
    for (int var3 = 0; var3 < var2; var3++) {
        GameObject* var4 = func_0200ff1c(var0, var1[var3]);
        if (var4 != NULL) {
            struct Struct_ov003_0215e1ec* var5 = *(struct Struct_ov003_0215e1ec**)((char*)var4 + 0x130);
            int var6 = var5->unknown_4_;
            if (var6 > 0) {
                arg0->unknown_3c4_[arg0->unknown_3c3_++] = var1[var3];
            }
        }
    }
}
