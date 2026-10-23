#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/Brightness.h"

#if defined(jpn)
enum { Enum_ov004_021653e4_2292=0x9f4,Enum_ov004_021653e4_6144=0x1900 };
#else
enum { Enum_ov004_021653e4_2292=0x8f4,Enum_ov004_021653e4_6144=0x1800 };
#endif

extern "C" void* func_ov011_021849c8(void* arg0);
extern "C" void* func_ov023_021f6880(void*, int);
#if defined(jpn)
extern "C" unsigned int func_ov023_021f6f10(void* arg0);
#define NODE_KIND_CALL func_ov023_021f6f10
#else
extern "C" int func_ov024_021f6f10(void* arg0);
#define NODE_KIND_CALL func_ov024_021f6f10
#endif
struct Struct_ov004_02164670;
extern char* data_ov004_02171010;
struct Struct_ov004_0216351c;
extern "C" void func_ov004_0216351c(struct Struct_ov004_0216351c* arg0, short* arg1, short* arg2);
extern "C" void func_ov004_02164084(void* arg0);

// USA: func_ov004_021653e4
extern "C" ARM int func_ov004_021653e4(void* arg0) {
    GameState::GetInstance();
    struct Struct_ov004_02164670* var0 = ((struct Struct_ov004_02164670*)GetGameResources());
    void* var1 = func_ov023_021f6880(func_ov011_021849c8(arg0), 0xa);
    if (var1 == NULL) return 0;
    if (NODE_KIND_CALL(var1) != 7) return 0;

    unsigned char var2 = *(unsigned char*)(data_ov004_02171010 + 0x1000 + Enum_ov004_021653e4_2292);
    if (var2 <= 8) goto fastpath;
    if (IsBrightnessZero((GameResources*)var0, false) != 0) goto swappath;

fastpath: {
    char* var3 = data_ov004_02171010 + Enum_ov004_021653e4_6144;
    short var4 = *(short*)(var3 + 0xf8);
    short var5 = *(short*)(var3 + 0xf6);
    *(short*)((char*)var1 + 0x5c) = var5;
    *(short*)((char*)var1 + 0x5e) = var4;
    return 0;
}

swappath: {
    char* var6 = data_ov004_02171010;
    short* var7 = (short*)(var6 + 0xf6 + Enum_ov004_021653e4_6144);
    #if defined(jpn)
    short* var8 = (short*)(var6 + 0x1f8 + 0x1800);
#else
    short* var8 = (short*)(var6 + 0xf8 + Enum_ov004_021653e4_6144);
#endif
    func_ov004_0216351c((struct Struct_ov004_0216351c*)var1, var7, var8);
    func_ov004_02164084(arg0);
    return 0;
}
}
