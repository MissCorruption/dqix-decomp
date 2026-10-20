#include <globaldefs.h>
#include "NitroSDK/Memory.h"
#include "std_library_functions.h"

struct BattleInfo0222faac {
    unsigned char padding0[0x40];
    unsigned char name[0x80];
    unsigned char valuesC0[4];
    unsigned char valuesC4[4];
    unsigned char valuesC8[4];
    unsigned char valuesCc[4];
    unsigned char paddingD0[0x16];
    unsigned char nameLength : 2;
    unsigned char nameScale : 6;
    unsigned char paddingE7[9];
    unsigned char valuesF0[4];
    unsigned char fieldF4;
    unsigned char suppressFirstValues;
    unsigned char suppressSecondValues;
};

BattleInfo0222faac* GetOffset400_02235c70();
extern "C" void func_ov031_0222ff34(unsigned char*, int);
extern "C" void func_ov031_02230088(unsigned char*, int);

// USA: func_ov031_0222faac
extern "C" ARM void func_ov031_0222faac(int index, int row) {
    BattleInfo0222faac* info = GetOffset400_02235c70();
    switch (index) {
    case 0:
        func_ov031_0222ff34(info->name, row);
        return;
    case 1: {
        int length;
        unsigned char maskedName[0x21];
        switch (info->nameLength) {
        case 0: return;
        case 1: length = 10; break;
        case 2: length = 26; break;
        case 3: length = 32; break;
        }
        if (info->nameScale == 1) length /= 2;
        VectorizedMemset(maskedName, 0, sizeof(maskedName));
        memset(maskedName, '*', length);
        func_ov031_0222ff34(maskedName, row);
        return;
    }
    case 3:
        if (info->suppressFirstValues != 0) return;
        func_ov031_02230088(info->valuesC0, row);
        return;
    case 4:
        if (info->suppressFirstValues != 0) return;
        func_ov031_02230088(info->valuesF0, row);
        return;
    case 5:
        if (info->suppressFirstValues != 0) return;
        func_ov031_02230088(info->valuesC4, row);
        return;
    case 7:
        if (info->suppressSecondValues != 0) return;
        func_ov031_02230088(info->valuesC8, row);
        return;
    case 8:
        if (info->suppressSecondValues != 0) return;
        func_ov031_02230088(info->valuesCc, row);
        return;
    }
}
