#include <globaldefs.h>
#include "GameState/Field3b0.h"
#include "GameState/GameState.h"
#include "Resource/Brightness.h"
#include "NitroSDK/Matrix.h"
#include "Input/Input.h"
#include "Resource/GameResources.h"

#if defined(jpn)
#define RG(usa, jpn) (jpn)
#define data_020e780c data_020e8150
#else
#define RG(usa, jpn) (usa)
#endif

struct Vec3 { int x; int y; int z; };
struct Bytes02033b88;
struct Obj02033b68;
struct Foo02033b58;
struct Obj02033834;
struct Container0201e8fc;
struct ShortField0x22e_020968c4;

struct Box0201e8fc {
    char pad0[0x18];
    short angle;
};

struct Field4328 {
    char pad0[0x224];
    unsigned char active;
    unsigned char enabled;
};

struct Actor02038138 {
    char pad0[0x44];
    struct Vec3 pos;
    char pad50[0xbe - 0x50];
    unsigned char fbe;
    char padbf;
    unsigned char fc0;
    char padc1[RG(0x250, 0x244) - 0xc1];
    unsigned char dir;
    char pad251;
    unsigned char f252;
    char pad253[0x255 - 0x253];
    signed char lockedDir;
    short lockedAngle;
};

extern "C" char* func_02012fe4();
extern "C" struct Field4328* func_ov017_0218d268(void*);
extern "C" void func_02033b88(struct Bytes02033b88*, int);
extern "C" void func_02033b68(struct Obj02033b68*, int);
extern "C" void func_02033b58(struct Foo02033b58*, unsigned char);
extern "C" int func_0202e7f0(void*);
int fix32ReduceAngle0To2Pi(int);
extern "C" struct Box0201e8fc* func_0201e8fc(struct Container0201e8fc*, struct Vec3*);
int fix32SignedAngleDistance(int, int);
int fix32abs(int);
extern "C" void func_02033834(struct Obj02033834*, int);
extern "C" short func_020968c4(struct ShortField0x22e_020968c4*);

extern int data_020e780c[8];

// USA: func_02038138
extern "C" ARM void func_02038138(struct Actor02038138* self) {
    char* world;
    void* camera;
    GameResources* ov;
    int mode;
    camera = func_020100bc(GameState::GetInstance());
    ov = GetGameResources();
    world = func_02012fe4();
    mode = 0;

    if (g_keyManager.IsUpHeld() && g_keyManager.IsLeftHeld()) {
        self->dir = 0xc;
        mode = 1;
    } else if (g_keyManager.IsUpHeld() && g_keyManager.IsRightHeld()) {
        self->dir = 0xd;
        mode = 1;
    } else if (g_keyManager.IsDownHeld() && g_keyManager.IsLeftHeld()) {
        self->dir = 0xe;
        mode = 1;
    } else if (g_keyManager.IsDownHeld() && g_keyManager.IsRightHeld()) {
        self->dir = 0xf;
        mode = 1;
    } else if (g_keyManager.IsUpHeld()) {
        self->dir = 8;
        mode = 1;
    } else if (g_keyManager.IsDownHeld()) {
        self->dir = 9;
        mode = 1;
    } else if (g_keyManager.IsLeftHeld()) {
        self->dir = 0xa;
        mode = 1;
    } else if (g_keyManager.IsRightHeld()) {
        self->dir = 0xb;
        mode = 1;
    }

    struct Field4328* f = func_ov017_0218d268(ov);
    if (g_touchInput.timeHeld_ >= 5 && f->enabled != 0 && f->active != 0) {
        mode = 2;
        int x;
        int y;
        g_touchInput.GetTouchPoint(&x, &y);
        Vector3fix a;
        Vector3fix b;
        a.x = x << 12;
        a.y = y << 12;
        a.z = 0;
        x = g_touchInput.pressX_;
        y = g_touchInput.pressY_;
        b.x = x << 12;
        b.y = y << 12;
        b.z = 0;
        if (Vector3fix_Distance(&a, &b) < 0x8000) {
            mode = 0;
        }
    }

    if (self->f252 == 0 || IsMainBrightnessTransitionActive(ov) != 0) {
        mode = 0;
    }

    if (mode == 0) {
        if (self->dir >= 8) {
            self->dir -= 8;
        }
        if (self->f252 != 0 && self->fbe == 1) {
            func_02033b88((struct Bytes02033b88*)self, 0);
        }
        self->lockedDir = -1;
    } else if (mode == 1) {
        if (self->fc0 == 0 || self->fc0 == 0xa) {
            func_02033b68((struct Obj02033b68*)self, 1);
        } else {
            func_02033b58((struct Foo02033b58*)self, 1);
        }
        int base = data_020e780c[self->dir - 8];
        int angle = fix32ReduceAngle0To2Pi(base + func_0202e7f0(camera));
        if (self->lockedDir == self->dir) {
            angle = self->lockedAngle;
        } else {
            struct Box0201e8fc* box = func_0201e8fc((struct Container0201e8fc*)(world + RG(0x6c, 0x8c)), &self->pos);
            if (box) {
                if (fix32abs(fix32SignedAngleDistance(angle, box->angle)) < 0xc91) {
                    self->lockedDir = self->dir;
                    self->lockedAngle = box->angle;
                } else {
                    short flipped = fix32ReduceAngle0To2Pi(box->angle + 0x3244);
                    if (fix32abs(fix32SignedAngleDistance(angle, flipped)) < 0xc91) {
                        self->lockedDir = self->dir;
                        self->lockedAngle = flipped;
                        angle = self->lockedAngle;
                    }
                }
            } else {
                self->lockedDir = -1;
            }
        }
        func_02033834((struct Obj02033834*)self, angle);
    } else if (mode == 2) {
        if (self->fc0 == 0) {
            func_02033b68((struct Obj02033b68*)self, 1);
        } else {
            func_02033b58((struct Foo02033b58*)self, 1);
        }
        if (f->active != 0) {
            func_02033834((struct Obj02033834*)self, func_020968c4((struct ShortField0x22e_020968c4*)f));
        }
        self->lockedDir = -1;
    }
}
