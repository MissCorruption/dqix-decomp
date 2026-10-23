#include <globaldefs.h>
#include "Memory/AllocatorLifecycle.h"
#include "NitroSDK/OverlayId.h"
#include "NitroSDK/Graphics.h"
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"
#include "Filesystem/BackgroundLoader.h"
#include "Input/Input.h"

#if defined(jpn)
#define func_020daf90 func_020dc998
#endif

struct Struct0200fb08;
struct StateBits5ccc_11570;
struct StateBits5ccc_1155c;
struct FieldBlock63d6_115a8;
struct FieldBlock63d6_115b4;
struct FieldBlock63d6_115c0;
struct Obj020128d8;
struct Actor0209c174;
struct Obj_0205e88c;
struct Manager020db0f0;

extern "C" void* func_02010828(GameState* gs);
extern "C" void func_020c3898();
extern "C" void func_02012c34();
extern "C" void func_020a0c0c();
extern "C" void func_020a1838();
extern "C" void func_020a1940(unsigned int* id);
extern "C" int func_020a1bb4(unsigned int* id);
extern "C" unsigned int func_ov029_021d8e1c(void* start, void* end, int seed);
extern "C" unsigned int func_ov029_021d8f0c(void* start, void* end, int seed);
extern "C" unsigned int func_ov029_021d8ffc(void* start, void* end, int seed);
void PopulateOv33BackgroundLoader(void* buffer, unsigned int size, int count);
extern "C" void func_020dc034();
extern "C" Manager020db0f0* func_020daf90();
extern "C" void func_020dafd4();
extern "C" void func_020db0f0(Manager020db0f0* mgr);
extern "C" void func_020db228(void* mgr);
extern "C" void func_0209c174(Actor0209c174* actor);
extern "C" void func_0209c290(void* actor);
extern "C" void func_0205e88c(Obj_0205e88c* obj);
extern "C" void func_0205ea20(void* obj, int mode);
extern "C" void func_020421c4(SafeAllocator* alloc);
extern "C" void func_02071688();
extern "C" char* func_02099cac();
extern "C" void func_0200fb94(char* gs, unsigned char value);
extern "C" char func_0200fb9c(char* gs);
extern "C" void func_02012010(void* gs, int value);
extern "C" int func_0201201c(void* gs);
extern "C" void func_020ac910();
extern "C" int func_02011570(StateBits5ccc_11570* gs);
extern "C" void func_0201155c(StateBits5ccc_1155c* gs);
extern "C" void* func_02012db0(AllocatorUnion* alloc, unsigned int size);
extern "C" void func_02012dbc(AllocatorUnion* alloc, void* data, int size);
extern "C" void func_0208660c(char* p);
extern "C" void func_02099cb8(char* table);
extern "C" int func_020115a8(FieldBlock63d6_115a8* gs);
extern "C" void func_020115b4(FieldBlock63d6_115b4* gs, unsigned char value);
extern "C" void func_020115c0(FieldBlock63d6_115c0* gs);
extern "C" void func_020d6cb4();
extern "C" void func_0205e8d4(void* obj);
extern "C" void func_0203a950(void* obj);
void InitializeActiveAlarmList();
extern "C" void func_ov031_02211c50(int index);
extern "C" int func_0200fb08(Struct0200fb08* gs);
extern "C" void func_ov031_0222708c(int kind, int value);
extern "C" int func_020d6c9c();
extern "C" void func_020c983c();
extern "C" void func_020c98f0(int mode);
void SetInterruptHandler(unsigned int mask, const void* handler);
void EnableSpecificInterrupts(unsigned int mask);
void EnableIRQInterrupts();
extern "C" void func_020c3864(int enable);
extern "C" void MapVRAMBanksToMainBG(int banks);
extern "C" void func_020c391c(int mode, int a, int b);
extern "C" void func_020c9820();

extern "C" void func_ov019_0218b5a0(void* scene);
extern "C" void func_ov019_0218b5a8(void* scene);
extern "C" void func_ov019_0218b5a4(void* scene);
extern "C" void func_ov020_0218b5a0(void* scene);
extern "C" void func_ov020_0218b710(void* scene);
extern "C" void func_ov020_0218b700(void* scene);
extern "C" void func_ov016_0218b5a0(void* scene);
extern "C" void func_ov016_0218b5c4(void* scene);
extern "C" void func_ov016_0218b5c0(void* scene);
extern "C" void func_ov021_0218b5a0(void* scene);
extern "C" void func_ov021_0218b5fc(void* scene);
struct Obj0218b5c4;
extern "C" void func_ov021_0218b5c4(Obj0218b5c4*);
extern "C" void func_ov015_02193294(void* scene);
extern "C" void func_ov015_021934f8(void* scene);
extern "C" void func_ov015_021933bc(void* scene);

extern "C" int func_020d6bac(void (*callback)());
extern "C" void func_020d6c0c();
extern "C" int func_020d6bc8(void (*callback)());
extern "C" void func_020d6c34();
extern "C" int func_020d6be4(void (*callback)());
extern "C" void func_020d6c68();
extern "C" void func_02012bd8();

extern AllocatorUnion data_02114e20;
extern char data_0211e33c[];
extern char data_02109bf4[];
extern char data_02108760[];
extern char data_02114ec4[];

#if defined(jpn)
#define TITLE_SCENE_SIZE 0x2d0
#define WORLD_SCENE_SIZE 0x494
#define STARTUP_ALLOCATOR_SIZE 0xb000
#define SCENE_SKIP_MEMBER_INDEX (0x7c9e - 0x6d40)
#define MOVIE_RETURN_FLAG_OFFSET 0x6174
extern "C" int data_ov029_021d9b60_fake(void* callback);
extern "C" int data_ov029_021d9d20_fake(void* callback);
extern "C" int data_ov029_021d9ee0_fake(void* callback);
extern "C" void func_020d8614();
#define func_020d863c func_020d6c34
#define func_020d8670 func_020d6c68
#else
#define TITLE_SCENE_SIZE 0x2e0
#define WORLD_SCENE_SIZE 0x504
#define STARTUP_ALLOCATOR_SIZE 0x9478
#define SCENE_SKIP_MEMBER_INDEX (0x7f72 - 0x6fc0)
#define MOVIE_RETURN_FLAG_OFFSET 0x63d4
#endif

#define REG_IME (*(volatile unsigned short*)0x04000208)
#define REG_POWCNT1 (*(volatile unsigned short*)0x04000304)

#define RUNTITLE() \
    do { \
        func_020a1940(&OVERLAY_19_ID); \
        void* scene = func_02012db0(&data_02114e20, TITLE_SCENE_SIZE); \
        func_ov019_0218b5a0(scene); \
        func_02012de4(&data_02114e20); \
        func_ov019_0218b5a8(scene); \
        func_ov019_0218b5a4(scene); \
        func_02012dbc(&data_02114e20, scene, TITLE_SCENE_SIZE); \
        func_020a1bb4(&OVERLAY_19_ID); \
    } while (0)

#define RUNOV20() \
    do { \
        func_020a1940(&OVERLAY_20_ID); \
        void* scene = func_02012db0(&data_02114e20, WORLD_SCENE_SIZE); \
        func_ov020_0218b5a0(scene); \
        func_02012de4(&data_02114e20); \
        func_ov020_0218b710(scene); \
        func_ov020_0218b700(scene); \
        func_02012dbc(&data_02114e20, scene, WORLD_SCENE_SIZE); \
        func_020a1bb4(&OVERLAY_20_ID); \
    } while (0)

#define RUNOV16(again16) \
    do { \
        void* scene = func_02012db0(&data_02114e20, 0x98); \
        func_ov016_0218b5a0(scene); \
        func_02012de4(&data_02114e20); \
        func_ov016_0218b5c4(scene); \
        again16 = *(int*)((char*)scene + 0x94); \
        func_ov016_0218b5c0(scene); \
        func_02012dbc(&data_02114e20, scene, 0x98); \
    } while (0)

#define RUNOV21() \
    do { \
        func_020a1940(&OVERLAY_21_ID); \
        void* scene = func_02012db0(&data_02114e20, 0xbc); \
        func_ov021_0218b5a0(scene); \
        func_02012de4(&data_02114e20); \
        func_ov021_0218b5fc(scene); \
        func_ov021_0218b5c4((Obj0218b5c4*)scene); \
        func_02012dbc(&data_02114e20, scene, 0xbc); \
        func_020a1bb4(&OVERLAY_21_ID); \
    } while (0)

#define RUNOV15() \
    do { \
        func_020a1940(&OVERLAY_15_ID); \
        void* scene = func_02012db0(&data_02114e20, 0x358); \
        func_ov015_02193294(scene); \
        func_02012de4(&data_02114e20); \
        func_ov015_021934f8(scene); \
        func_ov015_021933bc(scene); \
        func_02012dbc(&data_02114e20, scene, 0x358); \
        func_020a1bb4(&OVERLAY_15_ID); \
    } while (0)

#if !defined(jpn)
inline bool IsIntact1() {
    return func_ov029_021d8e1c((void*)func_020d6bac, (void*)func_020d6c0c, 0) == 0xffe41136;
}

inline bool IsIntact2() {
    return func_ov029_021d8f0c((void*)func_020d6bc8, (void*)func_020d6c34, 0) == 0xffe412c4;
}

inline bool IsIntact3() {
    return func_ov029_021d8ffc((void*)func_020d6be4, (void*)func_020d6c68, 0) == 0xffe41b51;
}
#endif

inline void ResetWordUnlessTwo(GameState* gs) {
    func_0200fb94((char*)gs, 6);
    if (func_0201201c(gs) != 2) {
        func_02012010(gs, 0);
    }
}

#define RUNOV17() \
    do { \
        func_020a1940(&OVERLAY_17_ID); \
        func_020d6cb4(); \
        func_020a1bb4(&OVERLAY_17_ID); \
    } while (0)

// USA: func_02000c9c
extern "C" ARM void main() {
    GameState* gs = GameState::GetInstance();
    char* bigManager = (char*)func_02010828(gs);
    func_020c3898();
    DISPCNTSUB &= ~0x10000;
    func_02012c34();
    func_020a0c0c();
    func_020a1838();
    func_020a1940(&OVERLAY_29_ID);
#if defined(jpn)
    if (!data_ov029_021d9b60_fake((void*)func_020d8614) &&
        !data_ov029_021d9d20_fake((void*)func_020d863c) &&
        !data_ov029_021d9ee0_fake((void*)func_020d8670) &&
        BackgroundLoader::GetInstance() == 0) {
#else
    if (!IsIntact1() && !IsIntact2() && !IsIntact3() && BackgroundLoader::GetInstance() == 0) {
#endif
        func_020a1940(&OVERLAY_33_ID);
        PopulateOv33BackgroundLoader(data_0211e33c, 0x30000, 0x14);
    }
    func_020a1bb4(&OVERLAY_29_ID);
    func_020a1940(&OVERLAY_32_ID);
    func_020dc034();
    Manager020db0f0* ctx = func_020daf90();
    func_020dafd4();
    func_020db0f0(ctx);
    func_020db228(ctx);
    func_0209c174((Actor0209c174*)data_02109bf4);
    func_0209c290(data_02109bf4);
    func_0205e88c((Obj_0205e88c*)data_02108760);
    func_0205ea20(data_02108760, 100);
    SafeAllocator allocator;
    allocator.ResetAllocatorPointer();
    allocator.CreateTypeA(data_02114ec4, STARTUP_ALLOCATOR_SIZE);
    allocator.Reset();
    func_020421c4(&allocator);
    func_02071688();
    char* table = func_02099cac();
    if (*(int*)0x027ffc20 != 0) {
        func_0200fb94((char*)gs, 6);
        func_02012010(gs, 0);
    }
    func_020ac910();

    for (;;) {
        if (func_02011570((StateBits5ccc_11570*)gs)) {
            func_0201155c((StateBits5ccc_1155c*)gs);
            RUNTITLE();
        }
        if (func_0201201c(gs) != 5) {
            func_0208660c(bigManager);
        }
        func_02099cb8(table);

        bool resumed = false;
        if (func_0201201c(gs) != 5) {
            ResetWordUnlessTwo(gs);
            ResetWordUnlessTwo(gs);
            if (func_0200fb9c((char*)gs) != 6) {
                RUNOV20();
            } else if (func_0200fb9c((char*)gs) == 6) {
                RUNOV20();
                if (*(unsigned char*)&gs->unk_6fc0[SCENE_SKIP_MEMBER_INDEX] == 0) {
                    func_020115b4((FieldBlock63d6_115b4*)gs, 1);
                    func_020a1940(&OVERLAY_16_ID);
                    int again16 = 1;
                    while (again16) {
                        RUNOV16(again16);
                    }
                    func_020a1bb4(&OVERLAY_16_ID);
                    func_020115c0((FieldBlock63d6_115c0*)gs);
                } else {
                    *(unsigned char*)&gs->unk_6fc0[SCENE_SKIP_MEMBER_INDEX] = 0;
                }
            }
            resumed = true;
        }

        switch (func_0200fb9c((char*)gs)) {
        case 2:
            func_02012010(gs, 0);
            break;
        case 0:
            if (resumed != true) {
                func_02012010(gs, 0);
            }
            break;
        case 7:
            func_0200fb94((char*)gs, 0);
            break;
        case 5:
            if (func_0201201c(gs) != 6) {
                func_02012010(gs, 0);
            }
            break;
        }

        bool again = true;
        while (again) {
            again = false;
            switch (func_0200fb9c((char*)gs)) {
            case 0:
            case 4:
            case 5:
            case 9:
                RUNOV17();
                if (func_020115a8((FieldBlock63d6_115a8*)gs)) {
                    func_0200fb94((char*)gs, 3);
                    again = true;
                }
                break;
            case 2:
                RUNOV21();
                if (((unsigned char*)gs)[MOVIE_RETURN_FLAG_OFFSET] != 0) {
                    RUNOV17();
                    if (func_020115a8((FieldBlock63d6_115a8*)gs)) {
                        func_0200fb94((char*)gs, 3);
                        again = true;
                    }
                }
                break;
            case 1:
                RUNOV15();
                break;
            case 3:
                func_020a1940(&OVERLAY_16_ID);
                int more = 1;
                while (more) {
                    RUNOV16(more);
                }
                func_020a1bb4(&OVERLAY_16_ID);
                if (func_020115a8((FieldBlock63d6_115a8*)gs)) {
                    func_0200fb94((char*)gs, 0);
                    again = true;
                }
                break;
            case 8:
                func_0205e8d4(data_02108760);
                func_0203a950(data_02109bf4);
                g_touchInput.Pause();
                func_020a1940(&OVERLAY_27_ID);
                func_020a1940(&OVERLAY_31_ID);
                REG_IME;
                REG_IME = 0;
                InitializeActiveAlarmList();
                func_ov031_02211c50(2);
#if defined(jpn)
                func_ov031_0222708c(0, 0x10);
#else
                switch (func_0200fb08((Struct0200fb08*)gs)) {
                case 1:
                    func_ov031_0222708c(1, 0);
                    break;
                case 2:
                    func_ov031_0222708c(2, 0);
                    break;
                case 3:
                    func_ov031_0222708c(3, 0);
                    break;
                case 4:
                    func_ov031_0222708c(4, 0);
                    break;
                case 5:
                    func_ov031_0222708c(5, 0);
                    break;
                default:
                    func_ov031_0222708c(1, 0);
                    break;
                }
#endif
                func_020d6c9c();
                func_020c983c();
                func_020c98f0(1);
                func_020a1940(&OVERLAY_32_ID);
                g_touchInput.Unpause();
                func_0209c174((Actor0209c174*)data_02109bf4);
                func_0209c290(data_02109bf4);
                SetInterruptHandler(1, (const void*)func_02012bd8);
                EnableSpecificInterrupts(1);
                func_020d6c9c();
                EnableIRQInterrupts();
                func_020c3864(1);
                MapVRAMBanksToMainBG(0x60);
                func_020c391c(1, 0, 0);
                DISPCNT = (DISPCNT & ~0x1f00) | 0x100;
                BG0CNT = (BG0CNT & 0x43) | 4;
                BG0CNT &= ~3;
                BG0CNT &= ~0x40;
                REG_POWCNT1 &= ~0x8000;
                func_020c9820();
                func_0200fb94((char*)gs, 6);
                func_02012010(gs, 1);
                again = false;
                break;
            }
        }
        if (func_02011570((StateBits5ccc_11570*)gs)) {
            func_0201155c((StateBits5ccc_1155c*)gs);
            RUNTITLE();
        }
    }
}
