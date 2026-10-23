#include <globaldefs.h>
extern "C" void func_0202f310(char*, void*, void*);

// USA: func_020440b8
extern "C" ARM void func_020440b8(char* base, void* arg, void* data) {
#if defined(jpn)
    func_0202f310((char*)(base + 0x1804), (void*)(arg), data);
#else
    func_0202f310((char*)(base + 0x19e0), (void*)(arg), data);
#endif
}
