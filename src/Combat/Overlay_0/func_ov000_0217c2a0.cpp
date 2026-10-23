#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_02054000;
extern "C" void* func_02054000(struct Struct_02054000* arg0);
extern "C" int func_ov000_0217538c(void* arg0);

struct Struct_ov000_02184294_10 {
#if defined(jpn)
    void* unknown1_8_;
    int unknown_0_;
    int unknown_8_;
#else
    int unknown_0_;
    int unknown_4_;
    void* unknown1_8_;
#endif
};
extern Struct_ov000_02184294_10 data_ov000_02184294;

// USA: func_ov000_0217c2a0
extern "C" ARM int func_ov000_0217c2a0(void* arg0) {
    char* var0 = (char*)arg0;
    int var1 = 0;
    GameState* var2 = GameState::GetInstance();
    int var3 = *(int*)(var0 + 0x4c);
    GameObject* var4 = func_0200ff1c(var2, var3);
    if (var4 != 0) {
        void* var5 = func_02054000((struct Struct_02054000*)var4);
        if (var5 != 0) {
            short var6 = *(short*)((char*)var5 + 0x18);
            if (var6 > 0) {
                struct Struct_ov000_0217c2a0 { unsigned int unknown_0_0_ : 1; unsigned int unknown_0_1_ : 1; unsigned int unknown_0_2_ : 30; };
#if defined(jpn)
                enum { Enum_ov000_0217c2a0_336 = 0x144 };
#else
                enum { Enum_ov000_0217c2a0_336 = 0x150 };
#endif
                struct Struct_ov000_0217c2a0* var7 = (struct Struct_ov000_0217c2a0*)(*(int*)((char*)var4 + Enum_ov000_0217c2a0_336) + 0x2f4);
                if (var7->unknown_0_1_) {
                    var1 = 1;
                } else {
                    if (var7->unknown_0_0_) {
                        if (func_ov000_0217538c(data_ov000_02184294.unknown1_8_) == 1) {
                            var1 = 1;
                        }
                    }
                }
            }
        }
        if (data_ov000_02184294.unknown_0_ == 1) {
            var1 = 1;
        }
    }
    return var1;
}
