#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int* func_0200fb8c(int*);
struct GameResources;
void SetBrightness(GameResources*, int, int);
void SetSubBrightness(GameResources*, int, int);
int IsBrightnessTransitionActive(GameResources*);
extern "C" int func_0209ca2c(void* obj);
struct Entry_0205d6a0;
extern "C" void func_0205d6a0(Entry_0205d6a0*, int);

struct ShortField0xb8_0209cae8;
extern "C" short func_0209cae8(struct ShortField0xb8_0209cae8* obj);

struct Actor0209c678;
extern "C" void func_0209c678(struct Actor0209c678* actor, int arg);

extern int data_02109bf4;

struct Obj021868a8 {
    char pad0[0xb10];
    unsigned char b10;
    unsigned char b11;
    char pad1;
    unsigned char b13;
    char pad2[0xb24 - 0xb14];
    int b24;
};

// USA: func_ov008_021868a8
extern "C" ARM void func_ov008_021868a8(struct Obj021868a8* obj) {
    int* word = func_0200fb8c((int*)GameState::GetInstance());
    unsigned char flag = obj->b11;
    if (flag == 0) {
        if (obj->b24 == 0) {
            SetBrightness((GameResources*)word, -16, 15);
            if (obj->b13 == 0) {
                if (func_0209cae8((struct ShortField0xb8_0209cae8*)&data_02109bf4) != 0x29) {
                    func_0209c678((struct Actor0209c678*)&data_02109bf4, 15);
                }
            }
        } else {
            SetSubBrightness((GameResources*)word, -16, 15);
        }
        obj->b11 = obj->b11 + 1;
        return;
    }
    if (flag != 1) return;
    if (IsBrightnessTransitionActive((GameResources*)word) != 0) return;
    if (func_0209ca2c(&data_02109bf4) != 0) return;
    func_0205d6a0((Entry_0205d6a0*)((char*)obj + 0x130), 1);
    obj->b10 = 0xe;
    obj->b11 = 0;
}
