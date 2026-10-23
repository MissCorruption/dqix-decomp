#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "GameState/GameState.h"
#include "Resource/GameResources.h"


#if defined(jpn)
#define BATTLE_BUFFER_FIELD 0x1dc
#else
#define BATTLE_BUFFER_FIELD 0x48c
#endif

// USA: func_020a39d8
extern "C" ARM void func_020a39d8(SafeAllocator* arg0) {
    GameState* var0 = GameState::GetInstance();
    int var1 = ((int)GetGameResources());
    int var2 = (int)var0->GetTreasureMapLanguageData();
    arg0->Free(*(void**)(var1 + 0x4000 + BATTLE_BUFFER_FIELD));
    arg0->Free((void*)var2);
    var0->SetTreasureMapLanguageDataPtr(0);
    *(void**)(var1 + 0x4000 + BATTLE_BUFFER_FIELD) = NULL;
}

