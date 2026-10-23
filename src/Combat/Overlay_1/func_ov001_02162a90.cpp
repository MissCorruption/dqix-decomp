#include <globaldefs.h>
#include "NitroSDK/Graphics.h"
#include "NitroSDK/VRAM.h"

typedef enum
{
    GX_BG_SCRSIZE_TEXT_256x256 = 0,
    GX_BG_SCRSIZE_TEXT_512x256 = 1,
    GX_BG_SCRSIZE_TEXT_256x512 = 2,
    GX_BG_SCRSIZE_TEXT_512x512 = 3
} GXBGScrSizeText;

typedef enum
{
    GX_BG_COLORMODE_16  = 0,
    GX_BG_COLORMODE_256 = 1
} GXBGColorMode;

typedef enum
{
    GX_BG_CHARBASE_0x00000 = 0,
    GX_BG_CHARBASE_0x04000 = 1,
    GX_BG_CHARBASE_0x08000 = 2,
    GX_BG_CHARBASE_0x0c000 = 3,
    GX_BG_CHARBASE_0x10000 = 4,
    GX_BG_CHARBASE_0x14000 = 5,
    GX_BG_CHARBASE_0x18000 = 6,
    GX_BG_CHARBASE_0x1c000 = 7,
    GX_BG_CHARBASE_0x20000 = 8,
    GX_BG_CHARBASE_0x24000 = 9,
    GX_BG_CHARBASE_0x28000 = 10,
    GX_BG_CHARBASE_0x2c000 = 11,
    GX_BG_CHARBASE_0x30000 = 12,
    GX_BG_CHARBASE_0x34000 = 13,
    GX_BG_CHARBASE_0x38000 = 14,
    GX_BG_CHARBASE_0x3c000 = 15
} GXBGCharBase;

typedef enum
{
    GX_BG_SCRBASE_0x0000 = 0,
    GX_BG_SCRBASE_0x0800 = 1,
    GX_BG_SCRBASE_0x1000 = 2,
    GX_BG_SCRBASE_0x1800 = 3,
    GX_BG_SCRBASE_0x2000 = 4,
    GX_BG_SCRBASE_0x2800 = 5,
    GX_BG_SCRBASE_0x3000 = 6,
    GX_BG_SCRBASE_0x3800 = 7,
    GX_BG_SCRBASE_0x4000 = 8,
    GX_BG_SCRBASE_0x4800 = 9,
    GX_BG_SCRBASE_0x5000 = 10,
    GX_BG_SCRBASE_0x5800 = 11,
    GX_BG_SCRBASE_0x6000 = 12,
    GX_BG_SCRBASE_0x6800 = 13,
    GX_BG_SCRBASE_0x7000 = 14,
    GX_BG_SCRBASE_0x7800 = 15,
    GX_BG_SCRBASE_0x8000 = 16,
    GX_BG_SCRBASE_0x8800 = 17,
    GX_BG_SCRBASE_0x9000 = 18,
    GX_BG_SCRBASE_0x9800 = 19,
    GX_BG_SCRBASE_0xa000 = 20,
    GX_BG_SCRBASE_0xa800 = 21,
    GX_BG_SCRBASE_0xb000 = 22,
    GX_BG_SCRBASE_0xb800 = 23,
    GX_BG_SCRBASE_0xc000 = 24,
    GX_BG_SCRBASE_0xc800 = 25,
    GX_BG_SCRBASE_0xd000 = 26,
    GX_BG_SCRBASE_0xd800 = 27,
    GX_BG_SCRBASE_0xe000 = 28,
    GX_BG_SCRBASE_0xe800 = 29,
    GX_BG_SCRBASE_0xf000 = 30,
    GX_BG_SCRBASE_0xf800 = 31
} GXBGScrBase;

typedef enum
{
    GX_BG_EXTPLTT_01 = 0,
    GX_BG_EXTPLTT_23 = 1
} GXBGExtPltt;

union BackgroundControl02162a90 {
    unsigned short raw;
    struct {
        unsigned short priority : 2;
        unsigned short characterBase : 4;
        unsigned short mosaic : 1;
        unsigned short colorMode : 1;
        unsigned short screenBase : 5;
        unsigned short extendedPalette : 1;
        unsigned short screenSize : 2;
    } fields;
};
struct SavedDisplayState02162a90 {
    char pad0[0x494];
    int mainBanks;
    BackgroundControl02162a90 main[4];
    unsigned int mainDisplay;
    int subBanks;
    BackgroundControl02162a90 sub[4];
    unsigned int subDisplay;
};
extern SavedDisplayState02162a90 data_ov001_021658b8;
union Value_021d60f4 {
    int i;
    float f;
};
struct TaggedValue_021d60f4 {
    int type;
    Value_021d60f4 value;
};
extern "C" int func_ov017_021d60f4(TaggedValue_021d60f4*);
extern "C" void func_ov001_02162678(int, int, int, int);
extern "C" void func_ov001_0215e758(int, int, int, int, int);
extern "C" void func_ov001_0215e78c(int, int, int, int, int);
extern "C" void func_ov001_021628d4(int, int, int, int);

// USA: func_ov001_02162a90
extern "C" ARM int func_ov001_02162a90(TaggedValue_021d60f4* arguments) {
    BackgroundControl02162a90 main0, main1, main2, main3;
    BackgroundControl02162a90 sub0, sub1, sub2, sub3;
    int screen = func_ov017_021d60f4(arguments);
    if (screen == 0) {
        ReleaseMainBGVRAMBanks();
        MapVRAMBanksToMainBG(data_ov001_021658b8.mainBanks);
        main0 = data_ov001_021658b8.main[0];
        main1 = data_ov001_021658b8.main[1];
        main2 = data_ov001_021658b8.main[2];
        main3 = data_ov001_021658b8.main[3];
        {
            GXBGExtPltt extendedPalette = (GXBGExtPltt)main0.fields.extendedPalette;
            GXBGCharBase characterBase = (GXBGCharBase)main0.fields.characterBase;
            GXBGScrBase screenBase = (GXBGScrBase)main0.fields.screenBase;
            GXBGColorMode colorMode = (GXBGColorMode)main0.fields.colorMode;
            GXBGScrSizeText screenSize = (GXBGScrSizeText)main0.fields.screenSize;
            BG0CNT = (unsigned short)((BG0CNT & 0x43)
                | (screenSize << 14)
                | (colorMode << 7)
                | (screenBase << 8)
                | (characterBase << 2)
                | (extendedPalette << 13));
        }
        {
            GXBGExtPltt extendedPalette = (GXBGExtPltt)main1.fields.extendedPalette;
            GXBGCharBase characterBase = (GXBGCharBase)main1.fields.characterBase;
            GXBGScrBase screenBase = (GXBGScrBase)main1.fields.screenBase;
            GXBGColorMode colorMode = (GXBGColorMode)main1.fields.colorMode;
            GXBGScrSizeText screenSize = (GXBGScrSizeText)main1.fields.screenSize;
            BG1CNT = (unsigned short)((BG1CNT & 0x43)
                | (screenSize << 14)
                | (colorMode << 7)
                | (screenBase << 8)
                | (characterBase << 2)
                | (extendedPalette << 13));
        }
        {
            GXBGCharBase characterBase = (GXBGCharBase)main2.fields.characterBase;
            GXBGScrBase screenBase = (GXBGScrBase)main2.fields.screenBase;
            GXBGColorMode colorMode = (GXBGColorMode)main2.fields.colorMode;
            GXBGScrSizeText screenSize = (GXBGScrSizeText)main2.fields.screenSize;
            BG2CNT = (unsigned short)((BG2CNT & 0x43)
                | (screenSize << 14)
                | (colorMode << 7)
                | (screenBase << 8)
                | (characterBase << 2));
        }
        func_ov001_02162678(main3.fields.screenSize, main3.fields.colorMode, main3.fields.screenBase, main3.fields.characterBase);
        DISPCNT = (DISPCNT & ~0x1f00) | (data_ov001_021658b8.mainDisplay << 8);
    } else if (screen == 1) {
        ReleaseSubBGVRAMBanks();
        MapVRAMBanksToSubBG(data_ov001_021658b8.subBanks);
        sub0 = data_ov001_021658b8.sub[0];
        sub1 = data_ov001_021658b8.sub[1];
        sub2 = data_ov001_021658b8.sub[2];
        sub3 = data_ov001_021658b8.sub[3];
        func_ov001_0215e758(sub0.fields.screenSize, sub0.fields.colorMode, sub0.fields.screenBase, sub0.fields.characterBase, sub0.fields.extendedPalette);
        func_ov001_0215e78c(sub1.fields.screenSize, sub1.fields.colorMode, sub1.fields.screenBase, sub1.fields.characterBase, sub1.fields.extendedPalette);
        {
            GXBGCharBase characterBase = (GXBGCharBase)sub2.fields.characterBase;
            GXBGScrBase screenBase = (GXBGScrBase)sub2.fields.screenBase;
            GXBGColorMode colorMode = (GXBGColorMode)sub2.fields.colorMode;
            GXBGScrSizeText screenSize = (GXBGScrSizeText)sub2.fields.screenSize;
            BG2CNTSUB = (unsigned short)((BG2CNTSUB & 0x43)
                | (screenSize << 14)
                | (colorMode << 7)
                | (screenBase << 8)
                | (characterBase << 2));
        }
        func_ov001_021628d4(sub3.fields.screenSize, sub3.fields.colorMode, sub3.fields.screenBase, sub3.fields.characterBase);
        DISPCNTSUB = (DISPCNTSUB & ~0x1f00) | (data_ov001_021658b8.subDisplay << 8);
    }
    return 1;
}
