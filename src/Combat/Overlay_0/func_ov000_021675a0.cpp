#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

struct Vec3_021675a0 {
    int x;
    int y;
    int z;
};

struct Scene021675a0 {
#if defined(jpn)
    char pad[0x800];
#else
    char pad[0x284];
    char* world;
    char pad2[0xc00 - 0x288];
#endif
    char camera[0x230];
};

struct Owner021675a0 {
#if defined(jpn)
    char pad[0x218];
    char* world;
    char pad21c[0x394 - 0x21c];
#else
    char pad[0x18];
#endif
    struct Scene021675a0 scene;
};

extern "C" int func_ov000_0215e9fc(char* world, short* buf, int max, int start);
extern "C" int func_ov000_0215fc60(char* base);
extern "C" void func_02049b20(unsigned char* obj, int* src);
extern "C" void func_02049bac(unsigned char* obj, int* src);
extern "C" void func_ov000_0216f708(void* obj, int val);
extern "C" void func_ov000_0216f710(void* obj, int val);

extern int data_ov000_02183158[][4];
extern struct Vec3_021675a0 data_ov000_021830e4;
extern struct Vec3_021675a0 data_ov000_021830b4;

// USA: func_ov000_021675a0
extern "C" ARM void func_ov000_021675a0(struct Owner021675a0* owner) {
    char* world;
    char* camera;
    int count;
    int x;
    int i;
    int width;
    GameState* gs = GameState::GetInstance();
    GetGameResources();
    short ids[4];
#if defined(jpn)
    world = owner->world;
#else
    world = owner->scene.world;
#endif
    camera = owner->scene.camera;
    count = func_ov000_0215e9fc(world, ids, 4, 0);
    if (func_ov000_0215fc60(world)) count = 1;

    width = (count - 1) * 0x1800;
    x = width / 2;
    for (i = 0; i < count; i++) {
        GameObject* c = gs->GetCombatantByIndex(ids[i]);
        if (c != NULL) {
            struct Vec3_021675a0 pos = data_ov000_021830e4;
            struct Vec3_021675a0 rot = data_ov000_021830b4;
            pos.x = x;
            rot.y = data_ov000_02183158[count - 1][i];
            func_02049b20((unsigned char*)c, (int*)&pos);
            func_02049bac((unsigned char*)c, (int*)&rot);
        }
        x -= 0x1800;
    }
    func_ov000_0216f708(camera, width + 0x1000);
    func_ov000_0216f710(camera, 0x1800);
}
