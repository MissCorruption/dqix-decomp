#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_02010828(GameState* battleStruct);
struct Vector3i;
struct Obj02033874;
extern "C" void func_02033874(struct Obj02033874* obj, int arg);
struct Bytes02033b88;
extern "C" int func_02033b88(struct Bytes02033b88* p, int val);
extern "C" void func_02039d24(unsigned char* obj);
extern "C" unsigned char func_020100b0(GameState* battleStruct);
extern "C" void func_02039d48(unsigned char* obj);

// USA: func_ov017_021921fc
extern "C" ARM void func_ov017_021921fc(int* vec, int angle, int resetFlag) {
    unsigned char* keys;
    GameState* bs = GameState::GetInstance();
    unsigned char* base = (unsigned char*)func_02010828(bs);
    keys = base + 0x378;
    int i = 0;
    keys = keys + 0xc00;
    for (; i < base[0xf7c]; i++) {
        GameObject* c = bs->GetPartyMemberByIndex(keys[i]);
        if (c != NULL) {
            *(Vector3i*)(&c->obj3D_.position_.x) = *(Vector3i const*)vec;
            func_02033874((struct Obj02033874*)c, angle);
            if (resetFlag != 0) {
                func_02033b88((struct Bytes02033b88*)c, 0);
                *(unsigned short*)((char*)c + 0xb2) = 0;
                func_02039d24((unsigned char*)c);
            }
            if (keys[i] != func_020100b0(bs)) {
                func_02039d48((unsigned char*)c);
            }
        }
    }
}
