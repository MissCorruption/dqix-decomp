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
extern "C" void func_02013718(char* obj, int a, int b);
extern "C" void func_02012fe4(void);
extern "C" int func_020a3694(int* obj);
extern "C" void* func_02011584(void* obj);
struct SearchEntry;
struct SearchTable;
extern "C" struct SearchEntry* func_02099950(struct SearchTable* table, int key);
extern "C" void func_02012de8(void);
struct Obj0202fa00;
extern "C" void func_02015438(void* p);
extern "C" void func_020d84f4(void);
extern "C" void func_ov000_02160fa8(void* work, int mask);

// USA: func_ov000_02166880
extern "C" ARM void func_ov000_02166880(unsigned char* obj) {
    ((int)GetGameResources());
    GameState* battle = GameState::GetInstance();
    struct Obj0202fa00* fieldObj = (struct Obj0202fa00*)(int)BackgroundLoader::GetInstance();
    battle->GetProtagonist();
    func_0202ae18();
    func_02013718((char*)(obj + REGION_OFFSET_0 + 0xc00), (int)(obj + 8), (int)(obj + REGION_OFFSET_1 + REGION_OFFSET_2));
    func_02012fe4();

    if (func_020a3694(*(int**)(obj + REGION_OFFSET_3))) {
        unsigned short v = *(unsigned short*)((char*)*(int**)(obj + REGION_OFFSET_3) + 0x20);
        if (v != 0) *(unsigned short*)((char*)*(int**)(obj + REGION_OFFSET_3) + 2) = v;
    }

    void* table = func_02011584(battle);
    struct SearchEntry* entry = func_02099950((struct SearchTable*)table,
        *(unsigned short*)((char*)*(int**)(obj + REGION_OFFSET_3) + 2));
    if (entry == NULL || *(unsigned short*)((char*)*(int**)(obj + REGION_OFFSET_3) + 2) == 30000) {
        *(unsigned short*)((char*)*(int**)(obj + REGION_OFFSET_3) + 2) = 0x75a4;
    }
    ((Zone3D*)(obj + REGION_OFFSET_0 + 0xc00))->SwitchZone(*(unsigned short*)((char*)*(int**)(obj + REGION_OFFSET_3) + 2), 0);

    GetCurrentTimestamp();
    for (;;) {
        func_02012de8();
        ((BackgroundLoader*)(fieldObj))->RemoveAllLocks();
        func_02015438(obj + REGION_OFFSET_0 + 0xc00);
        if (*(int*)(obj + 0x1000 + REGION_OFFSET_4) == 0) break;
        func_020d84f4();
    }
    func_ov000_02160fa8(obj, 0x10);
}
