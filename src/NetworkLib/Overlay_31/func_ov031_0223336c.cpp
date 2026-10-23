#include <globaldefs.h>

struct Struct_ov031_02249118 { char unknown_0_[22]; };
extern Struct_ov031_02249118 data_ov031_02249118;

typedef void (*Type_ov031_022234d8)(void*, int, int);
extern "C" void func_ov031_022234d8(int arg0, Type_ov031_022234d8 arg1);
extern "C" void LoadToMainBG2CharacterData(int, int, unsigned int);
extern "C" void LoadToMainBGStandardPalette(int, int, unsigned int);
extern "C" void LoadToMainBG2ScreenData(int, int, unsigned int);

extern int data_ov031_0224bd04;
extern int data_ov031_0224bd1c;
extern int data_ov031_0224bd34;

extern "C" const char* func_ov031_02223478(const char* arg0);
extern "C" void* func_ov031_0223b61c(const char* arg0, unsigned int* arg1, int arg2);

struct Struct_ov031_02290cc8_2 { unsigned char unknown_0_; signed char unknown_1_; unsigned char unknown_2_; int unknown_4_; };
extern Struct_ov031_02290cc8_2 data_ov031_02290cc8;

// USA: func_ov031_0223336c
extern "C" ARM void func_ov031_0223336c(void) {
    Struct_ov031_02249118 var0 = data_ov031_02249118;

    func_ov031_022234d8((int)&data_ov031_0224bd04, (Type_ov031_022234d8)LoadToMainBG2CharacterData);
    func_ov031_022234d8((int)&data_ov031_0224bd1c, (Type_ov031_022234d8)LoadToMainBGStandardPalette);
    func_ov031_022234d8((int)&data_ov031_0224bd34, (Type_ov031_022234d8)LoadToMainBG2ScreenData);

    const char* var1 = func_ov031_02223478(var0.unknown_0_);
    void* var2 = func_ov031_0223b61c(var1, 0, 4);
    data_ov031_02290cc8.unknown_4_ = (int)var2;

    volatile unsigned short* var3 = (volatile unsigned short*)0x4001008;
    volatile unsigned short* var4 = (volatile unsigned short*)0x400000a;
    *var3 = (*var3 & ~3) | 3;
    *(var3 + 1) = (*(var3 + 1) & ~3) | 3;
    *var4 = (*var4 & ~3) | 3;
    *(var4 + 1) = (*(var4 + 1) & ~3) | 3;
}
