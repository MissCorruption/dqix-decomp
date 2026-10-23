#include <globaldefs.h>

struct Outer020beeac;
extern "C" void func_020bf2d4(void *obj);
extern "C" void func_020beeac(struct Outer020beeac *p);
struct SignedAllocatorList; struct SignedAllocatorHeader;
extern "C" void func_020bf358(SignedAllocatorList*, SignedAllocatorHeader*);

extern char data_02110a40;

struct Ctx020bf238 { int f0; unsigned char* f4; };
extern struct Ctx020bf238 data_021103b0;

struct Obj020bf238 {
    char pad0[0x110];
    signed int flag0x110 : 1;
    signed int _rest0x110 : 31;
    char pad1[0x54];
    void (*funcPtr0x168)(void*);
};

// USA: func_020bf238
extern "C" ARM void func_020bf238(struct Obj020bf238 *obj) {
    if (!obj->flag0x110) return;
    func_020bf2d4(obj);
    obj->funcPtr0x168(obj);
    func_020bf358((SignedAllocatorList*)&data_02110a40, (SignedAllocatorHeader*)obj);
    if (data_021103b0.f4 != 0) {
        func_020bf358((SignedAllocatorList*)(data_021103b0.f4 + 0x4e0), (SignedAllocatorHeader*)obj);
    }
    func_020beeac((struct Outer020beeac*)obj);
}
