#include <globaldefs.h>
#include "std_library_functions.h"

#if defined(jpn)
#define func_ov024_021f6f10 func_ov023_021f6f10
extern "C" int func_ov023_021f6f10(void* self);
#endif

extern "C" void* func_ov011_021849c8(void*);
extern "C" void* func_ov023_021f6880(void*, int);
extern "C" int func_ov024_021f6f10(void* self);
extern "C" int func_ov023_021fa598(void*);
extern "C" int func_ov023_021f9bc8(void*);
extern "C" void func_ov023_021f809c(void* node, void* obj);

extern "C" int func_020421a0(void);

struct Elem020a15bc { unsigned int field : 9; unsigned int pad : 23; unsigned int w1; unsigned int w2; };
struct Array020a15bc { struct Elem020a15bc* base; unsigned short pad4; unsigned short count; };
extern "C" struct Elem020a15bc* func_020a15bc(struct Array020a15bc* arr, int id);

struct EntryA68 { short key; void* value; };
struct TableA68 { struct EntryA68* entries; short count; };
extern "C" void* func_02072a68(struct TableA68* table, int key);

extern "C" int func_02041a90(char* dst, int x, int y);
extern "C" int func_02042058(char* dst, const char* src);

extern "C" int func_020420e8(void* entry, int flag);
extern "C" int func_02046608(void* g, int a, unsigned int b, void* buf, int c, int d, int e);

#if defined(jpn)
struct Data021707c8 { char pad[4]; short* keys; struct Array020a15bc* arr; };
extern "C" void func_02041f50(void* entry, char* dst);
extern "C" void func_02042428(char* dst, int size);
extern "C" int func_020d2ff0(const char* s);
extern "C" void func_ov023_021f8960(char* node, short a, unsigned short b);
#else
struct Data021707c8 { char pad[8]; short* keys; struct Array020a15bc* arr; };
#endif
extern Data021707c8 data_ov004_021707c8;

// USA: func_ov004_021564f0
extern "C" ARM int func_ov004_021564f0(void* obj) {
    void* base = func_ov011_021849c8(obj);

    void* node1 = func_ov023_021f6880(base, 3);
    if (!node1) {
        return 0;
    }
    if (func_ov024_021f6f10(node1) != 7) {
        return 0;
    }

    short field5c = *(short*)((char*)node1 + 0x5c);
    short field5e = *(short*)((char*)node1 + 0x5e);

    void* node2 = func_ov023_021f6880(base, 0xb);
    if (!node2) {
        return 0;
    }
    if (func_ov024_021f6f10(node2) != 4) {
        return 0;
    }

    struct TableA68* table = (struct TableA68*)func_ov023_021fa598(node2);
    if (!data_ov004_021707c8.keys) {
        return 0;
    }

#if defined(jpn)
    int addr = func_ov023_021f9bc8(node1) + (short)(field5c * 16);
    short key = data_ov004_021707c8.keys[addr];

    struct Elem020a15bc* elem = func_020a15bc(data_ov004_021707c8.arr, key);
    if (elem != NULL) {

    void* g = (void*)func_020421a0();
    char* buf = *(char**)((char*)g + 0x28);

    void* node3 = func_ov023_021f6880(base, 0x82);
    if (!node3) {
        return 0;
    }
    if (func_ov024_021f6f10(node3) != 8) {
        return 0;
    }

    *(void**)((char*)node3 + 0x20) = 0;
    if (key > 0) {
        memset(buf, 0, 0x800);
        void* entry = func_02072a68(table, key);
        func_02041f50(entry, buf + 0x700);
        int len = func_020d2ff0(buf + 0x700);
        int x = (0x80 - (len / 2) * 12) / 2;
        int y = 6;
        if (len != func_020d2ff0((const char*)entry)) {
            y = 8;
        }
        func_02042428(buf, 0xc);
        func_02041a90(buf, x, y);
        func_02042058(buf, (const char*)entry);
        *(void**)((char*)node3 + 0x20) = buf;
    }

    void* node4 = func_ov023_021f6880(base, 0x35);
    if (!node4) {
        return 0;
    }
    if (func_ov024_021f6f10(node4) != 6) {
        return 0;
    }
    *(short*)((char*)node4 + 0x104) = field5c;
    *(short*)((char*)node4 + 0x106) = field5e;
    func_ov023_021f809c(node4, obj);

    void* node5 = func_ov023_021f6880(base, 0x83);
    if (!node5) {
        return 0;
    }
    if (func_ov024_021f6f10(node5) != 8) {
        return 0;
    }

    *(void**)((char*)node5 + 0x20) = 0;
    if (key > 0) {
        *(void**)((char*)node5 + 0x20) = (void*)elem->w1;
    }

    void* node6 = func_ov023_021f6880(base, 0x36);
    if (!node6) {
        return 0;
    }
    if (func_ov024_021f6f10(node6) != 6) {
        return 0;
    }
    func_ov023_021f8960((char*)node6, 0, 8);
    *(short*)((char*)node6 + 0x104) = field5c;
    *(short*)((char*)node6 + 0x106) = field5e;
    func_ov023_021f809c(node6, obj);

    }
#else
    int addr = func_ov023_021f9bc8(node1) + (short)(field5c * 12);
    short key = data_ov004_021707c8.keys[addr];

    struct Elem020a15bc* elem = func_020a15bc(data_ov004_021707c8.arr, key);
    if (elem != NULL) {

    void* g = (void*)func_020421a0();
    char* buf = *(char**)((char*)g + 0x5c);

    void* node3 = func_ov023_021f6880(base, 0x82);
    if (!node3) {
        return 0;
    }
    if (func_ov024_021f6f10(node3) != 8) {
        return 0;
    }

    *(void**)((char*)node3 + 0x20) = 0;
    if (key > 0) {
        memset(buf, 0, 0x960);
        void* entry = func_02072a68(table, key);
        int diff = 0xa0 - func_020420e8(entry, 1);
        int half = diff / 2;
        if (half < 0) {
            half = 0;
        }
        func_02041a90(buf, half, 6);
        if (entry) {
            func_02042058(buf, (const char*)entry);
        }
        *(void**)((char*)node3 + 0x20) = buf;
    }

    void* node4 = func_ov023_021f6880(base, 0x35);
    if (!node4) {
        return 0;
    }
    if (func_ov024_021f6f10(node4) != 6) {
        return 0;
    }
    *(short*)((char*)node4 + 0x104) = field5c;
    *(short*)((char*)node4 + 0x106) = field5e;
    func_ov023_021f809c(node4, obj);

    void* node5 = func_ov023_021f6880(base, 0x83);
    if (!node5) {
        return 0;
    }
    if (func_ov024_021f6f10(node5) != 8) {
        return 0;
    }

    *(void**)((char*)node5 + 0x20) = 0;
    if (key > 0) {
        memset(buf, 0, 0x960);
        func_02046608(g, 0xc, elem->w1, buf, 0xe3, 0, 1);
        *(void**)((char*)node5 + 0x20) = buf;
    }

    void* node6 = func_ov023_021f6880(base, 0x36);
    if (!node6) {
        return 0;
    }
    if (func_ov024_021f6f10(node6) != 6) {
        return 0;
    }
    *(short*)((char*)node6 + 0x104) = field5c;
    *(short*)((char*)node6 + 0x106) = field5e;
    func_ov023_021f809c(node6, obj);

    }
#endif
    return 0;
}
