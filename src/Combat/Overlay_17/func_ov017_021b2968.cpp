#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"
#include "Resource/GameResources.h"
#include "Graphics/VRAMStaging.h"

extern "C" int func_020429d4(void);
extern "C" void* func_020d6c00(void);
struct Struct_02012de8;
extern "C" int func_02046708(struct Struct_02012de8* arg0, unsigned int arg1);
void SetMainBrightness(GameResources*, int, int);
void SetBrightness(GameResources*, int, int);
extern "C" void func_020397c0(void* arg0);

struct Struct_ov017_021b2968 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    char unknown_2_[0x36];
    unsigned int unknown_38_;
};

// USA: func_ov017_021b2968
extern "C" ARM int func_ov017_021b2968(struct Struct_ov017_021b2968* arg0) {
    GameResources* var0 = GetGameResources();

    unsigned int var1 = (arg0->unknown_38_ << 28) >> 31;
    if (var1) {
        void* var2 = (void*)func_020429d4();
        memset(var2, 0, 0x800);
        StageMemoryToVRAM(VRAMSubregion_MainBG1Screen, var2, 0, 0x800, true, false);
        StageMemoryToVRAM(VRAMSubregion_MainBG2Screen, var2, 0, 0x800, true, false);
        StageMemoryToVRAM(VRAMSubregion_MainBG3Screen, var2, 0, 0x800, true, false);
        StageMemoryToVRAM(VRAMSubregion_MainBG1Character, var2, 0, 0x20, true, false);
        StageMemoryToVRAM(VRAMSubregion_MainBG2Character, var2, 0, 0x20, true, false);
        StageMemoryToVRAM(VRAMSubregion_MainBG3Character, var2, 0, 0x20, true, false);

        struct Struct_02012de8* var3 = (struct Struct_02012de8*)func_020d6c00();
        if (!func_02046708(var3, 1) && !func_02046708(var3, 0x40)) {
            SetMainBrightness((GameResources*)var0, 0, 0x28);
        } else {
            SetBrightness((GameResources*)var0, 0, 0x28);
        }
    }

    GameState* var4 = GameState::GetInstance();
    GameObject* var5 = var4->GetUnknownGameObject();
    if (var5) {
        func_020397c0(var5);
    }

    arg0->unknown_1_ = 1;
    return 8;
}
