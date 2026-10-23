#include <globaldefs.h>
#include "NitroSDK/Graphics.h"
#include "NitroSDK/LoadToVRAM.h"
typedef void (*VRAMLoader02227d94)(const void*, unsigned int, unsigned int);
extern "C" void func_ov031_02235c18();
extern "C" void func_ov031_022275e0();
extern "C" void func_ov031_022236e8();
extern "C" void func_ov031_0222390c();
extern "C" void func_ov031_02223358();
extern "C" int func_ov031_02227548();
extern "C" int func_ov031_02227570(unsigned int);
extern "C" void* func_ov031_02227630(const char*);
extern "C" int func_ov031_02223478(const char*);
extern "C" void func_ov031_0223bd58(int, int);
extern "C" void func_ov031_022234d8(const char*, VRAMLoader02227d94);
extern "C" int func_ov031_02227558();
extern "C" void func_ov031_0223cb68(int, int);
extern "C" void func_ov031_022274c0(int);
extern "C" void func_ov031_02227f74();
extern void* data_ov031_02290c4c;
extern const char* data_ov031_0224b6f8[];
extern char data_ov031_0224b714[];
extern char data_ov031_0224b724[];
extern char data_ov031_0224b738[];
extern char data_ov031_0224b74c[];
extern char data_ov031_0224b760[];
extern char data_ov031_0224b774[];
extern char data_ov031_0224b78c[];
extern char data_ov031_0224b7a4[];
extern char data_ov031_0224b7bc[];
extern char data_ov031_0224b7d4[];
extern char data_ov031_0224b7ec[];
extern char data_ov031_0224b804[];
extern char data_ov031_0224b818[];
// USA: func_ov031_02227d94
extern "C" ARM void func_ov031_02227d94() {
    func_ov031_02235c18();
    func_ov031_022275e0();
    func_ov031_022236e8();
    func_ov031_0222390c();
    func_ov031_02223358();
    if (func_ov031_02227548() == 1 && func_ov031_02227570(2))
        data_ov031_02290c4c = func_ov031_02227630(data_ov031_0224b714);
    else data_ov031_02290c4c = func_ov031_02227630(data_ov031_0224b6f8[func_ov031_02227548()]);
    func_ov031_0223bd58(1, func_ov031_02223478(data_ov031_0224b724));
    func_ov031_0223bd58(0, func_ov031_02223478(data_ov031_0224b738));
    func_ov031_022234d8(data_ov031_0224b74c, LoadToSubBG1CharacterData);
    func_ov031_022234d8(data_ov031_0224b760, LoadToSubBGStandardPalette);
    func_ov031_022234d8(data_ov031_0224b774, LoadToSubObjVRAM);
    func_ov031_022234d8(data_ov031_0224b78c, LoadToSubObjStandardPalette);
    func_ov031_022234d8(data_ov031_0224b7a4, LoadToMainBG2CharacterData);
    func_ov031_022234d8(data_ov031_0224b7bc, LoadToMainBGStandardPalette);
    func_ov031_022234d8(data_ov031_0224b7d4, LoadToMainObjVRAM);
    func_ov031_022234d8(data_ov031_0224b7ec, LoadToMainObjStandardPalette);
    switch (func_ov031_02227558()) {
    case 0: func_ov031_022234d8(data_ov031_0224b804, LoadToSubBG1ScreenData); break;
    case 1: func_ov031_022234d8(data_ov031_0224b818, LoadToSubBG1ScreenData); break;
    }
    BG1CNTSUB = (BG1CNTSUB & ~3) | 3;
    BG1CNT = (BG1CNT & ~3) | 3;
    BG1CNT = (BG1CNT & ~3) | 3;
    func_ov031_0223cb68(1, 2);
    func_ov031_0223cb68(0, 2);
    func_ov031_022274c0((int)func_ov031_02227f74);
}
