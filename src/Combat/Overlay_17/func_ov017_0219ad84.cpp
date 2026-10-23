#include <globaldefs.h>
#include "GameState/GameState.h"
#include "GameState/Field3b0.h"
#include "Resource/GameResources.h"
#include "NitroSDK/Graphics.h"
#include "World/ZoneLootableRecord.h"
#include "Resource/Brightness.h"

struct HeadNode02046b24;
struct Obj0204724C;
struct StructAt020473c8;
struct BitField0203402c;
struct Vec3Target0203a46c;
struct Struct020478bc;
struct SearchStruct0202c1a4;
struct Vec3copy0202ec84;

struct Zone0219ad84 { unsigned short id; };
struct Controller0219ad84 {
#if defined(jpn)
    char pad0[0x868];
#else
    char pad0[0x998];
#endif
    unsigned int busy;
};
struct Window0219ad84 { char pad0[2]; unsigned char open; };
struct Combatant0219ad84 {
    Object3D obj3D;
#if defined(jpn)
    char padac[0x1a6 - 0xac];
#else
    char padac[0x1b2 - 0xac];
#endif
    unsigned short field1b2;
};

extern "C" Zone0219ad84* func_02012fe4();
extern "C" Controller0219ad84* func_020421a0();
extern "C" int func_02046b24(HeadNode02046b24**);
extern "C" void func_0204724c(Obj0204724C*);
extern "C" void func_020473c8(StructAt020473c8*, int);
extern "C" unsigned char func_02039d7c(char*);
extern "C" int func_0203402c(BitField0203402c*);
extern "C" void func_0203a46c(Vec3Target0203a46c*, int, int, int);
extern "C" void func_020478bc(Struct020478bc*, int);
extern "C" void func_02047554(Foo02048004*, int, int);
extern "C" int func_020535c8(signed char*);
extern "C" int func_02046b08(void**);
extern "C" SearchStruct0202c1a4* func_0202ae18();
extern "C" int func_0202b7d8(int*);
extern "C" int func_0202c1a4(SearchStruct0202c1a4*);
extern "C" void* func_0200fd0c(GameState*);
extern "C" void func_0202ec84(void*, Vec3copy0202ec84*, int*, int*);
extern "C" int func_ov017_0218d4ec(void*, int);

static inline Foo02048004* CurrentSprite(GameResources* res) {
    return *(Foo02048004**)&res->unknown_35a8[0x88];
}
static inline unsigned char WindowOpen(void* window) {
    return ((Window0219ad84*)window)->open;
}

// USA: func_ov017_0219ad84
// JPN: func_ov017_0219b924
extern "C" ARM void func_ov017_0219ad84(GameResources* self) {
    if (TestFlags04(self, 0x40)) return;
    GameState* game = GameState::GetInstance();
    Zone0219ad84* zone = func_02012fe4();
    void* camera = func_020100bc(game);
    Controller0219ad84* controller = func_020421a0();
    Window0219ad84* field = (Window0219ad84*)func_0200fd0c(game);
    GameObject* actor = game->GetUnknownGameObject();
    if (!actor) return;

    if (func_02046b24((HeadNode02046b24**)self->unknown_ptr_array_36fc[0]) == 4) {
        if (CurrentSprite(self) == NULL || !CurrentSprite(self)->bit0) return;
        GXFIFO_MATRIX_PUSH = 0;
        if (CurrentSprite(self) != &self->substruct_array_2b90[12] &&
            CurrentSprite(self) != &self->substruct_array_2b90[13] &&
            CurrentSprite(self) != &self->substruct_array_2b90[14]) {
            func_0204724c((Obj0204724C*)CurrentSprite(self));
            func_020473c8((StructAt020473c8*)CurrentSprite(self), 1);
        } else {
            func_020473c8((StructAt020473c8*)CurrentSprite(self), 1);
        }
        GXFIFO_MATRIX_POP = 1;
        return;
    }

    int idle = 1;
    unsigned int busy = 0;
    if (controller) busy |= controller->busy;
    busy |= WindowOpen(self->unknown_ptr_array_36fc[5]);
    busy |= WindowOpen(self->unknown_ptr_array_3afc[10]);
    busy |= WindowOpen(self->unknown_ptr_array_371c[1]);
    busy |= WindowOpen(self->unknown_ptr_array_3afc[20]);
    busy |= WindowOpen(self->unknown_ptr_array_3afc[1]);
    busy |= WindowOpen(self->unknown_ptr_array_3afc[16]);
    busy |= WindowOpen(self->unknown_ptr_array_3afc[7]);
    busy |= WindowOpen(self->unknown_ptr_array_3afc[11]);
    busy |= WindowOpen(self->unknown_ptr_array_3afc[27]);
    busy |= WindowOpen(self->unknown_ptr_array_3afc[4]);
    busy |= WindowOpen(self->unknown_ptr_array_3afc[47]);
    busy |= WindowOpen(self->unknown_ptr_array_3afc[9]);
    busy |= WindowOpen(self->unknown_ptr_array_3afc[6]);
    busy |= WindowOpen(self->unknown_ptr_array_3afc[42]);
    busy |= WindowOpen(self->unknown_ptr_array_3afc[29]);
    busy |= WindowOpen(self->unknown_ptr_array_3afc[30]);
    busy |= WindowOpen(self->unknown_ptr_array_3afc[21]);
    busy |= WindowOpen(self->unknown_ptr_array_3afc[43]);
    busy |= func_02039d7c((char*)actor);
    int check = func_0203402c((BitField0203402c*)actor);
    if (busy | check | WindowOpen(field)) idle = 0;
    if (idle) {
        func_0203a46c((Vec3Target0203a46c*)&self->substruct_array_2b90[0], self->fieldButtonX[0] << 12, self->fieldButtonY[0] << 12, -0x1000);
        func_020478bc((Struct020478bc*)&self->substruct_array_2b90[0], 1);
        GXFIFO_MATRIX_PUSH = 0;
        func_02047554(&self->substruct_array_2b90[0], 0, 1);
        GXFIFO_MATRIX_POP = 1;
    }

    if (self->interactionSelection[1] != 0x12 && !func_020535c8((signed char*)actor) &&
        func_02046b08((void**)self->unknown_ptr_array_36fc[0])) {
        int show = 1;
        if (TestFlags04(self, 8) && self->interactionSelection[0] == 0) show = 0;
        if (self->interactionSelection[1] == 0x11) show = 0;
        if (show) {
            int selection = self->interactionSelection[1];
            Foo02048004* sprites = self->substruct_array_2b90;
            GXFIFO_MATRIX_PUSH = 0;
            func_0204724c((Obj0204724C*)&sprites[selection]);
            func_020473c8((StructAt020473c8*)&sprites[selection], 1);
            GXFIFO_MATRIX_POP = 1;
        }
    }

    SearchStruct0202c1a4* search = func_0202ae18();
    if (!func_0202b7d8((int*)search) || !camera) return;
    if (func_020535c8((signed char*)actor)) return;
    int current = func_0202c1a4(search);
    int drawn = 0;
    for (int i = 0; i < 4; i++) {
        if (i == current) continue;
        Combatant0219ad84* member = (Combatant0219ad84*)func_0200ff1c(game, i);
        if (!member) continue;
        if (!member->obj3D.IsVisible()) continue;
        if (!member->obj3D.GetInheritedAlpha()) continue;
        int marked = 0;
        if (member->obj3D.GetFlag(0x800000) && member->obj3D.GetFlag(0x400)) marked = 1;
        unsigned short id = zone->id;
        unsigned short field06 = member->obj3D.GetField06();
        if (field06 != id && !marked) continue;
        Vector3fix position = member->obj3D.position_;
        position.y += member->obj3D.GetHeight();
        int x, y;
        func_0202ec84(camera, (Vec3copy0202ec84*)&position, &x, &y);
        x -= 12;
        y -= 24;
        if (member->obj3D.GetFlag(0x400)) {
            Foo02048004* marker = &self->unknown_3520;
            func_0203a46c((Vec3Target0203a46c*)marker, x << 12, y << 12, -0xa000);
            func_020478bc((Struct020478bc*)marker, 1);
            func_0204724c((Obj0204724C*)marker);
            GXFIFO_MATRIX_PUSH = 0;
            func_020473c8((StructAt020473c8*)marker, 1);
            drawn++;
            GXFIFO_MATRIX_POP = 1;
            if (drawn >= 3) break;
        } else if (member->field1b2) {
            Foo02048004* marker = (Foo02048004*)self->unknown_35a8;
            func_0203a46c((Vec3Target0203a46c*)marker, x << 12, y << 12, -0xa000);
            GXFIFO_MATRIX_PUSH = 0;
            func_0204724c((Obj0204724C*)marker);
            func_020473c8((StructAt020473c8*)marker, 1);
            drawn++;
            GXFIFO_MATRIX_POP = 1;
            if (drawn >= 3) break;
        } else if (func_ov017_0218d4ec(self, member->obj3D.unknown_4_)) {
            Foo02048004* marker = &self->substruct_array_2b90[17];
            func_0203a46c((Vec3Target0203a46c*)marker, x << 12, y << 12, -0xa000);
            GXFIFO_MATRIX_PUSH = 0;
            func_0204724c((Obj0204724C*)marker);
            func_020473c8((StructAt020473c8*)marker, 1);
            GXFIFO_MATRIX_POP = 1;
        }
    }
}
