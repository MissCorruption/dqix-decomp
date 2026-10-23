#include <globaldefs.h>
#include "GameState/Field3b0.h"
#include "GameState/GameState.h"
#include "Resource/GameResources.h"
#include "World/Object3D.h"
#include "Graphics/LightingManager.h"
#include "Combat/CombatantMotion.h"

struct Vec3_020406f8 { unsigned int v[3]; };
struct Node020406f8;
struct Vec3_020407c4 { unsigned int v[3]; };
struct Self020407c4;
struct Obj02041298;
struct Obj0204117c;
struct Vec3s32_020c3030 { int x; int y; int z; };
struct HeadNode02046b24;

struct ModelEffect02040c2c {
    Object3D object;
    unsigned short flags_ac;
    char pad_ae[0xc0 - 0xae];
    unsigned int idleTicks;

    unsigned int GetIdleTicks() { return idleTicks; }
};

struct SpriteMotion02040c2c {
    int unknown0;
    Vec3_020406f8 position;
    unsigned char unknown10[0x1a];
    unsigned short diffuseColor;
    unsigned char unknown2c[0x30];
    unsigned int flags;
    int angle;
    int targetAngle;
    int angularSpeed;
    Vector3i previousPosition;
    Vector3i targetPosition;
    int unknown84;
    unsigned int idleTicks;

    unsigned int GetIdleTicks() { return idleTicks; }
};

struct Container02040c2c {
    char pad_00[0x1f];
    unsigned char mode;
    char pad_20[0x48 - 0x20];
    struct Vector3i v48;
};

struct Obj0203c818;
extern "C" void func_0203c818(Obj0203c818*, void*, int, int);
extern "C" void func_02040f48(struct Obj02040c2c* self, void* vec);
extern "C" int rand(void);
extern "C" int func_0202e800(void* p);
extern "C" void* func_0202ed6c(void* p);

extern "C" int func_02046b24(struct HeadNode02046b24** head);
extern "C" void func_0204117c(struct Obj0204117c* obj, struct Vec3s32_020c3030* refPoint);
extern "C" void func_02041298(struct Obj02041298* obj, int value);
extern "C" void func_020406f8(struct Vec3_020406f8* out, struct Node020406f8* node);
extern "C" void func_020407c4(struct Vec3_020407c4* out, struct Self020407c4* self);

// USA: func_02040c2c
extern "C" ARM void func_02040c2c(struct Obj02040c2c* self, void* context, int elapsedTicks, int movementTicks) {
    struct Vec3_020406f8 motionPosition;
    struct Vec3_020406f8 attachmentPosition;
    struct Vec3_020407c4 attachmentRotation;
    struct Vector3i cameraOffset;
    struct Vec3_020406f8 sourcePosition;

    if (self->spriteMotion != 0) {
        func_0203c818(reinterpret_cast<Obj0203c818*>(self->spriteMotion), context, elapsedTicks, movementTicks);
        struct LightingManager* lm = LightingManager::GetInstance();
        if (lm != 0) {
            self->spriteMotion->diffuseColor = lm->spriteDiffuseColor_;
        }
        if (func_02046b24((HeadNode02046b24**)GetGameResources()->unknown_ptr_array_36fc[0]) != 4) {
            if (!(self->flags & 1) && !(self->flags & 0x20000)) {
                if (self->settings != 0 && self->settings->mode != 0) {
                    SpriteMotion02040c2c* a = self->spriteMotion;
                    if (!(a->flags & 1) && self->idleDelay < self->spriteMotion->GetIdleTicks()) {
                        motionPosition = a->position;
                        switch (self->settings->mode) {
                        case 7:
                        case 8:
                            func_02040f48(self, &motionPosition);
                            break;
                        case 9:
                        case 10:
                            func_0204117c((struct Obj0204117c*)self, (struct Vec3s32_020c3030*)&motionPosition);
                            break;
                        }
                        if (self->flags & 8) {
                            self->idleDelay = 0;
                        } else {
                            self->idleDelay = rand() % 2000 + 2000;
                        }
                    }
                }
            }
        }
    } else if (self->modelMotion != 0) {
        func_02041298((struct Obj02041298*)self->modelMotion, elapsedTicks);
        if (self->modelMotion->object.pModel_ != 0 && self->modelMotion->object.pModel_->rawInternalModel_ != 0) {
            if (LightingManager::GetInstance() != 0) {
                self->modelMotion->object.SetDiffuseColor(LightingManager::GetInstance()->modelDiffuseColor_);
            }
        }
        if (func_02046b24((HeadNode02046b24**)GetGameResources()->unknown_ptr_array_36fc[0]) != 4) {
            if (!(self->flags & 1) && !(self->flags & 0x20000)) {
                if (self->settings != 0 && self->settings->mode != 0) {
                    ModelEffect02040c2c* b = self->modelMotion;
                    if (!(b->flags_ac & 1)) {
                        if (self->idleDelay < self->modelMotion->GetIdleTicks()) {
                            switch (self->settings->mode) {
                            case 7:
                            case 8:
                                func_02040f48(self, &b->object.position_);
                                break;
                            case 9:
                            case 10:
                                func_0204117c((struct Obj0204117c*)self, (struct Vec3s32_020c3030*)&b->object.position_);
                                break;
                            }
                            if (self->flags & 8) {
                                self->idleDelay = 0;
                            } else {
                                self->idleDelay = rand() % 2000 + 2000;
                            }
                        }
                    }
                }
            }
        }
    }

    if (self->attachment != 0) {
        func_020406f8(&sourcePosition, (struct Node020406f8*)self);
        attachmentPosition = sourcePosition;
        func_020407c4(&attachmentRotation, (struct Self020407c4*)self);
        struct Vector3i* pB = (struct Vector3i*)&attachmentRotation;
        attachmentPosition.v[1] += 0x1000;
        if (self->spriteMotion != 0) {
            unsigned char* camera = (unsigned char*)func_020100bc(GameState::GetInstance());
            func_0202ed6c(camera);
            float fx = (float)func_0202e800(camera);
            fx *= 3.0f;
            int divisor = (int)fx;
            Vector3fix_Subtract(reinterpret_cast<Vector3i*>(camera + 0x10), reinterpret_cast<Vector3i*>(&attachmentPosition), &cameraOffset);
            Vector3fixDivideScalar(&cameraOffset, divisor, &cameraOffset);
            Vector3fix_Add(reinterpret_cast<Vector3i*>(&attachmentPosition), &cameraOffset, reinterpret_cast<Vector3i*>(&attachmentPosition));
        }
        Vector3fix_Add(reinterpret_cast<Vector3i*>(&attachmentPosition), &self->settings->v48, reinterpret_cast<Vector3i*>(&attachmentPosition));
        self->attachment->position_ = *(struct Vector3i*)&attachmentPosition;
        self->attachment->rotation_ = *pB;
        self->attachment->AdvanceEffects();
    }
    self->flags &= ~0x20000u;
}
