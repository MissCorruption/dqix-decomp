#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"
#include "GameState/GameState.h"
#include "Filesystem/FileIO.h"
#include "NitroSDK/Memory.h"
#include "std_library_functions.h"
#include "Resource/GameResources.h"

#if defined(jpn)
#define func_020c9be0 func_020cb6ac
#endif

extern "C" void func_020a39d8(SafeAllocator* arg0);
extern "C" void func_020c9be0(void);

#if defined(jpn)
extern const char data_020f1bf4[];
#else
extern const char data_020f1a9c[];
extern const char data_020f1ab0[];
#endif

// JPN: func_020a55a0
// USA: func_020a3844
extern "C" ARM int func_020a3844(SafeAllocator* arg0) {
    GameState* var0 = GameState::GetInstance();
    GameResources* var1 = GetGameResources();
    unsigned char* var2 = var0->GetTreasureMapLanguageData();
    if (var2 != 0 || var1->pTMapLanguageOffsets != 0) {
        func_020a39d8(arg0);
    }

    unsigned char* var3 = static_cast<unsigned char*>(arg0->Allocate(0x2000));
    var1->pTMapLanguageOffsets = static_cast<TreasureMapLanguageDataOffsets*>(arg0->Allocate(sizeof(TreasureMapLanguageDataOffsets)));

    unsigned int var4 = 0;
#if defined(jpn)
    if (!LoadFileIntoMemory(data_020f1bf4, var3, &var4))
        return 0;
#else
    BackgroundLoader::AddLockGlobal();
    void* var5 = ExtractFileFromGP2(data_020f1a9c, data_020f1ab0, &var4);
    memcpy(var3, var5, var4);
    if (var4 > 0x2000) {
        func_020c9be0();
    }
#endif

    unsigned int var6 = 0;
    unsigned int var7 = 0;
    VectorizedInvertedMemcpy(var3, &var7, 4);
    var6 += 4;

    for (unsigned int var8 = 0; var8 < var7; var8++) {
        unsigned char* var9 = (unsigned char*)var1->pTMapLanguageOffsets;
        VectorizedInvertedMemcpy(var3 + var6, var9 + var8 * 4, 4);
        var6 += 4;
    }

#if !defined(jpn)
    BackgroundLoader::RemoveLockGlobal();
#endif
    var0->SetTreasureMapLanguageDataPtr(var3);
    return 1;
}
