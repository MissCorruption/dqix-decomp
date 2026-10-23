#include <globaldefs.h>

extern int data_ov031_0224bc50;
extern int data_ov031_0224bc68;
extern int data_ov031_0224bc80;

typedef void (*Type_ov031_022234d8)(void*, int, int);
extern "C" void func_ov031_022234d8(int arg0, Type_ov031_022234d8 arg1);

extern "C" int LoadToMainBG2CharacterData(int arg0, int arg1, unsigned int arg2);
extern "C" ARM void LoadToMainBGStandardPalette(int src, int dstOffset, unsigned int size);
extern "C" ARM int LoadToMainBG2ScreenData(int arg0, int arg1, unsigned int arg2);

// USA: func_ov031_0223208c
extern "C" ARM void func_ov031_0223208c(void) {
    func_ov031_022234d8((int)&data_ov031_0224bc50, (Type_ov031_022234d8)LoadToMainBG2CharacterData);
    func_ov031_022234d8((int)&data_ov031_0224bc68, (Type_ov031_022234d8)LoadToMainBGStandardPalette);
    func_ov031_022234d8((int)&data_ov031_0224bc80, (Type_ov031_022234d8)LoadToMainBG2ScreenData);
    volatile unsigned short* var0 = (volatile unsigned short*)0x4001008;
    volatile unsigned short* var1 = (volatile unsigned short*)0x400000a;
    volatile unsigned short* var2 = (volatile unsigned short*)0x4000008;
    *var0 = (*var0 & ~3) | 3;
    *(var0 + 1) = (*(var0 + 1) & ~3) | 3;
    *var2 = (*var2 & ~3) | 3;
    *var1 = (*var1 & ~3) | 3;
    *(var1 + 1) = (*(var1 + 1) & ~3) | 3;
}
