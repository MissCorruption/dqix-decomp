#include <globaldefs.h>

#if defined(jpn)
#define REGION_OFFSET_0 0x244
#define REGION_OFFSET_1 0x2ac
#define REGION_OFFSET_2 0x3400
#define REGION_OFFSET_3 0x21c
#define REGION_OFFSET_4 0x288
#else
#define REGION_OFFSET_0 0x2c8
#define REGION_OFFSET_1 0x6f0
#define REGION_OFFSET_2 0x3000
#define REGION_OFFSET_3 0x2a0
#define REGION_OFFSET_4 0x2ec
#endif

#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"
#include "NitroSDK/Timing.h"
#include "World/Zone3D.h"
#include "Resource/GameResources.h"

extern "C" void func_0202ae18(void);
extern "C" void func_02013718(char* arg0, int arg1, int arg2);
extern "C" void func_02012fe4(void);
extern "C" int func_020a3694(int* arg0);
extern "C" void* func_02011584(void* arg0);
struct Struct_02099950;
struct Struct_02095924_2;
extern "C" struct Struct_02099950* func_02099950(struct Struct_02095924_2* arg0, int arg1);
extern "C" void func_02012de8(void);
struct Struct_ov000_02166880;
extern "C" void func_02015438(void* arg0);
extern "C" void func_020d84f4(void);
extern "C" void func_ov000_02160fa8(void* arg0, int arg1);

// USA: func_ov000_02166880
extern "C" ARM void func_ov000_02166880(unsigned char* arg0) {
    ((int)GetGameResources());
    GameState* var0 = GameState::GetInstance();
    struct Struct_ov000_02166880* var1 = (struct Struct_ov000_02166880*)(int)BackgroundLoader::GetInstance();
    var0->GetProtagonist();
    func_0202ae18();
    func_02013718((char*)(arg0 + REGION_OFFSET_0 + 0xc00), (int)(arg0 + 8), (int)(arg0 + REGION_OFFSET_1 + REGION_OFFSET_2));
    func_02012fe4();

    if (func_020a3694(*(int**)(arg0 + REGION_OFFSET_3))) {
        unsigned short var2 = *(unsigned short*)((char*)*(int**)(arg0 + REGION_OFFSET_3) + 0x20);
        if (var2 != 0) *(unsigned short*)((char*)*(int**)(arg0 + REGION_OFFSET_3) + 2) = var2;
    }

    void* var3 = func_02011584(var0);
    struct Struct_02099950* var4 = func_02099950((struct Struct_02095924_2*)var3,
        *(unsigned short*)((char*)*(int**)(arg0 + REGION_OFFSET_3) + 2));
    if (var4 == NULL || *(unsigned short*)((char*)*(int**)(arg0 + REGION_OFFSET_3) + 2) == 30000) {
        *(unsigned short*)((char*)*(int**)(arg0 + REGION_OFFSET_3) + 2) = 0x75a4;
    }
    ((Zone3D*)(arg0 + REGION_OFFSET_0 + 0xc00))->SwitchZone(*(unsigned short*)((char*)*(int**)(arg0 + REGION_OFFSET_3) + 2), 0);

    GetCurrentTimestamp();
    for (;;) {
        func_02012de8();
        ((BackgroundLoader*)(var1))->RemoveAllLocks();
        func_02015438(arg0 + REGION_OFFSET_0 + 0xc00);
        if (*(int*)(arg0 + 0x1000 + REGION_OFFSET_4) == 0) break;
        func_020d84f4();
    }
    func_ov000_02160fa8(arg0, 0x10);
}
