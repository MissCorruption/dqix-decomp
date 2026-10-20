#include <globaldefs.h>

#if defined(jpn)
#define func_020c9be0 func_020cb6ac
#endif
#include "System/Interrupts.h"

struct Link0223db7c {
    Link0223db7c* previous;
    Link0223db7c* next;
};

struct Segment0223db7c {
    Link0223db7c node;
    unsigned short offset;
    unsigned short length;
};

struct Pool0223db7c {
    Segment0223db7c entries[32];
    Segment0223db7c first;
    Segment0223db7c last;
    void* list;
    void* freeEntries;
};

struct Pools0223db7c {
    Pool0223db7c pools[2];
};

extern Pools0223db7c* data_ov031_02290d64;
extern "C" void* func_ov031_0223bfa0(void*);
extern "C" void func_ov031_0223d8d8(void*, void*);
extern "C" void func_020c9be0();

static inline Pool0223db7c* GetPool0223db7c(int index) {
    Pool0223db7c* pool = data_ov031_02290d64->pools;
    pool += index;
    return pool;
}

// USA: func_ov031_0223db7c
extern "C" ARM void* func_ov031_0223db7c(int poolIndex, int size, unsigned char forward, int* offset) {
    Segment0223db7c* entry = static_cast<Segment0223db7c*>(func_ov031_0223bfa0(GetPool0223db7c(poolIndex)->freeEntries));
    Segment0223db7c* cursor;
    Segment0223db7c* adjacent;
    unsigned long interruptState;
    int start;
    int units = ((size + 3) & ~3) >> 2;
    entry->length = units;
    interruptState = DisableSpecificInterrupts(1);
    if (forward) {
        cursor = &GetPool0223db7c(poolIndex)->first;
        if (cursor != &GetPool0223db7c(poolIndex)->last) {
            do {
                adjacent = (Segment0223db7c*)cursor->node.next;
                start = cursor->offset + cursor->length;
                if (start + units <= adjacent->offset) {
                    entry->offset = start;
                    func_ov031_0223d8d8(adjacent, entry);
                    break;
                }
                cursor = adjacent;
            } while (cursor != &data_ov031_02290d64->pools[poolIndex].last);
        }
        if (cursor == &data_ov031_02290d64->pools[poolIndex].last) {
            func_020c9be0();
        }
    } else {
        cursor = &GetPool0223db7c(poolIndex)->last;
        if (cursor != &GetPool0223db7c(poolIndex)->first) {
            do {
                adjacent = (Segment0223db7c*)cursor->node.previous;
                start = cursor->offset - units;
                if (start >= adjacent->offset + adjacent->length) {
                    entry->offset = start;
                    func_ov031_0223d8d8(cursor, entry);
                    break;
                }
                cursor = adjacent;
            } while (cursor != &data_ov031_02290d64->pools[poolIndex].first);
        }
        if (cursor == &data_ov031_02290d64->pools[poolIndex].first) {
            func_020c9be0();
        }
    }
    *offset = entry->offset;
    EnableSpecificInterrupts(interruptState);
    return entry;
}
