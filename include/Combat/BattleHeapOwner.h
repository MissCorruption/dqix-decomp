#pragma once

#include "Memory/SafeAllocator.h"
#include "Combat/MapDisplay.h"
#include "Combat/MenuNodeChain.h"

struct EntryManager020e2490;
struct ClearTarget0205a234;
struct BattleHeapOwner {
    EntryManager020e2490* manager;
    SafeAllocator* allocators;
    unsigned char unknown8[0x38 - 8];
    int bgMode;
#if defined(jpn)
    unsigned char unknown3c[0x790 - 0x3c];
#else
    unsigned char unknown3c[0x814 - 0x3c];
#endif
    ClearTarget0205a234* list;
    Struct0205a198* records;
    unsigned char unknown81c[8];
    unsigned short count;
    unsigned char unknown826[2];
    unsigned char active;
    unsigned char unknown829[3];
    ClearTarget0205a234* allocatedList;
    Struct0205a198* allocatedRecords;
    unsigned char unknown834[0x89c - 0x834];
    Manager0207f7f0* menu;
    List0204af64 entries[2];
    Node0207f7f0 nodes[8];
};

extern "C" void func_ov003_02173f70(BattleHeapOwner*, SafeAllocator*);
extern BattleHeapOwner* data_ov017_021d840c;
