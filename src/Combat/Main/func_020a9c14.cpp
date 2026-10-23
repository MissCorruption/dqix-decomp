#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Grotto/Main/GrottoStruct.h"
#include "Grotto/Main/TreasureMapDataStructs.h"
#include "std_library_functions.h"

struct Struct_0201165c {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
    unsigned char unknown_c_;
    char unknown_d_[3];
    unsigned char unknown_10_;
};
extern "C" void func_0201165c(char*, const void*, int, Struct_0201165c);
extern "C" void func_020a3720();
extern "C" void func_020a395c();
struct Struct_020a9c14 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    TreasureMapMetadata unknown_2_[99];
};
struct Struct_020a9c14_2 {
#if defined(jpn)
    unsigned char unknown_0_[0x6000];
#else
    unsigned char unknown1_0_[0x6400];
#endif
    Struct_020a9c14 unknown_6400_;
};
struct Struct_020a9c14_3 {
#if defined(jpn)
    unsigned char unknown_0_[0x2b4];
#else
    unsigned char unknown1_0_[0xf4];
#endif
    Struct_020a9c14_2 unknown_f4_;
};
struct Struct_020a9c14_4 { int unknown_0_; int unknown_4_; int unknown_8_; };
typedef void (*Type_020a9c14)(char*, const void*, int, Struct_020a9c14_4, unsigned int, unsigned int);

// USA: func_020a9c14
extern "C" ARM int func_020a9c14(const void* arg0) {
    GameState* var0 = GameState::GetInstance();
    Struct_020a9c14* var1 = &((Struct_020a9c14_3*)var0)->unknown_f4_.unknown_6400_;
    memcpy(var1, arg0, 0xad6);
    TreasureMapMetadata* var2 = var1->unknown_2_;
    int var3 = 0;
    while (var3 < 99) {
        if (var2->GetInitialByteUnknownBit()) break;
        if (var3 == 98) return 1;
        var3++;
        var2++;
    }
    func_020a3720();
    DetailedTreasureMapData var4;
    ExportDetailedTreasureMapData(var2, &var4, false, 0);
    func_020a395c();
    if (var4.mapType_ == 1) {
        reinterpret_cast<Type_020a9c14>(func_0201165c)((char*)var0, var2, var4.entranceZoneID_, *reinterpret_cast<Struct_020a9c14_4*>(&var4.entranceX_), var4.regular_.environ_, var4.regular_.startingMonsterRank_);
    } else if (var4.mapType_ == 2) {
        reinterpret_cast<Type_020a9c14>(func_0201165c)((char*)var0, var2, var4.entranceZoneID_, *reinterpret_cast<Struct_020a9c14_4*>(&var4.entranceX_), 0, 0);
    }
    GrottoStruct* var5 = var0->GetGrottoStruct();
    strcpy(var5->activeMapImageName, var4.mapImageName_);
    if (var4.mapType_ == 1) {
        sprintf(var5->activeMapNameNoLevel, var4.regular_.nameNoLevel_);
        var5->activeMapLevel = var4.regular_.level_;
    } else if (var4.mapType_ == 2) {
        sprintf(var5->activeMapNameNoLevel, var4.legacy_.mapNameNoLevel_);
        var5->activeMapLevel = var4.legacy_.level_;
    }
    return 1;
}
