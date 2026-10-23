#include <globaldefs.h>
#include "std_library_functions.h"

#if defined(jpn)
#define RG(u, j) (j)
#define func_ov002_02161234 func_ov002_02162114
#else
#define RG(u, j) (u)
#endif

extern "C" int func_020421a0();
extern "C" void func_ov002_0215be00(void* arg0, int arg1, int arg2, int arg3);
extern "C" void func_ov002_02161234(void* arg0, void* arg1, int arg2);

struct Struct_020466c8;
extern "C" void func_020466c8(struct Struct_020466c8* arg0, int arg1);

#if defined(jpn)
extern "C" void func_0204500c(void* arg0, void* arg1, int arg2);
#else
extern "C" void func_0204500c(void* arg0, void* arg1, int arg2, int arg3);
#endif

struct Struct_ov002_02161174 { char unknown_0_[RG(0xbb8, 0xa80)]; int unknown_bb8_; };
struct Struct_ov002_02161174_2 { char unknown_0_[RG(0x998, 0x868)]; int unknown_998_; };
struct Struct_ov002_02161174_3 { char unknown_0_[RG(0x9ca, 0x7fb)]; unsigned char unknown_9ca_; };
struct Struct_ov002_02161174_4 { char unknown_0_[RG(0xbd0, 0xa98)]; void* unknown_bd0_; };

// USA: func_ov002_02161174
extern "C" ARM void func_ov002_02161174(char* arg0) {
    int var0 = func_020421a0();

    func_ov002_0215be00(arg0, ((struct Struct_ov002_02161174*)(arg0 + 0x1000))->unknown_bb8_ & 0xff, 0, 0xf);

    if (*(unsigned char*)(arg0 + 0x1000 + RG(0xc31, 0xaf9)) != 0) {
        memcpy(((struct Struct_ov002_02161174_4*)(arg0 + 0x1000))->unknown_bd0_, *(void**)(arg0 + 0x1000 + RG(0xbd4, 0xa9c)), RG(0x960, 0x800));
    } else {
        memset(((struct Struct_ov002_02161174_4*)(arg0 + 0x1000))->unknown_bd0_, 0, RG(0x960, 0x800));
        func_ov002_02161234(arg0, ((struct Struct_ov002_02161174_4*)(arg0 + 0x1000))->unknown_bd0_, 0);
    }

    func_020466c8((struct Struct_020466c8*)var0, *(int*)(*(int*)arg0 + 0x10));
#if defined(jpn)
    func_0204500c((void*)var0, ((struct Struct_ov002_02161174_4*)(arg0 + 0x1000))->unknown_bd0_, 0);
#else
    func_0204500c((void*)var0, ((struct Struct_ov002_02161174_4*)(arg0 + 0x1000))->unknown_bd0_, 0, 0xe3);
#endif
    ((struct Struct_ov002_02161174_2*)var0)->unknown_998_ = 1;

    if (*(short*)(arg0 + RG(0x1c28, 0x1af0)) == 0x232b) {
        ((struct Struct_ov002_02161174_3*)(var0 + 0x1000))->unknown_9ca_ = 0;
    }
}
