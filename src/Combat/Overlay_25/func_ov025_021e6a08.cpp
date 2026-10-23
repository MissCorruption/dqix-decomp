#include <globaldefs.h>
#include "GameState/GameState.h"

struct List02160094;
struct List021600f8;
struct ListNode02160094 { char pad0[0x20]; unsigned short id; };
struct ListNode021600f8 { char pad0[0xe]; short id; };
struct Reset021e3158 { int fields[6]; };
struct MovementState { char pad0[0x20]; int state; };
struct ApproachCommand { int field0, field4, distance; };
struct Obj02048c90;
struct Bytes02033b88 { Object3D object; char padAc[0x14]; unsigned char animation; };
struct CombatStatus { char pad0[0x14]; unsigned int flags; };
extern "C" ListNode02160094* func_ov000_02160094(List02160094*, int);
extern "C" ListNode021600f8* func_ov000_021600f8(List021600f8*, int);
extern "C" void func_ov025_021e3158(Reset021e3158*);
extern "C" void func_02049ae4(unsigned char*);
extern "C" int func_02048c10(unsigned char*);
extern "C" int func_020882f8(unsigned char*);
extern "C" void func_02033920(GameObject*, int, int);
extern "C" int func_02033b88(Bytes02033b88*, int);
extern "C" void func_02048c90(Obj02048c90*);
extern Reset021e3158 data_ov025_021ef9a8;
extern MovementState data_ov025_021ef988;

// USA: func_ov025_021e6a08
extern "C" ARM int func_ov025_021e6a08(ApproachCommand* command, List02160094* list) {
    GameState* game = GameState::GetInstance();
    ListNode02160094* actorNode = func_ov000_02160094(list, 0);
    ListNode021600f8* targetNode = func_ov000_021600f8((List021600f8*)list, 0);
    if (!actorNode || !targetNode) { func_ov025_021e3158(&data_ov025_021ef9a8); return 1; }
    GameObject* actor = game->GetCombatantByIndex(actorNode->id);
    GameObject* target = game->GetCombatantByIndex(targetNode->id);
    if (!actor || !target) { func_ov025_021e3158(&data_ov025_021ef9a8); return 1; }
    int started = 0;
    if (data_ov025_021ef988.state == 0) {
        func_02049ae4((unsigned char*)actor);
        started = 1;
        if (!func_02048c10((unsigned char*)target) && !(((CombatStatus*)target->currentStats_)->flags & 8) && !func_020882f8((unsigned char*)target->currentStats_)) {
            func_02033920(target, actorNode->id, started);
        }
        data_ov025_021ef988.state = 1;
    }
    if (data_ov025_021ef988.state == 1) {
        Vector3i position = actor->obj3D_.position_;
        Vector3i targetPosition = target->obj3D_.position_;
        int radii = actor->obj3D_.GetRadius() + target->obj3D_.GetRadius();
        int desiredDistance = command->distance + radii / 2;
        int distance = Vector3fix_Distance(&position, &targetPosition);
        if (!distance) { func_ov025_021e3158(&data_ov025_021ef9a8); return 1; }
        if (distance < desiredDistance) { func_ov025_021e3158(&data_ov025_021ef9a8); return 1; }
        Vector3i delta;
        Vector3fix_Subtract(&targetPosition, &position, &delta);
        desiredDistance = distance - desiredDistance;
        Vector3i offset;
        Vector3fixMultiplyScalar(&delta, fix32_Divide(desiredDistance, distance), &offset);
        Vector3i destination;
        Vector3fix_Add(&position, &offset, &destination);
        Vector3i step;
        Vector3fix_Subtract(&destination, &position, &step);
        Vector3fixMultiplyScalar(&step, fix32_Divide(0x1000, 0x4000), &step);
        int length = Vector3fix_Length(&step);
        if (length > 0x333) Vector3fixMultiplyScalar(&step, fix32_Divide(0x333, length), &step);
        else if (((Bytes02033b88*)actor)->animation != 6) func_02033b88((Bytes02033b88*)actor, 0);
        Vector3i nextPosition;
        Vector3fix_Add(&position, &step, &nextPosition);
        actor->obj3D_.position_ = nextPosition;
        if (desiredDistance < 0x28 || (!started && ((Bytes02033b88*)actor)->animation == 0)) {
            func_02033b88((Bytes02033b88*)actor, 0);
            func_ov025_021e3158(&data_ov025_021ef9a8);
            return 1;
        }
    }
    if (started) {
        func_02048c90((Obj02048c90*)actor);
        if (((Bytes02033b88*)actor)->animation != 6) func_02033b88((Bytes02033b88*)actor, 1);
    }
    return 0;
}
