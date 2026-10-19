#include <globaldefs.h>
#include <Resource/UiArrayEntry.h>
#include <System/ColorEffects.h>

struct FourShorts_0223cb1c { unsigned short l; unsigned short t; unsigned short r; unsigned short b; };
struct Obj0223bcc8;
struct MenuState02237b2c {
    Obj0223bcc8* mainSprite;
    void* textSprites;
    Obj0223bcc8* sprites[2];
    void* panel;
    void* task;
    unsigned char unknown_18[3];
    signed char selection;
    unsigned char style;
    unsigned char unknown_1d;
    unsigned char flag;
    unsigned char unknown_1f;
};
struct Defaults02237b2c {
    unsigned short width;
    unsigned short height;
    unsigned char priority[6];
};
struct Dimensions02237b2c { unsigned short width, height; };
extern const Defaults02237b2c data_ov031_022492d8;
extern ArrBasePair022276b4* data_ov031_02290c4c;
extern MenuState02237b2c* data_ov031_02290d10;
extern const unsigned char data_ov031_0224938c[];
extern unsigned char data_ov031_02249394[];
extern const unsigned char data_ov031_022492fe[][2];
extern const Dimensions02237b2c data_ov031_0224931c[];
extern const FourShorts_0223cb1c data_ov031_022492e2;
extern "C" void* func_ov031_0223cf4c(unsigned int, int);
extern "C" Obj0223bcc8* func_ov031_0223be70(int, int, int);
extern "C" void func_ov031_0223bbd8(Obj0223bcc8*, int, int, int);
void SetEntryHalfword4Bits_0223bcc8(Obj0223bcc8*, int, int);
extern "C" void* func_ov031_0223c458(int, int, int, int, int*, int);
extern "C" void* func_ov031_0223b8c4(int, int, int);
int GetTableEntryByField0_022236d0();
extern "C" void func_ov031_0223c980(void*, int, int, int, int, int, int, void*);
extern "C" void func_ov031_0223ca54(void*, int, int, void*, int);
extern "C" void func_ov031_0223cd30(int, int, int, int);
extern "C" void func_ov031_0223cc18(int, int, const FourShorts_0223cb1c*);
extern "C" void func_ov031_022381c8(int);
void* CallWithZeroExtra_0223e218(void*, void*, void*, int);
extern "C" void func_ov031_02237ecc(void*);
extern "C" void func_ov031_02237f2c(void*);
#define REG_DISPCNT (*(volatile unsigned int*)0x04000000)

// USA: func_ov031_02237b2c
extern "C" ARM void func_ov031_02237b2c(int id, int style, unsigned char flag, int index, int value) {
    unsigned char priority[6] = {
        data_ov031_022492d8.priority[0], data_ov031_022492d8.priority[1],
        data_ov031_022492d8.priority[2], data_ov031_022492d8.priority[3],
        data_ov031_022492d8.priority[4], data_ov031_022492d8.priority[5]
    };
    int text = func_ov031_022276cc(data_ov031_02290c4c, id, index, value);
    data_ov031_02290d10 = (MenuState02237b2c*)func_ov031_0223cf4c(sizeof(MenuState02237b2c), 4);
    data_ov031_02290d10->style = style;
    data_ov031_02290d10->selection = -2;
    data_ov031_02290d10->flag = flag;
    ColorEffect_ConfigureBrightnessAdjust(0x04000050, 31, 0);
    data_ov031_02290d10->mainSprite = func_ov031_0223be70(0, data_ov031_0224938c[style], 0);
    func_ov031_0223bbd8(data_ov031_02290d10->mainSprite, -1, 256, 0);
    SetEntryHalfword4Bits_0223bcc8(data_ov031_02290d10->mainSprite, -1, 0);
    int i = 0;
    if (i < data_ov031_02249394[style]) {
        const unsigned char* sprite = data_ov031_022492fe[style];
        do {
            data_ov031_02290d10->sprites[i] = func_ov031_0223be70(0, *sprite++, 0);
            func_ov031_0223bbd8(data_ov031_02290d10->sprites[i], -1, 256, 0);
            SetEntryHalfword4Bits_0223bcc8(data_ov031_02290d10->sprites[i], -1, 0);
            i++;
        } while (i < data_ov031_02249394[style]);
    }
    int textCount;
    data_ov031_02290d10->panel = func_ov031_0223c458(0, 32, 12, 1, &textCount, 0);
    data_ov031_02290d10->textSprites = func_ov031_0223b8c4(0, textCount, 0);
    int tableEntry = GetTableEntryByField0_022236d0();
    func_ov031_0223c980(data_ov031_02290d10->panel, 0, 0,
        data_ov031_0224931c[style].width, data_ov031_0224931c[style].height,
        2, tableEntry, (void*)text);
    func_ov031_0223ca54(data_ov031_02290d10->panel, 256, 0, data_ov031_02290d10->textSprites, 0);
    func_ov031_0223cd30(0, 0, 31, 0);
    func_ov031_0223cd30(0, 1, 31, priority[data_ov031_02290d10->style]);
    func_ov031_0223cd30(0, 3, 31, 1);
    func_ov031_0223cc18(0, 1, &data_ov031_022492e2);
    func_ov031_022381c8(192);
    REG_DISPCNT = (REG_DISPCNT & ~0xe000) | 0x6000;
    if (flag) data_ov031_02290d10->task = CallWithZeroExtra_0223e218((void*)1, (void*)func_ov031_02237ecc, 0, 120);
    else data_ov031_02290d10->task = CallWithZeroExtra_0223e218((void*)1, (void*)func_ov031_02237f2c, 0, 120);
}
