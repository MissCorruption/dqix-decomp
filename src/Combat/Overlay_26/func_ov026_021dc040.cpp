#include <globaldefs.h>
#include <GameState/GameState.h>
#include "GameState/Field3b0.h"
#include <Graphics/Vector.h>
#include <Memory/SafeAllocator.h>
#include <std_library_functions.h>

struct BattleState;
struct PartyState;
struct S0204a438;
struct Obj02033874;
struct Bytes02033b88;
struct FieldBlock63d5_12050;
struct BattleView;
#if defined(jpn)
struct BattleWork { char pad0[0x7902]; signed char animationState; };
#else
struct BattleWork { char pad0[0x7712]; signed char animationState; };
#endif

struct FormationStats {
    char pad0[0x3c];
    unsigned int low : 30;
    unsigned int group : 1;
    unsigned int high : 1;
    unsigned short GetGroup() { return group; }
};
extern "C" Object3D* func_0204a438(S0204a438*);
extern "C" int func_ov000_0215fc60(char*);
extern "C" int func_020a35e0(unsigned char*, unsigned char);
extern "C" void func_02033874(Obj02033874*, int);
extern "C" void func_02033b88(Bytes02033b88*, int);
extern "C" void func_020100c4(GameState*, int);
extern "C" void func_ov000_0216118c(void*, int);
extern "C" void func_ov000_02167e6c(unsigned char*);
extern "C" void func_0200fd48(GameState*, int);
extern "C" void func_02012050(FieldBlock63d5_12050*);
extern "C" {
int func_ov000_0215e9fc(BattleState*, short*, int, int);
int func_ov000_02160f14(BattleWork*);
void func_ov026_021daec8(BattleState*, BattleView*, int);
void func_ov000_021626a0(BattleWork*, int, int);
void __clear(void*, int);
}
struct BoneLabels { signed char letters[2]; };
extern const BoneLabels data_ov026_021de6a0;
extern const char data_ov026_021dee57[];

// USA: func_ov026_021dc040
extern "C" ARM int func_ov026_021dc040(SafeAllocator* allocator, BattleWork* self, BattleState* battle, PartyState* party) {
    GameState* game = GameState::GetInstance();
    S0204a438* camera = (S0204a438*)func_020100bc(game);
    if (!camera) return 1;
    Object3D* animation = func_0204a438(camera);
    if (!animation) return 1;
    GameObject* formation = game->GetGameObjectByIndex(0xcf);
    if (!formation) return 1;
    formation->obj3D_.MaybeUpdateBonePositions();
    Model3D* model = formation->obj3D_.pModel_;
    if (model) {
        short members[4];
        int count = func_ov000_0215e9fc(battle, members, 4, 0);
        if (func_ov000_0215fc60((char*)battle)) count = 1;
        if (count > 0) {
            Vector3fix center = {};
            int groupCounts[2] = {};
            for (int index = 0; index < count; ++index) {
                if (func_020a35e0((unsigned char*)party, members[index])) {
                    GameObject* member = func_0200ff1c(game, members[index]);
                    if (member && member->obj3D_.pModel_) {
                        FormationStats* stats = (FormationStats*)member->baseStats_;
                        ++groupCounts[stats->GetGroup()];
                        BoneLabels labels = data_ov026_021de6a0;
                        char name[6];
                        int group = ((FormationStats*)member->baseStats_)->GetGroup();
                        sprintf(name, data_ov026_021dee57, labels.letters[group], groupCounts[group]);
                        Object3D::TrackedBoneMatrix* bone = formation->obj3D_.GetTrackedBoneMatrix(model->GetBoneIndex(name));
                        if (bone) {
                            Vector3fix position;
                            position.x = bone->matrix.translation.x;
                            position.y = bone->matrix.translation.y;
                            position.z = bone->matrix.translation.z;
                            Vector3fixMultiplyScalar(&position, 266, &position);
                            member->obj3D_.position_ = position;
                            func_02033874((Obj02033874*)member, fix32_Atan2(bone->matrix.rotation.rows[2].x, bone->matrix.rotation.rows[2].z));
                            Vector3fix_Add(&center, &position, &center);
                        }
                    }
                }
            }
            Vector3fixMultiplyScalar(&center, (int)(4096.0f * (1.0f / (float)count)), &center);
            int offset = -center.x;
            for (int index = 0; index < count; ++index) {
                if (func_020a35e0((unsigned char*)party, members[index])) {
                    GameObject* member = func_0200ff1c(game, members[index]);
                    if (member) {
                        Vector3fix position = member->obj3D_.position_;
                        position.x += offset;
                        position.y = 204;
                        member->obj3D_.position_ = position;
                    }
                }
            }
        }
    }
    if (self->animationState == 0 && !animation->HasAnimationStopped()) return 0;
    if (self->animationState != 6) {
        for (int index = 0; index < 4; ++index) {
            if (func_020a35e0((unsigned char*)party, index)) {
                GameObject* member = func_0200ff1c(game, index);
                if (member) {
                    member->obj3D_.RemoveAnimationPackageByID(3);
                    func_02033b88((Bytes02033b88*)member, 0);
                    func_02033874((Obj02033874*)member, 0x3244);
                }
            }
        }
        func_020100c4(game, func_ov000_02160f14(self));
        func_ov000_0216118c(self, 1);
        func_ov000_02167e6c((unsigned char*)self);
        func_ov026_021daec8(battle, (BattleView*)func_ov000_02160f14(self), 1);
        func_ov000_021626a0(self, 0x26, 0);
        func_ov000_021626a0(self, 0x27, 1);
        allocator->Reset();
        func_0200fd48(game, 0xcf);
        func_02012050((FieldBlock63d5_12050*)game);
    }
    return 1;
}
