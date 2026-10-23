#include <globaldefs.h>

struct List0207f0ac;
struct List0207f6ac;

struct SubList02080608 {
    short* keys;
    char pad[0x13 - 0x4];
    unsigned char count;
};

extern "C" struct SubList02080608* func_0207f0ac(struct List0207f0ac* list, int id);
extern "C" void func_0207f7ac(struct List0207f6ac* list, int id, int mask);

// USA: func_02080608
extern "C" ARM void func_02080608(void* obj, int id) {
    struct SubList02080608* sub;
    unsigned char i;
    sub = func_0207f0ac((struct List0207f0ac*)((char*)obj + 0xc), id);
    if (sub == NULL) return;
    for (i = 0; i < sub->count; i++) {
        func_0207f7ac((struct List0207f6ac*)((char*)obj + 4), sub->keys[i], 2);
    }
}
