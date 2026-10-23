#include <globaldefs.h>
#if defined(jpn)
#define IS_JPN 1
#else
#define IS_JPN 0
#endif

struct Obj2081;
extern "C" int func_02081da8(Obj2081*, int);
struct List0207f0ac;
extern "C" int func_0207f0ac(List0207f0ac*, int);
struct Obj02081e18;
extern "C" unsigned int func_02081e18(Obj02081e18*, int);
struct Obj02081de0;
extern "C" int func_02081de0(Obj02081de0*);
extern "C" int func_020804fc(void *obj, int id);
extern "C" int func_0204f160(unsigned char*, int, int);
struct Params02081498;
extern "C" int func_02081498(void*, void*, Params02081498*);
extern "C" int func_02081574(void *obj, void *a, void *b);
struct Obj0204fbf8;
extern "C" int func_0204fbf8(Obj0204fbf8*);

// USA: func_020813ec
extern "C" ARM int func_020813ec(void *obj, int id) {
    if (id < 0) {
        return 1;
    }

    int a = func_02081da8((Obj2081*)obj, id);
    int b = func_0207f0ac((List0207f0ac*)((char *)obj + 0xc), id);
    if (b == 0) {
        return 1;
    }

    unsigned char byteVal = *((unsigned char *)obj + (IS_JPN ? 0x2e : 0x3a));
    unsigned int c = func_02081e18((Obj02081e18*)obj, byteVal);

    if (a == 0) {
        a = func_02081de0((Obj02081de0*)obj);
        func_020804fc(obj, id);
    }

    if (a != 0) {
        func_0204f160((unsigned char*)a, c, id);
        func_02081498(obj, (void *)a, (Params02081498*)b);
        func_02081574(obj, (void *)a, (void *)b);
        func_0204fbf8((Obj0204fbf8*)a);
    }

    return 0;
}
