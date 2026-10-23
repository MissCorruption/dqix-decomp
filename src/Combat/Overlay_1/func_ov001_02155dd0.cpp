#include <globaldefs.h>
#include "World/Zone3D.h"
#include "GameState/GameState.h"
#include "Filesystem/BackgroundLoader.h"
#include "Resource/Brightness.h"
#include "NitroSDK/Graphics.h"
#include "World/Object3D.h"
#include "std_library_functions.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

struct Struct02033b88;
struct EntryList_203dce4;
struct Container0204039c;
struct SlotArray0203dd10;

struct Scene02155dd0 {
    char pad0[0xa];
    unsigned short fieldA;
};

extern "C" char* func_020100f8(char* obj);
extern "C" void* func_02010768(void* obj);
extern "C" void* func_02012fe4();
extern "C" char* func_020421a0();
extern "C" void* func_0203cf4c(void);
extern "C" void* func_0203d004(void* p);
extern "C" void* func_0203dce4(EntryList_203dce4*, int);
extern "C" int* func_02040528(int* p);
struct Container02040404;
extern "C" int func_02040404(Container02040404*, char const*);
extern "C" void func_0204039c(Container0204039c* c, int idx);
extern "C" void func_02040504(int* p);
extern "C" void func_0203dd10(SlotArray0203dd10*, unsigned int, int);
extern "C" void func_02043204(char* obj);
extern "C" void func_02043124(char* obj);
extern "C" int func_0203adfc(void* a, void* b);
extern "C" void func_0203ad88(void* a, void* b, int c);
extern "C" void func_0202e874(unsigned char*, unsigned short);
extern "C" void func_0202f0c4(void* obj, int a, int b);
extern "C" void* func_020704fc();
struct EffectParam020708c8;
extern "C" void func_020708c8(EffectParam020708c8*, unsigned int);
extern "C" void func_0209c278(void* obj);
extern "C" void func_0209c290(void* obj);
extern "C" void func_0205ea20(void* obj, int mode);
extern "C" void func_ov028_021d9714();
extern "C" void func_020a1f4c(int v);
extern "C" void* func_0205ec34();
extern "C" int func_0206dfb0(int p, unsigned char* arr, int bit);
struct Bytes02033b88;
extern "C" void func_02033b88(Bytes02033b88*, int);
extern "C" void func_0200fd48(GameState* gs, int id);
extern "C" void func_020100c4(GameState* gs, int val);

extern char data_ov001_02164c4a[];
extern char data_02108760[];
extern char data_02109bf4[];

#define REG_DISPSTAT_304 (*(volatile unsigned short*)0x04000304)

// USA: func_ov001_02155dd0
extern "C" ARM unsigned short func_ov001_02155dd0(Scene02155dd0* self) {
    GameResources* res = GetGameResources();
    if (IsBrightnessTransitionActive(res)) {
        return self->fieldA;
    }

        BackgroundLoader* loader;
        char* globalA;
        GameObject* obj;
        int i;
        int* ptr6;
        GameResources* res2;
        Zone3D* area;
        int k;
        int j;
        char* hud;
        GameState* gs;

    gs = GameState::GetInstance();
    hud = func_020100f8((char*)gs);
    res2 = GetGameResources();
    area = (Zone3D*)func_02012fe4();
    globalA = func_020421a0();
    loader = BackgroundLoader::GetInstance();
    ptr6 = (int*)func_02010768(gs);

    for (i = 0; i < 4; i++) {
        obj = gs->GetMaybeWanderingMonsterByIndex(i);
        if (obj != 0) {
            obj->obj3D_.RemoveAnimationPackageByID(3);
            unsigned short af = area->currentZoneID_;
            if (af == obj->obj3D_.GetField06()) {
                obj->obj3D_.MakeVisible();
            }
            func_02033b88((Bytes02033b88*)obj, 0);
        }
    }

    for (j = 0; j < 0x20; j++) {
        obj = gs->GetGameObjectByIndex(j + 0xa0);
        if (obj != 0) {
            obj->obj3D_.Destroy();
            func_0200fd48(gs, j + 0xa0);
        }
    }

    if (ptr6[1] != 0) {
        if (func_020100f8((char*)gs) == 0) {
            func_020100c4(gs, ptr6[1]);
            hud = func_020100f8((char*)gs);
        }
    }

    void* list = func_0203cf4c();
    char buf[16];
    const char* fmt;
    char* nameBuf;

    k = 0;
    nameBuf = buf;
    fmt = data_ov001_02164c4a;
    for (; k < 0x20; k++) {
        int* entry = (int*)func_0203dce4((EntryList_203dce4*)list, k);
        if (entry != 0) {
            unsigned char* p = (unsigned char*)func_02040528(entry);
            if (p[2] == 3) {
                Container0204039c* cont = (Container0204039c*)func_0203d004(list);
#if defined(jpn)
                sprintf(nameBuf, fmt, p + 0x10);
#else
                sprintf(nameBuf, fmt, p + 4);
#endif
                int idx = func_02040404((Container02040404*)cont, nameBuf);
                func_0204039c(cont, idx);
                func_02040504(entry);
                func_0203dd10((SlotArray0203dd10*)list, k, 0);
            }
        }
    }

    func_02043204(globalA);
    func_02043124(globalA);
    ClearFlags04(res2, 8);
    if (func_0203adfc(data_02108760, 0) != 0) {
        func_0203ad88(data_02109bf4, 0, 0);
    }
    ClearFlags04(res2, 0x2000);
    func_0202e874((unsigned char*)hud, 0);
    func_0202f0c4(hud, 0xf000, 0);
    func_020708c8((EffectParam020708c8*)func_020704fc(), 0);
    loader->MaybeReset();

    REG_DISPSTAT_304 &= ~0x8000;
    if (TestFlags00(res2, 0x1000) != 0) {
#if !defined(jpn)
        func_0209c278(data_02109bf4);
        func_0209c290(data_02109bf4);
        func_0205ea20(data_02108760, 0x64);
#endif
        ClearFlags00((GameResources*)res2, 0x1000);
        func_ov028_021d9714();
        func_020a1f4c(1);
    }

    DISPCNT = (DISPCNT & ~0x1f00) | 0x100;

    void* events = func_0205ec34();
    BmdjScriptNode* node = func_020196fc((Zone3D*)func_02012fe4(), 0);
    BmdjSceneElement* e;
    int count = node->scriptState.elementCount;
    if (node != 0) {
        for (int n = 0; n < count; n++) {
            e = &node->elements[n];
            if (func_0206dfb0((int)events, (unsigned char*)((char*)events + 0x45b), n & 0xff) != 0) {
                if (e != 0) {
                    e->flags &= ~4;
                }
            } else {
                if (e != 0) {
                    e->flags |= 4;
                }
            }
        }
    }
    return 0xf;
}
