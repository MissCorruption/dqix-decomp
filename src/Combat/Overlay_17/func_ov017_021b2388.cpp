#if defined(jpn)
enum { RegionOffset3700 = 0x34f0 };
#else
enum { RegionOffset3700 = 0x3700 };
#endif

#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"
#include "std_library_functions.h"
#include "Resource/Brightness.h"

#if defined(jpn)
#define func_020c9be0 func_020cb6ac
#endif

extern "C" int func_020100f8(char* obj);
struct Obj020397cc;
extern "C" void func_020397cc(struct Obj020397cc* obj, int arg1);
extern "C" void func_020a28a0(unsigned char* obj, unsigned char mask);
extern "C" void func_020a27b8(unsigned char* obj);
extern "C" int func_02046b08(void** obj);
extern "C" void func_020a0cc4(unsigned int);
extern "C" void* func_02012d88(AllocatorUnion* alloc, unsigned int size);
extern "C" void func_020c9be0(void);
struct GameResources;
void SetBrightness(GameResources*, int, int);
struct ResetObj020d7a5c;
extern "C" struct ResetObj020d7a5c* func_020d7a50();
struct Obj020d7aa0;
extern "C" void func_020d7aa0(struct Obj020d7aa0* obj);

extern int data_02114e20;
extern char data_ov017_021d7a28;

struct Flags38_021b2388 {
    unsigned int lowBits : 4;
    unsigned int bit4 : 1;
    unsigned int rest : 27;
};

struct Obj021b2388 {
    char pad0[0x8];
    int field8;
    int fieldc;
    SafeAllocator allocator;
    char name[0x14];
    struct Flags38_021b2388 field38;
    char pad2[0x2];
    unsigned char field3e;
    unsigned int field40;
    void* field44;
};

// USA: func_ov017_021b2388
extern "C" ARM int func_ov017_021b2388(struct Obj021b2388* ctx) {
    GameState* battle = (GameState*)GameState::GetInstance();
    int base = ((int)GetGameResources());
    unsigned char* fieldPtr;
    GameObject* combatant = battle->GetUnknownGameObject();
    fieldPtr = (unsigned char*)func_020100f8((char*)battle);
    int loadedList = (int)BackgroundLoader::GetInstance();
    void** entry = *(void***)((char*)base + RegionOffset3700);
    unsigned int val40 = GetFlags04((GameResources*)base);
    ctx->field40 = val40;

    if (combatant) {
        func_020397cc((struct Obj020397cc*)combatant, 1);
    }

    if (fieldPtr) {
        ctx->field3e = (fieldPtr[0x244] & 2) != 0;
        func_020a28a0(fieldPtr, 2);
        func_020a27b8(fieldPtr);
        ctx->field44 = fieldPtr;
    }

    if (!func_02046b08(entry)) {
        return ctx->field8;
    }

    SetFlags00((GameResources*)base, 0x10);
    func_020a0cc4(0x2f800);
    void* buf = func_02012d88((AllocatorUnion*)&data_02114e20, 0x2f800);
    if (!buf) {
        func_020c9be0();
    }
    ctx->allocator.CreateTypeA(buf, 0x2f800);

    char tmp[0x50];
    sprintf(tmp, &data_ov017_021d7a28, ctx->name);
    ctx->fieldc = ((BackgroundLoader*)(loadedList))->QueueLoadFile((const char*)((int)tmp), (SafeAllocator*)((int)&ctx->allocator));

    if (!ctx->field38.bit4) {
        SetBrightness((GameResources*)base, -16, 30);
    }

    func_020d7aa0((struct Obj020d7aa0*)func_020d7a50());
    return 1;
}
