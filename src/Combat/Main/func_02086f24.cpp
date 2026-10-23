#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Filesystem/BackgroundLoader.h"
#include "Filesystem/FileIO.h"
#include "Combat/ResourceScriptEntry.h"
#include "NitroSDK/Memory.h"
#include "std_library_functions.h"

struct PackedTriple02086f24 {
    unsigned int x : 10;
    unsigned int y : 10;
    unsigned int z : 10;
    unsigned int reserved : 2;
};

struct Appearance02086f24 {
    short equipment[10];
    unsigned char gender : 1;
    unsigned char hairStyle : 3;
    unsigned char hairColor : 4;
    unsigned char face : 4;
    short voice;
    short height;
    short width;
};

struct CombatSelection {
    signed char selected : 6;
    unsigned char active : 1;
    unsigned char reserved : 1;
    unsigned char count : 4;
    unsigned char ready : 1;
    unsigned char mode : 3;
    unsigned char levels[13];
    unsigned char status[13];
    int experience[13];
    int current;
    unsigned short selectionMask;
    char pad56[2];
    PackedTriple02086f24 triples[13][3];
    unsigned short skillPoints;
    unsigned char flags[27];
    unsigned char groupFlags[9];
    unsigned char commandFlags[36];
    unsigned char field13e;
    unsigned char cursor : 3;
    unsigned char capacity : 5;
    unsigned char name[12];
    PackedTriple02086f24 vectors[4];
    unsigned int timer : 10;
    unsigned int timerLimit : 10;
    unsigned int reserved15c : 12;
    Appearance02086f24 appearance;
    unsigned char history[0xc0];
};

struct RecruitTemplate02086f24 {
    signed char id;
    char pad1[3];
    const char* name;
    unsigned char gender;
    char pad9;
    short voice;
    char padc[4];
    unsigned char hairStyle;
    unsigned char face;
    unsigned char hairColor;
    char pad13;
    float height;
    float width;
    short equipment[10];
    unsigned char levels[13];
    unsigned char vocation;
    unsigned char count;
    unsigned char cursor;
};

struct ResetFieldsStruct {
    RecruitTemplate02086f24* entries;
    short count;
    short f6;
    short f8;
    char pad0a[2];
    int fc;
    short f10;
    char pad12[2];
    int f14;
    short f18;
};

struct CharacterProfile02086f24 {
    char name[0x30];
    unsigned short stat6c;
    unsigned short stat6e;
    unsigned short stat70;
    unsigned short stat72;
};

struct Element020de650 {
    unsigned int v[8];
};

struct CharacterRecord02086f24 {
    PackedTriple02086f24 base[4];
    unsigned char pad10[0x2c];
    CharacterProfile02086f24 profile;
    unsigned char pad74[0x120];
    Element020de650 equipment[11];
#if defined(jpn)
    unsigned char pad2f4[0x5d8];
#else
    unsigned char pad2f4[0x670];
#endif
};

struct Container020dedd0 {
    unsigned short count;
    unsigned char pad[10];
    Element020de650* base;
    unsigned char pad2[4];
    unsigned char useBinarySearch;
};

struct Party02086f24 {
    unsigned char pad[0xf70];
    unsigned int memberCount;
};

struct EntryArray02089fb0;
struct Ctx0209a8b4 { void* field0; };
struct Holder0209ab20;
struct StreamHeader;

extern "C" void func_02089db4(ResetFieldsStruct* s);
extern "C" void func_02089ddc(ResetFieldsStruct* s);
extern "C" void func_02089de8(void* param0, void* param1, const char* param2);
extern "C" RecruitTemplate02086f24* func_02089fb0(EntryArray02089fb0* arr, int id);
extern "C" void func_02086404(CombatSelection* selection);
extern "C" void __clear(void* dst, unsigned int size);
extern "C" int func_020426bc(const void* a, void* b, int flag);
extern "C" void func_02082828(CharacterRecord02086f24* record);
extern "C" void func_02082d6c(CharacterRecord02086f24* dst, CombatSelection* src);
extern "C" void func_02082fc4(void* a, void* b);
extern "C" void func_020de824(void* p);
extern "C" void func_020de848(void* p);
extern "C" int func_020def44(int a0, int a1, int a2, short a3);
extern "C" void func_02083e28(void* a, int arg2);
extern "C" void func_0209a804(int* p);
extern "C" void func_0209a8b4(Ctx0209a8b4* ctx, SafeAllocator* alloc, StreamHeader* data, int length);
extern "C" int func_0209ab20(Holder0209ab20* h, int slot, int threshold, unsigned char* out);
extern "C" int func_02086778(Party02086f24* party, CombatSelection* sel, unsigned char c, unsigned char d);

extern const char* data_020f2a38;
extern const char* data_020f2a30;
extern const signed char data_020e8a94[10];
extern const char data_020f102e[];
extern unsigned char data_0211e33c[];
#if defined(jpn)
extern "C" void* func_020e0968(const char* filename, unsigned int* outLength);
extern const char data_020f1150[];
#define HEAP_SIZE_02086f24 0xc00
#else
#define HEAP_SIZE_02086f24 0x800
#endif

#define FX_F32_TO_FX16(x) ((short)(((x) > 0) ? (short)((x) * 4096.0f + 0.5f) : (short)((x) * 4096.0f - 0.5f)))

static inline void SetVocation02086f24(CombatSelection* s, int n) {
    s->selectionMask |= 1 << n;
    s->current = n;
}

static inline int SkillByteIndex02086f24(int n) { return n / 8; }

static inline int SkillBitIndex02086f24(int n) { return n % 8; }

static inline short GetEquip02086f24(const RecruitTemplate02086f24* t, int k) { return t->equipment[k]; }

static inline unsigned short GetStat6c02086f24(const CharacterProfile02086f24* profile) { SDK_NULL_ASSERT(profile); return profile->stat6c; }

static inline unsigned short GetStat6e02086f24(const CharacterProfile02086f24* profile) { SDK_NULL_ASSERT(profile); return profile->stat6e; }

static inline unsigned short GetStat7002086f24(const CharacterProfile02086f24* profile) { SDK_NULL_ASSERT(profile); return profile->stat70; }

static inline unsigned short GetStat7202086f24(const CharacterProfile02086f24* profile) { SDK_NULL_ASSERT(profile); return profile->stat72; }

// USA: func_02086f24
extern "C" ARM int func_02086f24(Party02086f24* party, unsigned char id, SafeAllocator* heap) {
    CombatSelection sel;
    ResourceScriptEntry entry;
    CharacterRecord02086f24 record;
    ResetFieldsStruct templates;
    SafeAllocator scriptAlloc;
#if !defined(jpn)
    unsigned char nameBuf[12];
#endif
    Container020dedd0 items;
    unsigned char skills[20];
    unsigned int itemSize;
    unsigned int size;
    Ctx0209a8b4 ctx;

    if (heap->GetMaxPossibleAllocation() < HEAP_SIZE_02086f24) {
        return 0;
    }
    scriptAlloc.ResetAllocatorPointer();
    scriptAlloc.ResetAllocatorPointer();
    scriptAlloc.CreateTypeA(heap->Allocate(HEAP_SIZE_02086f24), HEAP_SIZE_02086f24);
    scriptAlloc.Reset();
    func_02089db4(&templates);
    func_02089de8(&templates, &scriptAlloc, NULL);
    RecruitTemplate02086f24* t = func_02089fb0((EntryArray02089fb0*)&templates, (short)(id + 7));
    func_02086404(&sel);
    int vocation = 0;
    int ok;
    if (t != NULL) {
        sel.active = 1;
        sel.count = t->count;
        sel.cursor = t->cursor;
        SetVocation02086f24(&sel, t->vocation);
#if defined(jpn)
        sprintf((char*)sel.name, data_020f1150, t->name);
#else
        __clear(nameBuf, sizeof(nameBuf));
        func_020426bc(t->name, nameBuf, 1);
        memcpy(sel.name, nameBuf, sizeof(nameBuf));
#endif
        VectorizedInvertedMemcpy(t->levels, sel.levels, sizeof(sel.levels));
        Appearance02086f24* look = &sel.appearance;
        VectorizedInvertedMemcpy(t->equipment, look->equipment, sizeof(look->equipment));
        look->gender = t->gender;
        look->hairStyle = t->hairStyle;
        look->hairColor = t->hairColor;
        look->face = t->face;
        look->voice = t->voice;
        look->height = FX_F32_TO_FX16(t->height);
        look->width = FX_F32_TO_FX16(t->width);
        func_02082828(&record);
        func_02082d6c(&record, &sel);
        func_02082fc4(&record, &entry);
        BackgroundLoader::AddLockGlobal();
        itemSize = 0;
        func_020de824(&items);
        func_020de848(&items);
#if defined(jpn)
        func_020e0968(data_020f2a38, &itemSize);
#else
        void* itemData = ExtractFileFromGP2(data_020f2a38, data_020f2a30, &itemSize);
#endif
        for (int k = 0; k < 10; k++) {
            short equip = GetEquip02086f24(t, k);
#if defined(jpn)
            func_020def44((int)&record.equipment[data_020e8a94[k]], (int)data_0211e33c, itemSize, equip);
#else
            func_020def44((int)&record.equipment[data_020e8a94[k]], (int)itemData, itemSize, equip);
#endif
        }
        BackgroundLoader::RemoveLockGlobal();
        func_02083e28(&record, 0);
        sel.vectors[0].x = record.base[0].x;
        sel.vectors[0].y = record.base[0].y;
        sel.vectors[0].z = record.base[0].z;
        sel.vectors[1].x = record.base[1].x;
        sel.vectors[1].y = record.base[1].y;
        sel.vectors[1].z = record.base[1].z;
        sel.vectors[2].x = record.base[2].x;
        sel.vectors[2].y = GetStat6c02086f24(&record.profile);
        sel.vectors[3].x = GetStat6c02086f24(&record.profile) & 0x3ff;
        sel.vectors[2].z = GetStat6e02086f24(&record.profile);
        sel.vectors[3].y = GetStat6e02086f24(&record.profile);
        sel.vectors[3].z = GetStat7002086f24(&record.profile);
        sel.timer = GetStat7202086f24(&record.profile);
        sel.timerLimit = record.base[3].x;
        sel.skillPoints = entry.initial.value4High;
        sel.experience[t->vocation] = entry.initial.value0;
        vocation = t->vocation;
    } else {
        ok = 0;
    }
    func_02089ddc(&templates);
    scriptAlloc.Reset();
    if (ok) {
        void* data = LoadFileIntoMemory(data_020f102e, data_0211e33c, &size);
        if (data != NULL) {
            func_0209a804((int*)&ctx);
            func_0209a8b4(&ctx, &scriptAlloc, (StreamHeader*)data, size);
            int count = func_0209ab20((Holder0209ab20*)&ctx, vocation, sel.levels[vocation], skills);
            unsigned char* p = skills;
            for (int i = 0; i < count; i++) {
                int skill = *p;
                int byte = SkillByteIndex02086f24(skill);
                int bit = SkillBitIndex02086f24(skill);
                sel.groupFlags[byte] |= 1 << bit;
                p++;
            }
        }
    }
    if (ok) {
        ok = func_02086778(party, &sel, 1, 0);
        party->memberCount++;
        if (party->memberCount > 4) {
            party->memberCount = 4;
        }
    }
    scriptAlloc.Destroy();
    return ok;
}
