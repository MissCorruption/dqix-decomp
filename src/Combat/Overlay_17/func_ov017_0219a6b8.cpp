#include <globaldefs.h>
#include "GameState/GameState.h"
#include "World/Zone3D.h"
#include "Input/Input.h"

struct FlagWord02046708;
struct HeadNode02046b24;
struct PointerField32c_ffc0;
struct Obj020397cc;
struct BitField0203402c;
extern "C" void* func_020421a0();
extern "C" Zone3D* func_02012fe4();
extern "C" FlagWord02046708* func_020d6c00();
extern "C" int func_02046b08(void**);
extern "C" int func_02046b24(HeadNode02046b24**);
extern "C" int func_02046708(FlagWord02046708*, unsigned int);
extern "C" unsigned char* func_0200ffc0(PointerField32c_ffc0*);
extern "C" int func_020535c8(signed char*);
extern "C" int func_0203402c(BitField0203402c*);
extern "C" unsigned char func_02039d7c(char*);
extern "C" void __clear(void*, int);
extern "C" void func_020397cc(Obj020397cc*, int);
extern "C" void func_020a7f40(unsigned char*);
extern "C" void func_020a7f34(unsigned char*);
extern "C" void func_020397c0(void*);

// USA: func_ov017_0219a6b8
extern "C" ARM void func_ov017_0219a6b8(GameResources* self) {
    GameState* game = GameState::GetInstance();
    unsigned char* other;
    func_020421a0();
    unsigned short zone = func_02012fe4()->currentZoneID_;
    FlagWord02046708* flags = func_020d6c00();
    if (!func_02046b08((void**)self->unknown_ptr_array_36fc[0])) return;
    if (func_02046b24((HeadNode02046b24**)(void**)self->unknown_ptr_array_36fc[0]) == 2) return;
    if (func_02046708(flags, 0x800)) return;
    GameObject* actor = game->GetUnknownGameObject();
    if (!actor) return;
    other = func_0200ffc0((PointerField32c_ffc0*)game);
    if (func_020535c8((signed char*)actor)) return;
    if (g_keyManager.TestKeysHeld(2) && !self->fieldButtonState[0]) return;
    if (func_0203402c((BitField0203402c*)actor)) return;
    if (func_02039d7c((char*)actor)) return;
    if (zone == 0x2774) return;
    int indices[1];
    __clear(indices, sizeof(indices));
    for (int i = 0; i < 1; ++i) {
        int index = indices[i];
        int width = 24;
        int height = 24;
        if (index == 0) { width = 32; height = 32; }
        if (g_touchInput.pressed_) {
            int x, y;
            g_touchInput.GetTouchPoint(&x, &y);
            if (self->fieldButtonX[index] < x && x < self->fieldButtonX[index] + width && self->fieldButtonY[index] < y && y < self->fieldButtonY[index] + height) {
                func_020397cc((Obj020397cc*)actor, 1);
                if (other && zone == 0x2710) func_020a7f40(other);
                self->fieldButtonState[index] = 1;
            }
        } else if (g_touchInput.isRepeatValid_ && (g_touchInput.currentReading_.isHeld)) {
            int x, y;
            g_touchInput.GetTouchPoint(&x, &y);
            if (self->fieldButtonState[index] == 1) {
                if (!(self->fieldButtonX[index] < x && x < self->fieldButtonX[index] + width && self->fieldButtonY[index] < y && y < self->fieldButtonY[index] + height)) self->fieldButtonState[index] = 2;
            } else if (self->fieldButtonState[index] == 2) {
                int nextX = (x - 12 + self->fieldButtonX[index]) / 2;
                int nextY = (y - 12 + self->fieldButtonY[index]) / 2;
                if (nextX < 0) nextX = 0;
                if (256 - width < nextX) nextX = 256 - width;
                if (nextY < 0) nextY = 0;
                if (192 - height < nextY) nextY = 192 - height;
                self->fieldButtonX[index] = nextX;
                self->fieldButtonY[index] = nextY;
            }
        } else if (g_touchInput.released_) {
            if (self->fieldButtonState[index]) {
                func_020397c0(actor);
                if (other && zone == 0x2710) func_020a7f34(other);
            }
            if (self->fieldButtonState[index] == 1) {
                self->unknown_42e3[1] = 1;
                func_020397c0(actor);
                if (other && zone == 0x2710) func_020a7f34(other);
            }
            self->fieldButtonState[index] = 0;
        } else if (self->fieldButtonState[index]) {
            func_020397c0(actor);
            if (other && zone == 0x2710) func_020a7f34(other);
            self->fieldButtonState[index] = 0;
        }
        if (self->fieldButtonState[index]) return;
    }
}
