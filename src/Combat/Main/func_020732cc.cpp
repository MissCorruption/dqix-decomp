#include <globaldefs.h>

#include "GameState/GameState.h"
#include "Resource/GameResources.h"

extern "C" void* func_02010828(GameState* arg0);
extern "C" GameObject* func_0200ff1c(GameState* arg0, int arg1);

struct Struct_02052e2c;
extern "C" short* func_02052e2c(struct Struct_02052e2c* arg0);
extern "C" void func_02048418(unsigned char*, unsigned short);

struct Struct_020732cc;
extern "C" int func_0207c378(struct Struct_020732cc* arg0, int arg1, int arg2, int arg3);
extern "C" void func_ov017_0218f5a4(void* arg0, int arg1, int arg2, int arg3, int arg4);

struct Struct_020732cc_2 {
    unsigned char unknown_0_[8];
    unsigned int unknown_8_0_ : 4;
    unsigned int unknown_8_4_ : 28;
};

extern signed short data_020e8854[];
extern signed short data_020e8864[];

#if defined(jpn)
enum { Enum_020732cc_336 = 0x144 };
#else
enum { Enum_020732cc_336 = 0x150 };
#endif

// USA: func_020732cc
extern "C" ARM void func_020732cc(int arg0) {
    GameState* var0 = GameState::GetInstance();
    void* var1 = GetGameResources();
    void* var2 = func_02010828(var0);
    GameObject* var3 = func_0200ff1c(var0, arg0);
    if (var3 != NULL) {
        int var4;
        short* var5;
        struct Struct_020732cc_2* var6;
        for (var4 = 0; var4 < 8; var4++) {
            signed short var7 = data_020e8854[var4];
            char* var8 = *(char**)((char*)var3 + Enum_020732cc_336) + 0x194;
            var6 = (struct Struct_020732cc_2*)(var8 + (unsigned char)data_020e8864[var7] * 0x20);
            var5 = func_02052e2c(
                (struct Struct_02052e2c*)var3);
            if (var5 != NULL && var6 != NULL) {
                if (var5[var7] > 0) {
                    func_02048418((unsigned char*)var3, 4);
                    func_0207c378((struct Struct_020732cc*)((char*)var2 + 0x1d4),
                                  var5[var7], 1, var6->unknown_8_0_);
                }
                var5[var7] = -1;
            }
        }
        func_ov017_0218f5a4(var1, arg0, 0, 0, 0);
    }
}
