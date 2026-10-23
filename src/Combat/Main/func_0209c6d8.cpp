#include <globaldefs.h>
extern "C" void func_0203aaf8(void*, void*, int*);
extern "C" void func_0203aba8(struct Struct_0203aba8*, void*, void*);

struct Struct_02109bf4_4;
extern "C" void func_0209c678(struct Struct_02109bf4_4* arg0, int arg1);
extern "C" void func_0203aa80(void* arg0, int arg1);
extern "C" void func_0209c2e0(void* arg0, int arg1, int arg2);
extern "C" void func_020bbd9c(void);

// USA: func_0209c6d8
extern "C" ARM void func_0209c6d8(void* arg0, int arg1) {
    func_0209c678((struct Struct_02109bf4_4*)arg0, 0);
    {
        int var0 = *(int*)((char*)arg0 + 0xb4);
        if (var0 > 0) {
            func_0203aa80(arg0, var0);
        }
    }
    *(short*)((char*)arg0 + 0xce) = arg1;
    func_0203aaf8((void*)(arg0), (void*)(arg1), (int*)(0));
    func_0203aba8((struct Struct_0203aba8*)(arg0), (void*)(arg1), (void*)((char*)arg0 + 0xc4));
    func_0209c2e0(arg0, *(unsigned char*)((char*)arg0 + 0xcd), 0);
    func_020bbd9c();
}
