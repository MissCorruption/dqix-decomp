#include <globaldefs.h>
#include "Resource/ActionDataTables.h"

#if defined(jpn)
#define REGION_OFFSET_0 0x1f00
#define REGION_OFFSET_1 0xa5
#define REGION_OFFSET_2 0xa0
#define REGION_OFFSET_3 0xfa0
#define REGION_OFFSET_4 0xf98
#else
#define REGION_OFFSET_0 0x1d00
#define REGION_OFFSET_1 0x6d
#define REGION_OFFSET_2 0x68
#define REGION_OFFSET_3 0xd68
#define REGION_OFFSET_4 0xd60
#endif

#include "GameState/GameState.h"

extern "C" void* func_02079e2c(char* arg0, int arg1);
extern "C" void* func_02010828(GameState* arg0);
extern "C" void* func_ov000_02161318(void* arg0, int arg1);
extern "C" int func_ov000_02171210(void* arg0, void* arg1);

// USA: func_ov000_02175b54
extern "C" ARM void func_ov000_02175b54(void* arg0) {
    Struct_02108e10* var0 = func_020797dc();
    if (var0 == 0) {
        return;
    }
    signed char var1 = *((signed char*)arg0 + REGION_OFFSET_0 + REGION_OFFSET_1);
    signed short var2 = *(signed short*)((char*)arg0 + var1 * 2 + 0x10);
    void* var3 = func_02079e2c((char*)var0, var2);
    if (var3 == 0) {
        return;
    }
    GameState* var4 = GameState::GetInstance();
    unsigned char* var5 = (unsigned char*)func_02010828(var4);
    signed char var6 = *(signed char*)(var5 + 0xf00 + 0x78);
    char* var7 = (char*)func_ov000_02161318(arg0, var6);
    if (var7 == 0) {
        return;
    }
    signed char var8 = *((signed char*)arg0 + REGION_OFFSET_0 + REGION_OFFSET_2);
    *((char*)arg0 + 0x1000 + REGION_OFFSET_3) = (char)(var8 + 1);
    int var9 = func_ov000_02171210(var3, var7);
    signed char var10 = *((signed char*)arg0 + REGION_OFFSET_0 + REGION_OFFSET_2);
    *((char*)arg0 + var10 + 0x1000 + REGION_OFFSET_4) = (char)var9;
    *((char*)arg0 + 0x1c) = var7[0x1d];
}
