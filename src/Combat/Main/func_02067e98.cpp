#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" void func_0206b104(void* arg0, int arg1);
extern "C" void func_0206831c(void* arg0, int arg1, unsigned int arg2);
extern "C" void func_02068418(void* arg0, unsigned int arg1, unsigned int arg2, unsigned char arg3);
extern "C" void func_02068f40(void* arg0, unsigned int arg1, unsigned int arg2, unsigned char arg3);
extern "C" void func_02069234(void* arg0, unsigned int arg1, unsigned int arg2, unsigned char arg3);
extern "C" void func_020695f4(void* arg0, unsigned int arg1, unsigned int arg2, unsigned char arg3);
extern "C" void func_02069fec(void* arg0, unsigned int arg1, unsigned int arg2);

struct Struct_0204500c_3;
extern "C" void func_0206a974(struct Struct_0204500c_3* arg0, const char* arg1, int arg2);

// USA: func_02067e98
extern "C" ARM void func_02067e98(unsigned char* arg0, int arg1) {
    func_0206b104(arg0, arg1);
    memset(*(void**)(arg0 + 0x48), 0, 0x960);
    unsigned int var0 = *(unsigned int*)(arg0 + 0x60);
    unsigned int var1 = *(unsigned int*)(arg0 + 0x64);
    func_0206831c(arg0, arg1, var0);
    func_02068418(arg0, var0, var1, (arg0 + 0x1000)[0x9dc]);
    func_02068f40(arg0, var1, var0, (arg0 + 0x1000)[0x9dc]);
    func_02069234(arg0, var0, var1, (arg0 + 0x1000)[0x9dc]);
    func_020695f4(arg0, var1, var0, (arg0 + 0x1000)[0x9dc]);
    func_02069fec(arg0, var0, var1);
    func_0206a974((struct Struct_0204500c_3*)arg0, (const char*)var1, 0xe3);
    *(int*)(arg0 + 0x9a0) = 5;
}
