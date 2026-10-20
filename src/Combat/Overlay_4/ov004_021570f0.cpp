#pragma ipa file
#include <globaldefs.h>
#include "std_library_functions.h"
#include "System/Matrix.h"
#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"
#include "Resource/GameResources.h"
#include "System/Memory.h"
#include "Combat/Main/MessageSlotTable.h"
#include "Resource/FontBankLoader.h"
#include "World/ZoneLootableRecord.h"
extern unsigned char data_0211e33c[0x30000] __attribute__((aligned(4)));
#include "Filesystem/FileIO.h"
#include "Resource/Brightness.h"

#if defined(jpn)
#define R(j, u) (j)
#else
#define R(j, u) (u)
#endif

unsigned char* data_ov004_021707e0;
int data_ov004_021707e4;

// USA: func_ov004_021570f0
ARM signed char GetFlagByte_021570f0(int idx) {
    if (idx < 0) return -1;
    char* ptr = ((char*)data_ov004_021707e0);
    short count = *(short*)(ptr + 0x3a);
    if (idx >= count) return -1;
    return (signed char)(*(short*)(ptr + idx * 2 + 0x32));
}

#if defined(jpn)
#define _Z27ScaleStatsIfType12_021f6f10Pv func_ov023_021f6f10
#endif

extern "C" void* func_ov004_02156e68(void*, int);
#if defined(jpn)
#define ScaleStatsIfType12_021f6f10 func_ov023_021f6f10
extern "C" int ScaleStatsIfType12_021f6f10(void*);
#else
int ScaleStatsIfType12_021f6f10(void*);
#endif
struct Obj021f6f08;
unsigned int GetShort6_021f6f08(struct Obj021f6f08* obj);
signed char GetFlagByte_021570f0(int idx);

// USA: func_ov004_02157128
extern "C" ARM signed char func_ov004_02157128(void* obj) {
    void* node = func_ov004_02156e68(obj, 0x5f);
    if (!node) {
        return (signed char)(*(short*)(data_ov004_021707e0 + 0x3c));
    }

    if (ScaleStatsIfType12_021f6f10(node) != 8) {
        return 0;
    }

    int idx = 0;
    unsigned int v = GetShort6_021f6f08((struct Obj021f6f08*)node);
    switch (v) {
        case 0x322: idx = 0; break;
        case 0x323: idx = 1; break;
        case 0x324: idx = 2; break;
        case 0x325: idx = 3; break;
        case 0x326: idx = 4; break;
        case 0x327: return -1;
        default: break;
    }
    return GetFlagByte_021570f0(idx);
}

#undef _Z27ScaleStatsIfType12_021f6f10Pv
#undef ScaleStatsIfType12_021f6f10

// USA: func_ov004_021571d8
ARM int HasFlag101_021571d8(int a) {
    if (((int)func_ov004_02156e68((void*)a, 0x65)) != 0) {
        return 1;
    }
    return 0;
}

#if defined(jpn)
#define data_ov015_02193d14 data_ov015_02194844
#define data_ov015_02193d2c data_ov015_0219485c
#define data_ov015_02193d38 data_ov015_02194868
#define data_ov027_021dd8e0 data_ov027_021de1a0
#define func_ov014_0218854c func_ov014_0218942c
#define func_ov014_021885bc func_ov014_0218948c
#define func_ov015_0219050c func_ov015_021910b0
#endif

extern "C" int rand(void);

struct Vec3_021571f4 { int x, y, z; };

class Node021571f4 {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6();
    virtual void SetPosition(const Vec3_021571f4* v);
};

struct Block021571f4 {
    char pad0[0x1c];
    unsigned char counts[12];
    int numSpawned;
};

extern "C" void* func_ov011_021849c8(void*);
extern "C" void* func_ov023_021f6880(void**, int);
extern "C" int func_ov023_021f6f10(void*);
extern "C" void func_ov023_021fa078(void* obj, void* ctx, unsigned short val, Vec3_021571f4* srcVec, int p5, int p6);

// USA: func_ov004_021571f4
extern "C" ARM void func_ov004_021571f4(void* self, int total) {
    int count = total - ((Block021571f4*)data_ov004_021707e0)->numSpawned;
    if (count == 0) return;

    for (int i = 0; i < count; i++) {
        int slot = rand() % 12;
        Block021571f4* blk = ((Block021571f4*)data_ov004_021707e0);
        while (blk->counts[slot] >= 10) {
            slot = (slot + 1) % 12;
        }
        blk->counts[slot]++;

        Block021571f4* block = ((Block021571f4*)data_ov004_021707e0);
        int n = block->counts[slot];
        int id = block->numSpawned + 0x578 + i;

        Node021571f4* node = ((Node021571f4*)func_ov023_021f6880((void**)(func_ov011_021849c8(self)), id));
        if (node == 0 || func_ov023_021f6f10(node) != 0) {
            node = 0;
        }
        if (!node) return;

        Vec3_021571f4 pos;
        pos.x = (slot * 21) << 12;
        pos.y = (n * -19) << 12;
        pos.z = 0;
        node->SetPosition(&pos);

        Vec3_021571f4 dst;
        dst.x = (slot * 21) << 12;
        dst.y = (0xc0 - n * 19) << 12;
        dst.z = 0;

        void* effect = ((Node021571f4*)func_ov023_021f6880((void**)(func_ov011_021849c8(self)), 0xffff));
        if (!effect) return;
        func_ov023_021fa078(effect, self, id, &dst, 0xd000, 0xd000);
    }
    ((Block021571f4*)data_ov004_021707e0)->numSpawned = total;
}

#undef data_ov015_02193d14
#undef data_ov015_02193d2c
#undef data_ov015_02193d38
#undef data_ov027_021dd8e0
#undef func_ov003_021594c4
#undef func_ov003_0215a740
#undef func_ov014_0218854c
#undef func_ov014_021885bc
#undef func_ov015_0219050c

struct EntryA68 { short key; void* value; };
struct TableA68 { struct EntryA68* entries; short count; };
void* FindEntryByKey_02072a68(struct TableA68*, int);
int DispatchAdjustmentIfType4_02157018(void*, int);
int GetGlobalField0x1c020421a0(void);
extern "C" void func_02046380(void* global);
struct StoreStruct;
void StoreInArray0x8b0_020465c0(struct StoreStruct* base, int index, int value);

// USA: func_ov004_02157374  (semantic: StoreEntryNameForKey_02157374)
extern "C" ARM void func_ov004_02157374(void* obj, int key, int cat, char* dst, unsigned char flag5) {
    if (key <= 0) return;

    struct TableA68* table = (struct TableA68*)DispatchAdjustmentIfType4_02157018(obj, 4);
    int usedFallback = 0;
    const char* name;

    if ((key >= 0x4e20 && key <= 0x4e84) ||
        (key >= 0x4e86 && key <= 0x4e8b) ||
        (key == 0x4e8d) ||
        (key >= 0x4e8f && key <= 0x5207) ||
        (key >= 0xcb24 && key <= 0xcb29) ||
        (key >= 0xcb2d && key < 0xcb84) ||
        (key >= 0xcb88 && key <= 0xcb8d) ||
        (key >= 0xcb91 && key < 0xcbe8) ||
        (key >= 0xcbec && key <= 0xcbf1) ||
        (key >= 0xcbf5 && key < 0xccb0) ||
        (key >= 0xcf08 && key < 0xd034)) {
        name = (const char*)FindEntryByKey_02072a68(table, 0x64);
    } else if ((key == 0x4e85) || (key >= 0x59d8 && key < 0x5dc0)) {
        name = (const char*)FindEntryByKey_02072a68(table, 0x65);
    } else if (key == 0x4e8c) {
        name = (const char*)FindEntryByKey_02072a68(table, 0x66);
    } else if (key == 0x4e8e) {
        name = (const char*)FindEntryByKey_02072a68(table, 0x67);
    } else if (key >= 0xc800 && key < 0xc864) {
        name = (const char*)FindEntryByKey_02072a68(table, 0x68);
    } else if (key >= 0xc350 && key < 0xc3b4) {
        name = (const char*)FindEntryByKey_02072a68(table, 0x69);
    } else if ((key >= 0xc738 && key <= 0xc79e) ||
               (key >= 0xc7a0 && key < 0xc800) ||
               (key >= 0xc864 && key < 0xc8c8)) {
        name = (const char*)FindEntryByKey_02072a68(table, 0x6a);
    } else if (key == 0xc79f) {
#if defined(jpn)
        name = (const char*)FindEntryByKey_02072a68(table, 0x6b);
#else
        name = (const char*)FindEntryByKey_02072a68(table, 0x6a);
#endif
    } else if ((key >= 0xcb20 && key <= 0xcb23) ||
               (key >= 0xcb2a && key <= 0xcb2c) ||
               (key >= 0xcb84 && key <= 0xcb87) ||
               (key >= 0xcb8e && key <= 0xcb90) ||
               (key >= 0xcbe8 && key <= 0xcbeb) ||
               (key >= 0xcbf2 && key <= 0xcbf4) ||
               (key >= 0xccb0 && key <= 0xccb3) ||
               (key >= 0xccba && key <= 0xccbc) ||
               (key >= 0xcd14 && key <= 0xcd17) ||
               (key >= 0xcd1e && key <= 0xcd20) ||
               (key >= 0xcddc && key <= 0xcddf) ||
               (key >= 0xcde6 && key <= 0xcde8)) {
        name = (const char*)FindEntryByKey_02072a68(table, 0x6c);
    } else {
        usedFallback = 1;
#if defined(jpn)
        if (cat == 1) {
            name = (const char*)FindEntryByKey_02072a68(table, 0x6d);
        }
#endif
        if (cat == 2) {
            name = (const char*)FindEntryByKey_02072a68(table, 0x70);
        } else if (key >= 0x7918 && key < 0x7d00) {
            name = (const char*)FindEntryByKey_02072a68(table, 0x6f);
        } else {
            name = (const char*)FindEntryByKey_02072a68(table, 0x6e);
        }
    }

    if (flag5 != 0) {
        if (usedFallback == 0) return;
    }
    if (name == 0) return;

    void* g = (void*)GetGlobalField0x1c020421a0();
    func_02046380(g);
    StoreInArray0x8b0_020465c0((struct StoreStruct*)g, 0, key);
    memcpy(dst, (void*)name, strlen(name));
}

int GetBattleSubField0xbcForState_020d4ac8(void);
void ClearNodeMaskById_021f6600(void* obj, int id, int mask);
extern "C" void func_ov023_021f65d4(void* obj, int id, int mask);

// USA: func_ov004_0215781c
ARM void ClearOrMaskNodesByState_0215781c(void* obj) {
    int state = GetBattleSubField0xbcForState_020d4ac8();
    for (int i = 0; i < 4; i++) {
        if (i == state) {
            ClearNodeMaskById_021f6600(obj, i + 0x29, 8);
        } else {
            func_ov023_021f65d4(obj, i + 0x29, 8);
        }
    }
}

// USA: func_ov004_02157874
ARM void MaskNodesForRange_02157874(void* obj) {
    for (int i = 0; i < 4; i++) {
        func_ov023_021f65d4(obj, i + 0x29, 8);
    }
}

extern "C" void* func_ov004_02156fa0(void*, int);

class VObj021578a8 {
public:
    virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03();
    virtual void v04(); virtual void v05(); virtual void v06();
    virtual void SetPos(Vector3i* v);
    virtual Vector3i GetPos();
};

// USA: func_ov004_021578a8
extern "C" ARM void func_ov004_021578a8(void* obj) {
    Vector3i vec;

    VObj021578a8* node = (VObj021578a8*)func_ov004_02156fa0(obj, 0x517);
    if (node) {
        vec = node->GetPos();
        int x = (0xd1 - (data_ov004_021707e0[0x3e] << 3)) << 0xc;
        vec.x = x;
        vec.y = 0x26000;
        node->SetPos(&vec);
    }

    VObj021578a8* node2 = (VObj021578a8*)func_ov004_02156fa0(obj, 0x518);
    if (node2) {
        vec = node2->GetPos();
        int x2 = (0xd1 - (data_ov004_021707e0[0x3e] << 3)) << 0xc;
        vec.x = x2;
        vec.y = 0x34000;
        node2->SetPos(&vec);
    }
}

struct KeyMap020a0b3c { short* keys; signed char* values; short count; };
signed char LookupValueByKey020a0b3c(struct KeyMap020a0b3c* map, int key);
int SumSlotsWithFlag0x1000x150_02086d20(unsigned char* p);
extern "C" int func_0207c7a0(void* p, int e, int c);

// USA: func_ov004_0215799c  (semantic: ComputeRemainingSlots_0215799c)
extern "C" ARM int func_ov004_0215799c(void* a, int e, unsigned int kind, int d) {
    int result = 0;
    unsigned int flag = (kind >= 8 && kind <= 9);
    if (flag) {
        void* ptr = a;
        if (kind == 9) {
            ptr = (char*)a + 0x204 + 0xc00;
        }
        signed char val1 = LookupValueByKey020a0b3c((struct KeyMap020a0b3c*)ptr, e);
        int val2 = SumSlotsWithFlag0x1000x150_02086d20((unsigned char*)a);
        result = (d * 8 + 0x63) - (val1 + val2);
    } else {
        unsigned int flag2 = (kind <= 7);
        if (flag2) {
            result = 0x63 - func_0207c7a0((char*)a + 0x1d4, e, 9);
        }
    }
    return result;
}

struct Container020dedd0;
struct Field150Holder02052df8;
struct KeyedList0207c484;
struct HeadNode02046b24;
struct Ctx021a3498;

struct ElementBits_02157a28 {
    unsigned int category : 4;
    unsigned int unknown : 14;
    unsigned int flag : 1;
    unsigned int rest : 13;
};
struct Element_02157a28 {
    char pad0[8];
    ElementBits_02157a28 bits;
};
struct BattleBlk_02157a28 {
    char pad0[0xe];
    short key;
    char pad10;
    unsigned char count;
    char pad12[0x28];
    short extra;
    char pad3c[0xb];
    unsigned char used;
#if defined(jpn)
    char pad48[0x61];
#else
    char pad48[0x55];
#endif
    unsigned char dirty;
};

struct SlotTable_02157a28 { int v[8]; };
extern SlotTable_02157a28 data_ov004_0216fb90;

struct TextContext_02157a28 {
    SafeAllocator allocator;
    char list[0x18];
    Container020dedd0* containerData;
    int field30;
    int field34;
};

extern "C" signed char func_ov004_02157128(void*);
extern "C" void* func_0202ae18(void);
extern "C" int func_ov004_02156fd4(void*, int);
extern "C" void func_0207cc18(void*, Element_02157a28*);
extern "C" void func_02052d7c(struct Obj02052d7c*, int, short);
extern "C" int func_0207c378(struct KeyedList0207c378*, int, int, int);
extern "C" void func_ov017_021c3fb4(int, int);
extern "C" void func_ov017_021c4418(int, int);
extern "C" void func_ov017_021c9e00(int, int, int, int);
extern "C" void func_ov017_0218f5a4(GameResources*, int, int, int, int);
extern "C" void func_ov011_021848a0(void*, int);

struct Element020de650* FindElementByKey020dedd0(struct Container020dedd0*, int);
void* ZeroInitReturn020de824(void*);
void InitStruct0207cbe8(char*);
void InitStruct0207cc0c(char*);
void* GetPtrField0x2a04_02010828(struct GameState*);
int GetHalfwordEntryFromField150(Field150Holder02052df8*, int);
int DecrementKeyedStackAmount0207c484(struct KeyedList0207c484*, int, int, int);
void TrySetFlags0x130_020483f0(unsigned char*, unsigned short);
int CheckField0NonZero_0202b7d8(int*);
int GetHeadNodeIdOrMinusOne(HeadNode02046b24**);
void ClearIfMatchAndFinalize_021a3498(Ctx021a3498*);

// USA: func_ov004_02157a28
extern "C" ARM int func_ov004_02157a28(void* a, int flag) {
    short id = ((short)func_ov004_02157128(a));
    int* search = ((int*)func_0202ae18());
    GameState* gs = GameState::GetInstance();
    GameObject* c = GetCombatantWithFlag0x100_0200ff1c(gs, id);
    if (!c) return 0;
    Container020dedd0* cont = (Container020dedd0*)((void*)func_ov004_02156fd4(a, 5));
    if (!cont) return 0;
    Element_02157a28* elem = ((Element_02157a28*)FindElementByKey020dedd0(cont, ((BattleBlk_02157a28*)data_ov004_021707e0)->key));
    if (!elem) return 0;
    int category = elem->bits.category;
    TextContext_02157a28 context;
    context.allocator.ResetAllocatorPointer();
    ZeroInitReturn020de824(context.list);
    InitStruct0207cbe8((char*)&context);
    InitStruct0207cbe8((char*)&context);
    context.containerData = cont;
    func_0207cc18(&context, elem);
    InitStruct0207cc0c((char*)&context);

    int found = 0;
    int i;
    for (i = 0; i != 8; i++) {
        if (i == category) {
            found = 1;
            break;
        }
    }
    if (!found) return 0;
    SlotTable_02157a28 table = data_ov004_0216fb90;
    int slot = table.v[i];
    if (slot < 0) return 0;

    char* bag = (char*)GetPtrField0x2a04_02010828(gs);
    int equipped = GetHalfwordEntryFromField150((Field150Holder02052df8*)c, slot);
    int same = ((BattleBlk_02157a28*)data_ov004_021707e0)->key == equipped;
    func_02052d7c((Obj02052d7c*)c, slot, ((BattleBlk_02157a28*)data_ov004_021707e0)->key);
    if (((BattleBlk_02157a28*)data_ov004_021707e0)->used == 0) {
        func_0207c378((KeyedList0207c378*)(bag + 0x1d4), ((BattleBlk_02157a28*)data_ov004_021707e0)->key, (signed char)(((BattleBlk_02157a28*)data_ov004_021707e0)->count - 1), category);
        ((BattleBlk_02157a28*)data_ov004_021707e0)->dirty = 0;
    } else {
        DecrementKeyedStackAmount0207c484((KeyedList0207c484*)(bag + 0x1d4), ((BattleBlk_02157a28*)data_ov004_021707e0)->key, 1, category);
    }
    ((BattleBlk_02157a28*)data_ov004_021707e0)->used++;
    if (((Element_02157a28*)FindElementByKey020dedd0(cont, equipped))) {
        func_0207c378((KeyedList0207c378*)(bag + 0x1d4), equipped, 1, category);
    }
    int upgrade = 0;
    BattleBlk_02157a28* blk = ((BattleBlk_02157a28*)data_ov004_021707e0);
    unsigned char level = blk->extra;
    if (blk->used < blk->count) {
        if (level >= 2) upgrade = 1;
    }
    if (!same || flag) {
        int did = 0;
        Element_02157a28* e2 = ((Element_02157a28*)FindElementByKey020dedd0(cont, ((BattleBlk_02157a28*)data_ov004_021707e0)->key));
        if (e2 && e2->bits.flag) {
            TrySetFlags0x130_020483f0((unsigned char*)c, 4);
            did = 1;
        }
        if (CheckField0NonZero_0202b7d8(search)) {
            func_ov017_021c3fb4(id, 1);
            func_ov017_021c4418(id, -1);
            if (did) func_ov017_021c9e00(id, 0, 0, 1);
        }
        GameResources* res = GetGameResources();
        HeadNode02046b24** headA = (HeadNode02046b24**)res->unknown_ptr_array_36fc[1];
        Ctx021a3498* ctxB = (Ctx021a3498*)res->unknown_ptr_array_36fc[2];
        BackgroundLoader* loader = BackgroundLoader::GetInstance();
        func_ov017_0218f5a4(res, id, 1, 0, 0);
        while (GetHeadNodeIdOrMinusOne(headA) == 0x13) {
            loader->RemoveAllLocks();
            ClearIfMatchAndFinalize_021a3498((Ctx021a3498*)headA);
            if (GetHeadNodeIdOrMinusOne((HeadNode02046b24**)ctxB) == 0x14) {
                ClearIfMatchAndFinalize_021a3498(ctxB);
            }
        }
        if (did) {
            if (upgrade) func_ov011_021848a0(a, 0x3e9);
            else func_ov011_021848a0(a, 0x3e8);
            return 0;
        }
    }
    if (upgrade) func_ov011_021848a0(a, 0x23bf);
    else func_ov011_021848a0(a, 0x393);
    return 0;
}

struct S_e830;
struct Struct020a9ea4;

struct Nib56b_02157db8 {
    char pad[0x56b];
    unsigned char lo : 4;
    unsigned char hi : 4;
};

#if defined(jpn)
enum { combatantField150Offset = 0x144 };
#else
enum { combatantField150Offset = 0x150 };
#endif

struct Combatant150_02157db8 {
    char pad[combatantField150Offset];
    struct Nib56b_02157db8* f150;
};

struct Cfg02157db8 {
    unsigned int lo12 : 12;
    unsigned int n4 : 4;
    unsigned int m5 : 5;
    unsigned int k5 : 5;
    unsigned int j6 : 6;
};

struct Blk_02157db8 {
    unsigned int word00;
    unsigned int word04;
    unsigned int word08;
    unsigned short half0c;
    short half0e;
    unsigned char b10;
    unsigned char b11;
    signed char b12;
    unsigned char b13;
    unsigned char b14;
    unsigned char b15;
    unsigned char pad16[2];
    Cfg02157db8 cfg;
    unsigned char pad1c[0xc];
    unsigned int word28;
    unsigned char b2c;
    unsigned char b2d;
    unsigned char b2e;
    unsigned char b2f;
    unsigned char b30;
    unsigned char b31;
    signed short arr32[6];
    unsigned char b3e;
    unsigned char pad3f[7];
    unsigned char b46;
    unsigned char b47;
    unsigned char pad48[0x24];
    short half6c;
    unsigned char b6e;
    unsigned char b6f;
    signed char b70;
    unsigned char pad71[3];
    unsigned int word74;
    unsigned int word78;
    unsigned char map7c[8];
    unsigned char pad84[8];
#if defined(jpn)
    unsigned char pad8c[0x18];
#else
    unsigned char pad8c[0xc];
#endif
    unsigned int word98;
    unsigned char b9c;
    unsigned char b9d;
    unsigned char pad9e[2];
#if !defined(jpn)
    unsigned char padA0[0xc];
    unsigned char padAC[0xc];
#endif
};

#if defined(jpn)
enum { areaOffset = 0xc, optionsBase = 0x120, optionsOffset = 0x6000, stateOffset = 0x8c };
#else
enum { areaOffset = 0x26c, optionsBase = 0x2380, optionsOffset = 0x4000, stateOffset = 0x6c };
#endif

extern char data_02109bf4[];

extern "C" void* func_ov011_021845f8(unsigned char*, unsigned int);
void ClearStruct020a9ea4(struct Struct020a9ea4*);
#if defined(jpn)
struct Struct020dfc40;
void ResetStruct020dfc40(struct Struct020dfc40*);
#else
void Zero4Bytes_020e526c(void*);
#endif
void Clear12Bytes020e46c4(void*);
extern "C" void* func_02012fe4(void);
unsigned short GetFieldAt0x7e_0201e830(struct S_e830* p);
void Set3DClearColor_020c5588(int, int, int, int, int);
void SetFogState_020c54a4(int, unsigned int, unsigned int, unsigned short);
void SetDataPtr_021f5598(void*);
void RegisterSlotA020cf0fc(int);
void RegisterSlotB020cf1a8(int);
struct Obj020397cc;
void CancelPendingAction020397cc(Obj020397cc*, int);
unsigned char GetField0xcc0209ca98(char*);
void* GetDataPtr02114e04_020d6c00();
void OrBitsIntoField0_020466e4(unsigned int*, unsigned int);
unsigned char CopyOutRegion0x5718_02011494(char*, void*);

// USA: func_ov004_02157db8
extern "C" ARM int func_ov004_02157db8(void* a) {
    GameState* bs = GameState::GetInstance();
    unsigned char* p26c = (unsigned char*)bs + areaOffset;
    unsigned char* p2380 = (unsigned char*)bs + optionsBase;
    unsigned char* base5 = p26c + 0x5c00;
    unsigned char* sub4000 = p2380 + optionsOffset;

    ((Blk_02157db8*)data_ov004_021707e0) = 0;
    void* ctx = func_ov011_021845f8((unsigned char*)a, 0);
    if (!ctx) return 0;
    SafeAllocator* alloc = (SafeAllocator*)((char*)ctx + 4);
    Blk_02157db8* blk = (Blk_02157db8*)alloc->Allocate(sizeof(Blk_02157db8));
    ((Blk_02157db8*)data_ov004_021707e0) = blk;
    if (!blk) return 0;

    blk->word00 = 0;
    blk->word04 = 0;
    blk->word08 = 0;
    blk->half0c = 0x3def;
    int neg = -1;
    blk->half0e = neg;
    blk->b10 = 0;
    blk->b11 = 1;
    blk->b12 = neg;
    blk->b13 = 0;
    blk->b14 = 0;
    blk->b15 = 0;
    memset(&blk->cfg, 0, 4);
    memset(blk->pad1c, 0, 0xc);
    blk->word28 = 0;
    blk->b2c = 0;
    blk->b2d = 5;
    blk->b2e = 5;
    blk->b46 = 0;
    blk->b47 = 0;
    blk->b2f = 0;
    blk->b30 = 0;
    blk->b31 = 0;
    blk->b3e = 0;
    memset(blk->pad3f, 0, 7);
    unsigned char* mp = blk->map7c;
    mp[0] = 0;
    mp[1] = 1;
    mp[2] = 4;
    mp[3] = 2;
    mp[4] = 5;
    mp[5] = 3;
    mp[6] = 6;
    mp[7] = 7;
    int neg2 = -1;
    blk->half6c = neg2;
    blk->b6e = 0;
    blk->b6f = 0;
    blk->b70 = neg2;
    blk->word74 = neg2;
    blk->word78 = 0;
    ClearStruct020a9ea4((struct Struct020a9ea4*)blk->pad84);
#if defined(jpn)
    ResetStruct020dfc40((struct Struct020dfc40*)blk->pad8c);
    blk->word98 = 0;
    blk->b9c = 0;
    blk->b9d = 0;
#else
    Zero4Bytes_020e526c(blk->pad8c);
    blk->word98 = 0;
    blk->b9c = 0;
    blk->b9d = 0;
    Clear12Bytes020e46c4(blk->padA0);
    Clear12Bytes020e46c4(blk->padAC);
#endif

    void* v = func_02012fe4();
    if (!v) return 0;
    void* p = (char*)v + stateOffset;
    if (!p) return 0;
    ((Blk_02157db8*)data_ov004_021707e0)->half0c = GetFieldAt0x7e_0201e830((struct S_e830*)p);

    unsigned int* obj = (unsigned int*)GetGameResources();
    ((Blk_02157db8*)data_ov004_021707e0)->word00 = GetFlags00((GameResources*)obj);
    ((Blk_02157db8*)data_ov004_021707e0)->word04 = GetFlags04((GameResources*)obj);
    ((Blk_02157db8*)data_ov004_021707e0)->word08 = GetFlags08((GameResources*)obj);
    SetFlags00((GameResources*)obj, 4);
    SetFlags04((GameResources*)obj, 0x8de);

    int pad0 = 0;
    Set3DClearColor_020c5588(0, 0x1f, 0x7fff, 0, 0);
    SetFogState_020c54a4(0, 0, 0, 0);

    void* d = ((void*)func_ov004_02156fd4(a, 5));
    if (d != 0) {
        SetDataPtr_021f5598(d);
    }
    int slotA[4];
    int slotB[3];
    RegisterSlotA020cf0fc((int)slotA);
    RegisterSlotB020cf1a8((int)slotB);

    ((Blk_02157db8*)data_ov004_021707e0)->cfg.lo12 = slotA[0] + 0x7d0;
    ((Blk_02157db8*)data_ov004_021707e0)->cfg.n4 = slotA[1];
    ((Blk_02157db8*)data_ov004_021707e0)->cfg.m5 = slotA[2];
    ((Blk_02157db8*)data_ov004_021707e0)->cfg.k5 = slotB[0];
    ((Blk_02157db8*)data_ov004_021707e0)->cfg.j6 = slotB[1];

    CancelPendingAction020397cc((Obj020397cc*)bs->GetUnknownGameObject(), 1);
    ((Blk_02157db8*)data_ov004_021707e0)->b2d = GetField0xcc0209ca98(data_02109bf4);
    unsigned int subword = *(unsigned int*)(sub4000 + 0x50);
    ((Blk_02157db8*)data_ov004_021707e0)->b2f = (subword & 1) ? 1 : 0;
    OrBitsIntoField0_020466e4((unsigned int*)GetDataPtr02114e04_020d6c00(), 0xf);

    short* pp = (short*)(base5 + 4);
    for (int i = 0; i < 6; ) {
        if (*pp > 0) {
            ((Blk_02157db8*)data_ov004_021707e0)->b46++;
        }
        i++;
        pp = (short*)((char*)pp + 0x28);
    }

    void* ctx9 = func_ov011_021845f8((unsigned char*)a, 9);
    if (!ctx9) return 0;
    SafeAllocator* alloc9 = (SafeAllocator*)((char*)ctx9 + 4);
#if defined(jpn)
    void* big = alloc9->Allocate(0x8000);
    ((Blk_02157db8*)data_ov004_021707e0)->word98 = (unsigned int)big;
#else
    void* big = alloc9->Allocate(0x10800);
    ((Blk_02157db8*)data_ov004_021707e0)->word98 = (unsigned int)big;
    memset((void*)((Blk_02157db8*)data_ov004_021707e0)->word98, 0, 0x10800);
#endif

    unsigned char ids[4];
    unsigned char count = CopyOutRegion0x5718_02011494((char*)bs, ids);
    for (int i = 0; i < count; i++) {
        ((Blk_02157db8*)data_ov004_021707e0)->arr32[i] = ids[i];
    }
    ((Blk_02157db8*)data_ov004_021707e0)->arr32[4] = count;

    for (int i = 0; i < ((Blk_02157db8*)data_ov004_021707e0)->arr32[4]; i++) {
        void* combatant = (void*)GetCombatantWithFlag0x100_0200ff1c(bs, ((Blk_02157db8*)data_ov004_021707e0)->arr32[i]);
        if (combatant != 0) {
            struct Nib56b_02157db8* field150 = ((struct Combatant150_02157db8*)combatant)->f150;
            int flag;
            if (field150 != 0) {
                flag = field150->lo != 0;
            } else {
                flag = 0;
            }
            if (flag != 0) {
                int j = i;
                while (j < ((Blk_02157db8*)data_ov004_021707e0)->arr32[4]) {
                    ((Blk_02157db8*)data_ov004_021707e0)->arr32[j] = ((Blk_02157db8*)data_ov004_021707e0)->arr32[j + 1];
                    ((Blk_02157db8*)data_ov004_021707e0)->arr32[j + 1] = -1;
                    j++;
                }
                ((Blk_02157db8*)data_ov004_021707e0)->arr32[4] = ((Blk_02157db8*)data_ov004_021707e0)->arr32[4] - 1;
            }
        }
    }
    ((Blk_02157db8*)data_ov004_021707e0)->arr32[5] = ((Blk_02157db8*)data_ov004_021707e0)->arr32[0];
    return 0;
}

#if defined(jpn)
enum { stateOffset_02158298 = 0x8c, battleOffset = 0xc, pointerOffset = 0x3500 };
#else
enum { stateOffset_02158298 = 0x6c, battleOffset = 0x26c, pointerOffset = 0x3710 };
#endif

struct S_e828;
void SetFieldAt0x7e_0201e828(S_e828*, unsigned short);

void SetByteField0x253_020397c0(void* obj);

void* GetDataPtr02114e04_020d6c00(void);
struct FlagWord020466f4;
void ClearFlags020466f4(struct FlagWord020466f4* word, unsigned int mask);

struct Masks021707d8_02158298 { unsigned int m0; unsigned int m4; unsigned int m8; unsigned short mc; };

struct BitField5d00c_02158298 { char pad[0xc]; unsigned short lo13 : 13; unsigned short hi3 : 3; };
struct Outer26c_02158298 { char pad[0x5d00]; struct BitField5d00c_02158298 area; };

// USA: func_ov004_02158298  (semantic: SyncFlagWordsAndDispatch_02158298)
extern "C" ARM int func_ov004_02158298(void) {
    GameState* battle = GameState::GetInstance();
    unsigned int* word = (unsigned int*)((int)GetGameResources());
    ClearFlags00((GameResources*)word, ~0);
    ClearFlags04((GameResources*)word, ~0);
    ClearFlags08((GameResources*)word, ~0);
    SetFlags00((GameResources*)word, ((Masks021707d8_02158298*)data_ov004_021707e0)->m0);
    SetFlags04((GameResources*)word, ((Masks021707d8_02158298*)data_ov004_021707e0)->m4);
    SetFlags08((GameResources*)word, ((Masks021707d8_02158298*)data_ov004_021707e0)->m8);

    void* p = func_02012fe4();
    if (!p) return 0;
    p = (char*)p + stateOffset_02158298;
    if (!p) return 0;
    SetFieldAt0x7e_0201e828((struct S_e828*)p, ((Masks021707d8_02158298*)data_ov004_021707e0)->mc);

    SetByteField0x253_020397c0(battle->GetUnknownGameObject());

    struct Outer26c_02158298* outer = (struct Outer26c_02158298*)((char*)battle + battleOffset);
    outer->area.lo13 &= ~0x20;

    ClearFlags020466f4((struct FlagWord020466f4*)GetDataPtr02114e04_020d6c00(), 0xf);

    unsigned char* p2 = *(unsigned char**)((char*)word + pointerOffset);
    if (p2[2] != 0) {
        p2[0x139] = 1;
    }
    return 0;
}

#if defined(jpn)
enum { adjustOffset = 0x34ec, taskOffset = 0x3928, busyOffset = 0x41e4 };
enum { messageBufferOffset = 0x28, messageBufferSize = 0x800, messageFlagOffset = 0x868 };
#else
enum { adjustOffset = 0x36fc, taskOffset = 0x3b48, busyOffset = 0x4494 };
enum { messageBufferOffset = 0x5c, messageBufferSize = 0x960, messageFlagOffset = 0x998 };
#endif

struct Ctx021583a8;
struct Inner021583a8 {
    char pad0[0x13];
    unsigned char f13;
    unsigned char f14;
    char pad1[0x1c - 0x15];
    char f1c[12];
    int f28;
};
struct Obj5 {
    char pad0[messageBufferOffset];
    char* buf;
    char pad1[messageFlagOffset - messageBufferOffset - 4];
    int f998;
    char pad2[4];
    int f9a0;
};

extern "C" void* func_ov017_021b1e24(void*, int);
extern "C" void func_ov004_02157374(void*, int, int, char*, unsigned char);
extern "C" void func_ov004_021571f4(void*, int);
#if defined(jpn)
extern "C" void func_0204500c(void*, const char*, int);
#else
extern "C" void func_0204500c(void*, const char*, int, int);
#endif
extern "C" char* strstr(const char*, const char*);
extern "C" unsigned int strlen(const char*);
extern "C" void* memcpy(void*, const void*, unsigned int);
extern "C" void* memset(void*, int, unsigned int);
struct TableA68;
void ClearOrMaskNodesByState_0215781c(void*);
struct Obj24_021b1ffc;
int GetSubWordField394_021b1ffc(Obj24_021b1ffc*);
struct Obj24_021b2010;
unsigned char GetSubByteField398_021b2010(struct Obj24_021b2010*);
int GetFieldromField_021b1fd4_021b1fd4(void*);
struct Obj24_021b2024;
unsigned char GetSubByteField34_021b2024(struct Obj24_021b2024*);
struct Obj24_021b2038;
unsigned char GetSubByteField35_021b2038(struct Obj24_021b2038*);
void MaskNodesForRange_02157874(void*);
struct Obj24_021b1fe8;
unsigned char GetSubByteField44_021b1fe8(struct Obj24_021b1fe8*);
void LoadBattleBlock020ac4c0(void*);
struct S_a059c;
void AddClamped16BitLowAt0x20_020a059c(S_a059c*, unsigned int);
void CopyInBattleField0x7540_020ac494(void*);
void SetXY1c0_02184be0(void*, int, int);

// USA: func_ov004_021583a8
extern "C" ARM int func_ov004_021583a8(void* self) {
    static unsigned char sShown3;
    static unsigned char sShown2;
    static unsigned char sShown4;
    static unsigned char sShown0;
    static unsigned char sShown1;
    GameState* game = GameState::GetInstance();
    Ctx021583a8* ctx = (Ctx021583a8*)GetGameResources();
    TableA68* table;
    Obj5* o;
    int count;
    char* buf;
    int adj;
    void* sub;
    adj = *(int*)((char*)ctx + adjustOffset);
    sub = *(void**)((char*)ctx + taskOffset);
    table = ((TableA68*)DispatchAdjustmentIfType4_02157018(self, 4));
    o = (Obj5*)((void*)GetGlobalField0x1c020421a0());
    int state = ((Inner021583a8*)data_ov004_021707e0)->f13;
    if (state == 2) {
        ClearOrMaskNodesByState_0215781c(self);
        count = GetSubWordField394_021b1ffc((Obj24_021b1ffc*)sub);
        int kind = ((int)GetSubByteField398_021b2010((Obj24_021b2010*)sub));
        if (count > 0 && sShown4 == 0) {
            if (sShown3 == 0) {
                buf = o->buf;
                memset(buf, 0, messageBufferSize);
                func_ov004_02157374(self, count, kind, buf, (int)1);
                if (buf[0] != 0) {
#if defined(jpn)
                    func_0204500c(o, buf, 0);
#else
                    if (buf == strstr(buf, "<PAGE>")) {
                        buf += 6;
                    }
                    func_0204500c(o, buf, 0, 0xe3);
#endif
                    o->f998 = 1;
                    sShown3 = 1;
                }
            } else {
                if (o->f9a0 != 0) {
                    return 1;
                }
                sShown4 = 1;
            }
        }
        func_ov017_021b1e24(sub, adj);
        int v = GetFieldromField_021b1fd4_021b1fd4(sub) >> 12;
        if (sShown4 == 0) {
            func_ov004_021571f4(self, v);
        }
        int k34 = ((int)GetSubByteField34_021b2024((Obj24_021b2024*)sub));
        int k35 = ((int)GetSubByteField35_021b2038((Obj24_021b2038*)sub));
        if (sShown2 == 0 && k34 == 4 && k35 == 0) {
#if defined(jpn)
            func_0204500c(o, ((char*)FindEntryByKey_02072a68(table, 0x2e)), 0);
#else
            func_0204500c(o, ((char*)FindEntryByKey_02072a68(table, 0x2e)), 0, 0xe3);
#endif
            o->f998 = 1;
            sShown2 = 1;
        }
        if (sShown0 == 0) {
            if ((k34 == 4 && k35 == 5) || (sShown4 != 0 && count > 0)) {
#if defined(jpn)
                if (sShown4 == 0) {
                    func_0204500c(o, ((char*)FindEntryByKey_02072a68(table, 0x25)), 0);
                } else {
                    func_0204500c(o, ((char*)FindEntryByKey_02072a68(table, 0x33)), 0);
                }
#else
                if (sShown4 == 0) {
                    func_0204500c(o, ((char*)FindEntryByKey_02072a68(table, 0x25)), 0, 0xe3);
                } else {
                    func_0204500c(o, ((char*)FindEntryByKey_02072a68(table, 0x33)), 0, 0xe3);
                }
#endif
                o->f998 = 1;
                sShown0 = 1;
            }
        }
        if (*(int*)((char*)ctx + busyOffset) == 0) {
            ((Inner021583a8*)data_ov004_021707e0)->f13++;
            game = GameState::GetInstance();
            CancelPendingAction020397cc((Obj020397cc*)game->GetUnknownGameObject(), 1);
        }
    } else if (state == 3) {
        if (o->f9a0 != 3) {
            return 1;
        }
        MaskNodesForRange_02157874(self);
        char* buf = o->buf;
        memset(buf, 0, messageBufferSize);
        char* entry = 0;
        int flags = ((int)GetSubByteField44_021b1fe8((Obj24_021b1fe8*)sub));
        if (flags & 1) {
            unsigned char tmp[0xb0];
            LoadBattleBlock020ac4c0(tmp);
            AddClamped16BitLowAt0x20_020a059c((S_a059c*)tmp, 1);
            CopyInBattleField0x7540_020ac494(tmp);
            char* e = ((char*)FindEntryByKey_02072a68(table, 0x26));
            memcpy(buf, e, strlen(e));
            ((Inner021583a8*)data_ov004_021707e0)->f14 = 1;
            func_ov011_021848a0(self, 0x3af);
        } else {
#if defined(jpn)
            if (flags & 0x80) {
                entry = ((char*)FindEntryByKey_02072a68(table, 0x35));
            } else if (sShown2 == 0) {
                entry = ((char*)FindEntryByKey_02072a68(table, 0x15));
            } else {
                entry = ((char*)FindEntryByKey_02072a68(table, 0x2f));
            }
            int len = strlen(entry);
            memcpy(buf, entry, len);
            buf += len;
#else
            if (flags & 0x80) {
                entry = ((char*)FindEntryByKey_02072a68(table, 0x35));
            } else if (sShown2 != 0) {
                entry = ((char*)FindEntryByKey_02072a68(table, 0x2f));
            }
            if (entry != 0) {
                int len = strlen(entry);
                memcpy(buf, entry, len);
                buf += len;
            }
#endif
            if (sShown4 == 0) {
                int w = GetSubWordField394_021b1ffc((Obj24_021b1ffc*)sub);
                int b = ((int)GetSubByteField398_021b2010((Obj24_021b2010*)sub));
                func_ov004_02157374(self, w, b, buf, (int)0);
                buf += strlen(buf);
            }
            char* e = ((char*)FindEntryByKey_02072a68(table, 0x27));
            memcpy(buf, e, strlen(e));
            SetXY1c0_02184be0(self, 0x47, 0x46);
            ((Inner021583a8*)data_ov004_021707e0)->f14 = 0;
        }
#if defined(jpn)
        func_0204500c(o, o->buf, 0);
#else
        char* msg = o->buf;
        if (msg == strstr(msg, "<PAGE>")) {
            msg += 6;
        }
        func_0204500c(o, msg, 0, 0xe3);
#endif
        o->f998 = 1;
        *((unsigned char*)sub + 1) = 1;
        ((Inner021583a8*)data_ov004_021707e0)->f13 = 0;
        Inner021583a8* inner = ((Inner021583a8*)data_ov004_021707e0);
        memset(inner->f1c, 0, 12);
        inner->f28 = 0;
        return 0;
    }
    return 1;
}

#if defined(jpn)
enum { listOffset = 0x4ec, stateOffset_0215883c = 0x928, countOffset = 0x1e4 };
#else
enum { listOffset = 0x6fc, stateOffset_0215883c = 0xb48, countOffset = 0x494 };
#endif

extern "C" int func_ov017_021b1d44(unsigned char*, int, int);
struct Obj24_021b2060;
unsigned char GetSubByteField439_021b2060(Obj24_021b2060* obj);
struct Obj24_021b204c;
unsigned char GetSubByteField438_021b204c(Obj24_021b204c* obj);
struct Actor0209c678;
void DispatchContextByState0209c678(struct Actor0209c678* actor, int arg);
struct Obj_02184548 { char pad[0xb4]; int fieldB4; };
int GetFieldB4_02184548(struct Obj_02184548* obj);
struct Obj_02184540 { char pad[0xb0]; int fieldB0; };
int GetFieldB0_02184540(struct Obj_02184540* obj);

// USA: func_ov004_0215883c
extern "C" ARM int func_ov004_0215883c(void* a) {
    void* actorRaw = GetGameResources();
    void* list = *(void**)((char*)actorRaw + 0x3000 + listOffset);
    unsigned char flag = data_ov004_021707e0[0x13];
    void* five = *(void**)((char*)actorRaw + 0x3000 + stateOffset_0215883c);

    if (flag != 0) goto notZero;
    {
        void* obj2 = func_ov011_021845f8((unsigned char*)a, (int)1);
        if (!obj2) {
            func_ov011_021848a0(a, 0x395);
            data_ov004_021707e0[0x13] = 0;
            return 0;
        }
        if (!((void*)func_ov017_021b1d44((unsigned char*)five, 1, 1))) {
            func_ov011_021848a0(a, 0x3ac);
            data_ov004_021707e0[0x13] = 0;
            return 0;
        }
        int state = 0x12;
        data_ov004_021707e4 = state;
        DispatchContextByState0209c678((Actor0209c678*)data_02109bf4, state);
        *(void**)((char*)five + 8) = (char*)obj2 + 4;
        int fieldB4 = GetFieldB4_02184548((struct Obj_02184548*)a);
        int fieldB0 = GetFieldB0_02184540((struct Obj_02184540*)a);
        *(int*)((char*)five + 0x34) = fieldB0;
        *(int*)((char*)five + 0x38) = fieldB4;
        data_ov004_021707e0[0x13]++;
        goto retTrue;
    }
notZero:
    if (flag == 1) {
        int counter = data_ov004_021707e4 - 1;
        data_ov004_021707e4 = counter;
        if (counter > 0) return 1;

        func_ov017_021b1e24(five, (int)list);
        if (!GetSubByteField439_021b2060((Obj24_021b2060*)five)) goto retTrue;
        if (GetSubByteField438_021b204c((Obj24_021b204c*)five)) {
            if (*(int*)((char*)actorRaw + 0x4000 + countOffset) == 0) {
                func_ov011_021848a0(a, 0x233d);
                return 0;
            }
        }
        if (GetSubByteField438_021b204c((Obj24_021b204c*)five)) goto retTrue;
        data_ov004_021707e0[0x13]++;
        func_ov011_021848a0(a, 0x385);
        return 0;
    }
retTrue:
    return 1;
}

struct PackedField017 {
    unsigned int low : 12;
    unsigned int f12 : 4;
    unsigned int f16 : 5;
    unsigned int f21 : 5;
    unsigned int top : 6;
};

extern "C" int func_ov017_021b213c(PackedField017 a, PackedField017 b);
void ReinitController02043204(char* obj);
extern "C" void func_ov023_021f65d4(void* obj, int a, int b);

// USA: func_ov004_021589e8
ARM int DispatchEventAndSetFlag_021589e8(void* obj) {
    char* battle = (char*)GameState::GetInstance() + R(0xc, 0x26c) + 0x5c00;
    PackedField017 a = *(PackedField017*)(battle + 0xf4);
    PackedField017 b = *(PackedField017*)(data_ov004_021707e0 + 0x18);
    if (func_ov017_021b213c(a, b) != 0) {
        char* g = (char*)GetGlobalField0x1c020421a0();
        ReinitController02043204(g);
        func_ov011_021848a0(obj, 0x387);
    } else {
        func_ov011_021848a0(obj, 0x3a2);
    }
    func_ov023_021f65d4(obj, 2, 8);
    return 0;
}

#if defined(jpn)
extern "C" char* func_020e207c(struct Container020e0310*, char*, int);
struct Obj02046574;
void SetIndexedName02046574(Obj02046574*, int, char*);
#endif

extern "C" void func_02046380(void* g);
struct Element020de650;
void* CallFunc020e52a0_020e5294(void*, int);
extern "C" int func_0202c540(void* p);
int CheckField0NonZero_0202b7d8(int* obj);

struct DownloadedRecord02158a60 {
    unsigned char unknown00[0xf8];
    short itemId;
    unsigned short unknownFA;
    unsigned char unknownFC[0x10];
    unsigned short flags : 13;
    unsigned short unknownFlags : 3;
    unsigned char unknown10E[2];
};

struct GameStateDownloadView02158a60 {
#if defined(jpn)
    unsigned char unknown00[0x5c0c];
#else
    unsigned char unknown00[0x5e6c];
#endif
    DownloadedRecord02158a60 downloaded;
};

// USA: func_ov004_02158a60  (semantic: SetupOrRejectAction_02158a60)
extern "C" ARM int func_ov004_02158a60(void* obj) {
    DownloadedRecord02158a60* downloaded = &((GameStateDownloadView02158a60*)GameState::GetInstance())->downloaded;
    short a = downloaded->itemId;
    if (a > 0 || downloaded->unknownFA != 0) {
        void* g = (void*)GetGlobalField0x1c020421a0();
        func_02046380(g);
        struct Container020dedd0* node = ((struct Container020dedd0*)func_ov004_02156fd4(obj, 5));
        struct Element020de650* elem = FindElementByKey020dedd0(node, downloaded->itemId);
#if defined(jpn)
        char name[80];
        func_020e207c((Container020e0310*)(((char*)data_ov004_021707e0) + 0x8c), name, *(short*)((char*)elem + 0x18));
        SetIndexedName02046574((Obj02046574*)g, 1, name);
#else
        int val = ((int)CallFunc020e52a0_020e5294(((char*)data_ov004_021707e0) + 0x8c, *(short*)((char*)elem + 0x18)));
        *(int*)((char*)g + 0x18) = val;
#endif
        func_ov011_021848a0(obj, 0x3a3);
        return 0;
    }

    void* s = func_0202ae18();
    if (func_0202c540(s) != 0) {
        func_ov011_021848a0(obj, 0x3ae);
        return 0;
    }
    if (CheckField0NonZero_0202b7d8((int*)s) != 0) {
        func_ov011_021848a0(obj, 0x24cd);
        return 0;
    }
    if (downloaded->flags & 0x10) {
        func_ov011_021848a0(obj, 0x3a6);
        return 0;
    }
    func_ov011_021848a0(obj, 0x3b0);
    return 0;
}

struct Field2a04_02158b78 { char pad[0xf6c]; int f0xf6c; };
extern "C" void* func_ov004_02156f38(void*, int);
extern "C" void* func_ov004_02156f6c(void*, int);
extern "C" int func_ov023_021f809c(void*, void*);

class VObj02158b78 {
public:
    virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03();
    virtual void v04(); virtual void v05(); virtual void v06(); virtual void v07();
    virtual void v08(); virtual void v09(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43();
    virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47();
    virtual void v48(); virtual void v49(); virtual void v50(); virtual void v51();
    virtual void v52(); virtual void v53(); virtual void v54(); virtual void v55();
    virtual void MethodE0(int a);
};

// USA: func_ov004_02158b78
ARM int Dispatch02158b78(void* self) {
    VObj02158b78* node = (VObj02158b78*)func_ov004_02156f38(self, 0xc9);
    if (node) {
        struct Field2a04_02158b78* fld = (struct Field2a04_02158b78*)GetPtrField0x2a04_02010828(GameState::GetInstance());
        node->MethodE0(fld->f0xf6c);
        void* x = func_ov004_02156f6c(self, 0x16);
        if (x) func_ov023_021f809c(x, self);
    }
    return 0;
}

int DispatchNodeIfType7_02156e2c(void* a, int key);
void* GetEntryFor_021570a4(void*, int);
extern "C" void* func_ov004_02157054(void*, int);

struct Obj021fbdf4;
void SetFieldThenTailCallOffset20_021fbdf4(Obj021fbdf4*, int);
void TailCallOffset20_021fbdcc(void*, int);
struct Element020de650 { unsigned int v[8]; };
void CallFunc021f6788ForIndexUnder3_021f6eb8(void* obj, int idx);
extern "C" int func_ov004_0215d738(void*);
void ClearNodeMaskById_021f6600(void*, int, int);
extern "C" int func_ov004_0215cec4(void*);
extern "C" int func_ov004_0215d384(void* a);
void CopyToSlot_021f6e90(char* obj, int idx, const void* src);

struct NibbleView_02158bd4 { char pad[8]; unsigned int nibble : 4; };

// USA: func_ov004_02158bd4
extern "C" ARM int func_ov004_02158bd4(void* obj) {
    int slotType = DispatchNodeIfType7_02156e2c(obj, 0x5b);
    if (slotType < 0) return 0;
    void* entry = GetEntryFor_021570a4(obj, (unsigned char)slotType);
    if (!entry) return 0;

    void* node2 = func_ov004_02156f6c(obj, 0x15);
    if (node2) {
        func_ov023_021f809c(node2, obj);
    }

    void* nodeX = func_ov004_02157054(obj, 7);
    if (nodeX) {
#if defined(jpn)
        if (data_ov004_021707e0[0xa8] == 0) {
#else
        if (data_ov004_021707e0[0x9c] == 0) {
#endif
            SetFieldThenTailCallOffset20_021fbdf4((Obj021fbdf4*)nodeX, -1);
#if defined(jpn)
            data_ov004_021707e0[0xa8] = 1;
#else
            data_ov004_021707e0[0x9c] = 1;
#endif
        }
        TailCallOffset20_021fbdcc(nodeX, *(short*)((char*)entry + 0));
    }

    void* container = (void*)func_ov004_02156fd4(obj, 5);
    if (!container) return 0;
    Element020de650* elem = FindElementByKey020dedd0((Container020dedd0*)container, *(short*)((char*)entry + 0));
    if (!elem) return 0;

    void* thing = func_ov011_021849c8(obj);
    CallFunc021f6788ForIndexUnder3_021f6eb8(thing, 0);

    char buf[0x16];
    VectorizedMemset(buf, 0, 0x16);
    *(short*)(buf + 0x14) = -1;
    *(short*)(buf + 0x12) = 0x384;

    int nibble = ((NibbleView_02158bd4*)elem)->nibble;
    switch (nibble) {
        case 8:
        case 9:
            func_ov004_0215d738(obj);
            func_ov023_021f65d4(obj, 0x17, 8);
            func_ov023_021f65d4(obj, 0x1b, 8);
            ClearNodeMaskById_021f6600(obj, 0x1c, 8);
            buf[0] = 3;
            *(short*)(buf + 2) = 0x15;
            *(short*)(buf + 4) = 0x1c;
            *(short*)(buf + 6) = 0x16;
            break;
        default:
            func_ov004_0215cec4(obj);
            func_ov004_0215d384(obj);
            ClearNodeMaskById_021f6600(obj, 0x17, 8);
            ClearNodeMaskById_021f6600(obj, 0x1b, 8);
            func_ov023_021f65d4(obj, 0x1c, 8);
            buf[0] = 4;
            *(short*)(buf + 2) = 0x15;
            *(short*)(buf + 4) = 0x17;
            *(short*)(buf + 6) = 0x1b;
            *(short*)(buf + 8) = 0x16;
            break;
    }

    CopyToSlot_021f6e90((char*)thing, 0, buf);
    return 0;
}

struct BattleMenuState02158dcc {
    char pad00[0xe];
    short selectedId;
    char pad10;
    unsigned char count;
    signed char field_0x12;
    char pad13[0x1e];
    unsigned char resetPos;
    char pad32[0x8];
    short level;
    char pad3c[0xb];
    unsigned char field_0x47;
    char pad48[0x44];
    unsigned char table[1];
};

struct Entry02158dcc {
    short id;
    short pad2;
    unsigned int count : 7;
    unsigned int cost : 25;
};

struct Element02158dcc {
    char pad[8];
    unsigned int kind : 4;
    char padc[0xc];
    short nameId;
};

struct Wallet02158dcc {
    char pad[0xf6c];
    unsigned int gold;
};

struct Message02158dcc {
    char pad[0x18];
    int name;
};

struct Marker02158dcc {
    char pad[0x2c];
    Vector3i pos;
};
struct Fields021849e0;
#if defined(jpn)
extern "C" char* func_020e207c(struct Container020e0310*, char*, int);
struct Obj02046574;
void SetIndexedName02046574(Obj02046574*, int, char*);
#else
void* CallFunc020e52a0_020e5294(void*, int);
#endif

extern "C" int func_ov004_0215799c(void*, int, unsigned int, int);
void SetFieldConditional_021849e0(struct Fields021849e0* obj, unsigned short val);
extern "C" int func_ov004_0215d6f8(void*);
extern "C" void* func_ov004_02156ed0(void*, int);
extern "C" void* __clear(void*, int);

// USA: func_ov004_02158dcc
extern "C" ARM int func_ov004_02158dcc(void* obj) {
    int key = DispatchNodeIfType7_02156e2c(obj, 0x5b);
    if (key < 0) return 0;
    Entry02158dcc* entry = ((Entry02158dcc*)GetEntryFor_021570a4(obj, (unsigned char)key));
    if (!entry) return 0;
    Element02158dcc* elem = ((Element02158dcc*)FindElementByKey020dedd0(((struct Container020dedd0*)func_ov004_02156fd4(obj, 5)), entry->id));
    if (!elem) return 0;
#if defined(jpn)
    char name[80];
    func_020e207c((Container020e0310*)(((BattleMenuState02158dcc*)data_ov004_021707e0)->table), name, elem->nameId);
    SetIndexedName02046574((Obj02046574*)((Message02158dcc*)GetGlobalField0x1c020421a0()), 1, name);
#else
    int name = ((int)CallFunc020e52a0_020e5294(((BattleMenuState02158dcc*)data_ov004_021707e0)->table, elem->nameId));
    ((Message02158dcc*)GetGlobalField0x1c020421a0())->name = name;
#endif
    if (entry->count == 0) return 0;

    Wallet02158dcc* wallet = (Wallet02158dcc*)GetPtrField0x2a04_02010828(GameState::GetInstance());
    if (func_ov004_0215799c(wallet, entry->id, elem->kind, ((BattleMenuState02158dcc*)data_ov004_021707e0)->level) == 0) {
        SetFieldConditional_021849e0((struct Fields021849e0*)obj, 0);
        func_ov011_021848a0(obj, 0x236b);
        return 0;
    }
    if (wallet->gold < entry->cost) {
        SetFieldConditional_021849e0((struct Fields021849e0*)obj, 0);
        func_ov011_021848a0(obj, 0x2365);
        return 0;
    }

    func_ov011_021848a0(obj, 0x5e);
    ((BattleMenuState02158dcc*)data_ov004_021707e0)->selectedId = entry->id;
    ((BattleMenuState02158dcc*)data_ov004_021707e0)->count = 1;
    ((BattleMenuState02158dcc*)data_ov004_021707e0)->field_0x12 = -1;
    ((BattleMenuState02158dcc*)data_ov004_021707e0)->field_0x47 = 0;
    if (entry->count == 1 || (entry->cost <= wallet->gold && wallet->gold < entry->cost * 2)) {
        SetFieldConditional_021849e0((struct Fields021849e0*)obj, 0);
        func_ov004_0215d6f8(obj);
    }
    func_ov023_021f65d4(obj, 0x35, 0x18);
    func_ov023_021f65d4(obj, 0x34, 0x10);
    if (((BattleMenuState02158dcc*)data_ov004_021707e0)->resetPos) {
        Marker02158dcc* marker = ((Marker02158dcc*)func_ov004_02156ed0(obj, 0x5b));
        Vector3i zero;
        __clear(&zero, sizeof(zero));
        Vector3i tmp = zero;
        marker->pos = tmp;
        ((BattleMenuState02158dcc*)data_ov004_021707e0)->resetPos = 0;
    }
    return 0;
}

struct ItemNode02158fec {
    virtual void slot_0();
    virtual void slot_1();
    virtual void slot_2();
    virtual void slot_3();
    virtual void slot_4();
    virtual void slot_5();
    virtual void slot_6();
    virtual void slot_7();
    virtual void slot_8();
    virtual void slot_9();
    virtual void slot_10();
    virtual void slot_11();
    virtual void slot_12();
    virtual void slot_13();
    virtual void slot_14();
    virtual void slot_15();
    virtual void slot_16();
    virtual void slot_17();
    virtual void slot_18();
    virtual void slot_19();
    virtual void slot_20();
    virtual void slot_21();
    virtual void slot_22();
    virtual void slot_23();
    virtual void slot_24();
    virtual void slot_25();
    virtual void slot_26();
    virtual void slot_27();
    virtual void slot_28();
    virtual void slot_29();
    virtual void slot_30();
    virtual void slot_31();
    virtual void slot_32();
    virtual void slot_33();
    virtual void slot_34();
    virtual void slot_35();
    virtual void slot_36();
    virtual void slot_37();
    virtual void slot_38();
    virtual void slot_39();
    virtual void slot_40();
    virtual void slot_41();
    virtual void slot_42();
    virtual void slot_43();
    virtual void slot_44();
    virtual void slot_45();
    virtual void slot_46();
    virtual void slot_47();
    virtual void slot_48();
    virtual void slot_49();
    virtual void slot_50();
    virtual void slot_51();
    virtual void slot_52();
    virtual void slot_53();
    virtual void setStyle(int);
    virtual void slot_55();
    virtual void setValue(unsigned int);
    char unknown_4[8];
    unsigned char flags;
    char unknown_d[0x20 - 0xd];
    void* value;
};
struct Grid021f9b30 {
    char unknown_0[0x2c];
    Vector3i position;
    char unknown_38[0x5c - 0x38];
    short page, pages;
};
struct Entry02158fec {
    short id;
    short unknown_2;
    unsigned int count : 7;
    unsigned int cost : 25;
};
struct Element020de650_02158fec {
    unsigned int field_0;
    void* value;
    unsigned int kind : 4;
    unsigned int variant : 5;
    unsigned int unknown_9 : 23;
};
struct BattleMenuState02158fec {
    char unknown_0[0x31];
    unsigned char resetPosition;
};
struct RoleTable02158fec { unsigned char indices[9]; };
extern const RoleTable02158fec data_ov004_0216fb28 __attribute__((aligned(4)));
extern const Vector3i data_ov004_0216fb34;
extern "C" void* func_ov004_02156f04(void*, int);
extern "C" void func_ov023_021fb27c(void*, int);
int SetCellIfInBounds_021f9b30(struct Grid021f9b30*, short, unsigned int, unsigned int);
extern "C" int func_ov004_02158bd4(void*);

// USA: func_ov004_02158fec
extern "C" ARM int func_ov004_02158fec(void* object) {
    int textId = 0x12c;
    int secondaryId = textId + 6;
    int nameId = 0x138;
    int countId = nameId + 6;
    int costId = 0x144;
    Grid021f9b30* grid = ((Grid021f9b30*)func_ov004_02156ed0(object, 0x5b));
    if (grid->pages <= 1) {
        grid->page = 0;
        grid->pages = 1;
    }
    Container020dedd0* container = ((Container020dedd0*)func_ov004_02156fd4(object, 5));
    if (!container) return 0;
    RoleTable02158fec roles = data_ov004_0216fb28;
    for (unsigned char i = 0; i < 6; i++) {
        Entry02158fec* entry = ((Entry02158fec*)GetEntryFor_021570a4(object, i));
        if (entry) {
            int style = 15;
            if (entry->count == 0) style = 3;
            if (entry->id > 0) {
                ItemNode02158fec* text = ((ItemNode02158fec*)func_ov004_02156f04(object, textId));
                if (text) {
                    Element020de650_02158fec* element = ((Element020de650_02158fec*)FindElementByKey020dedd0(container, entry->id));
                    if (element) {
                        text->value = element->value;
                        ItemNode02158fec* icon = ((ItemNode02158fec*)func_ov004_02156fa0(object, i + 0x14a));
                        if (element->kind == 0) {
                            if (icon) func_ov023_021fb27c(icon, (unsigned short)(element->variant + 0x26));
                        } else {
                            if (icon) func_ov023_021fb27c(icon, (unsigned short)(roles.indices[element->kind] + 9));
                        }
                    }
                    text->setStyle(style);
                }
                ItemNode02158fec* secondary = ((ItemNode02158fec*)func_ov004_02156f04(object, secondaryId));
                if (secondary) secondary->setStyle(style);
                ItemNode02158fec* name = ((ItemNode02158fec*)func_ov004_02156f04(object, nameId));
                if (name) name->setStyle(style);
                ItemNode02158fec* amount = ((ItemNode02158fec*)func_ov004_02156f38(object, countId));
                if (amount) {
                    amount->setValue(entry->count);
                    amount->setStyle(style);
                }
                ItemNode02158fec* cost = ((ItemNode02158fec*)func_ov004_02156f38(object, costId));
                if (cost) {
                    cost->setValue(entry->cost);
                    cost->setStyle(style);
                }
            } else {
                ItemNode02158fec* text = ((ItemNode02158fec*)func_ov004_02156f04(object, textId));
                if (text) text->flags |= 8;
                ItemNode02158fec* secondary = ((ItemNode02158fec*)func_ov004_02156f04(object, secondaryId));
                if (secondary) secondary->flags |= 8;
                ItemNode02158fec* name = ((ItemNode02158fec*)func_ov004_02156f04(object, nameId));
                if (name) name->flags |= 8;
                ItemNode02158fec* amount = ((ItemNode02158fec*)func_ov004_02156f38(object, countId));
                if (amount) amount->flags |= 8;
                ItemNode02158fec* cost = ((ItemNode02158fec*)func_ov004_02156f38(object, costId));
                if (cost) cost->flags |= 8;
                SetCellIfInBounds_021f9b30(grid, 0, i, 0);
                ItemNode02158fec* icon = ((ItemNode02158fec*)func_ov004_02156fa0(object, i + 0x14a));
                if (icon) icon->flags |= 8;
            }
        }
        textId++;
        secondaryId++;
        nameId++;
        countId++;
        costId++;
    }
    func_ov004_02158bd4(object);
    if (((BattleMenuState02158fec*)data_ov004_021707e0)->resetPosition == 0) {
        Vector3i position = data_ov004_0216fb34;
        grid->position = position;
        ((BattleMenuState02158fec*)data_ov004_021707e0)->resetPosition = 0;
    }
    return 0;
}

class VObj02159384 {
public:
	virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03();
	virtual void v04(); virtual void v05(); virtual void v06(); virtual void v07();
	virtual void v08(); virtual void v09(); virtual void v10(); virtual void v11();
	virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
	virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
	virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
	virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
	virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
	virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
	virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43();
	virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47();
	virtual void v48(); virtual void v49(); virtual void v50(); virtual void v51();
	virtual void v52(); virtual void v53(); virtual void v54(); virtual void v55();
	virtual void NotifyCount(int n);
};

// USA: func_ov004_02159384
ARM int NotifyCountedEvents_02159384(void* self) {
	int b = DispatchNodeIfType7_02156e2c(self, 0x5b);
	if (b < 0) return 0;
	void* entry = GetEntryFor_021570a4(self, (unsigned char)b);
	if (!entry) return 0;

	VObj02159384* node1 = (VObj02159384*)func_ov004_02156f38(self, 0x25a);
	if (node1) {
		node1->NotifyCount(data_ov004_021707e0[0x11]);
	}

	VObj02159384* node2 = (VObj02159384*)func_ov004_02156f38(self, 0x2bd);
	if (node2) {
		unsigned int field4 = *(unsigned int*)((char*)entry + 4);
		node2->NotifyCount(data_ov004_021707e0[0x11] * (field4 >> 7));
	}

	void* node3 = func_ov004_02156f6c(self, 0x19);
	if (node3) func_ov023_021f809c(node3, self);

	void* node4 = func_ov004_02156f6c(self, 0x1a);
	if (node4) func_ov023_021f809c(node4, self);

	return 0;
}

// USA: func_ov004_02159468
ARM int ReturnZero_02159468(void) {
    return 0;
}
extern "C" int func_020dcc98(signed char);

class VObj02159470 {
public:
    virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03();
    virtual void v04(); virtual void v05(); virtual void v06(); virtual void v07();
    virtual void v08(); virtual void v09(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43();
    virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47();
    virtual void v48(); virtual void v49(); virtual void v50(); virtual void v51();
    virtual void v52(); virtual void v53();
    virtual void Handle(int v);
    int pad4[7];
    void* field0x20;
};

// USA: func_ov004_02159470  (semantic: DispatchFlagsWithCombatant_02159470)
extern "C" ARM int func_ov004_02159470(void* self) {
    GameState* battle = GameState::GetInstance();
    GetPtrField0x2a04_02010828(battle);
    char* ptr = ((char*)data_ov004_021707e0);
    unsigned char count = (unsigned char)(*(short*)(ptr + 0x3a));
    int key = 0x322;
    for (unsigned char i = 0; i < count; key++, i++) {
        signed char idVal = GetFlagByte_021570f0(i);
        GameObject* c = battle->GetPartyMemberByIndex(idVal);
        if (!c) continue;
        VObj02159470* node = (VObj02159470*)func_ov004_02156f04(self, key);
        if (!node) continue;
        node->field0x20 = c->baseStats_;
        int v = func_020dcc98(idVal);
        node->Handle(v);
    }
    return 0;
}

#if defined(jpn)
enum { combatantArrayPointerOffset = 0x144 };
#else
enum { combatantArrayPointerOffset = 0x150 };
#endif

extern unsigned char data_ov004_0216fb10[8];

struct Elem0215951c {
    int f0;
    void* f4;
    unsigned int type : 4;
    unsigned int f8rest : 28;
    char pad[0xc];
    short f18;
    char pad2[6];
};

class VObj0215951c {
public:
    virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03();
    virtual void v04(); virtual void v05(); virtual void v06(); virtual void v07();
    virtual void v08(); virtual void v09(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43();
    virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47();
    virtual void v48(); virtual void v49(); virtual void v50(); virtual void v51();
    virtual void v52(); virtual void v53();
    virtual void Dispatch54(int n);
    int pad4[7];
    void* field0x20;
};

// USA: func_ov004_0215951c  (semantic: DispatchCombatantBufferEntries_0215951c)
extern "C" ARM int func_ov004_0215951c(void* obj) {
    signed char flag = func_ov004_02157128(obj);
    GameState* battle = GameState::GetInstance();
    GameObject* c = GetCombatantWithFlag0x100_0200ff1c(battle, flag);
    if (!c) return 0;

    unsigned char* fieldPtr = data_ov004_021707e0;
    fieldPtr[0x12] = (unsigned char)flag;

    unsigned char buf[8];
    int n = 8;
    unsigned char* dst = buf;
    unsigned char* src = data_ov004_0216fb10;
    do {
        unsigned char v = *src;
        src++;
        *dst = v;
        dst++;
    } while (--n);

    int key = 0x384;
    for (short i = 0; i < 8; key++, i++) {
        int dispatchArg = 3;
        void* ptr9 = 0;
        int idx = buf[i];
        if (idx != 0xff) {
            Elem0215951c* arr = (Elem0215951c*)(*(char**)((char*)c + combatantArrayPointerOffset) + 0x194);
            Elem0215951c* e = &arr[idx];
            if (e) {
                if (e->f18 > 0) {
                    unsigned int type = e->type;
                    if (type == 0xb) goto skip;
                    ptr9 = e->f4;
                    if (!ptr9) goto skip;
                    if (*(signed char*)ptr9 != 0) dispatchArg = 0xf;
                    else ptr9 = 0;
                }
            }
        }
    skip:
        VObj0215951c* node = (VObj0215951c*)func_ov004_02156f04(obj, key);
        if (node) {
            node->field0x20 = ptr9;
            node->Dispatch54(dispatchArg);
        }
    }

    void* node2 = func_ov004_02156f6c(obj, 0x16);
    if (node2) {
        func_ov023_021f809c(node2, obj);
    }
    return 0;
}

#if defined(jpn)
extern "C" char* func_020e207c(struct Container020e0310*, char*, int);
struct Obj02046574;
void SetIndexedName02046574(Obj02046574*, int, char*);
#endif

struct CombatantSelection {
    unsigned char unknown00[0x12];
    signed char partyIndex;

    signed char GetPartyIndex() const { return partyIndex; }
};

struct Entry_021570a4 { short field0; unsigned int field4; };

struct Element020de650_02159650 { int field0; char pad2[4]; int field8; char pad3[0xc]; short field18; };

void InitObjFromCombatantId020e4bf4(void* obj, int combatantId);

int CallFunc020e0434With02153694_020e51cc(int value);
extern "C" void func_020e4b34(void* obj, int stats1, int stats2, int a, int b, int c, int d, int e, int f, int g, int h, int i);
int GetHalfwordEntryFromField150(struct Field150Holder02052df8* obj, int index);

struct Table9x_02159650 { unsigned int v[9]; };
extern struct Table9x_02159650 data_ov004_0216fbb0;

struct Ctx_02159650 { char pad[8]; unsigned int idx4 : 4; unsigned int rest : 28; };
struct Field8Bits_02159650 { unsigned int low18 : 18; unsigned int bit18 : 1; unsigned int high13 : 13; };

// USA: func_ov004_02159650  (semantic: PopulateCombatantContextFields_02159650)
extern "C" ARM int func_ov004_02159650(void* obj) {
    int g = GetGlobalField0x1c020421a0();
    func_02046380((void*)g);

    struct Container020dedd0* node = ((struct Container020dedd0*)func_ov004_02156fd4(obj, 5));

    struct Element020de650_02159650* elem = 0;
    struct Entry_021570a4* entry = 0;

    int idx = DispatchNodeIfType7_02156e2c(obj, 0x5b);
    if (idx >= 0) {
        entry = (struct Entry_021570a4*)GetEntryFor_021570a4(obj, idx & 0xff);
        if (entry != 0 && node != 0) {
            elem = ((struct Element020de650_02159650*)FindElementByKey020dedd0(node, entry->field0));
        }
    }

    signed char combatantId = ((CombatantSelection*)data_ov004_021707e0)->GetPartyIndex();
    GameObject* combatant = GameState::GetInstance()->GetPartyMemberByIndex(combatantId);

    if (combatant != 0) {
#if defined(jpn)
        SetIndexedName02046574((Obj02046574*)g, 0, (char*)combatant->baseStats_);
#else
        InitObjFromCombatantId020e4bf4(data_ov004_021707e0 + 0xa0, combatantId);
        *(void**)((char*)g + 0x10) = data_ov004_021707e0 + 0xa0;

        void* p150 = *(void**)((char*)combatant + 0x150);
        int statVal = (short)(*(int*)((char*)p150 + 0x950));
        int fmt = CallFunc020e0434With02153694_020e51cc(statVal);
        func_020e4b34(data_ov004_021707e0 + 0xac, fmt, fmt, 0, 0, 0, 0, 0, 0, 0, 0, 0);
        *(void**)((char*)g + 0x28) = data_ov004_021707e0 + 0xac;
#endif
    }

    if (elem != 0) {
#if defined(jpn)
        char name[80];
        func_020e207c((Container020e0310*)(data_ov004_021707e0 + 0x8c), name, elem->field18);
        SetIndexedName02046574((Obj02046574*)g, 1, name);
#else
        int val = ((int)CallFunc020e52a0_020e5294(data_ov004_021707e0 + 0x8c, elem->field18));
        *(int*)((char*)g + 0x18) = val;
#endif
    }

    if (combatant != 0 && elem != 0 && elem->field0 != 0) {
        struct Ctx_02159650* ctxElem = (struct Ctx_02159650*)elem;
        unsigned int nibble = ctxElem->idx4;
        int inRange = nibble <= 7;
        if (inRange) {
            struct Table9x_02159650 table = data_ov004_0216fbb0;
            int half = GetHalfwordEntryFromField150((struct Field150Holder02052df8*)combatant, table.v[nibble]);
            if (half > 0) {
                struct Element020de650_02159650* elem2 = ((struct Element020de650_02159650*)FindElementByKey020dedd0(node, half));
                if (elem2 != 0 && ((struct Field8Bits_02159650*)&elem2->field8)->bit18 != 0) {
#if defined(jpn)
                    SetIndexedName02046574((Obj02046574*)g, 2, *(char**)((char*)elem2 + 4));
#else
                    int val2 = ((int)CallFunc020e52a0_020e5294(data_ov004_021707e0 + 0x8c, half));
                    *(int*)((char*)g + 0x18) = val2;
#endif
                }
            }
        }
    }

    if (entry != 0) {
        StoreInArray0x8b0_020465c0((struct StoreStruct*)g, 0, data_ov004_021707e0[0x11] * (entry->field4 >> 7));
    }

    StoreInArray0x8b0_020465c0((struct StoreStruct*)g, 1, data_ov004_021707e0[0x11]);
    return 0;
}
void CallVTableFnAt240_021f66bc(void* a, int key, void* arg3);
int NotifyCountedEvents_02159384(void* self);

struct EntryStruct02159888 { short field0; short pad2; unsigned int field4 : 7; };
struct Element020de650_02159888 { char pad[8]; unsigned int field8 : 4; };

// USA: func_ov004_02159888  (semantic: TryConsumeEntryAndDispatch_02159888)
extern "C" ARM int func_ov004_02159888(void* obj) {
    int key = DispatchNodeIfType7_02156e2c(obj, 0x5b);
    if (key < 0) return 0;

    EntryStruct02159888* entry = (EntryStruct02159888*)GetEntryFor_021570a4(obj, (unsigned char)key);
    if (!entry) return 0;

    if (data_ov004_021707e0[0x11] >= entry->field4) return 0;

    void* ptr2a04 = GetPtrField0x2a04_02010828(GameState::GetInstance());
    unsigned int cap = *(unsigned int*)((char*)entry + 4) >> 7;
    if (*(unsigned int*)((char*)ptr2a04 + 0xf6c) < (data_ov004_021707e0[0x11] + 1) * cap) return 0;

    struct Container020dedd0* node = ((struct Container020dedd0*)func_ov004_02156fd4(obj, 5));
    if (!node) return 0;

    struct Element020de650_02159888* elem = ((struct Element020de650_02159888*)FindElementByKey020dedd0(node, *(short*)(data_ov004_021707e0 + 0xe)));
    if (!elem) return 0;

    unsigned int r = ((unsigned int)func_ov004_0215799c(ptr2a04, entry->field0, (int)elem->field8, *(short*)(data_ov004_021707e0 + 0x3a)));
    if (data_ov004_021707e0[0x11] >= r) return 0;

    data_ov004_021707e0[0x11] = data_ov004_021707e0[0x11] + 1;
    CallVTableFnAt240_021f66bc(obj, 0x25b, (void*)1);
    NotifyCountedEvents_02159384(obj);
    return 0;
}

// USA: func_ov004_021599b4  (semantic: DecrementCounterAndNotify_021599b4)
extern "C" ARM int func_ov004_021599b4(void* obj) {
    int key = DispatchNodeIfType7_02156e2c(obj, 0x5b);
    if (key < 0) {
        return 0;
    }
    void* entry = GetEntryFor_021570a4(obj, (unsigned char)key);
    if (!entry) {
        return 0;
    }
    unsigned char* p = data_ov004_021707e0;
    unsigned char val = p[0x11];
    if (val <= 1) {
        return 0;
    }
    p[0x11] = val - 1;
    CallVTableFnAt240_021f66bc(obj, 0x25c, (void*)1);
    NotifyCountedEvents_02159384(obj);
    return 0;
}

#if defined(jpn)
#define data_ov004_0216fb50 data_ov004_021702d8
#define func_ov004_02159bcc func_ov004_0215ac28
#endif

struct Battle021707d8 { char pad[0x32]; short members[4]; short memberCount; };

struct MemberIds { int ids[4]; };
extern MemberIds data_ov004_0216fb50;
struct Element020de650_02159a2c { char pad[8]; unsigned int field8 : 4; };
extern "C" int func_020dd4c4(int, struct Entry020dd4c4*);
extern "C" int func_ov004_02159bcc(void* obj);

// USA: func_ov004_02159a2c
extern "C" ARM int func_ov004_02159a2c(void* obj) {
    int i;
    GameState::GetInstance();
    int key = DispatchNodeIfType7_02156e2c(obj, 0x5b);
    if (key < 0) return 0;
    void* entry = GetEntryFor_021570a4(obj, key & 0xff);
    if (!entry) return 0;
    struct Container020dedd0* node = ((struct Container020dedd0*)func_ov004_02156fd4(obj, 5));
    if (!node) return 0;
    struct Element020de650_02159a2c* elem = ((struct Element020de650_02159a2c*)FindElementByKey020dedd0(node, *(short*)entry));
    if (!elem) return 0;

    int ok = elem->field8 <= 7;
    if (ok) {
        MemberIds members = data_ov004_0216fb50;
        Battle021707d8* battle = ((Battle021707d8*)data_ov004_021707e0);
        int count = battle->memberCount;
        for (i = 0; i < count; i++) {
            members.ids[i] = battle->members[i];
        }
        int j;
        for (j = 0; j < count; j++) {
            if (!func_020dd4c4((signed char)members.ids[j], (Entry020dd4c4*)elem)) break;
        }
        if (j == count) {
            func_ov004_02159bcc(obj);
        } else {
            func_ov011_021848a0(obj, 0x38b);
        }
    } else {
        func_ov011_021848a0(obj, 0x2384);
    }
    return 0;
}

#undef data_ov004_0216fb50
#undef func_ov004_02159bcc

// USA: func_ov004_02159b74  (semantic: SetOv011FieldTo_02159b74)
extern "C" ARM int func_ov004_02159b74(void* obj) {
    func_ov011_021848a0(obj, 0x2368);
    return 0;
}

// USA: func_ov004_02159b8c
ARM int EnqueueEventFromFlagByte_02159b8c(void* obj) {
    GetPtrField0x2a04_02010828(GameState::GetInstance());
    short v = *(short*)(((char*)data_ov004_021707e0) + 0x3a);
    int arg = 0x38d;
    arg += v & 0xff;
    func_ov011_021848a0(obj, arg);
    return 0;
}

#if defined(jpn)
#define func_ov004_02159bcc func_ov004_0215ac28
#endif

struct KeyedStackContext {
    SafeAllocator allocator;
    unsigned char state14[0x18];
    Container020dedd0* container;
    void* field30;
    int field34;
};
void* ZeroInitReturn020de824(void* obj);
void InitStruct0207cbe8(char* obj);
void InitStruct0207cc0c(char* obj);
extern "C" int func_0207d134(struct Obj0207d134*, short, int);

// USA: func_ov004_02159bcc  (semantic: SetupCombatMessageAndDispatch_02159bcc)
extern "C" ARM int func_ov004_02159bcc(void* obj) {
#if !defined(jpn)
    struct Container020dedd0* node = ((struct Container020dedd0*)func_ov004_02156fd4(obj, 5));
    if (node == NULL) return 0;
    struct Element020de650* elem = FindElementByKey020dedd0(node, *(short*)(((char*)data_ov004_021707e0) + 0xe));
    if (elem == NULL) return 0;
    int val = ((int)CallFunc020e52a0_020e5294(((char*)data_ov004_021707e0) + 0x8c, *(short*)((char*)elem + 0x18)));
    *(int*)((char*)(int)GetGlobalField0x1c020421a0() + 0x18) = val;
    ((char*)data_ov004_021707e0)[0x12] = (char)0xff;
#endif
    if (*(unsigned char*)(((char*)data_ov004_021707e0) + 0x47) == 0) {
        Container020dedd0* node2 = ((struct Container020dedd0*)func_ov004_02156fd4(obj, 5));
        if (node2 != NULL) {
            KeyedStackContext context;
            context.allocator.ResetAllocatorPointer();
            ZeroInitReturn020de824(context.state14);
            InitStruct0207cbe8((char*)&context);
            InitStruct0207cbe8((char*)&context);
            context.container = node2;
            func_0207d134((Obj0207d134*)(&context), *(short*)(((char*)data_ov004_021707e0) + 0xe), *(signed char*)(((char*)data_ov004_021707e0) + 0x11));
            InitStruct0207cc0c((char*)&context);
        }
        func_ov011_021848a0(obj, 0x38c);
        ((char*)data_ov004_021707e0)[R(0xa9, 0x9d)] = 0;
        return 0;
    }
    func_ov011_021848a0(obj, 0x2379);
    return 0;
}

#undef func_ov004_02159bcc

extern "C" void func_020dd7ac(void* buf);
void Setup020ddaf4(int a, int b, int c, int d, int e, int f);
void SetFieldThenTailCallOffset20_021fbdf4(struct Obj021fbdf4* obj, int v);

typedef void (*FuncPtrE0_02159ce0)(void*, int);
struct HandlerE0_02159ce0 { char pad[0xe0]; FuncPtrE0_02159ce0 func; };
struct NodeE0_02159ce0 { HandlerE0_02159ce0* handler; };

typedef void (*FuncPtrD8_02159ce0)(void*, int);
struct HandlerD8_02159ce0 { char pad[0xd8]; FuncPtrD8_02159ce0 func; };
struct NodeD8_02159ce0 { HandlerD8_02159ce0* handler; };

struct NodeInt20_02159ce0 { char pad[0x20]; int field20; };
struct NodeShort38_02159ce0 { char pad[0x38]; short field38; };

struct ElemNibble_02159ce0 { unsigned int nibble : 4; unsigned int rest : 28; };

// USA: func_ov004_02159ce0
extern "C" ARM int func_ov004_02159ce0(void* a) {
    int idxVal = func_ov004_02157128(a);
    Container020dedd0* node = (Container020dedd0*)((void*)func_ov004_02156fd4(a, 5));
    if (!node) return 0;

    short key = *(short*)(data_ov004_021707e0 + 0xe);
    Element020de650* elem = FindElementByKey020dedd0(node, key);
    if (!elem) return 0;

    MessageSlotTable_020dd7ac bufC;
    func_020dd7ac(&bufC);
    int typeCode = 1;
    unsigned int nibble = ((ElemNibble_02159ce0*)((char*)elem + 8))->nibble;

    unsigned short valA, valB;
    if (nibble == 0) {
        Setup020ddaf4((int)&bufC, idxVal, (int)elem, 0, (int)&valA, (int)&valB);
    } else {
        Setup020ddaf4((int)&bufC, idxVal, (int)elem, typeCode, (int)&valA, (int)&valB);
        typeCode = 3;
    }

    NodeInt20_02159ce0* n3e8 = (NodeInt20_02159ce0*)func_ov004_02156f04(a, 0x3e8);
    if (n3e8) n3e8->field20 = *(int*)((char*)elem + 4);

    NodeShort38_02159ce0* n3ea = (NodeShort38_02159ce0*)func_ov004_02156f04(a, 0x3ea);
    if (n3ea) n3ea->field38 = (short)(typeCode + 0xb);

    if (func_020dd4c4((int)((void*)idxVal), (Entry020dd4c4*)elem) != 0) {
        func_ov023_021f65d4(a, 0x3eb, 8);
        func_ov023_021f65d4(a, 0x3ec, 8);
        func_ov023_021f65d4(a, 0x3ed, 8);
        ClearNodeMaskById_021f6600(a, 0x3ee, 8);
    } else {
        NodeE0_02159ce0* h3eb = (NodeE0_02159ce0*)func_ov004_02156f38(a, 0x3eb);
        if (h3eb) h3eb->handler->func(h3eb, valA);

        NodeE0_02159ce0* h3ed = (NodeE0_02159ce0*)func_ov004_02156f38(a, 0x3ed);
        if (h3ed) h3ed->handler->func(h3ed, valB);

        NodeD8_02159ce0* d3eb = (NodeD8_02159ce0*)func_ov023_021f6880((void**)(func_ov011_021849c8(a)), 0x3eb);
        if (d3eb) d3eb->handler->func(d3eb, 0xf);

        if (valA == valB) {
            NodeD8_02159ce0* d3ed = (NodeD8_02159ce0*)func_ov023_021f6880((void**)(func_ov011_021849c8(a)), 0x3ed);
            if (d3ed) d3ed->handler->func(d3ed, 0xf);
        } else if (valA < valB) {
            NodeD8_02159ce0* d3ed = (NodeD8_02159ce0*)func_ov023_021f6880((void**)(func_ov011_021849c8(a)), 0x3ed);
            if (d3ed) d3ed->handler->func(d3ed, 0x5);
        } else {
            NodeD8_02159ce0* d3ed = (NodeD8_02159ce0*)func_ov023_021f6880((void**)(func_ov011_021849c8(a)), 0x3ed);
            if (d3ed) d3ed->handler->func(d3ed, 0x9);
        }

        ClearNodeMaskById_021f6600(a, 0x3eb, 8);
        ClearNodeMaskById_021f6600(a, 0x3ec, 8);
        ClearNodeMaskById_021f6600(a, 0x3ed, 8);
        func_ov023_021f65d4(a, 0x3ee, 8);
    }

    NodeE0_02159ce0* n17 = (NodeE0_02159ce0*)func_ov004_02156f6c(a, 0x17);
    if (n17) func_ov023_021f809c(n17, a);

    void* n7 = func_ov004_02157054(a, 7);
    if (n7) {
        SetFieldThenTailCallOffset20_021fbdf4((Obj021fbdf4*)n7, idxVal);
#if defined(jpn)
        data_ov004_021707e0[0xa8] = 0;
#else
        data_ov004_021707e0[0x9c] = 0;
#endif
    }

    return 0;
}

extern "C" int func_ov004_0215951c(void*);
extern "C" int func_ov004_02159ce0(void*);

// USA: func_ov004_02159fb0
ARM int RunTwoSteps_02159fb0(int a) {
    func_ov004_0215951c((void*)a);
    func_ov004_02159ce0((void*)a);
    return 0;
}

struct ActionFlags { unsigned int low : 27; unsigned int enabled0 : 1; unsigned int enabled1 : 1; unsigned int disabled : 1; unsigned int high : 2; };
struct ActionNode { int field0; ActionFlags flags; };
struct ActionEntry { ActionNode* node; void* field4; unsigned int type : 4; unsigned int rest : 14; unsigned int marked : 1; unsigned int high : 13; char pad[12]; short value; char tail[6]; };
struct ActionExtension { char pad[0x194]; ActionEntry entries[24]; char tail[8]; unsigned char selection : 1; unsigned char rest : 7; };
#if defined(jpn)
enum { actionsOffset = 0x144, controllerSize = 0x1c };
#else
enum { actionsOffset = 0x150, controllerSize = 0x10 };
#endif
struct CombatantActions { char pad[actionsOffset]; ActionExtension* extension; };
struct BattleActionState { char pad[0xe]; short key; char pad10[0x2c]; short combatant; char pad3e[0x4e]; char controller[controllerSize]; unsigned char active; };
struct ActionKeys { int keys[9]; };
struct ActionIndices { unsigned char indices[8]; };
struct GlobalController { char pad[0x18]; void* selected; };
extern ActionKeys data_ov004_0216fbf8;
extern ActionIndices data_ov004_0216fb18;
extern "C" int func_ov004_02159650(void*);
#if defined(jpn)
struct Container020e0310;
extern "C" char* func_020e207c(struct Container020e0310*, char*, int);
struct Obj02046574;
void SetIndexedName02046574(Obj02046574*, int, char*);
#endif

extern "C" int func_ov004_02157a28(void*, int);

static inline ActionExtension* GetActions(CombatantActions* combatant) { return combatant->extension; }

// USA: func_ov004_02159fcc
extern "C" ARM int func_ov004_02159fcc(void* obj) {
    int flag = func_ov004_02157128(obj);
    ((BattleActionState*)data_ov004_021707e0)->combatant = flag;
    func_0202ae18();
    GameObject* combatant = GetCombatantWithFlag0x100_0200ff1c(GameState::GetInstance(), flag);
    if (!combatant) return 0;
    Container020dedd0* container = ((Container020dedd0*)func_ov004_02156fd4(obj, 5));
    if (!container) return 0;
    ActionEntry* entry = ((ActionEntry*)FindElementByKey020dedd0(container, ((BattleActionState*)data_ov004_021707e0)->key));
    if (!entry) return 0;
    unsigned int type = entry->type;
    if (func_020dd4c4(flag, (Entry020dd4c4*)entry)) {
        func_ov011_021848a0(obj, 0x392);
        return 0;
    }
    ActionKeys keys = data_ov004_0216fbf8;
    int key = GetHalfwordEntryFromField150((Field150Holder02052df8*)combatant, keys.keys[entry->type]);
    if (key > 0) {
        ActionEntry* selected = ((ActionEntry*)FindElementByKey020dedd0(container, key));
        if (selected && selected->marked) {
            func_ov004_02159650(obj);
            GlobalController* controller = ((GlobalController*)GetGlobalField0x1c020421a0());
#if defined(jpn)
            char name[80];
            func_020e207c((Container020e0310*)((BattleActionState*)data_ov004_021707e0)->controller, name, selected->value);
            SetIndexedName02046574((Obj02046574*)controller, 1, name);
#else
            controller->selected = CallFunc020e52a0_020e5294(((BattleActionState*)data_ov004_021707e0)->controller, selected->value);
#endif
            func_ov011_021848a0(obj, 0x23b6);
            return 0;
        }
    }
    if (type == 7 && GetHalfwordEntryFromField150((Field150Holder02052df8*)combatant, 9) == 0x4680) {
        int unavailable;
        if (!combatant) unavailable = 0;
        else {
            ActionIndices indices = data_ov004_0216fb18;
            unsigned char flags[2];
            for (unsigned char i = 0; i < 8; i++) {
                unsigned char index = indices.indices[i];
                if (index == 0xff) break;
                ActionEntry* action;
                ActionExtension* extension = GetActions((CombatantActions*)combatant);
                action = &extension->entries[index];
                if (action && action->value >= 0) {
                    ActionNode* node = action->node;
                    if (node && !node->flags.disabled) {
                        unsigned int enabled = node->flags.enabled0 ? 1 : 0;
                        flags[0] = enabled;
                        flags[1] = node->flags.enabled1 ? 1 : 0;
                        if (!flags[extension->selection]) {
                            unavailable = 1;
                            goto checked;
                        }
                    }
                }
            }
            unavailable = 0;
        }
    checked:
        if (unavailable) {
            func_ov011_021848a0(obj, 0x23b5);
            return 0;
        }
    }
    Obj021fbdf4* node = ((Obj021fbdf4*)func_ov004_02157054(obj, 7));
    if (node) {
        SetFieldThenTailCallOffset20_021fbdf4(node, -1);
        ((BattleActionState*)data_ov004_021707e0)->active = 1;
    }
    return func_ov004_02157a28(obj, 0);
}
void* ResetCombatantFields_0215a2f8(void*);
extern "C" void func_ov023_021f65d4(void* a, int key, int mask);

// USA: func_ov004_0215a294  (semantic: UpdateThenResetAndFlag_0215a294)
extern "C" ARM int func_ov004_0215a294(void* obj) {
    GameState* battle = GameState::GetInstance();
    GetPtrField0x2a04_02010828(battle);
    unsigned char* fieldPtr __attribute__((aligned(4))) = data_ov004_021707e0;
    unsigned char byteVal = (unsigned char)*(short*)(fieldPtr + 0x3a);
    short base0x396 = 0x396;
    short f32 = *(short*)(fieldPtr + 0x32);
    *(short*)(fieldPtr + 0x3c) = f32;
    func_ov011_021848a0(obj, base0x396 + byteVal);
    ResetCombatantFields_0215a2f8(data_ov004_021707e0);
    func_ov023_021f65d4(obj, 2, 8);
    return 0;
}

// USA: func_ov004_0215a2f8
ARM void* ResetCombatantFields_0215a2f8(void* obj) {
	*(short*)((char*)obj + 0x6c) = -1;
	*(char*)((char*)obj + 0x6e) = 0;
	*(char*)((char*)obj + 0x6f) = 0;
	*(char*)((char*)obj + 0x70) = -1;
	*(int*)((char*)obj + 0x74) = -1;
	*(int*)((char*)obj + 0x78) = 0;
	return obj;
}

class Node0215a31c {
public:
    virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03();
    virtual void v04(); virtual void v05(); virtual void v06(); virtual void v07();
    virtual void v08(); virtual void v09(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43();
    virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47();
    virtual void v48(); virtual void v49(); virtual void v50(); virtual void v51();
    virtual void v52(); virtual void v53();
    virtual void SetIcon(int v);
    virtual void v55();
    virtual void SetValue(int v);
    char pad04[8];
    unsigned char flags;
    char pad0d[0x13];
    void* data;
};

struct Grid021f9b30_0215a31c {
    char pad[0x5c];
    short page;
    short pageCount;
};

struct Element0215a31c {
    char pad[4];
    void* data;
};
struct S_a0b8c;
int CountNonZeroValues020a0b8c(S_a0b8c* p);
int GetFieldAt0x150_02053c6c(unsigned char*);
extern "C" int func_020dcc98(signed char combatantId);
extern "C" int _Z26SetCellIfInBounds_021f9b30P12Grid021f9b30sjj(Grid021f9b30_0215a31c* self, unsigned short val, unsigned int x, unsigned int y);
extern "C" void func_ov023_021f9ba8(Grid021f9b30_0215a31c* grid, int v);
void* CheckThenNotify_02157088(void* object, int key);
extern "C" void func_ov023_021dcae0(struct Obj021dcae0*, int);

// USA: func_ov004_0215a31c
extern "C" ARM int func_ov004_0215a31c(void* obj) {
    signed char flag = func_ov004_02157128(obj);
    Container020dedd0* items = ((Container020dedd0*)func_ov004_02156fd4(obj, 5));
    TableA68* table = ((TableA68*)DispatchAdjustmentIfType4_02157018(obj, 3));
    short* keys;
    Grid021f9b30_0215a31c* grid = ((Grid021f9b30_0215a31c*)func_ov004_02156ed0(obj, 0x63));
    int i;
    int slot;

    if (flag == -1) {
        unsigned char* list = (unsigned char*)GetPtrField0x2a04_02010828(GameState::GetInstance());
        if (!list) return 0;
        keys = (short*)(list + 0xc);
        signed char* counts = (signed char*)(list + 0x13c);
        Node0215a31c* node = ((Node0215a31c*)func_ov004_02156f04(obj, 0x454));
        if (node) {
            node->data = FindEntryByKey_02072a68(table, 0xb);
        }
        short page = grid->page;
        short pageCount = grid->pageCount;
        if (!(page > 0 && pageCount > 0)) {
            page = 0;
            pageCount = (CountNonZeroValues020a0b8c((S_a0b8c*)list) - 1) / 8 + 1;
            if (pageCount < 1) pageCount = 1;
            grid->page = 0;
            grid->pageCount = pageCount;
        }
        keys += page * 8;
        node = ((Node0215a31c*)func_ov004_02156f04(obj, 0x458));
        if (node) node->flags &= ~8;
        ((Node0215a31c*)func_ov004_02156f38(obj, 0x456))->SetValue(page + 1);
        ((Node0215a31c*)func_ov004_02156f38(obj, 0x457))->SetValue(pageCount);
        ClearNodeMaskById_021f6600(obj, 0x456, 8);
        ClearNodeMaskById_021f6600(obj, 0x457, 8);
        ClearNodeMaskById_021f6600(obj, 0x469, 8);
        ClearNodeMaskById_021f6600(obj, 0x46a, 8);
        for (i = 0; i < 8; i++) {
            ClearNodeMaskById_021f6600(obj, i + 0x459, 8);
            ClearNodeMaskById_021f6600(obj, i + 0x461, 8);
            ((Node0215a31c*)func_ov004_02156f38(obj, i + 0x461))->SetValue(counts[i]);
        }
    } else {
        GameObject* combatant = GetCombatantWithFlag0x100_0200ff1c(GameState::GetInstance(), flag);
        if (!combatant) return 0;
        keys = (short*)(((unsigned char*)GetFieldAt0x150_02053c6c((unsigned char*)combatant)) + 0x454);
        Node0215a31c* node = ((Node0215a31c*)func_ov004_02156f04(obj, 0x454));
        if (node) {
            node->data = combatant->baseStats_;
            node->SetIcon(func_020dcc98(flag));
        }
        node = ((Node0215a31c*)func_ov004_02156f04(obj, 0x458));
        if (node) node->flags |= 8;
        func_ov023_021f65d4(obj, 0x456, 8);
        func_ov023_021f65d4(obj, 0x457, 8);
        func_ov023_021f65d4(obj, 0x469, 8);
        func_ov023_021f65d4(obj, 0x46a, 8);
        for (slot = 0; slot < 8; slot++) {
            func_ov023_021f65d4(obj, slot + 0x459, 8);
            func_ov023_021f65d4(obj, slot + 0x461, 8);
        }
    }

    for (slot = 0; slot < 8; slot++) {
        Element0215a31c* elem = ((Element0215a31c*)FindElementByKey020dedd0(items, keys[slot]));
        Node0215a31c* node = ((Node0215a31c*)func_ov004_02156f04(obj, slot + 0x44c));
        if (!elem) {
            node->flags |= 8;
            func_ov023_021f65d4(obj, slot + 0x459, 8);
            func_ov023_021f65d4(obj, slot + 0x461, 8);
            _Z26SetCellIfInBounds_021f9b30P12Grid021f9b30sjj(grid, 0, (unsigned short)slot, 0);
        } else {
            void* data = elem->data ? elem->data : 0;
            if (node) {
                node->flags &= ~8;
                node->data = data;
                _Z26SetCellIfInBounds_021f9b30P12Grid021f9b30sjj(grid, (unsigned short)(slot + 0x44c), (unsigned short)slot, 0);
            }
        }
    }
    func_ov023_021f9ba8(grid, 0);
    void* list = func_ov004_02156f6c(obj, 0x17);
    if (list) func_ov023_021f809c(list, obj);
    void* notified = CheckThenNotify_02157088(obj, 7);
    if (notified) func_ov023_021dcae0((Obj021dcae0*)notified, -1);
    return 0;
}
int HasFlag101_021571d8(int a);
void* GetPointerFromArray0xbd0_0207c5f8(unsigned char*, unsigned int);
void* GetPointerAt0xbf0_0207c60c(void*, unsigned int);
extern "C" void func_ov023_021f65d4(void* obj, int key, int mask);

struct Grid021f9b30_0215a738 {
    char pad0[0x20];
    short* cells;
    unsigned short width;
    unsigned short height;
    char pad1[0x34];
    short field5c;
    short field5e;
};

struct Element020de650_0215a738 {
    char pad[4];
    int field4;
};

struct Slot02156f04 {
    char pad[0xc];
    unsigned char flags;
    char pad2[0x13];
    int field20;
};

class VObj0215a738 {
public:
    virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03();
    virtual void v04(); virtual void v05(); virtual void v06(); virtual void v07();
    virtual void v08(); virtual void v09(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43();
    virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47();
    virtual void v48(); virtual void v49(); virtual void v50(); virtual void v51();
    virtual void v52(); virtual void v53(); virtual void v54(); virtual void v55();
    virtual void Notify(int n);
};

// USA: func_ov004_0215a738
extern "C" ARM int func_ov004_0215a738(void* obj) {
    short base;
    short saved;
    GameState* bs = GameState::GetInstance();
    unsigned char* p = (unsigned char*)GetPtrField0x2a04_02010828(bs);
    if (!p) return 0;
    Grid021f9b30_0215a738* grid = ((Grid021f9b30_0215a738*)func_ov004_02156ed0(obj, 0x63));
    base = grid->field5c;
    saved = grid->field5e;
    short* keys;
    signed char* bytes;
    if (HasFlag101_021571d8((int)obj)) {
        int idx = DispatchNodeIfType7_02156e2c(obj, 0x65);
        if (idx < 0) return 0;
        keys = (short*)GetPointerFromArray0xbd0_0207c5f8(p + 0x1d4, *(data_ov004_021707e0 + idx + 0x7c));
        bytes = (signed char*)GetPointerAt0xbf0_0207c60c(p + 0x1d4, *(data_ov004_021707e0 + idx + 0x7c));
    } else {
        if (((int)func_ov004_02157128(obj)) >= 0) return 0;
        keys = (short*)(p + 0xc);
        bytes = (signed char*)(p + 0x13c);
    }
    Container020dedd0* node = (Container020dedd0*)((void*)func_ov004_02156fd4(obj, 5));
    for (int i = 0; i < 8; i++) {
        int k = i + base * 8;
        Element020de650_0215a738* elem = ((Element020de650_0215a738*)FindElementByKey020dedd0(node, keys[k]));
        Slot02156f04* slot = ((Slot02156f04*)func_ov004_02156f04(obj, i + 0x44c));
        if (elem == 0) {
            slot->flags |= 8;
            _Z26SetCellIfInBounds_021f9b30P12Grid021f9b30sjj((Grid021f9b30_0215a31c*)grid, 0, (unsigned short)i, (unsigned short)0);
            func_ov023_021f65d4(obj, i + 0x459, 8);
            func_ov023_021f65d4(obj, i + 0x461, 8);
        } else {
            int v = elem->field4 ? elem->field4 : 0;
            if (slot) {
                slot->flags &= ~8;
                slot->field20 = v;
                _Z26SetCellIfInBounds_021f9b30P12Grid021f9b30sjj((Grid021f9b30_0215a31c*)grid, i + 0x44c, (unsigned short)i, (unsigned short)0);
                ClearNodeMaskById_021f6600(obj, i + 0x459, 8);
                ClearNodeMaskById_021f6600(obj, i + 0x461, 8);
                ((VObj0215a738*)func_ov004_02156f38(obj, i + 0x461))->Notify(bytes[k]);
            }
        }
    }
    ((VObj0215a738*)func_ov004_02156f38(obj, 0x456))->Notify(base + 1);
    ((VObj0215a738*)func_ov004_02156f38(obj, 0x457))->Notify(saved);
    ClearNodeMaskById_021f6600(obj, 0x456, 8);
    ClearNodeMaskById_021f6600(obj, 0x457, 8);
    ClearNodeMaskById_021f6600(obj, 0x469, 8);
    ClearNodeMaskById_021f6600(obj, 0x46a, 8);
    void* n = func_ov004_02156f6c(obj, 0x17);
    if (n) func_ov023_021f809c(n, obj);
    void* r = (void*)CheckThenNotify_02157088(obj, 7);
    int idx2 = DispatchNodeIfType7_02156e2c(obj, 0x63);
    if (r) func_ov023_021dcae0((Obj021dcae0*)r, keys[idx2 + base * 8]);
    return 0;
}
struct GameObject* GetCombatantWithFlag0x100_0200ff1c(struct GameState*, int);
struct Slots02083960;
int CountPositiveSlots02083960(struct Slots02083960* s);
short CountPositiveEntries0207c638(void*, unsigned int);

// USA: func_ov004_0215aa10
extern "C" ARM int func_ov004_0215aa10(void* obj) {
    GameState* bs = GameState::GetInstance();
    int result;
    if (HasFlag101_021571d8((int)obj)) {
        int idx = DispatchNodeIfType7_02156e2c(obj, 0x65);
        if (idx < 0) return 0;
        void* p = GetPtrField0x2a04_02010828(bs);
        if (!p) return 0;
        unsigned char key = *(data_ov004_021707e0 + idx + 0x7c);
        result = CountPositiveEntries0207c638((char*)p + 0x1d4, key);
        *(int*)(data_ov004_021707e0 + 0x74) = key;
    } else {
        int val = ((int)func_ov004_02157128(obj));
        if (val == -1) {
            void* p = GetPtrField0x2a04_02010828(bs);
            if (!p) return 0;
            result = CountNonZeroValues020a0b8c((struct S_a0b8c*)p);
        } else {
            GameObject* c = GetCombatantWithFlag0x100_0200ff1c(bs, val);
            if (!c) return 0;
            int ptrAsInt = GetFieldAt0x150_02053c6c((unsigned char*)c);
            result = CountPositiveSlots02083960((struct Slots02083960*)ptrAsInt);
        }
    }
    if (result > 0) {
        func_ov011_021848a0(obj, 0x6a);
    }
    return 0;
}

struct Stat02156ed0_0215aaf0 { char pad[0x5c]; short field5c; };

struct Bits2_0215aaf0 { unsigned int low12 : 12; unsigned int field2 : 2; unsigned int rest : 18; };
struct Element020de650_0215aaf0 { char pad[8]; Bits2_0215aaf0 bits; };

int EvalOrDispatch020de194(void* s);

// USA: func_ov004_0215aaf0
extern "C" ARM int func_ov004_0215aaf0(void* obj) {
    GameState* bs = GameState::GetInstance();
    struct Container020dedd0* node = ((struct Container020dedd0*)func_ov004_02156fd4(obj, 5));
    unsigned char* ptr2a04 = (unsigned char*)GetPtrField0x2a04_02010828(bs);
    if (!ptr2a04) return 0;

    int idx = DispatchNodeIfType7_02156e2c(obj, 0x63);
    if (idx < 0) return 0;

    Stat02156ed0_0215aaf0* stat = ((Stat02156ed0_0215aaf0*)func_ov004_02156ed0(obj, 0x63));
    int slot = idx + stat->field5c * 8;

    struct Element020de650_0215aaf0* elem;

    if (HasFlag101_021571d8((int)obj)) {
        unsigned char* keyArr = (unsigned char*)GetPointerFromArray0xbd0_0207c5f8(ptr2a04 + 0x1d4, *(unsigned int*)(data_ov004_021707e0 + 0x74));
        unsigned char* byteArr = (unsigned char*)GetPointerAt0xbf0_0207c60c(ptr2a04 + 0x1d4, *(unsigned int*)(data_ov004_021707e0 + 0x74));
        elem = ((struct Element020de650_0215aaf0*)FindElementByKey020dedd0(node, ((short*)keyArr)[slot]));
        if (elem->bits.field2 == 0) {
            func_ov011_021848a0(obj, 0x3a1);
            return 0;
        }
        *(short*)(data_ov004_021707e0 + 0x6c) = ((short*)keyArr)[slot];
        data_ov004_021707e0[0x6f] = *(signed char*)(byteArr + slot);
    } else {
        int flagVal = ((int)func_ov004_02157128(obj));
        if (flagVal == -1) {
            elem = ((struct Element020de650_0215aaf0*)FindElementByKey020dedd0(node, *(short*)(ptr2a04 + slot * 2 + 0xc)));
            if (elem->bits.field2 == 0) {
                func_ov011_021848a0(obj, 0x3a1);
                return 0;
            }
            *(short*)(data_ov004_021707e0 + 0x6c) = ((short*)(ptr2a04 + 0xc))[slot];
            unsigned char* p100 = ptr2a04 + slot + 0x100;
            data_ov004_021707e0[0x6f] = *(signed char*)(p100 + 0x3c);
        } else {
            GameObject* combatant = GetCombatantWithFlag0x100_0200ff1c(bs, flagVal);
            if (!combatant) return 0;
            int field150 = GetFieldAt0x150_02053c6c((unsigned char*)combatant);
            elem = ((struct Element020de650_0215aaf0*)FindElementByKey020dedd0(node, ((short*)((char*)field150 + 0x400 + 0x54))[idx]));
            if (elem->bits.field2 == 0) {
                func_ov011_021848a0(obj, 0x3a1);
                return 0;
            }
            *(short*)(data_ov004_021707e0 + 0x6c) = ((short*)((char*)field150 + 0x400 + 0x54))[idx];
            data_ov004_021707e0[0x6f] = 1;
        }
        data_ov004_021707e0[0x70] = (unsigned char)flagVal;
    }

    int evalResult = EvalOrDispatch020de194(elem);
    int scaled = (int)((float)(unsigned int)evalResult * 0.75f);
    *(int*)(data_ov004_021707e0 + 0x78) = scaled;
    data_ov004_021707e0[0x6e] = 1;
    func_ov011_021848a0(obj, 0x6c);
    return 0;
}
extern "C" void func_ov023_021fb27c(void* node, int val);

// USA: func_ov004_0215ad34
ARM int StoreDigitsAndNotify_0215ad34(void* obj) {
    struct Element020de650* elem = FindElementByKey020dedd0(((struct Container020dedd0*)func_ov004_02156fd4(obj, 5)), *(short*)(((char*)data_ov004_021707e0) + 0x6c));
    int val;
    int i;
    if (elem == NULL) return 0;
    val = *(int*)(((char*)data_ov004_021707e0) + 0x78);
    for (i = 0; i < 7; i++) {
        signed char digit = val % 10;
        *(signed char*)(((char*)data_ov004_021707e0) + i + 0x3f) = digit;
        val = val / 10;
        void* node = func_ov004_02156fa0(obj, i + 0x2d);
        if (node != NULL) {
            signed char d = *(signed char*)(((char*)data_ov004_021707e0) + i + 0x3f);
            func_ov023_021fb27c(node, (unsigned short)(d + 0x1a));
        }
    }
    *(signed char*)(((char*)data_ov004_021707e0) + 0x3e) = 0;
    return 0;
}

extern "C" double _dflt(int);
extern "C" double func_020095a4(double, double);
extern "C" int _dfix(double);

// USA: func_ov004_0215adf8
ARM int ComputeChecksumAndNotify_0215adf8(void* obj) {
    int i;
    *(int*)(((char*)data_ov004_021707e0) + 0x78) = 0;
    for (i = 0; i < 7; i++) {
        double di = _dflt(i);
        int weight = _dfix(func_020095a4(10.0, di));
        signed char digit = *(signed char*)(((char*)data_ov004_021707e0) + i + 0x3f);
        int total = *(int*)(((char*)data_ov004_021707e0) + 0x78);
        total = weight * digit + total;
        *(int*)(((char*)data_ov004_021707e0) + 0x78) = total;
    }
    *(unsigned char*)(((char*)data_ov004_021707e0) + 0x6e) = 1;
    if (*(unsigned char*)(((char*)data_ov004_021707e0) + 0x6f) == 1) {
        func_ov011_021848a0(obj, 0x39c);
    } else {
        func_ov011_021848a0(obj, 0x6d);
    }
    return 0;
}

// USA: func_ov004_0215aea8  (semantic: IncrementDigitAndNotify_0215aea8)
extern "C" ARM int func_ov004_0215aea8(void* obj) {
    char* ptr = ((char*)data_ov004_021707e0);
    signed char* arr = (signed char*)(ptr + 0x3f);
    unsigned char idx = *(unsigned char*)(ptr + 0x3e);
    signed char v = arr[idx];
    v = v + 1;
    arr[idx] = v;
    v = arr[idx];
    if (v >= 10) {
        v = 0;
        arr[idx] = v;
    }
    void* node = func_ov004_02156fa0(obj, *(unsigned char*)(((char*)data_ov004_021707e0) + 0x3e) + 0x2d);
    if (node) {
        signed char d = arr[idx];
        func_ov023_021fb27c(node, (unsigned short)(d + 0x1a));
    }
    return 0;
}

// USA: func_ov004_0215af14  (semantic: DecrementDigitAndNotify_0215af14)
extern "C" ARM int func_ov004_0215af14(void* obj) {
    char* ptr = ((char*)data_ov004_021707e0);
    signed char* arr = (signed char*)(ptr + 0x3f);
    unsigned char idx = *(unsigned char*)(ptr + 0x3e);
    signed char v = arr[idx];
    v = v - 1;
    arr[idx] = v;
    v = arr[idx];
    if (v < 0) {
        v = 9;
        arr[idx] = v;
    }
    void* node = func_ov004_02156fa0(obj, *(unsigned char*)(((char*)data_ov004_021707e0) + 0x3e) + 0x2d);
    if (node) {
        signed char d = arr[idx];
        func_ov023_021fb27c(node, (unsigned short)(d + 0x1a));
    }
    return 0;
}

class VObj0215af80 {
public:
    virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03();
    virtual void v04(); virtual void v05(); virtual void v06(); virtual void v07();
    virtual void v08(); virtual void v09(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43();
    virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47();
    virtual void v48(); virtual void v49(); virtual void v50(); virtual void v51();
    virtual void v52(); virtual void v53(); virtual void v54(); virtual void v55();
    virtual void NotifyByte(int n);
};

// USA: func_ov004_0215af80  (semantic: NotifyTwoVTableEvents_0215af80)
extern "C" ARM int func_ov004_0215af80(void* a) {
    VObj0215af80* node = (VObj0215af80*)func_ov004_02156f38(a, 0x25a);
    if (node) {
        node->NotifyByte(data_ov004_021707e0[0x6e]);
    }
    VObj0215af80* node2 = (VObj0215af80*)func_ov004_02156f38(a, 0x2bd);
    if (node2) {
        node2->NotifyByte(*(int*)(data_ov004_021707e0 + 0x78));
    }
    return 0;
}

// USA: func_ov004_0215aff0  (semantic: NotifyFlagState_0215aff0)
extern "C" ARM int func_ov004_0215aff0(void* a) {
    if (data_ov004_021707e0[0x6e] == 1) {
        func_ov011_021848a0(a, 0x39c);
    } else {
        func_ov011_021848a0(a, 0x39b);
    }
    return 0;
}

typedef void (*FuncPtr0215b02c)(void*, int);
struct Handler0215b02c { char pad[0xe0]; FuncPtr0215b02c func; };
struct Node0215b02c { Handler0215b02c* handler; };

// USA: func_ov004_0215b02c
ARM int IncrementFlag6eThenNotify_0215b02c(void* obj) {
    if (data_ov004_021707e0[0x6e] < data_ov004_021707e0[0x6f]) {
        data_ov004_021707e0[0x6e]++;
        Node0215b02c* node = ((Node0215b02c*)func_ov004_02156f38(obj, 0x25a));
        if (node) {
            node->handler->func(node, data_ov004_021707e0[0x6e]);
        }
        int result = ((int)func_ov004_02156f6c(obj, 0x19));
        if (result) {
            func_ov023_021f809c((void*)result, obj);
        }
    }
    return 0;
}

class VObj0215b0a8 {
public:
    virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03();
    virtual void v04(); virtual void v05(); virtual void v06(); virtual void v07();
    virtual void v08(); virtual void v09(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43();
    virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47();
    virtual void v48(); virtual void v49(); virtual void v50(); virtual void v51();
    virtual void v52(); virtual void v53(); virtual void v54(); virtual void v55();
    virtual void NotifyCount(int n);
};

// USA: func_ov004_0215b0a8  (semantic: DecrementAndNotifyVTable_0215b0a8)
extern "C" ARM int func_ov004_0215b0a8(void* obj) {
    unsigned char cur = data_ov004_021707e0[0x6e];
    if (cur <= 1) {
        goto end;
    }
    data_ov004_021707e0[0x6e] = cur - 1;
    {
        VObj0215b0a8* node = (VObj0215b0a8*)func_ov004_02156f38(obj, 0x25a);
        if (node) {
            node->NotifyCount(data_ov004_021707e0[0x6e]);
        }
    }
    {
        void* node2 = func_ov004_02156f6c(obj, 0x19);
        if (node2) {
            func_ov023_021f809c(node2, obj);
        }
    }
end:
    return 0;
}

#if defined(jpn)
struct Container020e0310;
extern "C" char* func_020e207c(struct Container020e0310*, char*, int);
struct Obj02046574;
void SetIndexedName02046574(Obj02046574*, int, char*);
#endif

struct Element020de650_0215b120 {
    unsigned char unknown0[0x18];
    short key;
    unsigned char unknown1a[6];
};

#if defined(jpn)
struct Element020e0310 { int key; int value; };
struct Container020e0310 {
    unsigned int count : 12;
    unsigned int rest : 20;
    Element020e0310* base;
};
typedef Container020e0310 NameTable0215b120;
#else
struct NameEntry0215b120 {
    void* first;
    void* second;
    unsigned int unknown8;
    unsigned short key;
    unsigned short unknownE;
};
struct NameTable0215b120 {
    unsigned int count : 12;
    unsigned int rest : 20;
    NameEntry0215b120* entries;
};
#endif
struct ItemSelection0215b120 {
    unsigned char unknown0[0x6c];
    short itemId;
    unsigned char quantity;
    unsigned char maximumQuantity;
    unsigned char unknown70[8];
    int value;
    unsigned char unknown7c[0x10];
    NameTable0215b120 names;
};

// USA: func_ov004_0215b120  (semantic: StoreCallResultAndDispatch_0215b120)
extern "C" ARM int func_ov004_0215b120(void* self) {
    void* g = (void*)GetGlobalField0x1c020421a0();
    func_02046380(g);

    struct Container020dedd0* c = ((struct Container020dedd0*)func_ov004_02156fd4(self, 5));
    struct Element020de650_0215b120* elem = ((struct Element020de650_0215b120*)FindElementByKey020dedd0(c, ((ItemSelection0215b120*)data_ov004_021707e0)->itemId));

    ItemSelection0215b120* selection = ((ItemSelection0215b120*)data_ov004_021707e0);
    unsigned char quantity = selection->quantity;
    NameTable0215b120* names = &selection->names;

    if (quantity == 1) {
#if defined(jpn)
        char name[80];
        func_020e207c(names, name, elem->key);
        SetIndexedName02046574((Obj02046574*)g, 1, name);
#else
        void* r = CallFunc020e52a0_020e5294(names, elem->key);
        *(void**)((char*)g + 0x18) = r;
#endif
        StoreInArray0x8b0_020465c0((struct StoreStruct*)g, 0, ((ItemSelection0215b120*)data_ov004_021707e0)->value);
    } else {
#if defined(jpn)
        char name[80];
        func_020e207c(names, name, elem->key);
        SetIndexedName02046574((Obj02046574*)g, 1, name);
#else
        void* r = CallFunc020e52a0_020e5294(names, elem->key);
        *(void**)((char*)g + 0x18) = r;
#endif
        StoreInArray0x8b0_020465c0((struct StoreStruct*)g, 0, ((ItemSelection0215b120*)data_ov004_021707e0)->value);
        StoreInArray0x8b0_020465c0((struct StoreStruct*)g, 1, ((ItemSelection0215b120*)data_ov004_021707e0)->quantity);
    }
    return 0;
}
struct KeyMap020a0a08;
int DecrementKeyValue020a0a08(struct KeyMap020a0a08* map, int key, int amount);
struct Slots020838c4;
int RemoveSlotValueAndCompact020838c4(struct Slots020838c4* s, int value);

struct Bits0xc_0215b1d4 { unsigned short low13 : 13; unsigned short high3 : 3; };

#if defined(jpn)
void* GetPtrField0x2a04_02010828(struct GameState*);
struct GameObject* GetCombatantWithFlag0x100_0200ff1c(struct GameState*, int);

#endif
// USA: func_ov004_0215b1d4
extern "C" ARM int func_ov004_0215b1d4(void* obj) {
    GameState* bs = GameState::GetInstance();
#if defined(jpn)
    char* base = (char*)bs + 0xc + 0x5c00;
#else
    char* base = (char*)bs + 0x26c + 0x5c00;
#endif

    *(short*)(base + 0xf8) = *(short*)(data_ov004_021707e0 + 0x6c);
    *(short*)(base + 0xfa) = *(unsigned char*)(data_ov004_021707e0 + 0x6e);
    *(short*)(base + 0xfc) = *(int*)(data_ov004_021707e0 + 0x78);

    int cnt = *(int*)(data_ov004_021707e0 + 0x74);
    if (cnt >= 0) {
        void* result = GetPtrField0x2a04_02010828(bs);
        if (!result) return 0;
        short key = *(short*)(data_ov004_021707e0 + 0x6c);
        signed char amt = *(signed char*)(data_ov004_021707e0 + 0x6e);
        int key2 = *(int*)(data_ov004_021707e0 + 0x74);
        DecrementKeyedStackAmount0207c484((struct KeyedList0207c484*)((char*)result + 0x1d4), key, amt, key2);
    } else if (*(signed char*)(data_ov004_021707e0 + 0x70) == -1) {
        void* result = GetPtrField0x2a04_02010828(bs);
        if (!result) return 0;
        short key = *(short*)(data_ov004_021707e0 + 0x6c);
        signed char amt = *(signed char*)(data_ov004_021707e0 + 0x6e);
        DecrementKeyValue020a0a08((struct KeyMap020a0a08*)result, key, amt);
    } else {
        int combatantId = *(signed char*)(data_ov004_021707e0 + 0x70);
        GameObject* c = GetCombatantWithFlag0x100_0200ff1c(bs, combatantId);
        if (!c) return 0;
        int field = GetFieldAt0x150_02053c6c((unsigned char*)c);
        short key = *(short*)(data_ov004_021707e0 + 0x6c);
        RemoveSlotValueAndCompact020838c4((struct Slots020838c4*)field, key);
    }

    ResetCombatantFields_0215a2f8(data_ov004_021707e0);

    Bits0xc_0215b1d4* bits = (Bits0xc_0215b1d4*)(base + 0x10c);
    bits->low13 |= 0x10;

    unsigned char v = *(data_ov004_021707e0 + 0x6e);
    if (v > 1) {
        func_ov011_021848a0(obj, 0x2423);
    } else {
        func_ov011_021848a0(obj, 0x39d);
    }
    return 0;
}

// USA: func_ov004_0215b330  (semantic: ResetSomeCombatant_0215b330)
extern "C" ARM void* func_ov004_0215b330(void* obj) {
    ResetCombatantFields_0215a2f8(data_ov004_021707e0);
    func_ov011_021848a0(obj, 0x39e);
    return 0;
}

struct ItemNode0215b360 {
    virtual void slot_0();
    virtual void slot_1();
    virtual void slot_2();
    virtual void slot_3();
    virtual void slot_4();
    virtual void slot_5();
    virtual void slot_6();
    virtual void slot_7();
    virtual void slot_8();
    virtual void slot_9();
    virtual void slot_10();
    virtual void slot_11();
    virtual void slot_12();
    virtual void slot_13();
    virtual void slot_14();
    virtual void slot_15();
    virtual void slot_16();
    virtual void slot_17();
    virtual void slot_18();
    virtual void slot_19();
    virtual void slot_20();
    virtual void slot_21();
    virtual void slot_22();
    virtual void slot_23();
    virtual void slot_24();
    virtual void slot_25();
    virtual void slot_26();
    virtual void slot_27();
    virtual void slot_28();
    virtual void slot_29();
    virtual void slot_30();
    virtual void slot_31();
    virtual void slot_32();
    virtual void slot_33();
    virtual void slot_34();
    virtual void slot_35();
    virtual void slot_36();
    virtual void slot_37();
    virtual void slot_38();
    virtual void slot_39();
    virtual void slot_40();
    virtual void slot_41();
    virtual void slot_42();
    virtual void slot_43();
    virtual void slot_44();
    virtual void slot_45();
    virtual void slot_46();
    virtual void slot_47();
    virtual void slot_48();
    virtual void slot_49();
    virtual void slot_50();
    virtual void slot_51();
    virtual void slot_52();
    virtual void slot_53();
    virtual void slot_54();
    virtual void slot_55();
    virtual void notify(int);
    char unknown_4[8];
    unsigned char flags;
    char unknown_d[0x20 - 0xd];
    void* value;
};
struct Grid021f9b30_0215b360 {
    char unknown_0[0x5c];
    short page, pages;
};
struct ItemLists0215b360 {
    char unknown_0[0x7c];
    unsigned char listIds[8];
};
struct PartyState0215b360 {
    char unknown_0[0x1d4];
    unsigned char inventory[1];
};
struct Element020de650_0215b360 {
    unsigned int field_0;
    void* value;
};
int DispatchNodeIfType7_02156e2c(void*, int);
extern "C" void func_ov023_021f65d4(void*, int, int);
typedef void (*UnsignedGridCellSetter)(Grid021f9b30_0215b360*, unsigned short, unsigned int, unsigned int);
typedef void* (*ContextNodeQuery)(void*, int);

// USA: func_ov004_0215b360
extern "C" ARM int func_ov004_0215b360(void* object) {
    short* items = NULL;
    signed char* amounts = NULL;
    int count = 0;
    Container020dedd0* container = ((Container020dedd0*)func_ov004_02156fd4(object, 5));
    TableA68* table = ((TableA68*)DispatchAdjustmentIfType4_02157018(object, 3));
    int selected = DispatchNodeIfType7_02156e2c(object, 0x65);
    if (selected < 0) return 0;
    PartyState0215b360* party = (PartyState0215b360*)GetPtrField0x2a04_02010828(GameState::GetInstance());
    if (!party) return 0;
    for (int i = 0; i < 8; i++) {
        if (i == selected) {
            ItemNode0215b360* node = ((ItemNode0215b360*)func_ov004_02156f04(object, 0x454));
            if (node) node->value = FindEntryByKey_02072a68(table, (short)(i + 0x1b));
            ClearNodeMaskById_021f6600(object, i + 0x38c, 8);
            items = ((short*)GetPointerFromArray0xbd0_0207c5f8(party->inventory, ((ItemLists0215b360*)data_ov004_021707e0)->listIds[selected]));
            amounts = ((signed char*)GetPointerAt0xbf0_0207c60c(party->inventory, ((ItemLists0215b360*)data_ov004_021707e0)->listIds[selected]));
            count = ((int)CountPositiveEntries0207c638(party->inventory, ((ItemLists0215b360*)data_ov004_021707e0)->listIds[selected]));
        } else {
            func_ov023_021f65d4(object, i + 0x38c, 8);
        }
    }
    Grid021f9b30_0215b360* grid = ((Grid021f9b30_0215b360*)func_ov004_02156ed0(object, 0x63));
    if (!grid) return 0;
    short pages = (count - 1) / 8 + 1;
    if (pages < 1) pages = 1;
    grid->page = 0;
    grid->pages = pages;
    ((ItemNode0215b360*)func_ov004_02156f38(object, 0x456))->notify(1);
    ((ItemNode0215b360*)func_ov004_02156f38(object, 0x457))->notify(pages);
    for (int i = 0; i < 8; i++)
        ((ItemNode0215b360*)func_ov004_02156f38(object, i + 0x461))->notify(amounts[i]);
    for (int i = 0; i < 8; i++) {
        Element020de650_0215b360* entry = ((Element020de650_0215b360*)FindElementByKey020dedd0(container, items[i]));
        ItemNode0215b360* node = ((ItemNode0215b360*)func_ov004_02156f04(object, i + 0x44c));
        if (!entry) {
            node->flags |= 8;
            func_ov023_021f65d4(object, i + 0x459, 8);
            func_ov023_021f65d4(object, i + 0x461, 8);
            SetCellIfInBounds_021f9b30((Grid021f9b30*)grid, 0, (unsigned short)i, 0);
        } else {
            void* value = entry->value ? entry->value : NULL;
            if (node) {
                node->flags &= ~8;
                node->value = value;
                ClearNodeMaskById_021f6600(object, i + 0x459, 8);
                ClearNodeMaskById_021f6600(object, i + 0x461, 8);
                ((UnsignedGridCellSetter)SetCellIfInBounds_021f9b30)(grid, (unsigned short)(i + 0x44c), (unsigned short)i, 0);
            }
        }
    }
    void* node = func_ov004_02156f6c(object, 0x17);
    if (node) func_ov023_021f809c(node, object);
    void* notifier = ((ContextNodeQuery)CheckThenNotify_02157088)(object, 7);
    if (notifier) func_ov023_021dcae0((Obj021dcae0*)notifier, -1);
    return 0;
}
int Compact0207c51c(unsigned char* base, int key);

// USA: func_ov004_0215b694  (semantic: CompactAndResetCombatants_0215b694)
extern "C" ARM int func_ov004_0215b694(void* obj) {
    void* ptr = GetPtrField0x2a04_02010828(GameState::GetInstance());
    if (!ptr) {
        return 0;
    }
    for (int i = 0; i < 8; i++) {
        int key = *(data_ov004_021707e0 + i + 0x7c);
        Compact0207c51c((unsigned char*)ptr + 0x1d4, key);
    }
    ResetCombatantFields_0215a2f8(data_ov004_021707e0);
    func_ov011_021848a0(obj, 0x3a0);
    func_ov023_021f65d4(obj, 2, 8);
    return 0;
}

// USA: func_ov004_0215b710  (semantic: ClearNodeMaskIfType7_0215b710)
extern "C" ARM int func_ov004_0215b710(void* obj) {
    int id = DispatchNodeIfType7_02156e2c(obj, 0x65);
    if (id >= 0) {
        ClearNodeMaskById_021f6600(obj, id + 0x38c, 8);
    }
    return 0;
}
extern "C" void func_0207d300(void* buf, int a, int b, int c);
extern "C" void func_ov004_0215b7c8(struct ShortTriple_0215b7c8*);

// USA: func_ov004_0215b740
ARM int InitAndNotifyStruct_0215b740(void* obj) {
#if defined(jpn)
    enum { memberOffset = 0xc };
#else
    enum { memberOffset = 0x26c };
#endif
    char* p = (char*)GameState::GetInstance() + memberOffset + 0x5c00;
    void* node = ((void*)func_ov004_02156fd4(obj, 5));
    char buf[0x38];
    ((SafeAllocator*)buf)->ResetAllocatorPointer();
    ZeroInitReturn020de824(buf + 0x14);
    InitStruct0207cbe8(buf);
    InitStruct0207cbe8(buf);
    *(void**)(buf + 0x2c) = node;
    short a = *(short*)(p + 0xf8);
    signed char b = *(unsigned short*)(p + 0xfa);
    func_0207d300(buf, a, b, 0);
    func_ov004_0215b7c8((ShortTriple_0215b7c8*)(p + 0xf8));
    func_ov011_021848a0(obj, 0x3a4);
    return 0;
}

struct ShortTriple_0215b7c8 { short a, b, c; };

// USA: func_ov004_0215b7c8  (semantic: InitShortTriple_0215b7c8)
extern "C" ARM void func_ov004_0215b7c8(ShortTriple_0215b7c8* s) {
    s->a = -1;
    s->b = 0;
    s->c = 0;
}

// USA: func_ov004_0215b7e0  (semantic: SetOv011FieldTo_0215b7e0)
extern "C" ARM int func_ov004_0215b7e0(void* obj) {
    func_ov011_021848a0(obj, 0x3a5);
    return 0;
}

#if defined(jpn)
enum { regionalAreaOffset = 0xc, rendererFlagOffset = 0x868 };
#else
enum { regionalAreaOffset = 0x26c, rendererFlagOffset = 0x998 };
#endif

struct State0215b7f8 {
    char pad00[0x18];
    PackedField017 key;
    char pad1c[0x14];
    unsigned char saved;
    char pad31[9];
    short count;
};

struct SaveSlot0215b7f8 {
    PackedField017 handle;
    char pad4[0xc];
    int size;
    char name[0x200];
    char data[0x200];
};
struct Battle0215b7f8 { char pad[0x100]; SaveSlot0215b7f8 slot; };
struct Full0215b7f8 { char pad[regionalAreaOffset + 0x5d00]; SaveSlot0215b7f8 slot; };

struct TextRenderer0215b7f8 {
    char pad[rendererFlagOffset];
    int f998;
    int f99c;
};
extern "C" int func_0202c508(struct CheckField0AndGlobalHalfStruct0202c508*);
#if defined(jpn)
extern "C" void func_0204500c(void*, const char*, int);
#else
extern "C" void func_0204500c(void*, const char*, int, int);
#endif

static inline void AddPadWait0215b7f8(char* dst, const char* src) {
    int len = strlen(src);
    const char* s = "<PAD_WAIT><ADD>";
    memcpy(dst, src, len);
    strcpy(dst + len, s);
}

#if defined(jpn)
extern "C" void func_02096660(FontBankLoader*, int, char*, int);
#endif

// USA: func_ov004_0215b7f8
extern "C" ARM int func_ov004_0215b7f8(void* obj) {
    if (!((struct TableA68*)DispatchAdjustmentIfType4_02157018(obj, 4))) return 0;
    GameState* gs = GameState::GetInstance();
    Battle0215b7f8* battle = (Battle0215b7f8*)((char*)gs + regionalAreaOffset + 0x5c00);
    if (func_0202c508((CheckField0AndGlobalHalfStruct0202c508*)(func_0202ae18())) && func_ov017_021b213c(battle->slot.handle, ((State0215b7f8*)data_ov004_021707e0)->key)) {
        char data[0x200];
        char text[0x220];
        int size = ((Full0215b7f8*)gs)->slot.size;
        memcpy(data, ((Full0215b7f8*)gs)->slot.data, size);
#if defined(jpn)
        func_02096660(GetGlobal02109400_02094a00(), 5001, data, size);
#else
        AlwaysFalse02094b54(GetGlobal02109400_02094a00(), 5001, data, size);
#endif
        AddPadWait0215b7f8(text, ((Full0215b7f8*)gs)->slot.name);
        TextRenderer0215b7f8* tr = ((TextRenderer0215b7f8*)GetGlobalField0x1c020421a0());
#if defined(jpn)
        func_0204500c(tr, text, 0);
#else
        func_0204500c(tr, text, 0, 0xe3);
#endif
        tr->f998 = 1;
        tr->f99c = 2;
        ((State0215b7f8*)data_ov004_021707e0)->saved = 1;
    }
    short n = ((State0215b7f8*)data_ov004_021707e0)->count;
    int i;
    for (i = 0; i < n; i++) {
    }
    func_ov011_021848a0(obj, n + 0x2486);
    return 0;
}

#if defined(jpn)
enum{regionalAreaOffset_0215b934=0xc};
#else
enum{regionalAreaOffset_0215b934=0x26c};
#endif

struct BattleMenuState0215b934 {
    char pad00[0x14];
    unsigned char active;
    char pad15[0x77];
    unsigned char table[1];
};

struct Reward0215b934 {
    short itemId;
    unsigned short count;
    unsigned short unitValue;
    char pad6[0xe];
    unsigned short kind : 13;
};

struct RewardArea0215b934 {
    char pad[0xf8];
    Reward0215b934 reward;
};

struct Wallet0215b934 {
    char pad[0xf6c];
    unsigned int gold;
};

struct Element0215b934 {
    char pad[0x18];
    short nameId;
};

struct Message0215b934 {
    char pad[0x18];
    int name;
};
struct Obj02046574;
#if defined(jpn)
extern "C" char* func_020e207c(struct Container020e0310*, char*, int);
#else
void* CallFunc020e52a0_020e5294(void*, int);
#endif

void SetIndexedName02046574(struct Obj02046574* obj, int index, char* str);

// USA: func_ov004_0215b934
extern "C" ARM int func_ov004_0215b934(void* obj) {
    if (((BattleMenuState0215b934*)data_ov004_021707e0)->active) {
        GameState* gs = GameState::GetInstance();
        Wallet0215b934* wallet = (Wallet0215b934*)GetPtrField0x2a04_02010828(gs);
        Element0215b934* elem;
        Message0215b934* msg;
        unsigned int amount;
        RewardArea0215b934* area = (RewardArea0215b934*)((char*)gs + regionalAreaOffset_0215b934 + 0x5c00);
        if (area->reward.itemId <= 0 || area->reward.count == 0) {
            func_ov011_021848a0(obj, 0x387);
            return 0;
        }
        struct Container020dedd0* items = ((struct Container020dedd0*)func_ov004_02156fd4(obj, 5));
        elem = ((Element0215b934*)FindElementByKey020dedd0(items, area->reward.itemId));
        if (!elem) return 0;
        msg = ((Message0215b934*)GetGlobalField0x1c020421a0());
        func_02046380(msg);
        unsigned int kind = area->reward.kind;
        if (kind & 1) {
            amount = area->reward.count * area->reward.unitValue;
            if (9999999 - wallet->gold < amount) {
                amount = 9999999 - wallet->gold;
            }
            wallet->gold += amount;
            struct TableA68* names = ((struct TableA68*)DispatchAdjustmentIfType4_02157018(obj, 9));
#if defined(jpn)
            char name[80];
            func_020e207c((Container020e0310*)(((BattleMenuState0215b934*)data_ov004_021707e0)->table), name, elem->nameId);
            SetIndexedName02046574((Obj02046574*)msg, 1, name);
#else
            msg->name = ((int)CallFunc020e52a0_020e5294(((BattleMenuState0215b934*)data_ov004_021707e0)->table, elem->nameId));
#endif
            SetIndexedName02046574((struct Obj02046574*)msg, 2, ((char*)FindEntryByKey_02072a68(names, (short)(rand() % 0x3a))));
            SetIndexedName02046574((struct Obj02046574*)msg, 3, ((char*)FindEntryByKey_02072a68(names, (short)(rand() % 6 + 1000))));
            StoreInArray0x8b0_020465c0((struct StoreStruct*)msg, 0, amount);
            func_ov011_021848a0(obj, 0x3a8);
        } else if (kind & 2) {
            char buf[0x38];
            ((SafeAllocator*)buf)->ResetAllocatorPointer();
            ZeroInitReturn020de824(buf + 0x14);
            InitStruct0207cbe8(buf);
            InitStruct0207cbe8(buf);
            func_0207d300(buf, area->reward.itemId, (signed char)area->reward.count, 0);
#if defined(jpn)
            char name[80];
            func_020e207c((Container020e0310*)(((BattleMenuState0215b934*)data_ov004_021707e0)->table), name, elem->nameId);
            SetIndexedName02046574((Obj02046574*)msg, 1, name);
#else
            msg->name = ((int)CallFunc020e52a0_020e5294(((BattleMenuState0215b934*)data_ov004_021707e0)->table, elem->nameId));
#endif
            func_ov011_021848a0(obj, 0x3a9);
        } else {
            func_ov011_021848a0(obj, 0x387);
        }
        func_ov004_0215b7c8((ShortTriple_0215b7c8*)(&area->reward));
    } else {
        func_ov011_021848a0(obj, 0x387);
    }
    return 0;
}
#if defined(jpn)
extern "C" void func_0204500c(void*, const char*, int);
#else
extern "C" void func_0204500c(void*, const char*, int, int);
#endif

#if defined(jpn)
enum { taskOffset_0215bb54 = 0x3928, messageFlagOffset_0215bb54 = 0x868 };
#else
enum { taskOffset_0215bb54 = 0x3b48, messageFlagOffset_0215bb54 = 0x998 };
#endif

// USA: func_ov004_0215bb54
extern "C" ARM int func_ov004_0215bb54(void* obj) {
    void* five = *(void**)((unsigned char*)GetGameResources() + taskOffset_0215bb54);
    unsigned char flag = data_ov004_021707e0[0x13];
    if (flag == 0) {
        void* obj2 = func_ov011_021845f8((unsigned char*)obj, (int)1);
        if (obj2 == 0) {
            ResetCombatantFields_0215a2f8(data_ov004_021707e0);
            func_ov011_021848a0(obj, 0x39e);
            data_ov004_021707e0[0x13] = 0;
            return 0;
        }
        func_ov017_021b1d44((unsigned char*)five, 4, 1);
        *(void**)((char*)five + 8) = (char*)obj2 + 4;
        int fieldB4 = GetFieldB4_02184548((struct Obj_02184548*)obj);
        int fieldB0 = GetFieldB0_02184540((struct Obj_02184540*)obj);
        *(int*)((char*)five + 0x34) = fieldB0;
        *(int*)((char*)five + 0x38) = fieldB4;
        data_ov004_021707e0[0x13]++;
        func_ov011_021848a0(obj, 0x3aa);
        void* node = (void*)DispatchAdjustmentIfType4_02157018(obj, 4);
        int g = GetGlobalField0x1c020421a0();
        void* found = FindEntryByKey_02072a68((struct TableA68*)node, 0x13);
#if defined(jpn)
        func_0204500c((void*)g, (const char*)found, 0);
#else
        func_0204500c((void*)g, (const char*)found, 0, 0xe3);
#endif
        *(int*)((char*)g + messageFlagOffset_0215bb54) = 1;
    } else if (flag == 1) {
        func_ov011_021848a0(obj, 0x3ab);
        data_ov004_021707e0[0x13]++;
        return 0;
    }
    return 1;
}

#if defined(jpn)
enum { bufferOffset = 0x28, clearSize = 0x800, statusOffset = 0x868 };
#else
enum { bufferOffset = 0x5c, clearSize = 0x960, statusOffset = 0x998 };
#endif

ARM void ClearOrMaskNodesByState_0215781c(void* obj);
ARM int GetFieldromField_021b1fd4_021b1fd4(void* obj);
extern "C" void func_ov004_021571f4(void* obj, int val);
ARM void MaskNodesForRange_02157874(void* obj);
int GetSubWordField394_021b1ffc(Obj24_021b1ffc* obj);
#if defined(jpn)
extern "C" void func_0204500c(void*, const char*, int);
#else
extern "C" void func_0204500c(void*, const char*, int, int);
#endif

// USA: func_ov004_0215bc9c
extern "C" ARM int func_ov004_0215bc9c(void* obj) {
    int g;
    GameResources* resources = GetGameResources();
    void* list = resources->unknown_ptr_array_36fc[0];
    void* five = resources->unknown_ptr_array_3afc[19];
    void* table = (void*)DispatchAdjustmentIfType4_02157018(obj, 4);
    g = GetGlobalField0x1c020421a0();
    unsigned char flag = data_ov004_021707e0[0x13];

    if (flag == 2) {
        ClearOrMaskNodesByState_0215781c(obj);
        func_ov017_021b1e24(five, (int)list);
        int t = GetFieldromField_021b1fd4_021b1fd4(five) >> 12;
        func_ov004_021571f4(obj, t);
        GetSubByteField34_021b2024((Obj24_021b2024*)five);
        GetSubByteField35_021b2038((Obj24_021b2038*)five);
        if (*(int*)(resources->unknown_4490 + 4) == 0) {
            data_ov004_021707e0[0x13]++;
        }
        goto returnOne;
    } else if (flag == 3) {
        MaskNodesForRange_02157874(obj);
        char* buf = *(char**)((char*)g + bufferOffset);
        memset(buf, 0, clearSize);

        if (GetSubByteField44_021b1fe8((Obj24_021b1fe8*)five) & 4) {
            data_ov004_021707e0[0x15] = 1;
            const char* name = (const char*)FindEntryByKey_02072a68((struct TableA68*)table, 0x26);
            memcpy(buf, name, strlen(name));
            func_ov011_021848a0(obj, 0x3af);
        } else {
            data_ov004_021707e0[0x15] = 0;
            const char* name = (const char*)FindEntryByKey_02072a68((struct TableA68*)table, 0x15);
            int len = strlen(name);
            memcpy(buf, name, len);

            int key394 = GetSubWordField394_021b1ffc((Obj24_021b1ffc*)five);
            int cat398 = GetSubByteField398_021b2010((Obj24_021b2010*)five);
            func_ov004_02157374(obj, key394, cat398, buf + len, 0);
            strlen(buf + len);
            func_ov011_021848a0(obj, 0x242d);
        }

        *((unsigned char*)five + 1) = 1;
        data_ov004_021707e0[0x13] = 0;
        unsigned char* ptr = data_ov004_021707e0;
        memset(ptr + 0x1c, 0, 0xc);
        *(int*)(ptr + 0x28) = 0;
#if defined(jpn)
        func_0204500c((void*)g, (const char*)(*(char**)((char*)g + bufferOffset)), 0);
#else
        func_0204500c((void*)g, *(char**)((char*)g + bufferOffset), 0, 0xe3);
#endif
        *(int*)((char*)g + statusOffset) = 1;
        return 0;
    }

returnOne:
    return 1;
}

struct Stat0215be9c { char pad[0x5c]; short cur; short max; };
int HasFlag101_021571d8(int flag);
int DispatchNodeIfType7_02156e2c(void* node, int type);

// USA: func_ov004_0215be9c
extern "C" ARM int func_ov004_0215be9c(int obj) {
    GameState* gs = GameState::GetInstance();
    unsigned char* p = (unsigned char*)GetPtrField0x2a04_02010828(gs);
    if (p == 0) {
        return 0;
    }
    Stat0215be9c* stat = ((Stat0215be9c*)func_ov004_02156ed0((void*)obj, 0x63));
    int idx = stat->cur << 3;
    unsigned char* node;
    if (HasFlag101_021571d8(obj)) {
        int id = DispatchNodeIfType7_02156e2c((void*)obj, 0x65);
        if (id < 0) {
            return 0;
        }
        node = (unsigned char*)GetPointerFromArray0xbd0_0207c5f8(p + 0x1d4, *(data_ov004_021707e0 + id + 0x7c));
    } else {
        signed char flag = func_ov004_02157128((void*)obj);
        if (flag >= 0) {
            void* found = GetCombatantWithFlag0x100_0200ff1c(gs, flag);
            if (found == 0) {
                return 0;
            }
            unsigned char* field = (unsigned char*)((void*)GetFieldAt0x150_02053c6c((unsigned char*)found)) + 0x54;
            node = field + 0x400;
            idx = 0;
        } else {
            node = p + 0xc;
        }
    }
    void* notified = CheckThenNotify_02157088((void*)obj, 7);
    int id2 = DispatchNodeIfType7_02156e2c((void*)obj, 0x63);
    if (notified != 0) {
        func_ov023_021dcae0((Obj021dcae0*)((void*)notified), (short)(((short*)node)[idx + id2]));
    }
    return 0;
}

#if defined(jpn)
int ApplyNodeUpdater020e038c(void*, void*, int);
#endif

#if defined(jpn)
typedef Container020e0310 NameTable0215bf94;
#else
struct NameEntry0215bf94 {
    void* first;
    void* second;
    unsigned int unknown8;
    unsigned short key;
    unsigned short unknownE;
};
struct NameTable0215bf94 {
    unsigned int count : 12;
    unsigned int rest : 20;
    NameEntry0215bf94* entries;
};
#endif
struct ItemNameLoader0215bf94 {
    unsigned char unknown0[0x2d];
    unsigned char mode;
    unsigned char unknown2e[0x8c - 0x2e];
    NameTable0215bf94 names;
#if defined(jpn)
    unsigned char unknown94[0x10];
#else
    unsigned char unknown94[4];
#endif
    void* fileBuffer;
};

extern "C" unsigned int GetSubBG0ScreenBase(void);
extern "C" unsigned int GetMainBG3ScreenBase(void);
struct Actor0209c3b4;
void SetStateAndDispatch0209c3b4(struct Actor0209c3b4* actor, int val);
void SetModeClamped0209ca70(void* obj, int val);
void OrGlobalFlag0x40_020dc2bc(void);
extern "C" void* ExtractFileFromGP2(const char* gp2Path, const char* innerFilePath, unsigned int* outSize);
int TryInvoke020e53bc_020e56fc(void* a0, int a1, int a2);

#if defined(jpn)
// USA: func_ov004_0215bf94
extern "C" ARM int func_ov004_0215cfdc() {
#else
// USA: func_ov004_0215bf94
ARM int LoadGP2FileAndDispatch_0215bf94() {
#endif
    unsigned short* bg0 = (unsigned short*)GetSubBG0ScreenBase();
    int i;
    for (i = 0; i < 0x800; i++) {
        *bg0++ = 0;
    }
    memset((void*)GetMainBG3ScreenBase(), 0, 0x1000);
    struct DispatchState0215bf94 {
        unsigned char unknown0[0xd];
        unsigned char state : 7;
        unsigned char unknownHighBit : 1;
    };
    struct GlobalState0215bf94 {
        unsigned char unknown0[8];
        DispatchState0215bf94* current;
    };
    GlobalState0215bf94* owner = (GlobalState0215bf94*)func_02012fe4();
    unsigned char v = owner->current->state;
    SetStateAndDispatch0209c3b4((struct Actor0209c3b4*)data_02109bf4, v);
    SetModeClamped0209ca70(data_02109bf4, ((ItemNameLoader0215bf94*)data_ov004_021707e0)->mode);
    OrGlobalFlag0x40_020dc2bc();
#if defined(jpn)
    unsigned int size;
    LoadFileIntoMemory("data/prm/itemname.nat", ((ItemNameLoader0215bf94*)data_ov004_021707e0)->fileBuffer, &size);
    ApplyNodeUpdater020e038c(&((ItemNameLoader0215bf94*)data_ov004_021707e0)->names, ((ItemNameLoader0215bf94*)data_ov004_021707e0)->fileBuffer, (int)size);
#else
    BackgroundLoader::AddLockGlobal();
    unsigned int size;
    void* buf = ExtractFileFromGP2("data/prm/itemname.gp2", "itemname_<LG>.nat", &size);
    if (size <= 0x10800) {
        memcpy(((ItemNameLoader0215bf94*)data_ov004_021707e0)->fileBuffer, buf, size);
        TryInvoke020e53bc_020e56fc(&((ItemNameLoader0215bf94*)data_ov004_021707e0)->names, (int)((ItemNameLoader0215bf94*)data_ov004_021707e0)->fileBuffer, (int)size);
    }
    BackgroundLoader::RemoveLockGlobal();
#endif
    return 0;
}

// USA: func_ov004_0215c064  (semantic: SetFlag80AndClearMask_0215c064)
extern "C" ARM int func_ov004_0215c064(void* obj) {
	func_ov011_021848a0(obj, 0x50);
	func_ov023_021f65d4(obj, 2, 8);
	return 0;
}

// USA: func_ov004_0215c08c
ARM int ReturnZero_0215c08c(void) {
    return 0;
}

// USA: func_ov004_0215c094  (semantic: SetOv011FieldTo_0215c094)
extern "C" ARM int func_ov004_0215c094(void* obj) {
    func_ov011_021848a0(obj, 0x387);
    return 0;
}

// USA: func_ov004_0215c0ac
ARM int SetMessageFlag0215c0ac(int a) {
	func_ov011_021848a0((void*)a, 0x65);
	return 0;
}

struct Combined0215c0c0 { unsigned int low7 : 7; unsigned int rest : 25; };
struct Field2a04_0215c0c0 { char pad[0xf6c]; int f0xf6c; };

// USA: func_ov004_0215c0c0  (semantic: TickCounterAndConsumeResource_0215c0c0)
extern "C" ARM int func_ov004_0215c0c0(void* obj) {
    int code = DispatchNodeIfType7_02156e2c(obj, 0x5b);
    if (code < 0) return 0;
    void* entry = GetEntryFor_021570a4(obj, code & 0xff);
    if (!entry) return 0;
    struct Field2a04_0215c0c0* fld = (struct Field2a04_0215c0c0*)GetPtrField0x2a04_02010828(GameState::GetInstance());
    struct Combined0215c0c0* c = (struct Combined0215c0c0*)((char*)entry + 4);
    unsigned char rate = data_ov004_021707e0[0x11];
    unsigned int restVal = c->rest;
    int product1 = rate * restVal;
    c->low7 = c->low7 - rate;
    unsigned char rate2 = data_ov004_021707e0[0x11];
    unsigned int restVal2 = c->rest;
    int product2 = rate2 * restVal2;
    fld->f0xf6c -= product2;
#if defined(jpn)
    data_ov004_021707e0[0xa9] = 1;
#else
    data_ov004_021707e0[0x9d] = 1;
#endif
    if (product1 >= 50000) {
        func_ov011_021848a0(obj, 0x2366);
    } else {
        func_ov011_021848a0(obj, 0x2364);
    }
    return 0;
}

// USA: func_ov004_0215c194  (semantic: SetOv011FieldTo_0215c194)
extern "C" ARM int func_ov004_0215c194(void* obj) {
    func_ov011_021848a0(obj, 0x39f);
    return 0;
}
extern "C" void func_ov023_021f8240(void*, void*);

class VObj0215c1ac {
public:
    virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03();
    virtual void v04(); virtual void v05(); virtual void v06(); virtual void v07();
    virtual void v08(); virtual void v09(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43();
    virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47();
    virtual void v48(); virtual void v49(); virtual void v50(); virtual void v51();
    virtual void v52(); virtual void v53();
    virtual void Dispatch54(int n);
};

// USA: func_ov004_0215c1ac  (semantic: ClearFlagAndDispatchAll_0215c1ac)
extern "C" ARM int func_ov004_0215c1ac(void* obj) {
    for (int i = 0; i < 8; i++) {
        void* node = func_ov004_02156f04(obj, i + 0x44c);
        *(unsigned char*)((char*)node + 0x45) &= ~1;
        ((VObj0215c1ac*)node)->Dispatch54(0xf);
    }
    void* node2 = func_ov004_02156f6c(obj, 0x17);
    if (node2) {
        func_ov023_021f8240(node2, obj);
    }
    func_ov011_021848a0(obj, 0x6b);
    return 0;
}

// USA: func_ov004_0215c228
ARM int SetMessageFlag0215c228(int a) {
	func_ov011_021848a0((void*)a, 0x6a);
	return 0;
}

// USA: func_ov004_0215c23c
ARM int SetMessageFlag0215c23c(int a) {
	func_ov011_021848a0((void*)a, 0x6c);
	return 0;
}

// USA: func_ov004_0215c250
ARM int SetOv011FieldTo_0215c250_0215c250(void* obj) {
    func_ov011_021848a0(obj, 0x396);
    return 0;
}

int DispatchEventAndSetFlag_021589e8(void*);

// USA: func_ov004_0215c268
ARM int TickGlobalCounter_0215c268(void* obj) {
	int result;
	unsigned char* p = (unsigned char*)((char*)data_ov004_021707e0);
	if (p[0x30] == 0) goto skip;
	{
		FontBankLoader* g = GetGlobal02109400_02094a00();
		unsigned char* p2 = (unsigned char*)((char*)data_ov004_021707e0);
		if (p2[0x2c] != 0) goto elseBranch;
		BlankFunction02094b34(g, 0x72, 0x202, 0, 0);
		{
			unsigned char* p3 = (unsigned char*)((char*)data_ov004_021707e0);
			p3[0x2c] = p3[0x2c] + 1;
		}
		result = 1;
		goto done;
	elseBranch:
		if (AlwaysTrue02094b4c(g)) {
			unsigned char* p4 = (unsigned char*)((char*)data_ov004_021707e0);
			p4[0x2c] = 0;
			goto skip;
		}
		result = 1;
		goto done;
	}
skip:
	DispatchEventAndSetFlag_021589e8(obj);
	result = 0;
done:
	return result;
}

void* LoadFileIntoMemory(const char* path, void* buffer, unsigned int* outLength);
extern unsigned char data_0211e33c[0x30000] __attribute__((aligned(4)));
extern "C" void* func_ov004_0215c448(void* obj);
extern "C" void* func_ov004_0215c474(void* obj);
ARM int InitObjWithMisc_021f6f20(void* obj, int p1, int p3, int p4, int arg5, unsigned int arg6);
ARM void* AddOffset20_021f7318(void* p);
ARM void SetField1cTo2_021f7320(void* p);

struct Foo0207df50;
void CopyInternalFields0207df50(struct Foo0207df50* p);
void RestorePairTables0207df90(char* obj);
void BackupPairTables0207dfac(char* obj);
extern "C" void func_0204719c(void* obj);
void Forward02047b30(void* a, int b, int c, int d);

struct ListHead_021f67ac;
struct ListNode_021f67ac;
void AppendNodeToList_021f67ac(struct ListHead_021f67ac* head, struct ListNode_021f67ac* node);

static inline char* GetPairTable(GameResources* res, int index) { return res->unknown_2cc + index * 0x70; }

struct LocalNodeBuf_0215c30c {
    int words[0xac / 4];
};

// USA: func_ov004_0215c30c
extern "C" ARM int func_ov004_0215c30c(void* ctx) {
    void* node = func_ov011_021845f8((unsigned char*)ctx, (int)6);
    if (node == 0) return 0;

    ((SafeAllocator*)((char*)node + 4))->GetSizeWithLargestBlockRemoved();
    void* block = ((SafeAllocator*)((char*)node + 4))->Allocate(0xac);
    if (block == 0) return 0;

    LocalNodeBuf_0215c30c local;
    func_ov004_0215c448(&local);
    memcpy(block, &local, sizeof(local));

    if (InitObjWithMisc_021f6f20(block, (int)ctx, 0x6a4, 6, 0, 0) == 0) {
        int result = 0;
        func_ov004_0215c474(&local);
        return result;
    }

    BackgroundLoader::AddLockGlobal();
    unsigned int size;
    void* file = LoadFileIntoMemory("data/menu/dqa_rox.spr", data_0211e33c, &size);
    char* pairs = GetPairTable(GetGameResources(), 0);
    void* model = AddOffset20_021f7318(block);
    CopyInternalFields0207df50((struct Foo0207df50*)pairs);
    RestorePairTables0207df90(pairs);
    func_0204719c(model);
    if (file != 0) {
        Forward02047b30(model, (int)file, size, (int)((char*)node + 4));
    }
    BackupPairTables0207dfac(pairs);
    BackgroundLoader::RemoveLockGlobal();
    SetField1cTo2_021f7320(block);
    AppendNodeToList_021f67ac((struct ListHead_021f67ac*)func_ov011_021849c8(ctx), (struct ListNode_021f67ac*)block);

    int result = 0;
    func_ov004_0215c474(&local);
    return result;
}

struct NameTable02048080;
void ClearNameTable(struct NameTable02048080* table);
extern int data_ov023_021fe3e4;

// USA: func_ov004_0215c448  (semantic: InitStructVtableAndClear_0215c448)
extern "C" ARM void* func_ov004_0215c448(void* obj) {
    NameTable02048080* names = (NameTable02048080*)((char*)obj + 0x34);
    void* model = (char*)obj + 0x20;
    *(void**)obj = &data_ov023_021fe3e4;
    ClearNameTable(names);
    func_0204719c(model);
	return obj;
}

struct Foo02048004;
void MaybeInvoke0204719c_02047230(struct Foo02048004* obj);

// USA: func_ov004_0215c474  (semantic: InvokeAndClearNameTable_0215c474)
extern "C" ARM void* func_ov004_0215c474(void* self) {
    MaybeInvoke0204719c_02047230((struct Foo02048004*)((int)self + 0x20));
    ClearNameTable((struct NameTable02048080*)((int)self + 0x34));
    return self;
}

// USA: func_ov004_0215c494  (semantic: ResetCounterAndNotify_0215c494)
extern "C" ARM int func_ov004_0215c494(void* obj) {
    int key = DispatchNodeIfType7_02156e2c(obj, 0x5b);
    if (key < 0) {
        return 0;
    }
    void* entry = GetEntryFor_021570a4(obj, (unsigned char)key);
    if (!entry) {
        return 0;
    }
    unsigned char old = data_ov004_021707e0[0x11];
    data_ov004_021707e0[0x11] = 1;
    if (data_ov004_021707e0[0x11] < old) {
        CallVTableFnAt240_021f66bc(obj, 0x25c, (void*)1);
    }
    NotifyCountedEvents_02159384(obj);
    return 0;
}

struct ResultEntry0215c50c { short field0; short pad2; int field4; };

// USA: func_ov004_0215c50c  (semantic: RecalcCounterAndNotify_0215c50c)
extern "C" ARM int func_ov004_0215c50c(void* a) {
    int b = DispatchNodeIfType7_02156e2c(a, 0x5b);
    if (b < 0) return 0;

    ResultEntry0215c50c* entry = (ResultEntry0215c50c*)GetEntryFor_021570a4(a, (unsigned char)b);
    if (!entry) return 0;

    unsigned char orig11 = data_ov004_021707e0[0x11];
    data_ov004_021707e0[0x11] = (unsigned char)((unsigned int)(entry->field4 << 25) >> 25);

    void* ptr2a04 = GetPtrField0x2a04_02010828(GameState::GetInstance());
    unsigned int hi = (unsigned int)entry->field4 >> 7;
    unsigned int product = data_ov004_021707e0[0x11] * hi;
    int f6c = *(int*)((char*)ptr2a04 + 0xf6c);
    if ((unsigned int)f6c < product) {
        unsigned int q = (unsigned int)f6c / hi;
        data_ov004_021707e0[0x11] = (unsigned char)q;
        if (data_ov004_021707e0[0x11] < 1) data_ov004_021707e0[0x11] = 1;
    }

    int contPtr = func_ov004_02156fd4(a, 5);
    if (!contPtr) return 0;

    short shortE = *(short*)(data_ov004_021707e0 + 0xe);
    Element020de650* elem = FindElementByKey020dedd0((Container020dedd0*)contPtr, shortE);
    if (!elem) return 0;

    int elemField8 = *(int*)((char*)elem + 8);
    int qret = func_ov004_0215799c(ptr2a04, entry->field0, (unsigned int)(elemField8 << 28) >> 28, *(short*)(data_ov004_021707e0 + 0x3a));

    if (data_ov004_021707e0[0x11] >= (unsigned int)qret) {
        data_ov004_021707e0[0x11] = (unsigned char)qret;
        if (data_ov004_021707e0[0x11] < 1) data_ov004_021707e0[0x11] = 1;
    }

    if (data_ov004_021707e0[0x11] == 0) data_ov004_021707e0[0x11] = 1;

    if (orig11 < data_ov004_021707e0[0x11]) {
        CallVTableFnAt240_021f66bc(a, 0x25b, (void*)1);
    }

    NotifyCountedEvents_02159384(a);
    return 0;
}

typedef void (*FuncPtr0215c684)(void*, int);
struct Handler0215c684 { char pad[0xe0]; FuncPtr0215c684 func; };
struct Node0215c684 { Handler0215c684* handler; };

// USA: func_ov004_0215c684
ARM int SetFlag6eTo1ThenNotify_0215c684(void* obj) {
    if (data_ov004_021707e0[0x6e] > 1) {
        data_ov004_021707e0[0x6e] = 1;
        Node0215c684* node = ((Node0215c684*)func_ov004_02156f38(obj, 0x25a));
        if (node) {
            node->handler->func(node, data_ov004_021707e0[0x6e]);
        }
        int result = ((int)func_ov004_02156f6c(obj, 0x19));
        if (result) {
            func_ov023_021f809c((void*)result, obj);
        }
    }
    return 0;
}

typedef void (*FuncPtr0215c6fc)(void*, int);
struct Handler0215c6fc { char pad[0xe0]; FuncPtr0215c6fc func; };
struct Node0215c6fc { Handler0215c6fc* handler; };

// USA: func_ov004_0215c6fc
ARM int SetFlag6eToMaxThenNotify_0215c6fc(void* obj) {
    if (data_ov004_021707e0[0x6e] < data_ov004_021707e0[0x6f]) {
        data_ov004_021707e0[0x6e] = data_ov004_021707e0[0x6f];
        Node0215c6fc* node = ((Node0215c6fc*)func_ov004_02156f38(obj, 0x25a));
        if (node) {
            node->handler->func(node, data_ov004_021707e0[0x6e]);
        }
        int result = ((int)func_ov004_02156f6c(obj, 0x19));
        if (result) {
            func_ov023_021f809c((void*)result, obj);
        }
    }
    return 0;
}

struct NodeAllocator0215c774 {
    unsigned int field_0x00;
    SafeAllocator allocator;
};

struct ListNode_021f67ac {
    char padding_0x00[6];
    unsigned short flag;
    char padding_0x08[12];
    ListNode_021f67ac* previous;
    ListNode_021f67ac* next;
};

struct MessageNode0215c774 {
    ListNode_021f67ac listNode;
    char payload[0x90];
};

struct PairTableNode0215c774 {
    unsigned int field_0x00;
    char tables[0x70];
};

struct ArchiveVariant0215c774 {
    char padding_0x00[0x18];
    unsigned int unusedLow : 12;
    unsigned int variant : 4;
    unsigned int unusedHigh : 16;
};
extern "C" void* func_ov004_0215c448(void*);
extern "C" void* func_ov004_0215c474(void*);
int InitObjWithMisc_021f6f20(void*, int, int, int, int, unsigned int);
extern "C" void* ExtractFileFromGP2(const char*, const char*, unsigned int*);
void* AddOffset20_021f7318(void*);
PairTableNode0215c774* FindNodeById0218466c(void*, unsigned short);
void RestorePairTables0207df90(char*);
extern "C" void func_0204719c(void*);
void Forward02047b30(void*, int, int, int);
void BackupPairTables0207dfac(char*);
void SetField1cTo2_021f7320(void*);
void AppendNodeToList_021f67ac(ListHead_021f67ac*, ListNode_021f67ac*);

// USA: func_ov004_0215c774
extern "C" ARM int func_ov004_0215c774(void* context) {
    NodeAllocator0215c774* owner = ((NodeAllocator0215c774*)func_ov011_021845f8((unsigned char*)context, (int)10));
    if (owner == 0) return 0;
    owner->allocator.GetSizeWithLargestBlockRemoved();
    MessageNode0215c774* node = (MessageNode0215c774*)owner->allocator.Allocate(sizeof(MessageNode0215c774));
    if (node == 0) return 0;
    MessageNode0215c774 temporary;
    func_ov004_0215c448(&temporary);
    memcpy(node, &temporary, sizeof(temporary));
    if (InitObjWithMisc_021f6f20(node, (int)context, 0x640, 10, 0, 0) == 0) {
#if defined(jpn)
        int result = 0;
        func_ov004_0215c474(&temporary);
        return result;
#else
        func_ov004_0215c474(&temporary);
        return 0;
#endif
    }
#if defined(jpn)
    char path[32];
    __clear(path, (unsigned int)(sizeof(path)));
    sprintf(path, "data/menu/dqa_%02d.spr", ((ArchiveVariant0215c774*)data_ov004_021707e0)->variant);
    BackgroundLoader::AddLockGlobal();
    unsigned int size;
    void* file = LoadFileIntoMemory(path, data_0211e33c, &size);
#else
    char archivePath[32];
    char innerPath[32];
    __clear(archivePath, (unsigned int)(sizeof(archivePath)));
    __clear(innerPath, (unsigned int)(sizeof(innerPath)));
    sprintf(archivePath, "data/menu/dqa_%02d.gp2", ((ArchiveVariant0215c774*)data_ov004_021707e0)->variant);
    sprintf(innerPath, "dqa_%02d_<LG>.spr", ((ArchiveVariant0215c774*)data_ov004_021707e0)->variant);
    BackgroundLoader::AddLockGlobal();
    unsigned int size;
    void* file = ExtractFileFromGP2(archivePath, innerPath, &size);
#endif
    void* model = AddOffset20_021f7318(node);
    PairTableNode0215c774* pairs = FindNodeById0218466c(context, 0);
    char* tables = pairs->tables;
    RestorePairTables0207df90(tables);
    func_0204719c(model);
    if (file != 0) {
        Forward02047b30(model, (int)file, size, (int)&owner->allocator);
    }
    BackupPairTables0207dfac(tables);
    BackgroundLoader::RemoveLockGlobal();
    SetField1cTo2_021f7320(node);
    AppendNodeToList_021f67ac(((ListHead_021f67ac*)func_ov011_021849c8(context)), &node->listNode);
#if defined(jpn)
    int result = 0;
    func_ov004_0215c474(&temporary);
    return result;
#else
    func_ov004_0215c474(&temporary);
    return 0;
#endif
}

struct DownloadedEntry {
    short id;
    unsigned short unknown02;
    unsigned int value : 7;
    unsigned int unknown04 : 25;
    unsigned char unknown08[0x20];
};

struct DownloadedData {
    short unknown00;
    unsigned short unknown02;
    DownloadedEntry entries[6];
    PackedField017 start;
    short itemId;
    unsigned short unknownFA;
    unsigned short price;
    unsigned short unknownFE;
    PackedField017 end;
    PackedField017 timestamp;
    unsigned int unknown108;
    unsigned short flags : 13;
    unsigned short unknownFlags : 3;
    unsigned short unknown10E;
};

// KEEP-NAME
// USA: func_ov004_0215c900
ARM int CheckBitAndNotify_0215c900(void* obj) {
#if defined(jpn)
    const DownloadedData* data = (const DownloadedData*)((const char*)GameState::GetInstance() + 0x5c0c);
#else
    const DownloadedData* data = (const DownloadedData*)((const char*)GameState::GetInstance() + 0x5e6c);
#endif
    if (data->flags & 0x20) {
        func_ov011_021848a0(obj, 2);
    } else {
        func_ov011_021848a0(obj, 1);
    }
    return 0;
}

// USA: func_ov004_0215c948
ARM int SetMessageFlag0215c948(int a) {
	func_ov011_021848a0((void*)a, 0x384);
	return 0;
}

// USA: func_ov004_0215c95c
ARM int SetOv011FieldTo_0215c95c_0215c95c(void* obj) {
    func_ov011_021848a0(obj, 0x395);
    return 0;
}
void OrBitsIntoField0_020466e4(unsigned int* p, unsigned int mask);
extern "C" int func_020aad1c(void* loader, void* name, int a, int b);
extern "C" int func_ov004_0215b1d4(void* obj);
void* GetOffsetPtrromField_021b1fc0_021b1fc0(void* obj);
struct Obj_02184534;
void SetFieldsB0B4_02184534(struct Obj_02184534* obj, int b0, int b4);
#if defined(jpn)
extern "C" void func_0204500c(void*, const char*, int);
#else
extern "C" void func_0204500c(void*, const char*, int, int);
#endif

struct Bits7_0215c974 { unsigned char low7 : 7; unsigned char hi1 : 1; };

#if defined(jpn)
enum { areaOffset_0215c974 = 0xc, taskOffset_0215c974 = 0x3928, messageBufferOffset_0215c974 = 0x28, messageBufferSize_0215c974 = 0x800, messageFlagOffset_0215c974 = 0x868 };
#else
enum { areaOffset_0215c974 = 0x26c, taskOffset_0215c974 = 0x3b48, messageBufferOffset_0215c974 = 0x5c, messageBufferSize_0215c974 = 0x960, messageFlagOffset_0215c974 = 0x998 };
#endif

// USA: func_ov004_0215c974
extern "C" ARM int func_ov004_0215c974(void* obj) {
    void* data;
    bool queued;
    char* gs;
    int g;
    char* cur;
    struct TableA68* table;
    const char* head;
    int len;
    char* rec;
    char* base;
    int i;

    ClearNodeMaskById_021f6600(obj, 0x36, 8);

    data = GetDataPtr02114e04_020d6c00();
    OrBitsIntoField0_020466e4((unsigned int*)data, 0x80);

    BackgroundLoader::AddLockGlobal();
    BackgroundLoader::FreeAllocationsGlobal();
    queued = func_020aad1c(data_ov004_021707e0 + 0x84, data_0211e33c, 0xa, 0) != 0;
    BackgroundLoader::RemoveLockGlobal();
    if (!queued) return 1;

    ClearFlags020466f4((struct FlagWord020466f4*)data, 0x80);

    func_ov023_021f65d4(obj, 0x36, 8);

    g = GetGlobalField0x1c020421a0();
    cur = *(char**)((char*)g + messageBufferOffset_0215c974);
    memset(cur, 0, messageBufferSize_0215c974);

#if defined(jpn)
    GameState* state = GameState::GetInstance();
    gs = (char*)state + areaOffset_0215c974;
    int* options = (int*)((char*)state + 0x6120);
#else
    gs = (char*)GameState::GetInstance() + areaOffset_0215c974;
#endif
    table = (struct TableA68*)DispatchAdjustmentIfType4_02157018(obj, 4);

    head = (const char*)FindEntryByKey_02072a68(table, 0x21);
    len = strlen(head);
    memcpy(cur, head, len);
    cur += len;

    if (data_ov004_021707e0[0x15] != 0) {
        func_ov004_0215b1d4(obj);
        void* q = func_02012fe4();
        Bits7_0215c974* b = (Bits7_0215c974*)((char*)(*(void**)((char*)q + 8)) + 0xd);
        SetStateAndDispatch0209c3b4((struct Actor0209c3b4*)data_02109bf4, b->low7);
        SetModeClamped0209ca70(data_02109bf4, data_ov004_021707e0[0x2d]);
    } else if (data_ov004_021707e0[0x14] != 0) {
        void* raw = GetGameResources();
        void* five = *(void**)((char*)raw + taskOffset_0215c974);
        rec = (char*)GetOffsetPtrromField_021b1fc0_021b1fc0(five);
        base = *(char**)((char*)five + 0x34);

        for (i = 0; i < 4; i++) {
            if (strstr((char*)rec + 0x88, "info")) {
                SetFieldsB0B4_02184534((struct Obj_02184534*)obj, (int)base, *(int*)((char*)rec + 0xac));
                break;
            }
            base += *(int*)((char*)rec + 0xac);
            rec += 0xb0;
        }

        if (i != 4) {
            func_ov011_021848a0(obj, 0x394);
        } else {
            func_ov011_021848a0(obj, 0x3ad);
        }

        int flags = *(unsigned short*)(gs + 0x5d00 + 0xc);
        flags = flags << 0x13;
        flags = (unsigned)flags >> 0x13;
        if (flags & 0x40) {
            const char* s = (const char*)FindEntryByKey_02072a68(table, 0x1c);
            int l = strlen(s);
            memcpy(cur, s, l);
            cur += l;
        }
#if defined(jpn)
        int voiceOn = (options[0x50 / 4] & 1) != 0;
        if (data_ov004_021707e0[0x2f] != voiceOn) {
            const char* s;
            if (voiceOn) {
                s = (const char*)FindEntryByKey_02072a68(table, 0x1d);
            } else {
                s = (const char*)FindEntryByKey_02072a68(table, 0x1e);
            }
            int l = strlen(s);
            memcpy(cur, s, l);
            cur += l;
        }
#endif
        flags = *(unsigned short*)(gs + 0x5d00 + 0xc);
        flags = flags << 0x13;
        flags = (unsigned)flags >> 0x13;
        if (flags & 0x200) {
            const char* s = (const char*)FindEntryByKey_02072a68(table, 0x1f);
            memcpy(cur, s, strlen(s));
        }
    }

#if defined(jpn)
    func_0204500c((void*)g, *(char**)((char*)g + messageBufferOffset_0215c974), 0);
#else
    func_0204500c((void*)g, *(char**)((char*)g + messageBufferOffset_0215c974), 0, 0xe3);
#endif
    *(int*)((char*)g + messageFlagOffset_0215c974) = 1;
    return 0;
}

// USA: func_ov004_0215cbec
ARM int SetOv023ThenOv011Field_0215cbec(void* obj) {
    func_ov023_021f65d4(obj, 2, 8);
    func_ov011_021848a0(obj, 0x68);
    return 0;
}

// USA: func_ov004_0215cc14
ARM int SetupPairAndEnqueue_0215cc14_0215cc14(void* obj) {
    func_ov023_021f65d4(obj, 2, 8);
    func_ov011_021848a0(obj, 0x396);
    return 0;
}

// USA: func_ov004_0215cc40
ARM int SetOv011FieldTo_0215cc40_0215cc40(void* obj) {
    func_ov011_021848a0(obj, 0x3b1);
    return 0;
}

extern "C" void func_ov004_021578a8(void* obj);

// USA: func_ov004_0215cc58  (semantic: IncrementFlag3eClamp6_0215cc58)
extern "C" ARM int func_ov004_0215cc58(void* obj) {
	if (data_ov004_021707e0[0x3e] < 6) {
		data_ov004_021707e0[0x3e]++;
	}
	func_ov004_021578a8(obj);
	return 0;
}

// USA: func_ov004_0215cc84  (semantic: DecrementFlag3eClamp0_0215cc84)
extern "C" ARM int func_ov004_0215cc84(void* obj) {
	if (data_ov004_021707e0[0x3e] != 0) {
		data_ov004_021707e0[0x3e]--;
	}
	func_ov004_021578a8(obj);
	return 0;
}

// USA: func_ov004_0215ccb0
ARM int SetFieldFlagValue0_0215ccb0(void* obj) {
	((char*)data_ov004_021707e0)[0x3e] = 0;
	func_ov004_021578a8(obj);
	return 0;
}

// USA: func_ov004_0215ccd4
ARM int SetFieldFlagValue1_0215ccd4(void* obj) {
	((char*)data_ov004_021707e0)[0x3e] = 1;
	func_ov004_021578a8(obj);
	return 0;
}

// USA: func_ov004_0215ccf8
ARM int SetFieldFlagValue2_0215ccf8(void* obj) {
	((char*)data_ov004_021707e0)[0x3e] = 2;
	func_ov004_021578a8(obj);
	return 0;
}

// USA: func_ov004_0215cd1c
ARM int SetFieldFlagValue3_0215cd1c(void* obj) {
	((char*)data_ov004_021707e0)[0x3e] = 3;
	func_ov004_021578a8(obj);
	return 0;
}

// USA: func_ov004_0215cd40
ARM int SetFieldFlagValue4_0215cd40(void* obj) {
	((char*)data_ov004_021707e0)[0x3e] = 4;
	func_ov004_021578a8(obj);
	return 0;
}

// USA: func_ov004_0215cd64
ARM int SetFieldFlagValue5_0215cd64(void* obj) {
	((char*)data_ov004_021707e0)[0x3e] = 5;
	func_ov004_021578a8(obj);
	return 0;
}

// USA: func_ov004_0215cd88
ARM int SetFieldFlagValue6_0215cd88(void* obj) {
	((char*)data_ov004_021707e0)[0x3e] = 6;
	func_ov004_021578a8(obj);
	return 0;
}

struct Stat0215cdac { char pad[0x5c]; short cur; short max; };
extern "C" int func_ov004_02158fec(void*);

// USA: func_ov004_0215cdac
ARM int IncrementStat5b_0215cdac(void* obj) {
    Stat0215cdac* stat = ((Stat0215cdac*)func_ov004_02156ed0(obj, 0x5b));
    short cur = stat->cur;
    short max = stat->max;
    short newCur = cur + 1;
    if (max <= newCur) newCur = 0;
    stat->cur = newCur;
    stat->max = max;
    func_ov004_02158fec(obj);
    return 0;
}

struct Stat0215cdf0 { char pad[0x5c]; short cur; short max; };

// USA: func_ov004_0215cdf0
ARM int DecrementStat5b_0215cdf0(void* obj) {
    Stat0215cdf0* stat = ((Stat0215cdf0*)func_ov004_02156ed0(obj, 0x5b));
    short cur = stat->cur;
    short max = stat->max;
    short newCur = cur - 1;
    if (newCur < 0) newCur = max - 1;
    stat->cur = newCur;
    stat->max = max;
    func_ov004_02158fec(obj);
    return 0;
}

struct Stat0215ce38 { char pad[0x5c]; short cur; short max; };
extern "C" int func_ov004_0215a738(void*);

// USA: func_ov004_0215ce38
ARM int IncrementStat63_0215ce38(void* obj) {
    Stat0215ce38* stat = ((Stat0215ce38*)func_ov004_02156ed0(obj, 0x63));
    short cur = stat->cur;
    short max = stat->max;
    short newCur = cur + 1;
    if (max <= newCur) newCur = 0;
    stat->cur = newCur;
    stat->max = max;
    func_ov004_0215a738(obj);
    return 0;
}

struct Stat0215ce7c { char pad[0x5c]; short cur; short max; };

// USA: func_ov004_0215ce7c
ARM int DecrementStat63_0215ce7c(void* obj) {
    Stat0215ce7c* stat = ((Stat0215ce7c*)func_ov004_02156ed0(obj, 0x63));
    short cur = stat->cur;
    short max = stat->max;
    short newCur = cur - 1;
    if (newCur < 0) newCur = max - 1;
    stat->cur = newCur;
    stat->max = max;
    func_ov004_0215a738(obj);
    return 0;
}

struct Battle021707d8_0215cec4 { char pad[0x32]; short members[4]; short memberCount; };

struct MemberIds_0215cec4 { int ids[4]; };
extern MemberIds_0215cec4 data_ov004_0216fb70;
struct Entry_0215cec4 { short key; };
struct Element020de650_0215cec4 { char pad[8]; unsigned int kind : 4; };
int IsValueInCombatantField150List_020dd718(int combatantId, int value);

typedef void (*FuncPtrE0_0215cec4)(void*, int);
struct HandlerE0_0215cec4 { char pad[0xe0]; FuncPtrE0_0215cec4 func; };
struct NodeE0_0215cec4 { HandlerE0_0215cec4* handler; };

typedef void (*FuncPtrD8_0215cec4)(void*, int);
struct HandlerD8_0215cec4 { char pad[0xd8]; FuncPtrD8_0215cec4 func; };
struct NodeD8_0215cec4 { HandlerD8_0215cec4* handler; };

class MemberPanel_0215cec4 {
public:
    virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03();
    virtual void v04(); virtual void v05(); virtual void v06(); virtual void v07();
    virtual void v08(); virtual void v09(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43();
    virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47();
    virtual void v48(); virtual void v49(); virtual void v50(); virtual void v51();
    virtual void v52(); virtual void v53();
    virtual void SetIcon(int icon);
    char pad[0x1c];
    BaseCombatStats* stats;
};
struct TitlePanel_0215cec4 { char pad[0x38]; short style; };

// USA: func_ov004_0215cec4
extern "C" ARM int func_ov004_0215cec4(void* a) {
    GameState* bs = GameState::GetInstance();
    int key = DispatchNodeIfType7_02156e2c(a, 0x5b);
    if (key < 0) return 0;
    Entry_0215cec4* entry = ((Entry_0215cec4*)GetEntryFor_021570a4(a, key & 0xff));
    if (!entry) return 0;
    Container020dedd0* node = ((Container020dedd0*)func_ov004_02156fd4(a, 5));
    if (!node) return 0;
    Element020de650_0215cec4* elem = ((Element020de650_0215cec4*)FindElementByKey020dedd0(node, entry->key));
    if (!elem) return 0;

    MessageSlotTable_020dd7ac buf;
    func_020dd7ac(&buf);
    int typeCode = 1;
    if (elem->kind != 0) typeCode = 3;

    TitlePanel_0215cec4* title = (TitlePanel_0215cec4*)func_ov004_02156f04(a, 0x1d6);
    if (title) title->style = typeCode + 0xb;

    MemberIds_0215cec4 members = data_ov004_0216fb70;
    int count;
    int i;
    Battle021707d8_0215cec4* battle = (Battle021707d8_0215cec4*)data_ov004_021707e0;
    count = battle->memberCount;
    for (i = 0; i < count; i++) {
        members.ids[i] = battle->members[i];
    }

    for (unsigned char j = 0; j < 4; j++) {
        int id = members.ids[j];
        GameObject* member = bs->GetPartyMemberByIndex(id);
        if (member) {
            MemberPanel_0215cec4* stat = (MemberPanel_0215cec4*)func_ov004_02156f04(a, j + 0x1c2);
            if (!stat) return 0;
            stat->stats = member->baseStats_;
            stat->SetIcon(func_020dcc98(members.ids[j]));
            if (IsValueInCombatantField150List_020dd718((signed char)members.ids[j], entry->key)) {
                func_ov023_021f65d4(a, j + 0x1c6, 8);
                func_ov023_021f65d4(a, j + 0x1ce, 8);
                func_ov023_021f65d4(a, j + 0x1ca, 8);
                func_ov023_021f65d4(a, j + 0x1d2, 8);
                ClearNodeMaskById_021f6600(a, j + 0x1d7, 8);
            } else if (func_020dd4c4((signed char)id, (Entry020dd4c4*)elem)) {
                func_ov023_021f65d4(a, j + 0x1c6, 8);
                func_ov023_021f65d4(a, j + 0x1ce, 8);
                func_ov023_021f65d4(a, j + 0x1ca, 8);
                ClearNodeMaskById_021f6600(a, j + 0x1d2, 8);
                func_ov023_021f65d4(a, j + 0x1d7, 8);
            } else {
                ClearNodeMaskById_021f6600(a, j + 0x1c6, 8);
                ClearNodeMaskById_021f6600(a, j + 0x1ce, 8);
                ClearNodeMaskById_021f6600(a, j + 0x1ca, 8);
                func_ov023_021f65d4(a, j + 0x1d2, 8);
                func_ov023_021f65d4(a, j + 0x1d7, 8);

                func_020dd7ac(&buf);
                unsigned short valA, valB;
                if (elem->kind == 0) {
                    Setup020ddaf4((int)&buf, id, (int)elem, 0, (int)&valA, (int)&valB);
                } else {
                    Setup020ddaf4((int)&buf, id, (int)elem, 1, (int)&valA, (int)&valB);
                }

                NodeE0_0215cec4* hA = (NodeE0_0215cec4*)func_ov004_02156f38(a, j + 0x1c6);
                if (hA) hA->handler->func(hA, valA);
                NodeE0_0215cec4* hB = (NodeE0_0215cec4*)func_ov004_02156f38(a, j + 0x1ca);
                if (hB) hB->handler->func(hB, valB);

                NodeD8_0215cec4* dA = (NodeD8_0215cec4*)func_ov023_021f6880((void**)(func_ov011_021849c8(a)), j + 0x1c6);
                if (dA) dA->handler->func(dA, 0xf);

                if (valA == valB) {
                    NodeD8_0215cec4* dB = (NodeD8_0215cec4*)func_ov023_021f6880((void**)(func_ov011_021849c8(a)), j + 0x1ca);
                    if (dB) dB->handler->func(dB, 0xf);
                } else if (valA < valB) {
                    NodeD8_0215cec4* dB = (NodeD8_0215cec4*)func_ov023_021f6880((void**)(func_ov011_021849c8(a)), j + 0x1ca);
                    if (dB) dB->handler->func(dB, 5);
                } else {
                    NodeD8_0215cec4* dB = (NodeD8_0215cec4*)func_ov023_021f6880((void**)(func_ov011_021849c8(a)), j + 0x1ca);
                    if (dB) dB->handler->func(dB, 9);
                }
            }
        } else {
            func_ov023_021f65d4(a, j + 0x1c2, 8);
            func_ov023_021f65d4(a, j + 0x1c6, 8);
            func_ov023_021f65d4(a, j + 0x1ce, 8);
            func_ov023_021f65d4(a, j + 0x1ca, 8);
            func_ov023_021f65d4(a, j + 0x1d2, 8);
            func_ov023_021f65d4(a, j + 0x1d7, 8);
        }
    }

    void* n17 = func_ov004_02156f6c(a, 0x17);
    if (n17) func_ov023_021f809c(n17, a);
    return 0;
}
struct Obj02086aec;
short SumCombatantKeyMatches02086aec(struct Obj02086aec* obj, int key);
int ScaleStatsIfType12_021f6f10(void*);
struct Struct0200fb08;
unsigned char NormalizeField5_0200fb08(struct Struct0200fb08*);

struct Args0215d384 { int a; int b; int c; };

class VObjA0215d384 {
public:
    virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03();
    virtual void v04(); virtual void v05(); virtual void v06(); virtual void v07();
    virtual void v08(); virtual void v09(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43();
    virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47();
    virtual void v48(); virtual void v49(); virtual void v50(); virtual void v51();
    virtual void v52(); virtual void v53(); virtual void v54(); virtual void v55();
    virtual void MethodE0(int arg);
};

class VObjB0215d384 {
public:
    virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03();
    virtual void v04(); virtual void v05(); virtual void v06();
    virtual void Method1c(const Args0215d384& args);
};

// USA: func_ov004_0215d384
extern "C" ARM int func_ov004_0215d384(void* a) {
    GameState* bs = GameState::GetInstance();
    int idx = DispatchNodeIfType7_02156e2c(a, 0x5b);
    if (idx < 0) return 0;
    void* entry = GetEntryFor_021570a4(a, idx & 0xff);
    if (!entry) return 0;
    VObjA0215d384* nodeA = (VObjA0215d384*)func_ov004_02156f38(a, 0x1dc);
    if (!nodeA) return 0;

    int matches = SumCombatantKeyMatches02086aec((struct Obj02086aec*)GetPtrField0x2a04_02010828(bs), *(short*)entry);
    nodeA->MethodE0(matches);

    void* nodeC = func_ov004_02156f6c(a, 0x1b);
    if (nodeC) func_ov023_021f809c(nodeC, a);

#if !defined(jpn)
    VObjB0215d384* nodeB = (VObjB0215d384*)func_ov023_021f6880((void**)(func_ov011_021849c8(a)), 0x1dd);
    if (!nodeB) return 0;
    if (ScaleStatsIfType12_021f6f10(nodeB) != 8) return 0;

    Args0215d384 args;
    args.b = 0x4000;
    args.c = 0;
    int kind = ((int)NormalizeField5_0200fb08((struct Struct0200fb08*)bs));
    switch (kind) {
    case 1: args.a = 0x14000; nodeB->Method1c(args); break;
    case 2: args.a = 0xe000; nodeB->Method1c(args); break;
    case 3: args.a = 0xb000; nodeB->Method1c(args); break;
    case 4: args.a = 0x6000; nodeB->Method1c(args); break;
    case 5: args.a = 0x9000; nodeB->Method1c(args); break;
    default: break;
    }
#endif
    return 0;
}

struct Stat0215d534 { char pad[0x5c]; short cur; short max; };
struct Entry0215d534 { short id; short pad2; unsigned int limit : 7; };
struct Battle021707d8_0215d534 { char pad[0x11]; unsigned char count; };

struct SearchStruct;
int DispatchNodeIfType7_02156e2c(void* obj, int key);
extern "C" int func_ov004_0215c0c0(void* obj);
void EnqueueEventTag184_021d3bbc(int a, int b, int c, int d);
int TestFlagBitAt0xe_0202c578(SearchStruct* obj, int value);
extern "C" void func_ov011_02184a40(void* obj, int val);

// USA: func_ov004_0215d534
extern "C" ARM int func_ov004_0215d534(void* obj) {
#if defined(jpn)
 enum { stateOffset_0215d534 = 0xc };
#else
 enum { stateOffset_0215d534 = 0x26c };
#endif
    int key = DispatchNodeIfType7_02156e2c(obj, 0x5b);
    if (key < 0) return 0;

    SearchStruct* search = ((SearchStruct*)func_0202ae18());
    if (!CheckField0NonZero_0202b7d8((int*)search)) {
        func_ov004_0215c0c0(obj);
    } else {
        int slot = ((Stat0215d534*)func_ov004_02156ed0(obj, 0x5b))->cur * 6 + key;
        Entry0215d534* entry = (Entry0215d534*)GetEntryFor_021570a4(obj, (unsigned char)key);

        if (func_0202c508((CheckField0AndGlobalHalfStruct0202c508*)search)) {
            if (entry->limit >= ((Battle021707d8_0215d534*)data_ov004_021707e0)->count) {
                func_ov004_0215c0c0(obj);
                EnqueueEventTag184_021d3bbc(slot, ((Battle021707d8_0215d534*)data_ov004_021707e0)->count, 1, 0);
            } else {
                func_ov011_021848a0(obj, 0x2367);
            }
        } else if (!TestFlagBitAt0xe_0202c578(search, 0)) {
            char* p = (char*)GameState::GetInstance() + stateOffset_0215d534;
            *(unsigned short*)(p + 0x5d00 + 0xc) &= ~0xe000;
            EnqueueEventTag184_021d3bbc(slot, ((Battle021707d8_0215d534*)data_ov004_021707e0)->count, 3, 0);
            func_ov011_02184a40(obj, 0x5c);
        } else {
            func_ov011_021848a0(obj, 0x2369);
        }
    }
    return 0;
}

// USA: func_ov004_0215d670
ARM int DispatchByFieldState_0215d670(void* obj) {
#if defined(jpn)
 enum { stateOffset_0215d670 = 0xc };
#else
 enum { stateOffset_0215d670 = 0x26c };
#endif
    char* p = (char*)GameState::GetInstance() + stateOffset_0215d670;
    void* s = func_0202ae18();
    unsigned short v = *(unsigned short*)(p + 0x5d00 + 0xc);
    int state = (unsigned int)(v << 16) >> 29;
    if (state == 1) {
        func_ov004_0215c0c0(obj);
        return 0;
    }
    if (state == 2) {
        func_ov011_021848a0(obj, 0x2367);
        return 0;
    }
    if (!TestFlagBitAt0xe_0202c578((struct SearchStruct*)s, 0)) {
        return 1;
    }
    func_ov011_021848a0(obj, 0x2369);
    return 0;
}

// USA: func_ov004_0215d6f8  (semantic: NotifyByFlagState_0215d6f8)
extern "C" ARM int func_ov004_0215d6f8(void* obj) {
    void* p = data_ov004_021707e0;
    if (*(unsigned char*)((char*)p + 0x11) == 1) {
        func_ov011_021848a0(obj, 0x236a);
    } else {
        func_ov011_021848a0(obj, 0x38a);
    }
    return 0;
}
int DispatchBySelector02086c4c(unsigned char* obj, int id, int key);
short SumKeyedLookups02086bf4(char* obj, int key);

class VObj0215d738 {
public:
    virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03();
    virtual void v04(); virtual void v05(); virtual void v06(); virtual void v07();
    virtual void v08(); virtual void v09(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43();
    virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47();
    virtual void v48(); virtual void v49(); virtual void v50(); virtual void v51();
    virtual void v52(); virtual void v53();
    virtual void MethodD8(int arg);
    virtual void v55();
    virtual void MethodE0(int arg);
};

struct Node0215d738 { void* vtbl; char pad[0x1c]; int f20; };

struct Party0215d738 { char pad[0x32]; short ids[4]; short count; };

struct Slots0215d738 { int id[4]; };
extern const Slots0215d738 data_ov004_0216fb80;

// USA: func_ov004_0215d738
extern "C" ARM int func_ov004_0215d738(void* a) {
    GameState* bs = GameState::GetInstance();
    unsigned char* p = (unsigned char*)GetPtrField0x2a04_02010828(bs);
    int idx = DispatchNodeIfType7_02156e2c(a, 0x5b);
    if (idx < 0) return 0;
    short* entry = (short*)GetEntryFor_021570a4(a, idx & 0xff);
    if (!entry) return 0;
    void* container = ((void*)func_ov004_02156fd4(a, 5));
    if (!container) return 0;
    if (!FindElementByKey020dedd0((struct Container020dedd0*)container, *entry)) return 0;

    int ids[4];
    *(Slots0215d738*)ids = data_ov004_0216fb80;
    int count;
    int j;
    Party0215d738* party = (Party0215d738*)data_ov004_021707e0;
    count = party->count;
    for (j = 0; j < count; j++) {
        ids[j] = party->ids[j];
    }

    for (unsigned char i = 0; i < 5; i++) {
        int id = ids[i];
        GameObject* member = bs->GetPartyMemberByIndex(id);
        if (member) {
            Node0215d738* node = ((Node0215d738*)func_ov004_02156f04(a, i + 0x1df));
            if (!node) return 0;
            node->f20 = *(int*)((char*)member + 0x134);
            id = ids[i];
            ((VObj0215d738*)node)->MethodD8(func_020dcc98((signed char)id));
            int r = DispatchBySelector02086c4c(p, id, *entry);
            if (r == 0) {
                func_ov023_021f65d4(a, i + 0x1e4, 8);
                func_ov023_021f65d4(a, i + 0x1ee, 8);
                ClearNodeMaskById_021f6600(a, i + 0x1e9, 8);
            } else {
                ClearNodeMaskById_021f6600(a, i + 0x1e4, 8);
                ClearNodeMaskById_021f6600(a, i + 0x1ee, 8);
                func_ov023_021f65d4(a, i + 0x1e9, 8);
                VObj0215d738* n = ((VObj0215d738*)func_ov004_02156f38(a, i + 0x1e4));
                if (n) n->MethodE0(r);
            }
        } else if (i == count) {
            ClearNodeMaskById_021f6600(a, i + 0x1df, 8);
            ClearNodeMaskById_021f6600(a, i + 0x1e4, 8);
            ClearNodeMaskById_021f6600(a, i + 0x1ee, 8);
            func_ov023_021f65d4(a, i + 0x1e9, 8);
            int sum = SumKeyedLookups02086bf4((char*)p, *entry);
            VObj0215d738* n = ((VObj0215d738*)func_ov004_02156f38(a, i + 0x1e4));
            if (n) n->MethodE0(sum);
        } else {
            func_ov023_021f65d4(a, i + 0x1df, 8);
            func_ov023_021f65d4(a, i + 0x1e4, 8);
            func_ov023_021f65d4(a, i + 0x1ee, 8);
            func_ov023_021f65d4(a, i + 0x1e9, 8);
        }
    }

    void* n = func_ov004_02156f6c(a, 0x1c);
    if (n) func_ov023_021f809c(n, a);
    return 0;
}
extern "C" void func_0207cf30(void*, int, int, int);

// USA: func_ov004_0215da0c
extern "C" ARM int func_ov004_0215da0c(void* obj) {
    void* p = GetPtrField0x2a04_02010828(GameState::GetInstance());
    int result4 = SumKeyedLookups02086bf4((char*)p, *(short*)(data_ov004_021707e0 + 0xe));

#if !defined(jpn)
    unsigned char flag = data_ov004_021707e0[0x9d];
    if (!flag) return 0;
#endif

    int container = func_ov004_02156fd4(obj, 5);
    if (container) {
        unsigned char local[0x38];
        ((SafeAllocator*)local)->ResetAllocatorPointer();
        ZeroInitReturn020de824(local + 0x14);
        InitStruct0207cbe8((char*)local);
        InitStruct0207cbe8((char*)local);

        *(int*)(local + 0x2c) = container;
        func_0207cf30(local, *(short*)(data_ov004_021707e0 + 0xe), data_ov004_021707e0[0x11], 1);

        InitStruct0207cc0c((char*)local);
#if defined(jpn)
        data_ov004_021707e0[0xa9] = 0;
#else
        data_ov004_021707e0[0x9d] = 0;
#endif
    }

    int sum = result4 + data_ov004_021707e0[0x11];
    if (sum > 0x63) {
        func_ov011_021848a0(obj, 0x2385);
    } else {
        func_ov011_021848a0(obj, 0x38d);
    }
    func_ov023_021f65d4(obj, 2, 8);
    return 0;
}

struct Menu0215db14 {
    char pad00[0xe];
    short key;
    char pad10;
    unsigned char quantity;
    signed char combatant;
    char pad13[0x1f];
    short entries[4];
    short count;
#if defined(jpn)
    char pad3c[0x6d];
#else
    char pad3c[0x61];
#endif
    unsigned char active;
};
struct IndexList0215db14 { int entries[4]; };
extern IndexList0215db14 data_ov004_0216fb40;
struct ItemTransferContext0215db14 { SafeAllocator allocator; char state[0x18]; int container; char pad[8]; };
struct Combatant0215db14 { char pad[0x130]; unsigned int* flags; };
extern "C" int func_ov004_0215da0c(void*);
int CountPositiveSlots02083960(Slots02083960*);
short SumKeyedLookups02086bf4(char*, int);
extern "C" void func_0207ccf0(void*, int, int, int, int, int, int);

// USA: func_ov004_0215db14
extern "C" ARM int func_ov004_0215db14(void* obj) {
    GameState* state = GameState::GetInstance();
#if !defined(jpn)
    if (!((Menu0215db14*)data_ov004_021707e0)->active) return 0;
#endif
    int index = DispatchNodeIfType7_02156e2c(obj, 0x5f);
    if (index < 0) return 0;
    GameObject* combatant;
    int freeSlots;
    int selected;
    IndexList0215db14 list;
    COPY_ARRAY(list.entries, data_ov004_0216fb40.entries);
    int count;
    int i;
    Menu0215db14* menu;
    menu = ((Menu0215db14*)data_ov004_021707e0);
    count = menu->count;
    for (i = 0; i < count; i++) list.entries[i] = menu->entries[i];
    if (count == index) {
        func_ov004_0215da0c(obj);
        return 0;
    }
    selected = list.entries[index];
    menu->combatant = selected;
    combatant = GetCombatantWithFlag0x100_0200ff1c(state, ((Menu0215db14*)data_ov004_021707e0)->combatant);
    freeSlots = 0;
    if (combatant) {
        Slots02083960* slots = ((Slots02083960*)GetFieldAt0x150_02053c6c((unsigned char*)combatant));
        if (slots) freeSlots = 8 - CountPositiveSlots02083960(slots);
    }
    int total = SumKeyedLookups02086bf4((char*)GetPtrField0x2a04_02010828(state), ((Menu0215db14*)data_ov004_021707e0)->key);
    int container = func_ov004_02156fd4(obj, 5);
    if (container) {
        ItemTransferContext0215db14 work;
        work.allocator.ResetAllocatorPointer();
        ZeroInitReturn020de824(work.state);
        InitStruct0207cbe8((char*)&work);
        InitStruct0207cbe8((char*)&work);
        work.container = container;
        func_0207ccf0(&work, ((Menu0215db14*)data_ov004_021707e0)->key, ((Menu0215db14*)data_ov004_021707e0)->quantity, selected, 1, 1, 0);
        InitStruct0207cc0c((char*)&work);
        ((Menu0215db14*)data_ov004_021707e0)->active = 0;
    }
    if (((Menu0215db14*)data_ov004_021707e0)->quantity > freeSlots && total < 99) {
        func_ov011_021848a0(obj, 0x2383);
    } else if (((Menu0215db14*)data_ov004_021707e0)->quantity > freeSlots && total >= 99) {
        func_ov011_021848a0(obj, 0x2386);
    } else if (combatant && (*((Combatant0215db14*)combatant)->flags & 1)) {
        func_ov011_021848a0(obj, 0x2387);
    } else {
        func_ov011_021848a0(obj, 0x2382);
    }
    func_ov023_021f65d4(obj, 2, 8);
    return 0;
}
extern "C" int func_ov004_02157a28(void* a, int flag);
struct Bytes8 { unsigned char b[8]; };
extern Bytes8 data_ov004_0216fb20;
extern int data_ov004_0216fc1c[];
struct Entry { unsigned int _p0; unsigned int _p4; unsigned int lowNibble : 4; unsigned int _r : 28; };
struct Bits { unsigned int lo : 27; unsigned int b27 : 1; unsigned int b28 : 1;
              unsigned int b29 : 1;  unsigned int hi : 2; };
struct Node { unsigned int w0; Bits f; };
struct FlagByte { unsigned char bit0 : 1; unsigned char _rest : 7; };
#if defined(jpn)

struct GameObject* GetCombatantWithFlag0x100_0200ff1c(struct GameState*, int);
#endif

// USA: func_ov004_0215dd3c
extern "C" ARM int func_ov004_0215dd3c(void* a) {
    int prev = ((int)func_ov004_02157128(a));
    GameState* bs = GameState::GetInstance();
    GameObject* combatant = GetCombatantWithFlag0x100_0200ff1c(bs, prev);
    if (!combatant) return 0;
    void* ptr = GetPtrField0x2a04_02010828(bs);
    Bytes8 buf;
    buf = data_ov004_0216fb20;
    unsigned char flags[2];
    for (unsigned char i = 0; i < 8; i++) {
        unsigned char byte = buf.b[i];
        if (byte == 0xff) break;
#if defined(jpn)
        char* entry = (char*)(*(unsigned char**)((char*)combatant + 0x144) + 0x194) + byte * 0x20;
#else
        char* entry = (char*)(*(unsigned char**)((char*)combatant + 0x150) + 0x194) + byte * 0x20;
#endif
        if (entry) {
            char* p2 = *(char**)entry;
            if (p2) {
                if (!((Node*)p2)->f.b29) {
                    int bit27 = ((Node*)p2)->f.b27 ? 1 : 0;
                    flags[1] = ((Node*)p2)->f.b28 ? 1 : 0;
                    flags[0] = bit27;
#if defined(jpn)
                    unsigned int idx = ((FlagByte*)(*(unsigned char**)((char*)combatant + 0x144) + 0x49c))->bit0;
#else
                    unsigned int idx = ((FlagByte*)(*(unsigned char**)((char*)combatant + 0x150) + 0x49c))->bit0;
#endif
                    if (!flags[idx]) {
                        func_02052d7c((Obj02052d7c*)combatant, data_ov004_0216fc1c[i], (int)(-1));
                        if (entry) {
                            unsigned int lowNibble = ((Entry*)entry)->lowNibble;
                            short s18 = *(short*)(entry + 0x18);
                            func_0207c378((KeyedList0207c378*)((char*)ptr + 0x1d4), s18, 1, lowNibble);
                        }
                    }
                }
            }
        }
    }
    return func_ov004_02157a28(a, 1);
}

struct Struct0209c830;
void SetValueAndActivate0209c830(Struct0209c830*, int);

// USA: func_ov004_0215de80  (semantic: SetOv009cbb830To61_0215de80)
extern "C" ARM int func_ov004_0215de80(void) {
    SetValueAndActivate0209c830((Struct0209c830*)data_02109bf4, 0x3d);
    return 0;
}
#if !defined(jpn)
struct Obj021fb25c;
void SetShorts_021fb25c(Obj021fb25c* obj, unsigned int a, unsigned int b, unsigned int c, int d);

struct ParamsDE9C { int type; int x; int y; };

class VObjDE9C {
public:
	virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03();
	virtual void v04(); virtual void v05(); virtual void v06();
	virtual void SetParams(ParamsDE9C* p);
};

// USA: func_ov004_0215de9c
extern "C" ARM int func_ov004_0215de9c(void* a) {
	GameState* battle = GameState::GetInstance();
	void* base = func_ov011_021849c8(a);
	VObjDE9C* node = (VObjDE9C*)func_ov023_021f6880((void**)base, 0x2be);
	if (!node) return 0;
	if (ScaleStatsIfType12_021f6f10(node) != 1) return 0;
	ParamsDE9C p;
	p.x = 0x5a000;
	p.y = 0;
	switch (NormalizeField5_0200fb08((struct Struct0200fb08*)battle)) {
	case 1:
		p.type = 0x90000;
		node->SetParams(&p);
		SetShorts_021fb25c((struct Obj021fb25c*)node, 0, 0, 0x2c, 0xc);
		break;
	case 2:
		p.type = 0x90000;
		node->SetParams(&p);
		SetShorts_021fb25c((struct Obj021fb25c*)node, 0, 0, 0x2c, 0xc);
		break;
	case 3:
		p.type = 0x98000;
		node->SetParams(&p);
		SetShorts_021fb25c((struct Obj021fb25c*)node, 0, 0, 0x20, 0xc);
		break;
	case 4:
		p.type = 0x8c000;
		node->SetParams(&p);
		SetShorts_021fb25c((struct Obj021fb25c*)node, 0, 0, 0x32, 0xc);
		break;
	case 5:
		p.type = 0x8c000;
		node->SetParams(&p);
		SetShorts_021fb25c((struct Obj021fb25c*)node, 0, 0, 0x32, 0xc);
		break;
	}
	void* node2 = func_ov023_021f6880((void**)base, 0x2bf);
	if (!node2) return 0;
	if (ScaleStatsIfType12_021f6f10(node2) != 1) return 0;
	switch (NormalizeField5_0200fb08((struct Struct0200fb08*)battle)) {
	case 1: SetShorts_021fb25c((struct Obj021fb25c*)node2, 0, 0, 0x2c, 0xc); break;
	case 2: SetShorts_021fb25c((struct Obj021fb25c*)node2, 0, 0, 0x2c, 0xc); break;
	case 3: SetShorts_021fb25c((struct Obj021fb25c*)node2, 0, 0, 0x24, 0xc); break;
	case 4: SetShorts_021fb25c((struct Obj021fb25c*)node2, 0, 0, 0x30, 0xc); break;
	case 5: SetShorts_021fb25c((struct Obj021fb25c*)node2, 0, 0, 0x30, 0xc); break;
	}
	return 0;
}
#endif

struct Element020de650_0215e148 { char pad[8]; unsigned int field8 : 4; };
extern "C" void func_0207cf30(void* buf, int a, int b, int c);

#if defined(jpn)
#define MESSAGE_FLAG_OFFSET 0xa9
#else
#define MESSAGE_FLAG_OFFSET 0x9d
#endif

// USA: func_ov004_0215e148  (semantic: SetupDamageMessageOrDefault_0215e148)
extern "C" ARM int func_ov004_0215e148(void* obj) {
    if (((char*)data_ov004_021707e0) != NULL && *(unsigned char*)(((char*)data_ov004_021707e0) + MESSAGE_FLAG_OFFSET) != 0) {
        GameState::GetInstance();
        int key = DispatchNodeIfType7_02156e2c(obj, 0x5b);
        if (key < 0) return 0;
        void* entry = GetEntryFor_021570a4(obj, key & 0xff);
        if (!entry) return 0;
        struct Container020dedd0* node = ((struct Container020dedd0*)func_ov004_02156fd4(obj, 5));
        if (!node) return 0;
        struct Element020de650_0215e148* elem = ((struct Element020de650_0215e148*)FindElementByKey020dedd0(node, *(short*)entry));
        if (!elem) return 0;

        char buf[0x38];
        ((SafeAllocator*)buf)->ResetAllocatorPointer();
        ZeroInitReturn020de824(buf + 0x14);
        InitStruct0207cbe8(buf);
        InitStruct0207cbe8(buf);
        *(void**)(buf + 0x2c) = node;
        int ok = elem->field8 <= 7;
        if (ok) {
            func_0207d134((Obj0207d134*)buf, (int)(*(short*)(((char*)data_ov004_021707e0) + 0xe)), *(signed char*)(((char*)data_ov004_021707e0) + 0x11));
        } else {
            func_0207cf30(buf, *(short*)(((char*)data_ov004_021707e0) + 0xe), *(unsigned char*)(((char*)data_ov004_021707e0) + 0x11), 1);
        }
        InitStruct0207cc0c(buf);
    }
    return 0;
}

#undef MESSAGE_FLAG_OFFSET
