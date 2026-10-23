#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Filesystem/BackgroundLoader.h"
#include "Resource/Brightness.h"
#include "Combat/BufferedScriptResult.h"

#if defined(jpn)
#define data_ov017_021d7c10 data_ov017_021d832c
#endif
struct Obj020397cc { char padding[0xb2]; short field_b2; };
struct Struct02046f84 { char padding[0xf0]; };
struct BattleLoad021b6290 {
    unsigned char type, complete;
    char padding2[6];
    unsigned char flag8;
    char padding9[3];
    Struct02046f84 action;
    unsigned char state, delay;
    short streamID, task;
};
struct Actor0209c678;
struct RootEntries;
struct ListHead02046b60;
extern "C" void* func_02012fe4();
extern "C" unsigned char* func_020704fc();
extern "C" void func_02017c58(void*);
extern "C" int func_02046cc8(Struct02046f84*);
extern "C" int func_0204700c(Struct02046f84*);
extern "C" void* func_ov017_021b8478(void*);
extern "C" void func_0209c480(Actor0209c678*, int);
extern "C" void func_0209c2e0(Actor0209c678*, int, int);
extern "C" void func_0205e944(void*, int);
extern "C" void func_02043124(void*);
extern "C" int abs(int);
extern "C" void func_020397cc(Obj020397cc*, int);
extern "C" void func_0209c678(Actor0209c678*, int);
extern "C" int func_02046b60(ListHead02046b60*, int);
extern "C" void* func_020421a0();
extern "C" RootEntries* func_0203cf4c();
extern "C" void func_0203e5d8(RootEntries*, int);
extern "C" float func_020709ac(unsigned char*);
extern "C" unsigned int* func_020d6c00();
extern "C" void func_020466e4(unsigned int*, unsigned int);
extern "C" void func_02047198(Struct02046f84*);
extern "C" void func_02046f84(Struct02046f84*);
extern "C" void func_ov017_0218d274(void* controller);
extern "C" void func_ov017_0218f79c(void*);
extern "C" void func_ov017_021a2840(GameResources*);
extern char data_ov017_021d7c10[];
extern Actor0209c678 data_02109bf4;
extern char data_02108760[];
// USA: func_ov017_021b6290
extern "C" ARM void func_ov017_021b6290(BattleLoad021b6290* self) {
    GameState* game = GameState::GetInstance();
    GameResources* resources = GetGameResources();
    func_02012fe4();
    Obj020397cc* actor = (Obj020397cc*)game->GetUnknownGameObject();
    unsigned char* timing = func_020704fc();
    BackgroundLoader* loader = BackgroundLoader::GetInstance();
    void* streamOwner = resources->unknown_ptr_3718;
    if (self->state == 0) {
        func_020397cc(actor, 1);
        actor->field_b2 = 0;
        if (self->streamID >= 0) {
            self->task = loader->QueueLoadFile(data_ov017_021d7c10, 0);
            func_0209c678(&data_02109bf4, 10);
        }
        if (self->streamID <= 0) self->delay = 0;
        if (self->flag8) func_02017c58(func_02012fe4());
        self->state = 1;
    }
    if (self->delay) --self->delay;
    if (self->state == 1) {
        if (func_02046cc8(&self->action)) self->state = 2;
    } else if (self->state == 2) {
        if (self->delay == 0) {
            int id = 23;
            if (self->task > BackgroundLoader::TaskStatus_Invalid) {
                if (!loader->GetTaskStatus(self->task)) return;
                void* data;
                unsigned int length;
                loader->GetLoadedFileByID(self->task, &data, &length);
                BufferedScriptResult temporary;
                BufferedScriptResult* result = &temporary;
                if (func_02046b60((ListHead02046b60*)resources->unknown_ptr_array_36fc[0], 10)) {
                    void* overrideState = func_ov017_021b8478(streamOwner);
                    if (overrideState) result = (BufferedScriptResult*)((char*)overrideState + 0x10);
                }
                if (func_0207416c(result, self->streamID, data, length)) id = result->resultId;
                loader->RemoveTask(self->task);
                self->task = BackgroundLoader::TaskStatus_Invalid;
            }
            func_0209c480(&data_02109bf4, id);
            func_0209c2e0(&data_02109bf4, 127, 0);
            func_0205e944(data_02108760, 127);
            SetFlags04(resources, 0x40);
            func_02043124(func_020421a0());
            func_0203e5d8(func_0203cf4c(), 0);
            if ((int)func_020709ac(timing) > 30 || abs(GetBrightness((GameResources*)resources, false)) == 16) {
                SetMainBrightness(resources, -16, 0);
                if (GetBrightness((GameResources*)resources, true) == 0) {
                    SetSubBrightness(resources, -16, 15);
                }
                self->state = 4;
            } else self->state = 3;
        }
    } else if (self->state == 3) {
        if (func_0204700c(&self->action)) self->state = 4;
    } else if (self->state == 4) {
        if (!IsBrightnessTransitionActive(resources)) {
            SetFlags04(resources, 4);
            SetFlags04(resources, 16);
            SetFlags04(resources, 2);
            SetFlags00(resources, 4);
            func_020466e4(func_020d6c00(), 1);
            func_02047198(&self->action);
            func_02046f84(&self->action);
            func_ov017_0218d274(resources);
            func_ov017_0218f79c(resources);
            func_ov017_021a2840(resources);
            func_0203e5d8(func_0203cf4c(), 1);
            self->complete = 1;
        }
    }
}
