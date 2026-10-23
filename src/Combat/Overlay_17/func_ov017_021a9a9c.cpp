#include <globaldefs.h>
#include "Grotto/Main/TreasureMapMetadata.h"
#include "Grotto/Main/TreasureMapDataStructs.h"
#include "NitroSDK/Memory.h"
#include "NitroSDK/Timing.h"
#include "std_library_functions.h"

extern "C" void func_020a3720();
extern "C" void func_020a395c();
extern char data_ov017_021d781c;
#if defined(jpn)
extern const char data_ov017_021d7c80[];
extern const char data_ov017_021d7c8c[];
extern const char data_ov017_021d7c8d[];
#endif

// USA: func_ov017_021a9a9c
extern "C" ARM void func_ov017_021a9a9c(void* arg0, unsigned char arg1, unsigned int arg2, int arg3, unsigned char arg4) {
#if defined(jpn)
 enum {Enum_ov017_021a9a9c_621=0x30d, Enum_ov017_021a9a9c_622=0x30e, Enum_ov017_021a9a9c_624=0x310};
#else
 enum {Enum_ov017_021a9a9c_621=0x26d, Enum_ov017_021a9a9c_622=0x26e, Enum_ov017_021a9a9c_624=0x270};
#endif
    unsigned char* var0 = (unsigned char*)arg0;
    TreasureMapMetadata* var1 = (TreasureMapMetadata*)(var0 + 0xa);
    DetailedTreasureMapData* var2 = (DetailedTreasureMapData*)(var0 + 0x28);

    var0[Enum_ov017_021a9a9c_621] = arg1;
    VectorizedMemset(var1, 0, 0x1c);
    var2->Clear();
    srand(GetMain16BitTimerCounter());

    if (var0[Enum_ov017_021a9a9c_621] == 1) {
        var1->InitialiseAsNonLegacyMap(arg2, arg3);
        var0[Enum_ov017_021a9a9c_622] = var1->QualityOrLegacyBossID;
        *(unsigned short*)(var0 + Enum_ov017_021a9a9c_624) = var1->SeedOrMinTurns;
    } else if (var0[Enum_ov017_021a9a9c_621] == 2) {
        var1->InitialiseAsLegacyBossMap(arg2, (unsigned char)arg3);
        var0[Enum_ov017_021a9a9c_622] = var1->QualityOrLegacyBossID;
        *(unsigned short*)(var0 + Enum_ov017_021a9a9c_624) = var1->LegacyBossLevel;
    } else {
        var1->InitialiseAsNonLegacyMap(arg2, arg3);
        var0[Enum_ov017_021a9a9c_622] = var1->QualityOrLegacyBossID;
        *(unsigned short*)(var0 + Enum_ov017_021a9a9c_624) = var1->SeedOrMinTurns;
    }

    if (arg4 != 0) {
        var1->Location = arg4;
    }

    func_020a3720();
    ExportDetailedTreasureMapData(var1, var2, false, NULL);
    func_020a395c();

#if defined(jpn)
    if (var0[Enum_ov017_021a9a9c_621] == 1) {
        strcpy((char*)(var0 + 0x20c), (char*)(var0 + 0xaf));
        strcpy((char*)(var0 + 0x22c), (char*)(var0 + 0xcf));
        strcpy((char*)(var0 + 0x24c), data_ov017_021d7c80);
        strcpy((char*)(var0 + 0x26c), (char*)(var0 + 0x10f));
    } else if (var0[Enum_ov017_021a9a9c_621] == 2) {
        strcpy((char*)(var0 + 0x20c), (char*)(var0 + 0x104));
        strcpy((char*)(var0 + 0x22c), (char*)(var0 + 0x124));
        strcpy((char*)(var0 + 0x24c), data_ov017_021d7c8c);
        strcpy((char*)(var0 + 0x26c), (char*)(var0 + 0x144));
    }
    sprintf((char*)(var0 + 0x28c), data_ov017_021d7c8d, (char*)(var0 + 0x20c), (char*)(var0 + 0x22c), (char*)(var0 + 0x24c), (char*)(var0 + 0x26c));

#else
    if (var0[Enum_ov017_021a9a9c_621] == 1) {
        strcpy((char*)(var0 + 0x1ec), (char*)(var0 + 0xd7));
    } else if (var0[Enum_ov017_021a9a9c_621] == 2) {
        strcpy((char*)(var0 + 0x1ec), (char*)(var0 + 0x16c));
    }

    sprintf((char*)(var0 + 0x22c), &data_ov017_021d781c, (char*)(var0 + 0x1ec));

#endif
}
