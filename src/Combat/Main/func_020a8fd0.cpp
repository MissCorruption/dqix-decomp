#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "std_library_functions.h"

struct Obj020a8f60;
struct Obj020a8f70;
struct Obj020a9288;
struct U16Field0x0_020a8e80;

struct Byte24_a9304 { unsigned char v[24]; };
struct Half6_a9304 { unsigned short v[6]; };

struct Struct020a9304 {
    unsigned short a;
    unsigned short b;
    unsigned short c;
    unsigned short d;
    unsigned short e;
    unsigned short f;
    unsigned int g;
    struct Byte24_a9304 arr1;
    unsigned int h;
    unsigned int i;
    unsigned char j;
    unsigned char k;
    struct Half6_a9304 arr2;
};

typedef void (*IterFn020a8f70)(void*, void*);
typedef int (*CmpFn020a9288)(void*);

int GetElementsByteSize020a8f60(struct Obj020a8f60* obj);
int ForEachElement020a8f70(struct Obj020a8f70* obj, IterFn020a8f70 fn);
void* BinarySearchByComparator020a9288(struct Obj020a9288* obj, int key, CmpFn020a9288 cmp);
struct Struct020a9304* CopyStruct020a9304(struct Struct020a9304* dst, struct Struct020a9304* src);
unsigned short GetU16At0x0(struct U16Field0x0_020a8e80* obj);

struct Table020a8fd0 {
    unsigned int count : 12;
    unsigned int count2 : 19;
    unsigned int flag : 1;
    struct Struct020a9304* elems;
    void* extra;
};

static inline void SwapElements(struct Struct020a9304* a, struct Struct020a9304* b) {
    struct Struct020a9304 tmp = *a;
    CopyStruct020a9304(a, b);
    CopyStruct020a9304(b, &tmp);
}

// USA: func_020a8fd0
extern "C" ARM void func_020a8fd0(struct Table020a8fd0* obj, SafeAllocator* alloc, void* file, unsigned int size, short* ids, short count) {
    struct Table020a8fd0 src;
    int hi;
    int total;
    short* p;
    int n;
    int i;
    int num;
    struct Struct020a9304* dst;
    int k;
    int j;
    struct Struct020a9304* prev;
    struct Struct020a9304* e;
    int last2;
    struct Struct020a9304* f;
    int last;
    int m;
    int lo;
    if (alloc == 0 || file == 0 || size == 0 || ids == 0 || count <= 0) return;
    memset(obj, 0, sizeof(struct Table020a8fd0));
    memset(&src, 0, sizeof(struct Table020a8fd0));
    if (file != 0) {
        memcpy(&src, file, 4);
        src.elems = (struct Struct020a9304*)((char*)file + 4);
        src.extra = (char*)file + (GetElementsByteSize020a8f60((struct Obj020a8f60*)&src) + 4);
        if (!src.flag) {
            ForEachElement020a8f70((struct Obj020a8f70*)&src, 0);
            src.flag = 1;
            ((struct Table020a8fd0*)file)->flag = 1;
        }
    }
    n = 0;
    p = ids;
    num = count;
    for (i = 0; i < num; i++, p++) {
        if (BinarySearchByComparator020a9288((struct Obj020a9288*)&src, *p, (CmpFn020a9288)GetU16At0x0) != 0) {
            n++;
        }
    }
    obj->elems = (struct Struct020a9304*)alloc->Allocate(n * sizeof(struct Struct020a9304));
    if (obj->elems != 0) {
        obj->count = n;
        p = ids;
        dst = obj->elems;
        for (k = 0; k < num; k++, p++) {
            void* found = BinarySearchByComparator020a9288((struct Obj020a9288*)&src, *p, (CmpFn020a9288)GetU16At0x0);
            if (found != 0) {
                memcpy(dst, found, sizeof(struct Struct020a9304));
                dst++;
            }
        }
    }
    if (n < 2 || obj == 0) return;
    total = obj->count;
    if (obj->elems == 0 || total == 0) return;
    lo = 0;
    hi = total - 1;
    for (;;) {
        last = -1;
        e = obj->elems + lo;
        for (j = lo; j < hi; j++) {
            if (e[0].a > e[1].a) {
                last = j;
                SwapElements(&e[0], &e[1]);
            }
            e++;
        }
        if (last == -1) break;
        hi = last;
        last2 = -1;
        f = obj->elems + hi;
        for (m = hi; m > lo; m--) {
            prev = f - 1;
            if (prev->a > f->a) {
                last2 = m;
                struct Struct020a9304 tmp = *f;
                CopyStruct020a9304(f, prev);
                CopyStruct020a9304(prev, &tmp);
            }
            f = prev;
        }
        if (last2 == -1) break;
        lo = last2;
    }
}
