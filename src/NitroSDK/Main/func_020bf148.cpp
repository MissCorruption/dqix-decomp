#include <globaldefs.h>

struct Struct_020bc180_2 { int unknown_0_; int unknown_4_; int unknown_8_; int unknown_c_; };
extern "C" void func_020c0204(struct Struct_020bc180_2* arg0, int arg1, int arg2);
extern "C" void func_020bf1a0(void* arg0);

// USA: func_020bf148
extern "C" ARM void func_020bf148(void* arg0, int arg1) {
    char* var0 = (char*)arg0;
    if (((*(int*)(var0 + 0x110) << 30) >> 31) == 0) { func_020bf1a0(arg0); return; }
    if (arg1 == 0) { func_020bf1a0(arg0); return; }
    func_020c0204((struct Struct_020bc180_2*)(var0 + 0xe8), 0, arg1);
    *(int*)(var0 + 0x110) |= 0x8;
    *(int*)(var0 + 0x150) = 0;
}
