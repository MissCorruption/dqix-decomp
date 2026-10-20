#include <globaldefs.h>
#include "NitroSDK/Memory.h"
#include "NitroSDK/Cache.h"
#include "NitroSDK/Graphics.h"
#include "NitroSDK/LoadToVRAM.h"
struct Palette02229124 { unsigned char banks[16][0x20]; };
struct State02229124 { void* field0; Palette02229124* palette; int field8; };
typedef void (*VRAMLoader02229124)(const void*, unsigned int, unsigned int);
extern "C" void func_ov031_022234d8(const char*, VRAMLoader02229124);
extern "C" int func_ov031_02223478(const char*);
extern "C" Palette02229124* func_ov031_0223b61c(int, int, int);
extern "C" void func_ov031_0221ae00(unsigned int*);
extern "C" void func_ov031_0223b710(void*);
struct MainPath02229124 { char name[22]; };
struct SecondaryPath02229124 { char name[23]; };
extern MainPath02229124 data_ov031_02248dcc;
extern SecondaryPath02229124 data_ov031_02248de2;
extern char data_ov031_0224b8f4[];
extern char data_ov031_0224b90c[];
extern State02229124 data_ov031_02290c5c;
// USA: func_ov031_02229124
extern "C" ARM void func_ov031_02229124() {
    unsigned char* paletteSource;
    unsigned char* paletteDestination;
    int index;
    Palette02229124* palette;
    MainPath02229124 mainPath = data_ov031_02248dcc;
    SecondaryPath02229124 secondaryPath = data_ov031_02248de2;
    unsigned int settings[5];
    func_ov031_022234d8(data_ov031_0224b8f4, LoadToMainBG2CharacterData);
    func_ov031_022234d8(data_ov031_0224b90c, LoadToMainBG2ScreenData);
    data_ov031_02290c5c.palette = func_ov031_0223b61c(func_ov031_02223478(secondaryPath.name), 0, 4);
    palette = func_ov031_0223b61c(func_ov031_02223478(mainPath.name), 0, 4);
    func_ov031_0221ae00(settings);
    unsigned int high = settings[1];
    unsigned int low = settings[0];
    index = 0;
    if (high == 0 && low == 0) {
        paletteSource = palette->banks[6];
        paletteDestination = palette->banks[2];
        do {
            VectorizedInvertedMemcpy(paletteSource, paletteDestination, 0x20);
            ++index;
            paletteSource += 0x20;
            paletteDestination += 0x20;
        } while (index < 2);
    }
    CleanInvalidateCacheRange(palette, 0x200);
    LoadToMainBGStandardPalette(palette, 0, 0x200);
    func_ov031_0223b710(palette);
    BG0CNTSUB = (BG0CNTSUB & ~3) | 3;
    BG1CNTSUB = (BG1CNTSUB & ~3) | 3;
    BG1CNT = (BG1CNT & ~3) | 3;
    BG2CNT = (BG2CNT & ~3) | 3;
}
