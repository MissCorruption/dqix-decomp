#include <globaldefs.h>

#include "Memory/SafeAllocator.h"

struct EntryDf618 {
    void* name;
    void* desc;
    unsigned int category : 4;
    unsigned int kind : 5;
    unsigned int flags : 23;
    unsigned char data[0x14];
};

struct EntryContainerDf374 {
    unsigned short count;
    unsigned short copiedNames : 15;
    unsigned short owned : 1;
    unsigned short capacity;
    unsigned short nameCapacity;
    int field_0x8;
    EntryDf618* entries;
};

extern "C" void __clear(void*, unsigned int);
extern "C" int func_020df618(SafeAllocator*, void*, EntryDf618*, void**, int, EntryDf618*);

// USA: func_020df374
extern "C" ARM int func_020df374(SafeAllocator* allocator, EntryContainerDf374* dest,
    EntryContainerDf374* source, const unsigned char* filterValues, short categoryCount,
    const unsigned char* kinds, short kindCount) {
    if (!allocator || !dest || !source || ((!filterValues || !categoryCount) && (!kinds || !kindCount))) return 0;
    EntryDf618* output = dest->entries;
    EntryDf618* input = source->entries;
    if (!input) return 0;
    unsigned int categoryMask = 0;
    unsigned int kindMask[2];
    __clear(kindMask, 8);
    if (!filterValues) categoryMask = -1;
    else {
        const unsigned char* category = filterValues;
        for (int i = 0; i < categoryCount; i++) categoryMask |= 1 << *category++;
    }
    int kindIndex;
    filterValues = kinds;
    if (!filterValues) { kindMask[0] = -1; kindMask[1] = -1; }
    else for (kindIndex = 0; kindIndex < kindCount; kindIndex++) kindMask[kindIndex >> 5] |= 1 << (*filterValues++ & 31);
    int inputCount = source->count;
    int capacity;
    if (allocator && !output) {
        int scanIndex;
        int nameCount;
        capacity = 0;
        nameCount = 0;
        for (scanIndex = 0; scanIndex < inputCount; scanIndex++, input++) {
            if ((categoryMask & (1 << input->category)) && ((1 << (input->kind & 31)) & kindMask[0])) {
                capacity++;
                if (input->name) nameCount++;
            }
        }
        input = source->entries;
        output = (EntryDf618*)allocator->Allocate((capacity + nameCount) * 32);
        dest->count = capacity;
        dest->copiedNames = (unsigned short)nameCount;
        dest->entries = output;
    }
    if (!output) return 0;
    int i;
    int copied;
    capacity = dest->count;
    dest->capacity = capacity;
    dest->nameCapacity = dest->copiedNames;
    void* names = allocator ? output + capacity : NULL;
    dest->copiedNames = 0;
    copied = 0;
    i = 0;
    for (; i < inputCount; i++, input++) {
        if ((categoryMask & (1 << input->category)) && ((1 << (input->kind & 31)) & kindMask[0])) {
            func_020df618(allocator, dest, output, &names, (int)source, input);
            if (copied >= capacity) break;
            output++;
            copied++;
        }
    }
    dest->count = copied;
    dest->owned = 0;
    return 1;
}
