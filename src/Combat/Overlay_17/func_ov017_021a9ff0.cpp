#include <globaldefs.h>
#include "GameState/GameState.h"
#include "NitroSDK/OverlayId.h"

struct S021b2ba0;
struct TailList020469b4;
struct TailNode020469b4;
struct HeadList020469f8;
struct HeadNode020469f8;
struct SafeAllocator;
struct GameResources;
struct SetFlagStruct;

extern "C" int func_0200fb8c(int* obj);
extern "C" void func_ov017_021b2174(unsigned char* obj);
extern "C" void func_ov017_021b2ba0(S021b2ba0* obj, char* name);
extern "C" void func_ov017_021b2bd0(void* obj, int handler, int overlayId);
extern "C" void func_020469f8(HeadList020469f8* list, HeadNode020469f8* node);
extern "C" void func_020469b4(TailList020469b4* list, TailNode020469b4* node);
void SetBrightness(GameResources* resources, int brightness, int frames);
extern "C" void func_020213fc(SetFlagStruct* obj, int value);
extern "C" void func_ov004_02165df4(SafeAllocator* allocator, void* arg);
extern char data_ov017_021d7831;

// USA: func_ov017_021a9ff0
extern "C" ARM void func_ov017_021a9ff0(int atFront) {
#if defined(jpn)
 enum {regionalOffset0=0x392c, regionalOffset1=0x34ec};
#else
 enum {regionalOffset0=0x3b4c, regionalOffset1=0x36fc};
#endif
    GameResources* res = (GameResources*)func_0200fb8c((int*)GameState::GetInstance());
    SetFlagStruct* flags;
    void* list;
    unsigned char* obj;
    obj = *(unsigned char**)((char*)res + regionalOffset0);
#if defined(jpn)
    flags = *(SetFlagStruct**)((char*)res + 0x34c0);
#else
    flags = *(SetFlagStruct**)((char*)res + 0x36d0);
#endif
    list = *(void**)((char*)res + regionalOffset1);
    func_ov017_021b2174(obj);
    func_ov017_021b2ba0((S021b2ba0*)obj, &data_ov017_021d7831);
    func_ov017_021b2bd0(obj, (int)func_ov004_02165df4, OVERLAY_ID(4));
    if (atFront) {
        func_020469f8((HeadList020469f8*)list, (HeadNode020469f8*)obj);
    } else {
        func_020469b4((TailList020469b4*)list, (TailNode020469b4*)obj);
    }
    SetBrightness(res, -16, 0x19);
    func_020213fc(flags, 1);
}
