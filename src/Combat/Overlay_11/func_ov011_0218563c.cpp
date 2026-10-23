#include <globaldefs.h>
#include "std_library_functions.h"
#include "Memory/SafeAllocator.h"

struct TaggedNumber02184c30 {
    int type;
    union { int i; float f; } value;
};

struct TaggedInput0218563c {
    TaggedNumber02184c30 a;
    TaggedNumber02184c30 b;
    int mode;
    int extra;
    TaggedNumber02184c30 c;
};

extern "C" int func_ov011_02184c30(struct TaggedNumber02184c30* v);
extern "C" ARM void* func_ov017_021b2164(void);
extern "C" ARM void* func_ov011_021845f8(void* ctx, int v);
extern "C" ARM void* func_ov011_021849c8(void* ctx);

struct Obj0RowEvent021fa298;
extern "C" ARM int func_ov023_021fa298(struct Obj0RowEvent021fa298* obj, int p1, int p2, int p3, int p4, int p5, int p6);

struct ListHead_021f67ac;
struct ListNode_021f67ac;
extern "C" void func_ov023_021f67ac(struct ListHead_021f67ac* head, struct ListNode_021f67ac* node);

#if defined(jpn)
extern "C" int func_ov023_021f9724(void* obj, int p1, int p2, int p3, int p4, int p5);
extern int data_ov023_021fea34;
#else
extern int data_ov024_021fea34;
#endif

struct Buf0218563c {
    void* vtable;
#if defined(jpn)
    char pad[0x2c - 4];
#else
    char pad[0x30 - 4];
#endif
};

// USA: func_ov011_0218563c
extern "C" ARM int func_ov011_0218563c(struct TaggedInput0218563c* obj) {
    int tag0 = func_ov011_02184c30(&obj->a);
    int tag8 = func_ov011_02184c30(&obj->b);
    int sb;
    if (obj->mode == 2) sb = obj->extra;
    else sb = 0;
    if (sb == 0) return 0;

    void* ctx = func_ov017_021b2164();
    void* node = func_ov011_021845f8(ctx, tag8);
    if (node == 0) return 0;

    int tag18 = func_ov011_02184c30(&obj->c);

    ((SafeAllocator*)((char*)node + 4))->GetSizeWithLargestBlockRemoved();
    void* block = ((SafeAllocator*)((char*)node + 4))->Allocate(sizeof(Buf0218563c));
    if (block == 0) return 0;

    struct Buf0218563c local;
#if defined(jpn)
    local.vtable = &data_ov023_021fea34;
#else
    local.vtable = &data_ov024_021fea34;
#endif
    memcpy(block, &local, sizeof(Buf0218563c));

#if defined(jpn)
    if (func_ov023_021f9724(block, (int)ctx, tag0, tag8, sb, tag18) == 0) return 0;
#else
    if (func_ov023_021fa298((struct Obj0RowEvent021fa298*)block, (int)ctx, tag0, tag8, 0, sb, tag18) == 0) return 0;
#endif

    func_ov023_021f67ac((struct ListHead_021f67ac*)func_ov011_021849c8(ctx), (struct ListNode_021f67ac*)block);
    return 1;
}
