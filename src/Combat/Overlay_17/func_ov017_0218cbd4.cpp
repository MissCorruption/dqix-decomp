#include <globaldefs.h>
#include "GameState/Field3b0.h"
#include "GameState/GameState.h"
#include "Resource/MessageUpdate.h"
#include "Resource/MessageSystem.h"
#include "World/Zone3D.h"
#include "Resource/Brightness.h"

struct SearchStruct0202c1a4;
struct HeadNode02046b24;
struct Ctx021a3498;
struct Obj0208b088;
struct Obj0203dd20;
struct Foo020579b4;
struct ResetObj020d7a5c;
struct Event020da2fc { char pad_00[0xe]; unsigned char active; };
extern "C" void* func_0202ae18();
extern "C" Zone3D* func_02012fe4();
extern "C" Foo020579b4* func_02057924();
extern "C" void* func_02039e70();
extern "C" void* func_0203cf4c();
extern "C" void* func_02010768(void*);
extern "C" int func_020421a0();
extern "C" ResetObj020d7a5c* func_020d7a50();
extern "C" void* func_020e2ff8();
extern "C" void func_ov017_0218d8cc(GameResources*);
extern "C" unsigned char func_0200fb9c(char*);
extern "C" int func_0201201c(void*);
void Stub(GameResources*);
extern "C" void func_ov017_021941fc(GameResources*);
extern "C" void func_02039830(void*);
extern "C" void func_ov017_0219a674(unsigned char*);
extern "C" void func_02015438(void*);
extern "C" void func_020d9834(int);
extern "C" void func_02022dc8(void*);
extern "C" void func_ov017_021a624c(GameResources*);
extern "C" int func_02046b24(HeadNode02046b24**);
extern "C" void func_ov017_0219a6b8(GameResources*);
extern "C" void func_020966e0(void*);
extern "C" void func_ov017_021a3498(Ctx021a3498*);
extern "C" void func_020a654c(GameResources*);
extern "C" void func_020ac9ac(GameResources*);
extern "C" void func_02011b68(GameState*);
extern "C" int func_0202e09c(int);
extern "C" void func_020a20d8(void*);
extern "C" void func_ov000_0216d464(void*);
extern "C" void func_0204a170(void*);
extern "C" void func_ov017_0218d0ec(GameResources*);
extern "C" int func_0202b7d8(int*);
extern "C" signed char func_0202c1a4(SearchStruct0202c1a4*);
extern "C" void func_ov017_021a205c(GameResources*);
extern "C" int func_ov017_02196430(GameResources*);
extern "C" int func_ov017_02196c4c(GameResources*);
extern "C" void func_ov017_021c25ac(GameResources*);
extern "C" void func_ov017_021a476c(GameResources*);
extern "C" void func_ov017_0219755c(unsigned char*);
extern "C" void func_ov017_021a51a4(GameResources*);
extern "C" void func_ov017_021c05f4(GameResources*, int, int, int);
extern "C" void* func_0208e9e8();
extern "C" void func_0208ec78(void*);
extern "C" void func_0208f4e4(unsigned char*);
extern "C" void* func_0208a9b4();
extern "C" void func_0208b088(Obj0208b088*);
extern "C" void func_0203dd20(Obj0203dd20*);
extern "C" void func_ov017_0218d06c(GameResources*);
extern "C" void func_020da2fc(Event020da2fc*);
extern "C" void func_020579b4(Foo020579b4*, int);
extern "C" void func_ov017_02192700(GameResources*);
extern "C" void func_020d7b04(ResetObj020d7a5c*);
extern "C" void func_ov028_021d9734();
extern "C" void func_ov017_0219ca88(GameResources*);
extern "C" void func_ov017_02191bdc(unsigned char*, int);
extern "C" void func_ov017_02199f08(GameResources*);
extern "C" void func_ov017_0219aa7c(GameResources*);
extern "C" int* func_020936f8();
extern "C" void func_02093b90(int*, unsigned int);
extern "C" void func_ov017_021a4e48(unsigned char*);
void UpdateBrightnessTransitions(GameResources*);
extern "C" void func_020e30f0(void*);
extern "C" void func_ov017_0218d818(unsigned char*);
extern Event020da2fc data_ov017_021d82fc;

// USA: func_ov017_0218cbd4
extern "C" ARM void func_ov017_0218cbd4(GameResources* self) {
    GameState* state = GameState::GetInstance();
    void* search = func_0202ae18();
    Zone3D* world = func_02012fe4();
    Foo020579b4* array = func_02057924();
    func_02039e70();
    GameObject* actor = state->GetUnknownGameObject();
    unsigned int ticks = state->GetTickCount();
    Obj0203dd20* scales = (Obj0203dd20*)func_0203cf4c();
    void** field = (void**)func_02010768(state);
    MessageSystem* message = (MessageSystem*)func_020421a0();
    ResetObj020d7a5c* reset = func_020d7a50();
    void* entries = func_020e2ff8();
    func_ov017_0218d8cc(self);
    int paused = 0;
    if (func_0200fb9c((char*)state) == 6 || func_0201201c(state) == 5) paused = 1;
    int dispatch = 0;
    if (TestFlags00(self, 0x4000)) dispatch = 1;
    Stub(self);
    func_ov017_021941fc(self);
    if (!paused) {
        func_02039830(actor);
        (*(Vector3i*)(self->unknown_432c + 0x1c)) = actor->obj3D_.position_;
    }
    func_ov017_0219a674(self->interactionSelection);
    if (!TestFlags00(self, 4)) {
        func_02015438(world);
        if (dispatch) func_020d9834(1);
    }
    if (!paused && *field) func_02015438(*field);
    func_02022dc8(self->unknown_ptr_36d0);
    func_ov017_021a624c(self);
    if (func_02046b24((HeadNode02046b24**)self->unknown_ptr_array_36fc[0]) != 3)
        func_ov017_0219a6b8(self);
    if (message->active && !((unsigned char*)self->unknown_ptr_array_3afc[13])[2]) {
        message->func_020444d4(ticks);
    }
    func_020966e0(self->unknown_ptr_4328);
    func_ov017_021a3498((Ctx021a3498*)self->unknown_ptr_array_36fc[0]);
    func_020a654c(self);
    func_020ac9ac(self);
    func_02011b68(state);
    void* animation = func_020100bc(state);
    if (animation) {
        if (func_0202e09c((int)animation) & 4) func_020a20d8(animation);
        else if (func_0202e09c((int)animation) & 8) func_ov000_0216d464(animation);
        else if (func_0202e09c((int)animation) & 16) func_0204a170(animation);
    }
    func_ov017_0218d0ec(self);
    if (func_02046b24((HeadNode02046b24**)self->unknown_ptr_array_36fc[0]) != 3) {
        if (!func_0202b7d8((int*)search) || func_0202c1a4((SearchStruct0202c1a4*)search) == 0)
            func_ov017_021a205c(self);
    }
    int stateA = func_ov017_02196430(self);
    int stateB = func_ov017_02196c4c(self);
    if (stateA == 2 || stateB == 2) self->unknown_42e3[5] = 0;
    if (!paused) {
        func_ov017_021c25ac(self);
        if (func_02046b24((HeadNode02046b24**)self->unknown_ptr_array_36fc[0]) != 3 &&
            func_02046b24((HeadNode02046b24**)self->unknown_ptr_array_36fc[0]) != 2 && !self->fieldButtonState[0]) {
            func_ov017_021a476c(self);
            func_ov017_0219755c((unsigned char*)self);
            func_ov017_021a51a4(self);
            func_ov017_021c05f4(self, 1, 0, 1);
        }
        if (func_02046b24((HeadNode02046b24**)self->unknown_ptr_array_36fc[0]) != 3) {
            func_0208ec78(func_0208e9e8());
            func_0208f4e4((unsigned char*)world->unk_2664);
        }
        if (!((unsigned char*)self->unknown_ptr_array_3afc[13])[2]) func_0208b088((Obj0208b088*)func_0208a9b4());
        func_0203dd20(scales);
        if (dispatch) func_020d9834(0);
        func_ov017_0218d06c(self);
        if (dispatch) func_020d9834(0);
        if (data_ov017_021d82fc.active) func_020da2fc(&data_ov017_021d82fc);
        func_020579b4(array, ticks);
        if (!world->unknown_424_) func_ov017_02192700(self);
        if (!TestFlags00(self, 16))
            func_ov017_021a3498((Ctx021a3498*)self->unknown_ptr_array_36fc[1]);
        if (!TestFlags00(self, 128))
            func_ov017_021a3498((Ctx021a3498*)self->unknown_ptr_array_36fc[2]);
        func_020d7b04(reset);
        if (TestFlags00(self, 0x1000)) func_ov028_021d9734();
        if (dispatch) func_020d9834(1);
    }
    func_ov017_0219ca88(self);
    func_ov017_02191bdc((unsigned char*)self, 0);
    if (!paused) {
        func_ov017_02199f08(self);
        func_ov017_0219aa7c(self);
    }
    int* clocks = func_020936f8();
    func_02093b90(clocks, state->GetTickCount());
    func_ov017_021a4e48((unsigned char*)self);
    UpdateBrightnessTransitions(self);
    if (dispatch) func_020d9834(0);
    func_020e30f0(entries);
    func_ov017_0218d818((unsigned char*)self);
}
