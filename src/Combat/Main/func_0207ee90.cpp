#include <globaldefs.h>
#include "Resource/Script.h"

struct Variant02030b0c { int tag; int u; };
extern "C" void* func_0207f100(unsigned char* obj, short index);

struct Elem0207ee90 {
    unsigned short* data;
    unsigned char pad[0xf];
    unsigned char firstCount;
};
struct Arr0207ee90 {
    struct Elem0207ee90* base;
    short count;
    short capacity;
};
extern void* data_02108ed8[2];

// USA: func_0207ee90
extern "C" ARM int func_0207ee90(struct Variant02030b0c* p) {
    struct Arr0207ee90* arr = (struct Arr0207ee90*)data_02108ed8[1];
    struct Elem0207ee90* e = (struct Elem0207ee90*)func_0207f100((unsigned char*)arr, (short)(arr->count - 1));
    unsigned short* buf = e->data;
    unsigned char i = 0;
    while (i < e->firstCount) {
        buf[i] = (unsigned short)((Script::Parameter*)p)->ToInt();
        p++;
        i++;
    }
    return 1;
}
