#include <globaldefs.h>
extern "C" void func_0203aaf8(void*, void*, int*);
extern "C" void func_0203aba8(struct Obj0203aba8*, void*, void*);

struct Actor0209c678;
extern "C" void func_0209c678(struct Actor0209c678* actor, int arg);
extern "C" void func_0203aa80(void* obj, int arg2);
extern "C" void func_0209c2e0(void* obj, int a, int b);
extern "C" void func_020bbd9c(void);

// USA: func_0209c6d8
extern "C" ARM void func_0209c6d8(void* actor, int arg) {
    func_0209c678((struct Actor0209c678*)actor, 0);
    {
        int f = *(int*)((char*)actor + 0xb4);
        if (f > 0) {
            func_0203aa80(actor, f);
        }
    }
    *(short*)((char*)actor + 0xce) = arg;
    func_0203aaf8((void*)(actor), (void*)(arg), (int*)(0));
    func_0203aba8((struct Obj0203aba8*)(actor), (void*)(arg), (void*)((char*)actor + 0xc4));
    func_0209c2e0(actor, *(unsigned char*)((char*)actor + 0xcd), 0);
    func_020bbd9c();
}
