#include <globaldefs.h>
#include "GameState/GameState.h"
#include "NitroSDK/Matrix.h"

struct Obj02049b54;
struct Obj02033874;
struct S_10088;

struct BattleState {
    char pad0[0x8e20];
    int turns;
};

struct BattleView {
    char pad0[0x240];
    Vector3fix center;
};

struct Triple02049b54 {
    Vector3fix v;
};

extern "C" int func_0200fb8c(int* obj);
extern "C" GameObject* func_0200fea4(GameState* gs, int id);
extern "C" Triple02049b54 func_02049b54(Obj02049b54* obj);
extern "C" void func_02033874(Obj02033874* obj, int angle);
extern "C" void func_02049bac(unsigned char* obj, int* rot);
extern "C" int func_02010088(S_10088* obj);

extern "C" {
void __clear(void* dst, int size);
int func_ov000_0215eb1c(BattleState*, short*, int, int);
void func_0203232c(int*, int);
}

// USA: func_ov026_021daec8
extern "C" ARM void func_ov026_021daec8(BattleState* battle, BattleView* view, int animate) {
    short ids[8];
    GameState* gs = GameState::GetInstance();
    func_0200fb8c((int*)gs);

    int count = func_ov000_0215eb1c(battle, ids, 8, 0);
    int n = 0;
    Vector3fix center = view->center;
    int order[8];
    int centerZ = center.z;

    for (int i = 0; i < count; i++) {
        GameObject* member = func_0200fea4(gs, ids[i]);
        if (member != NULL) {
            Vector3fix target;
            __clear(&target, sizeof(target));
            target.z = centerZ;

            Vector3fix pos = func_02049b54((Obj02049b54*)member).v;
            pos.y = 0;

            Vector3fix dir;
            Vector3fix_Subtract(&target, &pos, &dir);
            dir.y = 0;
            Vector3fix_Normalize(&dir, &dir);
            fix32_t angle = fix32_Atan2(dir.x, dir.z);
            func_02033874((Obj02033874*)member, angle);

            Vector3fix rot;
            __clear(&rot, sizeof(rot));
            rot.y = angle;
            func_02049bac((unsigned char*)member, &rot.x);

            order[n++] = ids[i];
        }
    }

    if (animate && battle->turns > 0) {
        func_0203232c(order, n);
        for (int i = 0; i < n; i++) {
            GameObject* member = func_0200fea4(gs, order[i]);
            if (member != NULL && !member->obj3D_.IsTransitioningAnimations() && !func_02010088((S_10088*)member)) {
                member->obj3D_.SetNormalizedAnimationTime(0x1000 / n * i);
                member->obj3D_.AdvanceAnimations();
            }
        }
    }
}
