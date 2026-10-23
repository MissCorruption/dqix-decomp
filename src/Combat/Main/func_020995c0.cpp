#include <globaldefs.h>
#include "NitroSDK/Memory/AllocatorUnion.h"
#include "Resource/Script.h"

struct Variant02030b0c;
extern "C" void* func_02012d88(AllocatorUnion* alloc, unsigned int size);

struct Obj020995c0 {
    void* mem;
    int pad4;
    int count;
};
extern struct Obj020995c0* data_02109924;
extern AllocatorUnion data_02114e20;

// USA: func_020995c0
extern "C" ARM int func_020995c0(struct Variant02030b0c* p) {
    int v = ((Script::Parameter*)p)->ToInt();
    struct Obj020995c0* obj = data_02109924;
    void* mem = func_02012d88(&data_02114e20, v << 4);
    obj->mem = mem;
    obj->count = v;
    return 1;
}
