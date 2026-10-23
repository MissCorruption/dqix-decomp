#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"
#include "World/Zone3D.h"

struct InteractionPlayer { Object3D obj; char padac[0x12]; unsigned char mode; };
struct InteractionReset {
#if defined(jpn)
    char pad[0xf0];
#else
    char pad[0x150];
#endif
    unsigned char mode : 6;
    unsigned char flags : 2;
};
struct InteractionRequest { unsigned char type; char pad1; short index; int field4; ZoneChestRenderRecord* point; int fieldc; short angle; short direction; };
struct S02046b1c;
struct Vec3;
extern "C" Zone3D* func_02012fe4();
extern "C" void* func_020421a0();
extern "C" void* func_020100bc(GameState*);
extern "C" bool func_020535c8(signed char*);
extern "C" void* func_02046b1c(S02046b1c*);
extern "C" ZoneChestRenderRecord* func_020177a8(unsigned char*, int);
int fix32abs(int);
extern "C" int func_020c32f8(int);
extern "C" int func_020c3260(int);
extern "C" float func_0200c700(int);
extern "C" int func_ov017_021a4754(Vector3fix*, int, Vector3fix*);
extern "C" InteractionReset* func_020d7a50();
extern "C" void func_ov017_0219a674(unsigned char*);
extern "C" void func_ov017_0219b33c(GameResources*, InteractionRequest*);

static inline int MultiplyFix(int a, int b) { return (int)(((long long)a * b + 0x800) >> 12); }

// USA: func_ov017_02197e2c
extern "C" ARM void func_ov017_02197e2c(GameResources* resources) {
    GameState* game = GameState::GetInstance();
    Zone3D* zone = func_02012fe4();
    func_020421a0();
    func_020100bc(game);
    InteractionPlayer* player = (InteractionPlayer*)game->GetUnknownGameObject();
    Vector3i* position = &player->obj.position_;
    if (func_020535c8((signed char*)player)) return;
    if (!zone->numChests_) return;
    int direction = 0;
    int hasList = 0;
    void* list = func_02046b1c((S02046b1c*)resources->unknown_ptr_array_36fc[0]);
    if (list) hasList = 1;
    int bestAngle = 0x3244;
    ZoneChestRenderRecord* candidate = 0;
    ZoneChestRenderRecord* selected = 0;
    int selectedIndex = -1;
    for (int i = 0; i < zone->numChests_; i++) {
        candidate = func_020177a8((unsigned char*)zone, i);
        if (!candidate) continue;
        Vector3i distance;
        Vector3i delta = *position;
        Vector3i point = candidate->position;
        if (fix32abs(delta.y - point.y) > 0x1000) continue;
        delta.y = 0;
        point.y = 0;
        Vector3fix_Subtract(&delta, &point, &delta);
        distance = delta;
        int squared = MultiplyFix(delta.x, delta.x) + MultiplyFix(delta.z, delta.z);
        if (squared > 0x1800) continue;
        Vector3i rotated = *position;
        rotated.y = 0;
        Vector3fix_Subtract(&rotated, &point, &rotated);
        int angle = -(candidate->angleY - 0x6487);
        int cosine = (int)(4096.0f * (func_0200c700(func_020c32f8(angle)) / 4294967296.0f));
        int sine = (int)(4096.0f * (func_0200c700(func_020c3260(angle)) / 4294967296.0f));
        Matrix3x3 rotation;
        Mat3x3_WriteRotationY(&rotation, sine, cosine);
        Mat3x3_ApplyToVector(&rotated, &rotation, &rotated);
        int difference = func_ov017_021a4754(position, (short)player->obj.rotation_.y, &point);
        if (difference >= bestAngle) continue;
        bestAngle = difference;
        selectedIndex = i;
        selected = candidate;
        direction = fix32_Atan2(distance.x, distance.z);
    }
    if (hasList || selectedIndex < 0 || !candidate || !selected) return;
    if (player->mode != 0 && player->mode != 1) return;
    if ((selected->secondPass == 1 || selected->secondPass == 2) && selected->active != 1) return;
    InteractionReset* reset = func_020d7a50();
    int enabled = selected->active == 1 ? 1 : 0;
    if (!enabled) return;
    if (reset->mode > 1) return;
    InteractionRequest request;
    func_ov017_0219a674((unsigned char*)&request);
    request.type = 2;
    request.angle = func_ov017_021a4754(&player->obj.position_, (short)player->obj.rotation_.y, &selected->position);
    request.point = selected;
    request.index = selectedIndex;
    request.direction = direction;
    if (request.angle >= 0xc91) return;
    func_ov017_0219b33c(resources, &request);
}
