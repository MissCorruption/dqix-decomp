#include <globaldefs.h>
#include "Combat/ActorAction.h"

#include "Combat/Main/BattleList.h"
#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"
#include "Resource/GameResources.h"
#include "World/Object3D.h"
#include "Resource/Brightness.h"

#if defined(jpn)
#define data_ov017_021d7d6c data_ov017_021d8544
#define data_ov017_021d7d9e data_ov017_021d8576
#define data_ov017_021d7db8 data_ov017_021d8590
#define data_ov017_021d7dbb data_ov017_021d8593
#define data_ov017_021d7dbf data_ov017_021d8597
#define data_ov017_021d7de0 data_ov017_021d85b8
#define data_ov017_021d7df9 data_ov017_021d85d1
#endif

struct ListHead02046b60;
struct Obj020397cc;
struct Obj020d7aa0;
struct Base02010834;
struct Flags02033fcc;

struct Overlay021bbc10 {
    unsigned char pad00[1];
    unsigned char flag01;
    unsigned char pad02[6];
    unsigned short id08;
    unsigned short result0a;
    unsigned char pad0c[0x68];
    int task74;
#if defined(jpn)
    unsigned char pad78[0x20];
#else
    unsigned char pad78[0x24];
#endif
    unsigned char useAltPath9c;
    unsigned char pad9d[0xcc - 0x9d];
    unsigned char flagCc;
    unsigned char indexCd;
    unsigned char padCe[0xd0 - 0xce];
    unsigned char timerObj_d0[0x10];
    unsigned char padE0[0xfd - 0xe0];
    unsigned char flagFd;
    unsigned char padFe[1];
    unsigned char flagFf;
};

extern "C" int func_02039d7c(char*);
extern "C" int func_0202e7f0(void* obj);
extern "C" void* func_020100f8(char*);
extern "C" int func_0202b7d8(int*);
extern "C" int func_020a1eb0(void);
extern "C" void func_020a1df8(int);
extern "C" unsigned int* func_020d6c00(void);
extern "C" void func_020466e4(unsigned int* p, unsigned int mask);
extern "C" void func_020a27b8(unsigned char* obj);
extern "C" void* func_020d7a50(void);
extern "C" void func_020d7aa0(Obj020d7aa0* obj);
extern "C" void func_020397cc(Obj020397cc* obj, int arg1);
extern "C" void func_02053ec8(void*, int);
extern "C" void func_02053ed8(void* obj);
extern "C" int func_020100a8(GameState* gs);
extern "C" void func_02010834(Base02010834* base, int index, int* out, int* outCount);
extern "C" void func_02033fcc(Flags02033fcc*);
extern "C" void func_02039d24(unsigned char* obj);
struct Obj021bb088;
extern "C" void func_ov017_021bb088(Obj021bb088*);
extern "C" int* func_02010768(void* obj);
struct SafeAllocator;
extern "C" void func_ov001_0215aa14(SafeAllocator*);
extern "C" void* func_02012fe4(void);
extern "C" void* func_0202ae18(void);
extern "C" ARM int func_ov017_021bb27c(Overlay021bbc10* self);

extern "C" int func_02046b60(ListHead02046b60* list, int id);
extern "C" int func_02046b08(void** obj);
void SetBrightness(GameResources* resources, int brightness, int duration);
char* strstr(const char* str, const char* substr);

extern const char data_ov017_021d7d6c[];
extern const char data_ov017_021d7d9e[];
extern const char data_ov017_021d7db8[];
extern const char data_ov017_021d7dbb[];
extern const char data_ov017_021d7dbf[];
extern const char data_ov017_021d7de0[];
extern const char data_ov017_021d7df9[];

// USA: func_ov017_021bbc10
extern "C" ARM int func_ov017_021bbc10(Overlay021bbc10* self) {
    GameState* gs = GameState::GetInstance();
    BackgroundLoader* loader = BackgroundLoader::GetInstance();
    GameObject* unk = gs->GetUnknownGameObject();
    unsigned char* field4 = (unsigned char*)func_020100f8((char*)gs);
    GameResources* res = GetGameResources();
    void* search = func_0202ae18();

    if (func_02046b60((ListHead02046b60*)res->unknown_ptr_array_36fc[0], 1)) {
        self->flagFf = 1;
        self->flag01 = 1;
        return self->result0a;
    }
    func_020466e4(func_020d6c00(), 0x400e);
    if (res->unknown_4080 != 0) {
        return self->result0a;
    }
    SubBlock02038508* field26c = func_020399a8(unk);
    if (func_02039d7c((char*)unk) != 0 && field26c->command != 2) {
        return self->result0a;
    }
    if (self->flagFd == 0 && func_02046b08((void**)res->unknown_ptr_array_36fc[1]) == 0) {
        return self->result0a;
    }
    SetFlags00(res, 0x10);
    if (TestFlags00(res, 0x1000) == 0 && func_020a1eb0() != 1) {
        func_020a1df8(1);
    }
    func_ov001_0215aa14((SafeAllocator*)NULL);
    func_020397cc((Obj020397cc*)unk, 1);
    func_020a27b8(field4);
    func_020d7aa0((Obj020d7aa0*)func_020d7a50());
    *(unsigned short*)(field4 + 0x21e) = func_0202e7f0(field4);

    if (func_0202b7d8((int*)search)) {
        char* arr = (char*)func_02010828(gs);
        for (int i = 0; i < *(unsigned char*)(arr + 0xf7c); i++) {
            GameObject* combatant = func_0200ff1c(gs, *(unsigned char*)(arr + i + 0xf78));
            if (combatant != NULL) {
                func_02053ec8(combatant, 3);
                func_02053ed8(combatant);
            }
        }
    }

    int count;
    int ids[4];
    func_02010834((Base02010834*)gs, func_020100a8(gs), ids, &count);
    for (int i = 0; i < count; i++) {
        GameObject* member = gs->GetPartyMemberByIndex(ids[i]);
        if (member != NULL) {
            func_02033fcc((Flags02033fcc*)member);
            if (func_02039d7c((char*)member) == 0 || func_020399a8(member)->command != 2) {
                member->obj3D_.MaybeSetRegularAnimation(data_ov017_021d7d6c, 0x10);
            }
            func_02039d24((unsigned char*)member);
        }
    }
    GameObject* extra = gs->GetPartyMemberByIndex(0xce);
    if (extra != NULL) {
        func_02039d24((unsigned char*)extra);
    }
    func_ov017_021bb088((Obj021bb088*)self->timerObj_d0);
    int* ptr5ca4 = func_02010768(gs);
    ptr5ca4[0] = 0;
    ptr5ca4[1] = 0;
    loader->AddFence();

    if (self->useAltPath9c != 0) {
        self->task74 = loader->QueueLoadFile(data_ov017_021d7d9e, NULL);
    } else if (self->flagCc != 0) {
        char* name = *(char**)((char*)func_02012fe4() + 8);
        if (gs->GetGameObjectByIndex(self->indexCd) == NULL || strstr(name + 5, data_ov017_021d7db8) == NULL ||
            strstr(name + 5, data_ov017_021d7dbb) == NULL) {
            SetBrightness(res, 0, 0x28);
            func_ov017_021bb27c(self);
            self->flag01 = 1;
            return self->result0a;
        }
        return 0xc;
    } else {
        unsigned int id = self->id08;
        if (id >= 0x5208 && id < 0x9c40) {
            self->task74 = loader->QueueLoadFile(data_ov017_021d7dbf, NULL);
            loader->GetNumQueuedTasks();
        } else if (id >= 0x9c40) {
            self->task74 = loader->QueueLoadFile(data_ov017_021d7de0, NULL);
        } else {
            self->task74 = loader->QueueLoadFile(data_ov017_021d7df9, NULL);
        }
    }
    return 1;
}
