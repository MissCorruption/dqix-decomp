#include <globaldefs.h>

#include "Memory/SafeAllocator.h"

struct Element020de650 {
    void* name;
    void* desc;
    unsigned char data[0x18];
};

struct Record020836e4 {
    int field_0;
    int field_4;
    int field_8;
    int field_c;
    int field_10;
    unsigned short field_14;
    unsigned short field_16;
    short field_18;
    unsigned short field_1a;
    unsigned short field_1c;
};

struct Container020de650 {
    unsigned short count;
    unsigned short copiedNames : 15;
    unsigned short owned : 1;
    unsigned short capacity;
    unsigned short nameCapacity;
    int field_0x8;
    Record020836e4* entries;
};

struct EntryDf618;
struct EntryDf6cc;
struct StructDE1D4;

typedef int (*KeyFunc020de650)(Element020de650*);

extern "C" int func_020de56c(void*);
extern "C" Element020de650* func_020de650(Container020de650* c, int key, KeyFunc020de650 fn);
extern "C" int func_020df618(SafeAllocator*, void*, EntryDf618*, void**, int, EntryDf618*);
extern "C" int func_020df6cc(void*, EntryDf6cc*, int, EntryDf6cc*);
extern "C" void func_020836e4(Record020836e4* dst, Record020836e4* src);
extern "C" void func_020de1d4(StructDE1D4*);

static inline void SwapRecords(Record020836e4* a, Record020836e4* b) {
    Record020836e4 tmp = *a;
    func_020836e4(a, b);
    func_020836e4(b, &tmp);
}

// USA: func_020def98
extern "C" ARM int func_020def98(SafeAllocator* allocator, Container020de650* dest,
    Container020de650* source, short* keys, short keyCount) {
    if (!dest || !source || !keys || !keyCount) return 0;
    Record020836e4* output = dest->entries;
    if (!source->entries) return 0;
    if (allocator && !output) {
        int n = keyCount;
        int count = 0;
        int nameCount = 0;
        short* key = keys;
        for (int i = 0; i < n; i++, key++) {
            int value = *key;
            if (value < 0) continue;
            Element020de650* found = func_020de650(source, value, (KeyFunc020de650)func_020de56c);
            if (!found) continue;
            int dup = 0;
            short* prev = keys;
            for (int j = 0; j < i; j++, prev++) {
                if (*prev == value) { dup = 1; break; }
            }
            if (dup) continue;
            count++;
            if (found->name) nameCount++;
        }
        output = (Record020836e4*)allocator->Allocate((count + n) * 32);
        dest->count = count;
        dest->copiedNames = (unsigned short)nameCount;
        dest->entries = output;
    }
    if (!output) return 0;
    int copied;
    int i;
    int capacity = keyCount;
    dest->capacity = capacity;
    dest->nameCapacity = dest->copiedNames;
    void* names = allocator ? output + capacity : NULL;
    dest->copiedNames = 0;
    copied = 0;
    short* key = keys;
    for (i = 0; i < capacity; i++, key++) {
        short value = *key;
        Element020de650* found = NULL;
        if (value >= 0) found = func_020de650(source, value, (KeyFunc020de650)func_020de56c);
        if (!found) {
            if (!allocator) { output++; copied++; }
            continue;
        }
        if (allocator) {
            int dup = 0;
            short* prev = keys;
            for (int j = 0; j < i; j++, prev++) {
                if (*prev == value) { dup = 1; break; }
            }
            if (dup) continue;
            func_020df618(allocator, dest, (EntryDf618*)output, &names, (int)source, (EntryDf618*)found);
        } else {
            func_020df6cc(dest, (EntryDf6cc*)output, (int)source, (EntryDf6cc*)found);
        }
        if (copied >= capacity) break;
        output++;
        copied++;
    }
    dest->count = copied;
    dest->owned = 0;
    if (allocator && dest->count >= 2) {
        const Container020de650* c = dest;
        if (c != NULL) {
            int n = c->count;
            if (c->entries != NULL && n != 0) {
                int j;
                Record020836e4* prev;
                Record020836e4* q;
                int first;
                Record020836e4* p;
                int last;
                int m;
                int hi;
                int lo;
                lo = 0;
                hi = n - 1;
                for (;;) {
                    last = -1;
                    p = c->entries + lo;
                    for (j = lo; j < hi; j++) {
                        if (p[0].field_18 > p[1].field_18) {
                            last = j;
                            SwapRecords(p, p + 1);
                        }
                        p++;
                    }
                    if (last == -1) break;
                    hi = last;
                    first = -1;
                    q = c->entries + hi;
                    for (m = hi; m > lo; m--) {
                        prev = q - 1;
                        if (prev->field_18 > q->field_18) {
                            first = m;
                            Record020836e4 tmp = *q;
                            func_020836e4(q, prev);
                            func_020836e4(prev, &tmp);
                        }
                        q = prev;
                    }
                    if (first == -1) break;
                    lo = first;
                }
            }
        }
    }
    int end = dest->capacity;
    Record020836e4* e = dest->entries + dest->count;
    for (i = dest->count; i < end; i++, e++) func_020de1d4((StructDE1D4*)e);
    return 1;
}
