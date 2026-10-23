#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_ov015_02193294 { int unknown_0_; char unknown_4_; };
extern "C" void func_ov015_021933ac(struct Struct_ov015_02193294* arg0);

struct GameResources;
void InitializeBrightnessState(GameResources*);
extern "C" unsigned int func_02029568(void* arg0);

// USA: func_ov015_02193294
extern "C" ARM void func_ov015_02193294(void* arg0) {
    char* var0 = (char*)arg0;

    InitializeBrightnessState((GameResources*)arg0);

    *(int*)(var0 + 0x2c) = 0;
    *(int*)(var0 + 0x30) = 0;
    *(int*)(var0 + 0x34) = 0;

    *(signed char*)(var0 + 0x38) = -1;
    *(int*)(var0 + 0x194) = -1;
    *(int*)(var0 + 0x198) = -1;

    *(unsigned char*)(var0 + 0x19c) = 1;
    *(unsigned char*)(var0 + 0x19d) = 1;
    *(unsigned char*)(var0 + 0x19e) = 1;
    *(unsigned char*)(var0 + 0x19f) = 1;
    *(unsigned char*)(var0 + 0x1a0) = 0;
    *(unsigned char*)(var0 + 0x1a1) = 0;
    *(int*)(var0 + 0x1a4) = -1;

    memset(var0 + 0x1a8, -1, 0x80);

    *(int*)(var0 + 0x228) = 0;
    *(int*)(var0 + 0x22c) = 0;
    *(int*)(var0 + 0x230) = 0;
    *(int*)(var0 + 0x234) = 0;
    *(int*)(var0 + 0x238) = 0;
    *(int*)(var0 + 0x23c) = 0;
    *(int*)(var0 + 0x240) = 0;
    *(int*)(var0 + 0x244) = 0;
    *(int*)(var0 + 0x248) = 0;
    *(int*)(var0 + 0x24c) = 0;
    *(int*)(var0 + 0x250) = 0;
    *(int*)(var0 + 0x254) = 0;
    *(int*)(var0 + 0x258) = 0;
    *(int*)(var0 + 0x25c) = 0;
    *(int*)(var0 + 0x260) = 0;
    *(int*)(var0 + 0x264) = 0;

    memset(var0 + 0x268, 0, 0x52);

    *(int*)(var0 + 0x348) = 0;
    *(int*)(var0 + 0x34c) = 0;
    *(int*)(var0 + 0x2bc) = 0x1e;
    *(int*)(var0 + 0x2c0) = 0;
    *(int*)(var0 + 0x84) = 0;

    func_02029568(var0 + 0x2c4);

    *(int*)(var0 + 0x304) = 1;
    *(int*)(var0 + 0x344) = 0;
    *(unsigned char*)(var0 + 0x350) = 0;

    for (int var1 = 0; var1 < 4; var1++) {
        func_ov015_021933ac((struct Struct_ov015_02193294*)(var0 + 0xc4) + var1);
        func_ov015_021933ac((struct Struct_ov015_02193294*)(var0 + 0xe4) + var1);
        func_ov015_021933ac((struct Struct_ov015_02193294*)(var0 + 0x104) + var1);
    }
}
