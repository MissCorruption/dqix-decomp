#include <globaldefs.h>

extern "C" void* func_0202ae18(void);

extern "C" int func_0202b7d8(int* obj);

struct Entry020e3054 {
    unsigned char f0;
    unsigned char f1;
    unsigned char f2;
    unsigned char f3;
};
extern "C" struct Entry020e3054* func_020e3054(struct Entry020e3054* list, int key);

struct SearchStruct0202c1a4 {
    char pad[0x1038];
    signed char arr[16];
};
extern "C" signed char func_0202c1a4(struct SearchStruct0202c1a4* obj);

struct Container020e34bc {
    struct Entry020e3054 entries[8];
    unsigned char flags[8];
};

#pragma optimize_for_size off
// USA: func_020e34bc
extern "C" ARM int func_020e34bc(struct Container020e34bc* obj, int key) {
    unsigned char* p;
    int i;
    void* cur;
    struct Entry020e3054* entry;
    signed char val;

    cur = func_0202ae18();
    if (!func_0202b7d8((int*)cur)) return 1;

    i = 0;
    for (p = obj->flags; i < 8; p++) {
        if (*p == key) return 2;
        i++;
    }

    entry = func_020e3054(obj->entries, key);
    if (entry != NULL) {
        val = func_0202c1a4((struct SearchStruct0202c1a4*)cur);
        if (entry->f0 == val) return entry->f2;
        return 3;
    }
    return 0;
}
