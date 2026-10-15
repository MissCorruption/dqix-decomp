#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Graphics/LightingManager.h"
#include "System/Graphics.h"
#include "World/Zone3D.h"

struct AxisFloats0203b5a0;
struct Obj0203dde0;
struct Container02057a10;
struct Struct020a66a4;
struct Struct020aca30;
struct Struct0208f820;
struct Obj0208f410;

extern "C" Zone3D* func_02012fe4();
extern "C" Container02057a10* func_02057924();
void* GetFieldPtrAt0x5ca4_02010768(void* obj);
bool IsAxisIntWithin16(AxisFloats0203b5a0* s, int axis);
void ForwardObjAndField0_021a3dcc(int obj);
unsigned int GetBitsInField4_0203b4fc(unsigned int* obj, unsigned int mask);
extern "C" void func_02016874(Zone3D* self);
unsigned char GetByte0x4_0200fb9c(char* obj);
int GetWord0x7f6c_0201201c(void* gs);
extern "C" void func_0202343c(void* obj);
int IsChannelValueZero0203b5e0(void* obj, int index);
Obj0203dde0* GetGlobalPtr021075f4_0203cf4c();
extern "C" void func_0203de84(void* self);
void UpdateEntrySubObjects0203dde0(Obj0203dde0* obj);
extern "C" void* func_0202ae18(void);
extern "C" int NSBXX_Model_GetMaterialPolygonID(NSBXXInternalModel* model, unsigned int materialIndex);
void SyncBattleState0208f87c(const void* self, int b, int c, int d, int polygonId);
void UpdateEntriesWhereFlag2Clear02057a10(Container02057a10* c);
void UpdateCombatantBitsFromField_02196398_02196398(unsigned int* obj);
extern "C" void func_020a66a4(Struct020a66a4* obj);
void ProcessSlotEntry020aca30(Struct020aca30* obj);
void CallField6acPtrProcessSlot_021b8420(void* obj);
void CallHelperIfFlag_021c164c(void* obj);
void EmptyFunc_021b65d8(void* obj);
void MaybeNotifyGrottoState0208f820(Struct0208f820* p);
Obj0208f410* GetData02109020_0208e9e8();
extern "C" void func_0208f410(Obj0208f410* obj);

struct Battle02195bbc {
    unsigned int flags[2];
    char pad8[0x36d0 - 0x8];
    void* f36d0;
    char pad36d4[0x36fc - 0x36d4];
    int nodeList;
    char pad3700[0x3718 - 0x3700];
    unsigned char* f3718;
    char pad371c[0x3b50 - 0x371c];
    unsigned char* f3b50;
    char pad3b54[0x3b5c - 0x3b54];
    unsigned char* f3b5c;
    char pad3b60[0x4488 - 0x3b60];
    unsigned char f4488;
};

// USA: func_ov017_02195bbc
extern "C" ARM void func_ov017_02195bbc(Battle02195bbc* self) {
    Zone3D* ctx;
    Zone3D* zone;
    Container02057a10* entries;
    GameState* gs;
    Zone3D** field5ca4;
    Obj0203dde0* g;
    int polygonId;
    GameObject* monster;
    int i;
    unsigned short color;
    GameState* state;

    gs = GameState::GetInstance();
    zone = func_02012fe4();
    entries = func_02057924();
    field5ca4 = (Zone3D**)GetFieldPtrAt0x5ca4_02010768(gs);

    if (IsAxisIntWithin16((AxisFloats0203b5a0*)self, 0)) {
        ForwardObjAndField0_021a3dcc(self->nodeList);
        if (GetBitsInField4_0203b4fc(self->flags, 2) == 0) {
            func_02016874(zone);
        }
    }
    if (GetByte0x4_0200fb9c((char*)gs) != 6 && GetWord0x7f6c_0201201c(gs) != 5) {
        func_0202343c(self->f36d0);
    }
    if (IsChannelValueZero0203b5e0(self, 0) != 0) {
        return;
    }

    GXFIFO_MATRIX_MODE = 3;
    GXFIFO_MATRIX_IDENTITY = 0;

    if (GetByte0x4_0200fb9c((char*)gs) != 6 && GetWord0x7f6c_0201201c(gs) != 5 &&
        GetBitsInField4_0203b4fc(self->flags, 8) == 0) {
        g = GetGlobalPtr021075f4_0203cf4c();
        func_0203de84(g);
        UpdateEntrySubObjects0203dde0(g);
    }
    if (GetByte0x4_0200fb9c((char*)gs) == 6 || GetWord0x7f6c_0201201c(gs) == 5) {
        return;
    }

    if (*field5ca4 != NULL) {
        func_02016874(*field5ca4);
    }

    if (GetBitsInField4_0203b4fc(self->flags, 0x100) == 0) {
        state = GameState::GetInstance();
        func_0202ae18();
        ctx = func_02012fe4();
        color = ctx->substruct_c_.unknown_2c_;
        for (i = 0xa0; i <= 0xbf; i++) {
            monster = state->GetMaybeWanderingMonsterByIndex(i);
            if (monster == NULL) continue;
            if (!monster->obj3D_.IsVisible()) continue;
            if (monster->obj3D_.GetFlag(0x10) != 0) continue;
            polygonId = 1;
            Model3D* model = monster->obj3D_.pModel_;
            if (model != NULL && model->rawInternalModel_ != NULL) {
                polygonId = NSBXX_Model_GetMaterialPolygonID(model->rawInternalModel_, 0);
            }
            const Vector3fix& pos = monster->obj3D_.MaybeGetShadowSource();
            SyncBattleState0208f87c(&pos, color, 0x1000, ctx->substruct_c_.unknown_30_, polygonId);
        }
    }

    if (self->f4488 != 0 && GetBitsInField4_0203b4fc(self->flags, 0x20) == 0) {
        UpdateEntriesWhereFlag2Clear02057a10(entries);
    }
    UpdateCombatantBitsFromField_02196398_02196398(self->flags);
    if (GetBitsInField4_0203b4fc(self->flags, 0x20000) == 0) {
        func_020a66a4((Struct020a66a4*)self);
    }
    if (GetBitsInField4_0203b4fc(self->flags, 0x40000) == 0) {
        ProcessSlotEntry020aca30((Struct020aca30*)self);
    }
    if (self->f4488 == 0 && GetBitsInField4_0203b4fc(self->flags, 0x20) == 0) {
        UpdateEntriesWhereFlag2Clear02057a10(entries);
    }
    if (self->f3718[3] != 0) {
        CallField6acPtrProcessSlot_021b8420(self->f3718);
    }
    if (self->f3b50[3] != 0) {
        CallHelperIfFlag_021c164c(self->f3b50);
    }
    if (self->f3b5c[3] != 0) {
        EmptyFunc_021b65d8(self->f3b5c);
    }
    if (GetBitsInField4_0203b4fc(self->flags, 2) == 0) {
        MaybeNotifyGrottoState0208f820((Struct0208f820*)zone->unk_2664);
    }
    LightingManager::GetInstance()->MaybeComputeHorizonPosition();
    func_0208f410(GetData02109020_0208e9e8());
}
