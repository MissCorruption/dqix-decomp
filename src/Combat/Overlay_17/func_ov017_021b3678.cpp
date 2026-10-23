#if defined(jpn)
enum { Enum_ov017_021b3678_336 = 0x144 };
#else
enum { Enum_ov017_021b3678_336 = 0x150 };
#endif

#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"

struct Struct_ov017_021b3444;
extern "C" unsigned char func_ov017_021b354c(Struct_ov017_021b3444* arg0);
extern "C" int func_02053c6c(unsigned char* arg0);

extern int data_ov017_021d7ab6;
extern short data_ov017_021d6b56;
extern short data_ov017_021d6b54;

struct Struct_ov017_021b3678 {
    unsigned char unknown_0_[8];
    short unknown_8_;
    unsigned char unknown_a_[4];
    int unknown_10_;
};

// USA: func_ov017_021b3678
extern "C" ARM int func_ov017_021b3678(struct Struct_ov017_021b3678* arg0) {
    GameState* var0 = GameState::GetInstance();
    int var1 = (int)BackgroundLoader::GetInstance();
    GameObject* var2 = func_0200ff1c(var0, arg0->unknown_8_);
    if (!var2) {
        return 0;
    }
    if (!func_02053c6c((unsigned char*)var2)) {
        return 0;
    }

    if (func_ov017_021b354c((Struct_ov017_021b3444*)var2)) {
        char* var3 = *(char**)((char*)var2 + Enum_ov017_021b3678_336);
        if (var3) {
            *(unsigned char*)(var3 + 0x56e) = 0;
        }
        arg0->unknown_10_ = ((BackgroundLoader*)(var1))->QueueLoadFile((const char*)((int)&data_ov017_021d7ab6), (SafeAllocator*)(0));
        return 1;
    }

    char* var4 = *(char**)((char*)var2 + Enum_ov017_021b3678_336);
    char* var5 = var4 + 0x194;
    char* var6 = var4 + 0x2f4;
    unsigned char var7;
    for (var7 = 0; var7 < 8; var7 = (var7 + 1) & 0xff) {
        short var8 = *(short*)((char*)&data_ov017_021d6b54 + var7 * 4);
        if (var8 < 0) {
            continue;
        }
        short var9 = *(short*)((char*)&data_ov017_021d6b56 + var7 * 4);
        short var10 = *(short*)(var5 + var8 * 0x20 + 0x18);
        short var11 = *(short*)(var6 + var9 * 0x2c + 0x28);
        if (var10 == var11) {
            continue;
        }
        arg0->unknown_10_ = ((BackgroundLoader*)(var1))->QueueLoadFile((const char*)((int)&data_ov017_021d7ab6), (SafeAllocator*)(0));
        return 1;
    }
    return 1;
}
