#include <globaldefs.h>
#include "GameState/GameState.h"

struct Entry_02028bd0;
struct EntryTable0209bd94;
struct BinarySearchByComparatorStruct;
struct List_020283fc;
struct PairStruct;
struct Obj02033874;
struct Dst020795e8;
struct Src020795e8;
struct S02076cc4;
struct MonsterInfo021a2128 { char field_0[0xc]; short radius; short height; };
struct AreaEntry021a2128 {
    short id;
    unsigned short category : 2;
    unsigned short flags : 14;
    short field_4;
    unsigned short instances;
#if defined(jpn)
    char field_8[0xc];
#else
    char field_8[0x10];
#endif
    char list[0x48];
    char subentries[0x298];
    char monsters[0xc];
    char nodes[0xc];
};
struct FieldMonster021a2128 {
    Object3D object;
    char field_ac[0xc];
    short listIndex;
    char field_ba[0xaa];
    short entryId;
    short field_166;
    short variant;
    short state;
    char field_16c[0x11];
    unsigned char flags;
    char field_17e[2];
    MonsterInfo021a2128* info;
    void* node;
};
#if defined(jpn)
struct FieldArena021a2128 { char field_0[0x2fe0]; int context; };
#else
struct FieldArena021a2128 { char field_0[0x31f0]; int context; };
#endif
extern "C" Entry_02028bd0* func_02027ca4();
extern "C" AreaEntry021a2128* func_02028bd0(Entry_02028bd0*, int);
extern "C" MonsterInfo021a2128* func_0206f4f0(BinarySearchByComparatorStruct*, int);
extern "C" void* func_0206ef18(void*, int);
extern "C" int func_ov017_021a20c0(int, int, int);
extern "C" unsigned short* func_02012fe4();
extern "C" int* func_0202ae18();
extern "C" void func_02076a8c(void*);
extern "C" PairStruct* func_ov017_021a2738(void*, int);
extern "C" void func_02072adc(PairStruct*, PairStruct*);
struct Subentry021a2128 { short field_0; short scale; };
extern "C" Subentry021a2128* func_0209be84(EntryTable0209bd94*, unsigned int, int);
extern "C" int func_02018fbc(void*, Vector3fix*);
extern "C" int func_020283fc(List_020283fc*, int);
extern "C" void func_02033874(Obj02033874*, int);
extern "C" void func_020795e8(Dst020795e8*, Src020795e8*);
extern "C" void func_02076ccc(void*, int);
extern "C" void func_02076cc4(S02076cc4*, int);
extern "C" int func_ov017_021a1944();
extern "C" int func_0202b7d8(int*);
extern "C" void func_ov017_021c8f3c(int, int);

// USA: func_ov017_021a2128
extern "C" ARM int func_ov017_021a2128(FieldArena021a2128* arena, unsigned short areaId, int monsterId, int variant, const Vector3fix* position, int y, unsigned short entryId, unsigned char flags) {
    AreaEntry021a2128* area = func_02028bd0(func_02027ca4(), areaId);
    if (!area) return 0;
    MonsterInfo021a2128* info = func_0206f4f0((BinarySearchByComparatorStruct*)area->monsters, (short)monsterId);
    void* node = func_0206ef18(area->nodes, (short)monsterId);
    if (!info) return 0;
    if (!node) return 0;
    GameState* state = GameState::GetInstance();
    unsigned short* currentArea = func_02012fe4();
    int* manager = func_0202ae18();
    int slot = func_ov017_021a20c0((int)arena, area->category, 12);
    if (slot < 0) return 0;
    FieldMonster021a2128* monster = (FieldMonster021a2128*)state->GetMaybeFieldMonsterByIndex(slot);
    if (!monster) return 0;
    func_02076a8c(monster);
    PairStruct* previous = func_ov017_021a2738(arena, monsterId);
    if (areaId == *currentArea && previous) func_02072adc(previous, (PairStruct*)monster);
    int scale = 0x1000;
    Subentry021a2128* entry = func_0209be84((EntryTable0209bd94*)area->subentries, monsterId, variant);
    if (entry) scale = entry->scale;
    Vector3fix location __attribute__((aligned(4))) = *position;
    if (areaId == *currentArea) location.y = func_02018fbc(currentArea, &location);
    monster->object.unknown_2_ = monsterId;
    monster->object.unknown_4_ = slot;
    monster->object.SetField06(areaId);
    monster->variant = variant;
    monster->info = info;
    monster->node = node;
    monster->listIndex = func_020283fc((List_020283fc*)area->list, entryId);
    monster->entryId = entryId;
    monster->object.position_ = location;
    func_02033874((Obj02033874*)monster, y);
    monster->object.SetRadius(info->radius << 2);
    monster->object.SetHeight(info->height);
    Src020795e8* fields = (Src020795e8*)func_0206ef18(area->nodes, (short)monsterId);
    if (fields) func_020795e8((Dst020795e8*)monster, fields);
    int scaled = (int)(((long long)scale * 0x10a + 0x800) >> 12);
    monster->object.SetScale(scaled, scaled, scaled);
    func_02076ccc(monster, 0);
    func_02076cc4((S02076cc4*)monster, (int)&arena->context);
    monster->state = func_ov017_021a1944();
    monster->flags |= flags;
    monster->object.MakeVisible();
    ++area->instances;
    if (func_0202b7d8(manager)) func_ov017_021c8f3c(slot, -1);
    return slot;
}
