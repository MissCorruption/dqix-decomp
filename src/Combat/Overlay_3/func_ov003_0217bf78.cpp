#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"
#include "GameState/Field3b0.h"
#include "Memory/SafeAllocator.h"
#include "Resource/Brightness.h"
#include "NitroSDK/BGBases.h"
#include "NitroSDK/Matrix.h"
#include <globaldefs.h>
#include "Resource/GameResources.h"

struct GameObject;

struct Camera0217bf78 {
    char unk_0[0x10];
    Vector3i position;
    char unk_1c[0x70 - 0x1c];
    Vector3i tail;
    char unk_7c[0x21e - 0x7c];
    short field_21e;
};

struct Scene0217bf78 {
    char unk_0[0x80];
    char object[0x130 - 0x80];
    int taskA;
    int taskB;
    int taskC;
    int taskD;
    unsigned char mode;
    signed char state;
    char unk_142[2];
    Vector3i cameraPosition;
    Vector3i cameraTail;
    char unk_15c[0x160 - 0x15c];
    int field_160;
};

extern "C" void func_020a27a0(void *obj);
extern "C" void func_020a27ac(void *obj);
extern "C" int func_0202e7f0(void *obj);
extern "C" int func_020421a0();
extern "C" void func_02043204(char *obj);
extern "C" void func_ov003_0217c974(Scene0217bf78 *self);
extern "C" void func_0202e694(void *obj, int *vec);
extern "C" void func_0200fd38(GameState *battleStruct, int id, GameObject *combatant);
extern "C" void func_ov003_0217ca84(Scene0217bf78 *self, unsigned short fillValue);
extern "C" void func_020a64e8(void);
extern "C" void func_020c5588(int a, int b, int c, int d, int e);
extern "C" int func_ov003_0217c2a0(int enable);
extern "C" void func_ov003_0217cb3c(Scene0217bf78 *self, int mainScreen, int alternate);
extern "C" void func_0205ebc0(void *sound, int a, int b);

extern char data_ov003_02180bef[];
extern char data_ov003_02180cf8[];
extern char data_ov003_02180d08[];
extern char data_ov003_02180c07[];
extern Vector3i data_ov003_02180ce0;
extern int data_ov003_02180cec[3];
extern int data_02108760;

// USA: func_ov003_0217bf78
extern "C" ARM void func_ov003_0217bf78(Scene0217bf78 *self) {
    BackgroundLoader *loader = BackgroundLoader::GetInstance();
    GameResources *resources = GetGameResources();

    if (self->state == 0) {
        GameState *gs          = GameState::GetInstance();
        self->taskA            = loader->QueueLoadFileInGP2(data_ov003_02180bef, data_ov003_02180cf8, 0);
        self->taskC            = loader->QueueLoadFile(data_ov003_02180d08, 0);
        self->taskB            = loader->QueueLoadFile(data_ov003_02180c07, 0);
        Camera0217bf78 *camera = (Camera0217bf78*)func_020100bc(gs);
        func_020a27a0(camera);
        func_020a27ac(camera);
        camera->field_21e = func_0202e7f0(camera);
        loader->RemoveTask(self->taskD);
        self->taskD = -1;
        self->state++;
    } else if (self->state == 1) {
        if (!loader->GetTaskStatus(self->taskA)) return;
        if (IsBrightnessTransitionActive(resources)) return;
        if (loader->GetDetailedTaskStatus(self->taskA) != 2) {
            loader->RemoveTask(self->taskA);
            self->mode  = 4;
            self->state = 0;
        }
        GameState *gs = GameState::GetInstance();
        func_02043204((char *) func_020421a0());
        func_ov003_0217c974(self);
        Camera0217bf78 *camera = (Camera0217bf78*)func_020100bc(gs);
        self->cameraPosition   = camera->position;
        self->cameraTail       = camera->tail;
        camera->position       = data_ov003_02180ce0;
        func_0202e694(camera, data_ov003_02180cec);
        func_0200fd38(gs, 0xa0, (GameObject *) self->object);
        func_ov003_0217ca84(self, 0);
        self->state++;
    } else if (self->state == 2) {
        if (!loader->GetTaskStatus(self->taskB)) return;
        if (loader->GetDetailedTaskStatus(self->taskB) != 2) {
            loader->RemoveTask(self->taskB);
            self->mode  = 4;
            self->state = 0;
        }
        if (self->field_160 != 0) func_020a64e8();
        ((Object3D*)self->object)->MakeHidden();
        func_020c5588(0, 0x1f, 0x7fff, 0, 0);
        *(volatile unsigned int *) 0x4000000 = (*(volatile unsigned int *) 0x4000000 & ~0x1f00) | 0x100;
        func_ov003_0217c2a0(1);
        self->state++;
    } else if (self->state == 3) {
        if (!loader->GetTaskStatus(self->taskC)) return;
        if (loader->GetDetailedTaskStatus(self->taskC) != 2) {
            loader->RemoveTask(self->taskC);
            self->mode  = 4;
            self->state = 0;
        }
        func_ov003_0217cb3c(self, 0, 0);
        unsigned short *screen = (unsigned short *) GetSubBG0ScreenBase();
        for (int i = 0; i < 0x800; i++)
            *screen++ = 0;
        *(volatile unsigned int *) 0x4001000 &= ~0x1f00;
        self->mode  = 2;
        self->state = 0;
        func_0205ebc0(&data_02108760, 0x8b, 0x8b);
    }
}
