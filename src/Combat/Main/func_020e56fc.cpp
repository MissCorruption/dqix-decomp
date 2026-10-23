#include <globaldefs.h>

extern "C" void func_020e53bc(void* arg0, int arg1, void* arg2, void* arg3);
struct Struct_020e5204;
extern "C" void func_020e5204(void*, struct Struct_020e5204*);

// USA: func_020e56fc
extern "C" ARM int func_020e56fc(void* arg0, int arg1, int arg2) {
    int var0;
    if (arg1 == 0 || arg2 == 0) return 0;
    func_020e53bc(arg0, arg1, &var0, (void*)func_020e5204);
    return 1;
}
