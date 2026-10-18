#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Combat/ActorAction.h"
#include "Combat/Main/CopyRecord0200fbb4.h"
#include "World/ZoneObjectResourceLoading.h"
#include "World/Zone3D.h"
#include "Input/Input.h"
#include "Resource/GameResources.h"

static inline fix32_t FX_MulInline(fix32_t v1, fix32_t v2) {
    return ((long long)v1 * v2 + 0x800LL) >> 12;
}

struct ActorMotion02038598 {
    GameObject resources;
    char unknown13c[0x1ca - 0x13c];
    signed char actorId;
    char unknown1cb[0x252 - 0x1cb];
    unsigned char dispatch;
    unsigned char updated;
    char unknown254[0x26c - 0x254];
    SubBlock02038508 action;
};
struct ActorFields02038598 {
    char unknown0[2];
    short heading;
    short unknown4;
    short state;
    short destinationHeading;
    char unknowna[0xe0 - 0xb6];
    ActorActionFlags flags;
};
struct ActorActionEvent02038598 {
    unsigned short zone;
    char unknown2[2];
    unsigned char active;
    char unknown5[2];
    unsigned char dispatch;
    unsigned char flag8;
    unsigned char flag9;
    char unknowna;
    signed char kind;
    unsigned char hasTransform;
    char unknownd[3];
    Vector3fix position;
    short heading;
    short index;
    int ids[4];
    Vector3fix start;
    Vector3fix end;
    Vector3fix startControl;
    Vector3fix endControl;
    char unknown60[0xa];
    short parameter;
    short duration;
    char unknown6e[2];
};
struct ActorTouch02038598 {
    char unknown0[0x220];
    unsigned char startX;
    unsigned char startY;
    unsigned char endX;
    unsigned char endY;
};
struct ActorInputState02038598 { char unknown0[0x40]; unsigned int count; };
struct Vec3038500;
struct Obj02033834;
struct Obj02033874;
struct Obj020397cc;
struct Bytes02033b88;
struct Foo02033b58;
struct ShortField02033ec8;
struct FlagWord020466f4 { unsigned int flags; };
struct ListHead02046b60;
struct TailList020469b4;
struct TailNode020469b4;
extern "C" Zone3D* func_02012fe4();
extern "C" void func_ov017_02191108(void*, int, int, int, int);
void* GetDataPtr02114e04_020d6c00();
void SetVecYByMode02033834(Obj02033834*, int);
void SetVecYFromValue02033874(Obj02033874*, int);
void CancelPendingAction020397cc(Obj020397cc*, int);
int SetByte0xbeShiftPrev(Bytes02033b88*, int);
void SetByteSavingPrevious(Foo02033b58*, unsigned char);
int CheckField0xc6Zero(ShortField02033ec8*);
void SetVec3038500_02038500(Vec3038500*, int, int, int);
void SetHalf0xc6AndCopyVec3_02033e18(void*, int*, short);
int GetField4328_0218d268(void*);
int GetField0x3acValue_020100a8(GameState*);
int ListContainsId(ListHead02046b60*, int);
void ClearFlags020466f4(FlagWord020466f4*, unsigned int);
void OrBitsIntoField0_020466e4(unsigned int*, unsigned int);
void InitAndResetHeader_0219e310(unsigned char*, int);
void AppendNodeToTail(TailList020469b4*, TailNode020469b4*);
extern const char data_020efb44[];
extern const char data_020efb4e[];
extern const char data_020efb5a[];
extern ActorInputState02038598 data_02114e54;

// USA: func_02038598
extern "C" ARM void func_02038598(ActorMotion02038598* self) {
    GameResources* resources;
    Zone3D* zone;
    ActorFields02038598* fields;
    struct SubBlock02038508* action;
    unsigned int* inputFlags;
    unsigned char side;
    ListHead02046b60* list;
    resources = GetGameResources();
    list = (ListHead02046b60*)resources->unknown_ptr_array_36fc[0];
    zone = func_02012fe4();
    fields = (ActorFields02038598*)self->resources.unk_ac;
    action = &self->action;
    inputFlags = (unsigned int*)GetDataPtr02114e04_020d6c00();

    if (self->resources.obj3D_.unknown_4_ != self->actorId) return;
    if (action->active == 0) return;

    unsigned char state = action->command;

    if (state == 0) {
        ZoneFeatures::Opcode6aEntry* post = (action->reversed == 0) ? action->startNode : action->endNode;
        Vector3fix direction;
        Vector3fix_Subtract(&post->unk_8.vec, &self->resources.obj3D_.position_, &direction);
        Vector3fix_Normalize(&direction, &direction);
        int angle = fix32ReduceAngle0To2Pi(fix32_Atan2(direction.x, direction.z));
        SetVecYByMode02033834((struct Obj02033834*)self, angle);
        CancelPendingAction020397cc((struct Obj020397cc*)self, 1);
        fields->flags.active = 1;
        self->resources.obj3D_.EnableFlag(0x180);
        SetByte0xbeShiftPrev((struct Bytes02033b88*)self, 0);
        action->unknown4c = action->startNode->unk_8.vec.y;
        action->unknown50 = zone->substruct_c_.unknown_30_;
        if (fix32abs(fields->heading) - angle >= 0x333) goto Exit;
        func_ov017_021d3f00(action, 0, 0);
        action->command = 1;
        action->unknown24.vec = self->resources.obj3D_.position_;
        if (action->reversed == 0) {
            self->resources.obj3D_.MaybeSetRegularAnimation(data_020efb44, 1);
            goto Exit;
        }
        if (action->reversed != 1) goto Exit;
        self->resources.obj3D_.MaybeSetRegularAnimation(data_020efb44, 1);
        goto Exit;
    }

    if (state == 1) {
        SetVecYByMode02033834((struct Obj02033834*)self, action->heading);
        CancelPendingAction020397cc((struct Obj020397cc*)self, 1);
        int animationProgress = self->resources.obj3D_.normalizedAnimationTime_;

        if (action->reversed == 0) {
            if (!self->resources.obj3D_.HasAnimationStopped()) {
                self->resources.obj3D_.AdvanceAnimations();
            }
            if (!self->resources.obj3D_.HasAnimationStopped()) {
                self->resources.obj3D_.AdvanceAnimations();
            }
        }

        if (action->reversed == 1) {
            int tick = zone->substruct_c_.unknown_30_;
            int fixResult = (int)(((float)animationProgress / 4096.0f) * (float)(unsigned int)tick);
            action->unknown50 = tick - (fixResult << 2);
            if (action->unknown50 < 0) action->unknown50 = 0;
        }

        Vector3fix nextPosition;
        Vector3fix targetPosition;
        if (action->reversed == 0) {
            SetVec3038500_02038500((Vec3038500*)&targetPosition, action->start.entries[0], action->start.entries[1] + 0x51, action->start.entries[2]);
        } else if (action->reversed == 1) {
            SetVec3038500_02038500((Vec3038500*)&targetPosition, action->end.entries[0], action->end.entries[1] - 0xa3, action->end.entries[2]);
        }

        if (!self->resources.obj3D_.HasAnimationStopped()) {
            int dz = targetPosition.z - action->unknown24.entries[2];
            int dy = targetPosition.y - action->unknown24.entries[1];
            int dx = targetPosition.x - action->unknown24.entries[0];
            int rz = FX_MulInline(dz, animationProgress);
            int ry = FX_MulInline(dy, animationProgress);
            int rx = FX_MulInline(dx, animationProgress);
            SetVec3038500_02038500((Vec3038500*)&nextPosition, action->unknown24.entries[0] + rx, action->unknown24.entries[1] + ry, action->unknown24.entries[2] + rz);
            self->resources.obj3D_.position_ = nextPosition;
        }

        if (self->resources.obj3D_.HasAnimationStopped()) {
            SetVec3038500_02038500((Vec3038500*)&nextPosition, targetPosition.x, targetPosition.y, targetPosition.z);
            self->resources.obj3D_.position_ = nextPosition;
            action->command = 2;
            self->resources.obj3D_.MaybeSetRegularAnimation(data_020efb4e, 0);
            goto Exit;
        }

        func_ov017_021d3f00(action, 0, 0);
        goto Exit;
    }

    if (state == 2) {
        ClearFlags020466f4((struct FlagWord020466f4*)inputFlags, 0x400);
        SetVecYFromValue02033874((struct Obj02033874*)self, action->heading);
        CancelPendingAction020397cc((struct Obj020397cc*)self, 1);

        Vector3fix posCopy = self->resources.obj3D_.position_;
        Vector3fix touchStart, touchEnd;

        GameResources* touchResources = GetGameResources();
        ActorTouch02038598* touch = (ActorTouch02038598*)GetField4328_0218d268(touchResources);

        side = 0;
        if (g_keyManager.IsDownHeld()) {
            side = 1;
        } else if (g_keyManager.IsUpHeld()) {
            side = 2;
        }

        if (data_02114e54.count > 5) {
            fix32_t endFixedX = touch->endX << 12;
            int startX = touch->startX;
            int startY = touch->startY;
            fix32_t endFixedY = touch->endY << 12;
            touchEnd.x = endFixedX;
            touchEnd.y = endFixedY;
            touchEnd.z = 0;
            touchStart.x = startX << 12;
            touchStart.y = startY << 12;
            touchStart.z = 0;
            Vector3fix_Subtract(&touchEnd, &touchStart, &touchEnd);
            if (Vector3fix_Length(&touchEnd) >= 0x8000) {
                Vector3fix_Normalize(&touchEnd, &touchEnd);
                if (touchEnd.x >= -1638 && touchEnd.x <= 1638) {
                    if (touchEnd.y >= 0)
                        side = 1;
                    else
                        side = 2;
                }
            }
        }

        int hasBlockingAction = 0;
        if (ListContainsId(list, 4) ||
            ListContainsId(list, 0x26) ||
            ListContainsId(list, 1) ||
            ListContainsId(list, 3) ||
            ListContainsId(list, 0x3e)) {
            hasBlockingAction = 1;
            side = 0;
        }

        if (action->unknown53 == 0) side = 0;

        if (side == 1) {
            posCopy.y -= 0xf5;
        } else if (side == 2) {
            posCopy.y += 0xf5;
        }

        int fraction = fix32_Divide(posCopy.y - action->start.entries[1], action->end.entries[1] - action->start.entries[1]);
        SetVec3038500_02038500((Vec3038500*)&posCopy,
            action->start.entries[0] + FX_MulInline(action->end.entries[0] - action->start.entries[0], fraction), posCopy.y,
            action->start.entries[2] + FX_MulInline(action->end.entries[2] - action->start.entries[2], fraction));
        self->resources.obj3D_.position_ = posCopy;

        int heightDelta = self->resources.obj3D_.MaybeGetShadowSource().y - action->unknown4c;
        int scaledHeight = FX_MulInline(heightDelta, 0x14000);
        int t2 = (int)((float)scaledHeight / 4096.0f);
        int tick2 = zone->substruct_c_.unknown_30_;
        action->unknown50 = tick2 - t2;
        if (action->unknown50 < 0) action->unknown50 = 0;

        if (action->startNode->unk_2c.type9.unk_5 & 2) {
            action->unknown50 = 0;
        }

        action->unknown4 = (unsigned short)(action->unknown4 + GameState::GetInstance()->GetTickCount());

        if (side == 1) {
            self->resources.obj3D_.DisableFlag(0x1000);
            self->resources.obj3D_.MaybeSetRegularAnimation(data_020efb4e, 0);
            if (action->unknown54 != side || action->unknown4 > 6) {
                func_ov017_021d3f00(action, side, 0);
                action->unknown4 = 0;
            }
            if (action->unknown48 != 0) {
                self->resources.obj3D_.SetCurrentAnimationTime(action->unknown48);
                action->unknown48 = 0;
            }
        } else if (side == 2) {
            self->resources.obj3D_.DisableFlag(0x1000);
            self->resources.obj3D_.MaybeSetRegularAnimation(data_020efb4e, 4);
            if (action->unknown54 != side || action->unknown4 > 6) {
                func_ov017_021d3f00(action, side, 0);
                action->unknown4 = 0;
            }
            if (action->unknown48 != 0) {
                self->resources.obj3D_.SetCurrentAnimationTime(action->unknown48);
                action->unknown48 = 0;
            }
        } else {
            self->resources.obj3D_.EnableFlag(0x1000);
            action->unknown48 = self->resources.obj3D_.animationTime_;
            if (action->unknown54 != side || action->unknown4 > 6) {
                func_ov017_021d3f00(action, side, 0);
                action->unknown4 = 0;
            }
        }
        action->unknown54 = (unsigned char)side;

        if (hasBlockingAction != 0) goto Exit;

        if (posCopy.y < action->start.entries[1]) {
            OrBitsIntoField0_020466e4(inputFlags, 0x400);
            ZoneFeatures::Opcode6aEntry* post = action->startNode;
            if (post->unk_2c.type9.unk_5 & 2) {
                action->unknown60 = post;
                action->command = 6;
                goto Exit;
            }
            action->command = 5;
            action->unknown24.vec = action->startControl.vec;
            SetHalf0xc6AndCopyVec3_02033e18(self, action->startControl.entries, fields->destinationHeading);
            SetByte0xbeShiftPrev((struct Bytes02033b88*)self, 1);
            SetVecYByMode02033834((struct Obj02033834*)self, action->startHeading);
            func_ov017_021d3f00(action, 0, 0);
            goto Exit;
        }

        if (posCopy.y <= action->end.entries[1]) goto Exit;

        OrBitsIntoField0_020466e4(inputFlags, 0x400);
        ZoneFeatures::Opcode6aEntry* post2 = action->endNode;
        if (post2->unk_2c.type9.unk_5 & 2) {
            action->unknown60 = post2;
            action->command = 6;
            goto Exit;
        }
        posCopy.y = action->end.entries[1];
        self->resources.obj3D_.position_ = posCopy;
        action->unknown24.vec = posCopy;
        self->resources.obj3D_.MaybeSetRegularAnimation(data_020efb5a, 1);
        action->command = 4;
        func_ov017_021d3f00(action, 0, 0);
        goto Exit;
    }

    if (state == 4) {
        CancelPendingAction020397cc((struct Obj020397cc*)self, 1);
        int animationProgress = self->resources.obj3D_.normalizedAnimationTime_;
        if (animationProgress != 0) {
            Vector3fix fallPosition;
            fallPosition = self->resources.obj3D_.position_;
            fallPosition.y = action->unknown24.entries[1] + FX_MulInline(action->endControl.entries[1] - action->unknown24.entries[1], 0x199);
            self->resources.obj3D_.position_ = fallPosition;
            action->unknown24.vec = fallPosition;

            int tick = zone->substruct_c_.unknown_30_;
            action->unknown50 = (int)((float)(unsigned int)tick *
                (((float)animationProgress / 4096.0f) * ((float)animationProgress / 4096.0f)));
            if (action->unknown50 < 0) action->unknown50 = 0;
        }

        if (self->resources.obj3D_.HasAnimationStopped()) {
            action->command = 5;
            action->unknown24.vec = action->endControl.vec;
            SetHalf0xc6AndCopyVec3_02033e18(self, action->endControl.entries, fields->destinationHeading);
            SetByte0xbeShiftPrev((struct Bytes02033b88*)self, 1);
            SetVecYByMode02033834((struct Obj02033834*)self, action->endHeading);
            func_ov017_021d3f00(action, 0, 0);
            ClearFlags020466f4((struct FlagWord020466f4*)inputFlags, 0x400);
        }
        goto Exit;
    }

    if (state == 5) {
        CancelPendingAction020397cc((struct Obj020397cc*)self, 1);
        self->resources.obj3D_.EnableFlag(0x80);
        SetByteSavingPrevious((struct Foo02033b58*)self, 1);
        if (!CheckField0xc6Zero((struct ShortField02033ec8*)self)) goto Exit;
        unsigned char dispatchOnCompletion = action->unknown52;

        InitBlock02038508(action);
        self->updated = 1;
        fields->flags.active = 0;
        self->resources.obj3D_.DisableFlag(0x1180);
        func_ov017_021d3f00(action, 0, 1);
        ClearFlags020466f4((struct FlagWord020466f4*)inputFlags, 0x400);
        if (dispatchOnCompletion == 0) goto Exit;

        self->dispatch = 1;
        func_ov017_02191108(resources, 1, 1, 1, 1);
        GameObject* c = GameState::GetInstance()->GetUnknownGameObject();
        if (c == 0) goto Exit;
        c->obj3D_.TransitionInheritedAlpha(0x1f, 0x64);
        goto Exit;
    }

    if (state == 6) {
        GameState* bs = GameState::GetInstance();
        ActorActionEvent02038598* event = (ActorActionEvent02038598*)GetField0x3f8Address_0200fd0c(bs);
        GameResources* transitionResources = GetGameResources();
        GetField0x3acValue_020100a8(bs);
        VectorizedMemset(event, 0, 0x70);
        event->active = 1;
        event->flag8 = 1;
        event->flag9 = 1;
        event->kind = -1;
        event->ids[0] = -1;
        event->ids[1] = -1;
        event->ids[2] = -1;
        event->ids[3] = -1;
        event->index = -1;
        event->hasTransform = 0;
        event->duration = -1;

        event->zone = action->unknown60->unk_2c.type9.maybeZone;
        event->position = action->unknown60->unk_2c.type9.vector_c;
        event->heading = action->unknown60->unk_2c.type9.unk_3c;
        event->kind = (unsigned char)action->unknown60->unk_2c.type9.unk_3e;
        event->start = action->unknown60->unk_2c.type9.vector_c;
        event->end = action->unknown60->unk_2c.type9.vector_18;
        event->startControl = action->unknown60->unk_2c.type9.vector_24;
        event->endControl = action->unknown60->unk_2c.type9.vector_30;
        event->hasTransform = 1;

        if (action->unknown60->unk_2c.type9.unk_5 & 4) {
            event->duration = (const short&)action->unknown60->unk_2c.type9.unk_42;
            event->parameter = action->unknown60->unk_2c.type9.unk_40;
        }
        if (event->duration == -1) {
            event->duration = 9999;
        }
        event->dispatch = 1;
        CallFunc0200fbb4AtField0x3f8_0200fcfc(bs, event);

        InitAndResetHeader_0219e310((unsigned char*)transitionResources->unknown_ptr_array_36fc[4], 0);
        AppendNodeToTail((struct TailList020469b4*)transitionResources->unknown_ptr_array_36fc[0],
            (struct TailNode020469b4*)transitionResources->unknown_ptr_array_36fc[4]);
        ClearFlags020466f4((struct FlagWord020466f4*)inputFlags, 0x400);

        InitBlock02038508(action);
        self->updated = 1;
        fields->state = 0;
        fields->flags.active = 0;
        self->resources.obj3D_.EnableFlag(0x1000);
        self->resources.obj3D_.DisableFlag(0x180);
        goto Exit;
    }
    Exit:;
}
