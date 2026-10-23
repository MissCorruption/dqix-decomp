#include <globaldefs.h>
#include "std_library_functions.h"
#include "Memory/SafeAllocator.h"

extern "C" void* func_ov011_021845f8(void* ctx, int v);

struct Rec020467f0 {
    char tag;
    char pad1[0x3f];
    int size40;
    int field44;
    int size48;
};
extern "C" void* func_020467f0(struct Rec020467f0* rec, int index, void** out, int* out44);

struct ActiveEntry02046900 {
    signed char active;
    char pad[0x47];
    int stride;
};
extern "C" int func_02046900(struct ActiveEntry02046900* entry);

struct Foo0204af38;
extern "C" void func_0204af38(struct Foo0204af38* obj, int count, SafeAllocator* alloc);

extern "C" void func_0204b174(struct Foo0204af38* obj, void* data, SafeAllocator* alloc, int field44);

extern char data_ov023_021fe5f4[];

struct Obj021f7aac {
    char pad0[0x8];
    unsigned short field8;
};

// USA: func_ov023_021f7aac
extern "C" ARM void func_ov023_021f7aac(struct Obj021f7aac* obj, void* keyObj, struct Rec020467f0* entry, unsigned int entryLength) {
#if defined(jpn)
 enum {regionalOffset=0x24};
#else
 enum {regionalOffset=0x28};
#endif
    if (entry == 0 || entryLength == 0) return;

    void* base = func_ov011_021845f8(keyObj, obj->field8);
    if (base == 0) return;

    int count = func_02046900((struct ActiveEntry02046900*)entry);
    int matchCount = 0;
    int i;
    for (i = 0; i < count; i++) {
        int field44;
        void* rec;
        func_020467f0(entry, i, &rec, &field44);
        if (strstr((char*)rec, data_ov023_021fe5f4) != NULL) matchCount++;
    }

    if (matchCount > 0) {
        func_0204af38((struct Foo0204af38*)((char*)obj + regionalOffset), (unsigned char)matchCount, (SafeAllocator*)((char*)base + 4));
    }

    int j;
    for (j = 0; j < count; j++) {
        int field44;
        void* rec;
        void* data = func_020467f0(entry, j, &rec, &field44);
        if (data != 0) {
            func_0204b174((struct Foo0204af38*)((char*)obj + regionalOffset), data, (SafeAllocator*)((char*)base + 4), field44);
        }
    }
}
