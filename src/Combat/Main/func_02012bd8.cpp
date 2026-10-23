#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/Brightness.h"
#include "Resource/GameResources.h"
#include "NitroSDK/OverlayId.h"

extern "C" int func_020a18f4(unsigned int idx);
extern char data_027e0000;

// USA: func_02012bd8
extern "C" ARM void func_02012bd8() {
    if (func_020a18f4(OVERLAY_ID(17))) {
        GetGameResources();
        if (GetGameResources() != NULL) {
            ApplyBrightness(GetGameResources());
        }
    }
    (*(int*)((char*)GameState::GetInstance() + 0x3c8))++;
    *(unsigned int*)((char*)&data_027e0000 + 0x3ff8) |= 1;
}
