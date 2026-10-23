#include <globaldefs.h>

#if defined(jpn)
#define REGION_VALUE(j, u) (j)
#else
#define REGION_VALUE(j, u) (u)
#endif

struct Struct_0205a254;
struct Struct_0205a254_2;
extern "C" void func_0205a370(struct Struct_0205a254* arg0, int arg1);
extern "C" struct Struct_0205a254_2* func_0205a3d0(struct Struct_0205a254* arg0, int arg1);
extern "C" void func_020e27ec(struct Struct_0205a254* arg0, int arg1, short arg2, short arg3);
extern "C" void func_0205a42c(struct Struct_0205a254* arg0, int arg1, int arg2);

struct Struct_0205a330;
extern "C" void func_0205a330(struct Struct_0205a330* arg0, int arg1);

extern "C" void func_0205ae8c(void* arg0);

// USA: func_ov002_0215b0a8
// KEEP-NAME
extern "C" ARM void func_ov002_0215b0a8(char* arg0) {
    if ((*(int*)(arg0 + REGION_VALUE(0x22ac, 0x247c)) & 8) == 0) {
        return;
    }
    struct Struct_0205a254* var0 = *(struct Struct_0205a254**)(*(char**)(arg0 + REGION_VALUE(0x19c0, 0x1a68)) + 0x3c);
    func_0205a370(var0, 0);
    struct Struct_0205a254_2* var1 = func_0205a3d0(var0, 0);
    if (var1 != 0) {
        *(unsigned char*)((char*)var1 + 0x15) |= 8;
    }
    func_0205a330((struct Struct_0205a330*)var0, *(int*)(arg0 + REGION_VALUE(0x1a68, 0x1ba0)));
    func_020e27ec(var0, 0, 0xd7, 0x96);
    func_0205a42c(var0, 0, 0);
    func_0205ae8c(*(void**)(arg0 + REGION_VALUE(0x19c0, 0x1a68)));
}
