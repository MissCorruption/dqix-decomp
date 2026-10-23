#include <globaldefs.h>
#include "NitroSDK/Memory.h"
#include "NitroSDK/Cache.h"
#include "NitroSDK/Graphics.h"
#include "NitroSDK/LoadToVRAM.h"
struct Struct_ov031_02229124 { unsigned char unknown_0_[16][0x20]; };
struct Struct_ov031_02290c5c_2 { void* unknown_0_; Struct_ov031_02229124* unknown_4_; int unknown_8_; };
typedef void (*Type_01ff8b48_7)(const void*, unsigned int, unsigned int);
extern "C" void func_ov031_022234d8(const char*, Type_01ff8b48_7);
extern "C" int func_ov031_02223478(const char*);
extern "C" Struct_ov031_02229124* func_ov031_0223b61c(int, int, int);
extern "C" void func_ov031_0221ae00(unsigned int*);
extern "C" void func_ov031_0223b710(void*);
struct Struct_ov031_02248dcc { char unknown_0_[22]; };
struct Struct_ov031_02248de2 { char unknown_0_[23]; };
extern Struct_ov031_02248dcc data_ov031_02248dcc;
extern Struct_ov031_02248de2 data_ov031_02248de2;
extern char data_ov031_0224b8f4[];
extern char data_ov031_0224b90c[];
extern Struct_ov031_02290c5c_2 data_ov031_02290c5c;
// USA: func_ov031_02229124
extern "C" ARM void func_ov031_02229124() {
    unsigned char* var0;
    unsigned char* var1;
    int var2;
    Struct_ov031_02229124* var3;
    Struct_ov031_02248dcc var4 = data_ov031_02248dcc;
    Struct_ov031_02248de2 var5 = data_ov031_02248de2;
    unsigned int var6[5];
    func_ov031_022234d8(data_ov031_0224b8f4, LoadToMainBG2CharacterData);
    func_ov031_022234d8(data_ov031_0224b90c, LoadToMainBG2ScreenData);
    data_ov031_02290c5c.unknown_4_ = func_ov031_0223b61c(func_ov031_02223478(var5.unknown_0_), 0, 4);
    var3 = func_ov031_0223b61c(func_ov031_02223478(var4.unknown_0_), 0, 4);
    func_ov031_0221ae00(var6);
    unsigned int var7 = var6[1];
    unsigned int var8 = var6[0];
    var2 = 0;
    if (var7 == 0 && var8 == 0) {
        var0 = var3->unknown_0_[6];
        var1 = var3->unknown_0_[2];
        do {
            VectorizedInvertedMemcpy(var0, var1, 0x20);
            ++var2;
            var0 += 0x20;
            var1 += 0x20;
        } while (var2 < 2);
    }
    CleanInvalidateCacheRange(var3, 0x200);
    LoadToMainBGStandardPalette(var3, 0, 0x200);
    func_ov031_0223b710(var3);
    BG0CNTSUB = (BG0CNTSUB & ~3) | 3;
    BG1CNTSUB = (BG1CNTSUB & ~3) | 3;
    BG1CNT = (BG1CNT & ~3) | 3;
    BG2CNT = (BG2CNT & ~3) | 3;
}
