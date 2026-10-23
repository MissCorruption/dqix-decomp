#include <globaldefs.h>

struct Struct_020beeac_2;
extern "C" void func_020bf2d4(void *arg0);
extern "C" void func_020beeac(struct Struct_020beeac_2 *arg0);
struct SignedAllocatorList; struct SignedAllocatorHeader;
extern "C" void func_020bf358(SignedAllocatorList*, SignedAllocatorHeader*);

extern char data_02110a40;

struct Struct_021103b0_3 { int unknown_0_; unsigned char* unknown_4_; };
extern struct Struct_021103b0_3 data_021103b0;

struct Struct_020bf1a0 {
    char unknown_0_[0x110];
    signed int unknown_110_0_ : 1;
    signed int unknown_110_1_ : 31;
    char unknown_114_[0x54];
    void (*unknown_168_)(void*);
};

// USA: func_020bf238
extern "C" ARM void func_020bf238(struct Struct_020bf1a0 *arg0) {
    if (!arg0->unknown_110_0_) return;
    func_020bf2d4(arg0);
    arg0->unknown_168_(arg0);
    func_020bf358((SignedAllocatorList*)&data_02110a40, (SignedAllocatorHeader*)arg0);
    if (data_021103b0.unknown_4_ != 0) {
        func_020bf358((SignedAllocatorList*)(data_021103b0.unknown_4_ + 0x4e0), (SignedAllocatorHeader*)arg0);
    }
    func_020beeac((struct Struct_020beeac_2*)arg0);
}
