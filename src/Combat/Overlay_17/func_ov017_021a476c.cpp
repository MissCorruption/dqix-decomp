#include <globaldefs.h>
#include "GameState/GameState.h"
#include "GameState/Field3b0.h"
#include "Graphics/Vector.h"
#include "World/ZoneFeatures.h"
#include "Resource/Brightness.h"

struct EntryList_203dce4;
struct S02040538;
struct Vec3_020406f8;
struct Node020406f8;
struct BitField0203402c;
struct Vec3 {
    int x, y, z;
};

struct Holder021a476c {
    unsigned char busy;
};

struct Ctx021a476c {
    char pad0[0x36fc];
    void* list;
    char pad3700[0x441c - 0x3700];
    Holder021a476c* holder;
    char pad4420[0x4491 - 0x4420];
    unsigned char active;
};

struct Actor021a476c {
    Object3D obj3D;
    char padac[0x18c - 0xac];
    unsigned int flags18c;
    char pad190[0x1b2 - 0x190];
    unsigned short field1b2;
};

struct Flags021a476c {
    char pad0[0xc];
    unsigned char lo : 4;
    unsigned char blocked : 1;
};

struct Work021a476c {
    unsigned short mapId;
    char pad2[0x8 - 0x2];
    Flags021a476c* flags;
};

struct Entry021a476c {
    unsigned int flags;
};

struct Data021a476c {
    unsigned short kind;
    unsigned char sub;
};

struct Info021a476c {
    char pad0[0xa];
    unsigned char lo : 3;
    unsigned char mode : 3;
    char padb[0x10 - 0xb];
    Vector3fix pos;
};

struct Msg021a476c {
    unsigned char kind;
    unsigned char field1;
    short field2;
    unsigned char field4;
    char pad5[3];
    int field8;
    int fieldc;
    short angle;
    short field12;
};

struct Save021a476c {
    char pad0[0x8c];
    unsigned char flags[1];
};

signed char data_ov017_021d76d8 = -1;
short data_ov017_021d76da = -1;
unsigned short data_ov017_021d83a8;

void* GetGlobalPtr021075f4_0203cf4c(void);
int GetGlobalField0x1c020421a0(void);
extern "C" Work021a476c* func_02012fe4(void);
extern "C" void* func_0202ae18(void);
int IsField0Null_02046b08(void** obj);
extern "C" int func_ov017_021a4e88(int checkKind, unsigned short* outId);
int CheckField0NonZero_0202b7d8(int* obj);
Entry021a476c* GetEntryUnlessFlag0x8000_0203dce4(EntryList_203dce4* list, int id);
Data021a476c* GetField0x8_02040528(int* obj);
Info021a476c* GetField0xc02040538(S02040538* p);
unsigned char GetByte0x26c_02039d7c(char* obj);
int CheckSubstructByte0x7cPositive_020535c8(signed char* obj);
int CheckField0xc4Low15BitsNonZero(BitField0203402c* p);
void InitObj0219a674(unsigned char* self);
void SelectVec3FromSources020406f8(Vec3_020406f8* out, Node020406f8* n);
short GetAngleDeltaBetween_021a4700(Vec3* p0, int baseAngle, Vec3* p2);
int GetDeltaAndForward_0218daa8(void* obj, Vec3* otherVec, int c, int d, unsigned char e);
extern "C" int func_0202c508(void* obj);
extern "C" void func_ov017_0219b33c(Ctx021a476c* self, Msg021a476c* msg);
int GetSignedByte0x1c8_02039860(void* obj);
unsigned int IsFlag0x1ceBit0x10Set_02039de8(unsigned char* obj);
extern "C" Save021a476c* func_0205ec34(void);
int HasFlagBit_0218d4ec(void* obj, int bit);
int TestBitInByteArray_0206dfb0(int unused, unsigned char* arr, int index);

// USA: func_ov017_021a476c
extern "C" ARM void func_ov017_021a476c(Ctx021a476c* self) {
    Msg021a476c msg;
    Msg021a476c near;
    Vector3fix pos;
    GameState* game = GameState::GetInstance();
    void* list = GetGlobalPtr021075f4_0203cf4c();
    GetField0x3b0Value_020100bc(game);
    GetGlobalField0x1c020421a0();
    Actor021a476c* player = (Actor021a476c*)game->GetUnknownGameObject();
    GameResources* res = GetGameResources();
    Work021a476c* work = func_02012fe4();
    void* session = func_0202ae18();

    data_ov017_021d76da = -1;
    data_ov017_021d83a8 = 0;
    data_ov017_021d76d8 = -1;
    *(int*)((char*)game + 0x5724) = -1;

    if (self->active == 0 && !IsField0Null_02046b08((void**)self->list)) {
        func_ov017_021a4e88(0, &data_ov017_021d83a8);
        return;
    }
    if (CheckField0NonZero_0202b7d8((int*)session) && self->holder->busy != 0) {
        return;
    }
    data_ov017_021d76da = func_ov017_021a4e88(1, &data_ov017_021d83a8);
    if (data_ov017_021d76da >= 0) {
        Entry021a476c* entry = GetEntryUnlessFlag0x8000_0203dce4((EntryList_203dce4*)list, data_ov017_021d76da);
        if (entry != NULL) {
            Data021a476c* data = GetField0x8_02040528((int*)entry);
            Info021a476c* info = GetField0xc02040538((S02040538*)entry);
            if (entry->flags & 0x200) {
                return;
            }
            if (GetByte0x26c_02039d7c((char*)player) != 0 || res->unknown_4080 != 0) {
                return;
            }
            if (IsBrightnessOutsideValidRange(res, false)) {
                return;
            }
            if (CheckSubstructByte0x7cPositive_020535c8((signed char*)player)) {
                return;
            }
            if (CheckField0xc4Low15BitsNonZero((BitField0203402c*)player)) {
                return;
            }
            if (data != NULL && info != NULL) {
                int limit = 0x1922;
                InitObj0219a674((unsigned char*)&msg);
                msg.kind = 0;
                SelectVec3FromSources020406f8((Vec3_020406f8*)&pos, (Node020406f8*)entry);
                msg.angle = fix32abs(GetAngleDeltaBetween_021a4700((Vec3*)&player->obj3D.position_, (short)player->obj3D.rotation_.y, (Vec3*)&pos));
                if (work->mapId == 0x1901 && data->kind == 0x6a) {
                    limit = 0x25b3;
                    GetDeltaAndForward_0218daa8(self, (Vec3*)&info->pos, 0xccc, -0x199, 0);
                }
                if (msg.angle < limit) {
                    int set = 0;
                    int skip = 0;
                    int mode = info->mode;
                    if (mode == 0) {
                        if (data->sub == 1) {
                            msg.field1 = 3;
                            set = 1;
                        }
                    } else if (mode == 1) {
                        msg.field1 = 3;
                        set = 1;
                    } else if (mode == 2) {
                        msg.field1 = 4;
                        set = 1;
                    } else if (mode == 3) {
                        if (func_0202c508(func_0202ae18())) {
                            msg.field1 = 0xf;
                        } else {
                            msg.field1 = 2;
                        }
                    } else if (mode == 4) {
                        skip = 1;
                    }
                    if (!set) {
                        msg.field2 = data_ov017_021d76da;
                    }
                    if (!skip) {
                        func_ov017_0219b33c(self, &msg);
                    }
                }
            }
        }
    } else {
        Actor021a476c* mem;
        Save021a476c* save;
        int sum;
        int ay;
        int az;
        int ax;
        Actor021a476c* member;
        int i;
        int dy;
        int dz;
        int dx;
        int best;
        int found;
        Actor021a476c* leader;
        GameState* game2;
        Work021a476c* work2;
        void* list2;
        GameResources* res2;
        if (!CheckField0NonZero_0202b7d8((int*)func_0202ae18())) {
            goto none;
        }
        res2 = GetGameResources();
        list2 = res2->unknown_ptr_array_36fc[0];
        work2 = func_02012fe4();
        if (IsBrightnessOutsideValidRange(res2, false)) {
            found = -1;
            goto done;
        }
        if (work2->flags->blocked) {
            found = -1;
            goto done;
        }
        if (IsField0Null_02046b08((void**)list2) == 0) {
            found = -1;
            goto done;
        }
        game2 = GameState::GetInstance();
        leader = (Actor021a476c*)game2->GetUnknownGameObject();
        found = -1;
        best = -1;
        dx = 0;
        dz = 0;
        dy = 0;
        for (i = 0; i <= 3; i++) {
            member = (Actor021a476c*)game2->GetPartyMemberByIndex(i);
            if (member == NULL || member == leader) {
                continue;
            }
            if (leader->obj3D.GetField06() != member->obj3D.GetField06()) {
                continue;
            }
            if (member->obj3D.unknown_0_ & 0x1000) {
                continue;
            }
            if (member->flags18c & 1) {
                continue;
            }
            if (GetSignedByte0x1c8_02039860(member) >= 0) {
                continue;
            }
            if (IsFlag0x1ceBit0x10Set_02039de8((unsigned char*)member)) {
                continue;
            }
            if (!member->obj3D.IsVisible()) {
                continue;
            }
            WrappedVector3fix memberPos;
            WrappedVector3fix leaderPos;
            leaderPos = *(WrappedVector3fix*)&leader->obj3D.position_;
            memberPos = *(WrappedVector3fix*)&member->obj3D.position_;
            ax = fix32abs(leaderPos.vec.x - memberPos.vec.x);
            az = fix32abs(leaderPos.vec.z - memberPos.vec.z);
            ay = fix32abs(leaderPos.vec.y - memberPos.vec.y);
            sum = ax + az;
            if (best == -1 || sum < best) {
                found = member->obj3D.unknown_4_;
                best = sum;
                dx = ax;
                dz = az;
                dy = ay;
            }
        }
        if (dx < 0x1800 && dz < 0x1800 && dy < 0xb33) {
            goto done;
        }
    none:
        found = -1;
    done:
        data_ov017_021d76d8 = found;
        if (data_ov017_021d76d8 >= 0) {
            mem = (Actor021a476c*)game->GetPartyMemberByIndex(data_ov017_021d76d8);
            save = func_0205ec34();
            if (mem->field1b2 == 0) {
                if (!HasFlagBit_0218d4ec(self, data_ov017_021d76d8) ||
                    !TestBitInByteArray_0206dfb0((int)save, save->flags, 0x799)) {
                    InitObj0219a674((unsigned char*)&near);
                    near.kind = 0xa;
                    near.angle = fix32abs(GetAngleDeltaBetween_021a4700((Vec3*)&player->obj3D.position_, (short)player->obj3D.rotation_.y, (Vec3*)&mem->obj3D.position_));
                    if (near.angle < 0x1922) {
                        near.field2 = data_ov017_021d76d8;
                        func_ov017_0219b33c(self, &near);
                    }
                }
            }
        }
    }
    self->active = 0;
}
