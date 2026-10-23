#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "std_library_functions.h"
#include "Memory/SafeAllocator.h"

struct TaggedNumber02184c30 {
    int type;
    union { int i; float f; } value;
};

struct TaggedInput_02185020 {
    TaggedNumber02184c30 a;
    TaggedNumber02184c30 b;
    TaggedNumber02184c30 c;
    int mode;
    int extra;
};

extern "C" int func_ov011_02184c30(struct TaggedNumber02184c30* v);
extern "C" ARM void* func_ov017_021b2164(void);
extern "C" ARM void* func_ov011_021849c8(void* ctx);
extern "C" ARM void* func_ov011_021845f8(void* ctx, int v);

struct Obj_02185110;
#if defined(jpn)
extern "C" ARM Obj_02185110* func_ov011_02185110(Obj_02185110* obj);
#else
extern "C" ARM Obj_02185110* func_ov011_02185110(Obj_02185110* obj);
#endif
#if defined(jpn)
extern "C" ARM void* func_ov011_0218513c(void* obj);
#else
extern "C" ARM void* func_ov011_0218513c(void* obj);
#endif
extern "C" ARM int func_ov023_021f6f20(void* obj, int p1, int p3, int p4, int arg5, unsigned int arg6);

struct ListHead_021f67ac;
struct ListNode_021f67ac;
extern "C" void func_ov023_021f67ac(struct ListHead_021f67ac* head, struct ListNode_021f67ac* node);

struct LocalNodeBuf_02185020 {
    int words[0xac / 4];
};

// USA: func_ov011_02185020
extern "C" ARM int func_ov011_02185020(struct TaggedInput_02185020* obj) {
    int tag0 = func_ov011_02184c30(&obj->a);
    int tag8 = func_ov011_02184c30(&obj->b);
    int tag10 = func_ov011_02184c30(&obj->c);

    int flag;
    if (obj->mode == 2) flag = obj->extra;
    else flag = 0;
    if (flag == 0) return 0;

    void* ctx = func_ov017_021b2164();
    void* node = func_ov011_021845f8(ctx, tag8);
    if (node == 0) return 0;

    ((SafeAllocator*)((char*)node + 4))->GetSizeWithLargestBlockRemoved();
    void* block = ((SafeAllocator*)((char*)node + 4))->Allocate(0xac);
    if (block == 0) return 0;

    LocalNodeBuf_02185020 local;
    func_ov011_02185110((Obj_02185110*)&local);
    memcpy(block, &local, sizeof(local));

    if (func_ov023_021f6f20(block, (int)ctx, tag0, tag8, tag10, flag) == 0) {
        func_ov011_0218513c(&local);
        return 0;
    }

    void* list = func_ov011_021849c8(ctx);
    func_ov023_021f67ac((struct ListHead_021f67ac*)list, (struct ListNode_021f67ac*)block);
    func_ov011_0218513c(&local);
    return 1;
}
