#include <globaldefs.h>

struct TaggedNumber02184c30;
extern "C" int func_ov011_02184c30(TaggedNumber02184c30*);
struct TaggedNumber02184c4c;
extern "C" float func_ov011_02184c4c(TaggedNumber02184c4c*);

extern "C" void* func_ov017_021b2164(void);
extern "C" void* func_ov011_021849c8(void*);

struct VTable02186650 { char pad[0xc8]; void (*fn)(void*, int*); };
struct Obj02186650 { struct VTable02186650* vtable; };
extern "C" struct Obj02186650* func_ov023_021f6880(void*, int);

// USA: func_ov011_02186650
extern "C" ARM int func_ov011_02186650(TaggedNumber02184c30* a) {
    int key = func_ov011_02184c30(a);
    int args[3];
    args[0] = (int)(4096.0f * func_ov011_02184c4c((TaggedNumber02184c4c*)((char*)a + 8)));
    args[1] = (int)(4096.0f * func_ov011_02184c4c((TaggedNumber02184c4c*)((char*)a + 0x10)));
    args[2] = 0;
    struct Obj02186650* node = func_ov023_021f6880(func_ov011_021849c8((void*)func_ov017_021b2164()), key);
    if (!node) return 0;
    node->vtable->fn(node, args);
    return 1;
}
