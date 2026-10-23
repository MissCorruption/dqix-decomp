#include <globaldefs.h>
#include "GameState/Field3b0.h"
#include "GameState/GameState.h"
#include "NitroSDK/Matrix.h"
#include "Input/Input.h"

extern "C" void func_020968a4(unsigned char* src, int* out);

struct Camera0218d8cc {
    int field_0x0;
    Vector3fix position;
};

struct Input0218d8cc {
    char pad0[0x224];
    unsigned char hasStick;
};

struct Battle0218d8cc {
#if defined(jpn)
    char pad0[0x4108];
#else
    char pad0[0x4328];
#endif
    Input0218d8cc* input;
#if defined(jpn)
    char pad432c[0x4188 - 0x410c];
#else
    char pad432c[0x4438 - 0x432c];
#endif
    Vector3fix moveDir;
};

// USA: func_ov017_0218d8cc
extern "C" ARM void func_ov017_0218d8cc(Battle0218d8cc* self) {
    GameState* gs = GameState::GetInstance();
    GameObject* player = gs->GetUnknownGameObject();
    Camera0218d8cc* camera = (Camera0218d8cc*)func_020100bc(gs);
    if (player == 0 || camera == 0) {
        return;
    }

    Vector3fix diff;
    Vector3fix_Subtract(&player->obj3D_.position_, &camera->position, &diff);

    Vector3fix forward;
    forward.x = diff.x;
    forward.y = 0;
    forward.z = diff.z;
    Vector3fix back;
    back.x = -diff.x;
    back.y = 0;
    back.z = -diff.z;
    Vector3fix left;
    left.x = diff.z;
    left.y = 0;
    left.z = -diff.x;
    Vector3fix right;
    right.x = -diff.z;
    right.y = 0;
    right.z = diff.x;

    self->moveDir.x = 0;
    self->moveDir.y = 0;
    self->moveDir.z = 0;

    if (g_keyManager.TestKeysHeld(0x40)) {
        Vector3fix_Add(&self->moveDir, &forward, &self->moveDir);
    } else if (g_keyManager.TestKeysHeld(0x80)) {
        Vector3fix_Add(&self->moveDir, &back, &self->moveDir);
    }

    if (g_keyManager.TestKeysHeld(0x20)) {
        Vector3fix_Add(&self->moveDir, &left, &self->moveDir);
    } else if (g_keyManager.TestKeysHeld(0x10)) {
        Vector3fix_Add(&self->moveDir, &right, &self->moveDir);
    }

    if (self->input->hasStick) {
        func_020968a4((unsigned char*)self->input, &self->moveDir.x);
    }
    Vector3fix_Normalize(&self->moveDir, &self->moveDir);
}
