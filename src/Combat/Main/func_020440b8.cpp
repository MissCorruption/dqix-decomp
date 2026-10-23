#include <globaldefs.h>
extern "C" void func_0202f310(char*, void*, void*);

// USA: func_020440b8
extern "C" ARM void func_020440b8(char* arg0, void* arg1, void* arg2) {
#if defined(jpn)
    func_0202f310((char*)(arg0 + 0x1804), (void*)(arg1), arg2);
#else
    func_0202f310((char*)(arg0 + 0x19e0), (void*)(arg1), arg2);
#endif
}
