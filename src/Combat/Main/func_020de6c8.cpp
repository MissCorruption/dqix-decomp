#include <globaldefs.h>
extern "C" int func_020de5b0(struct Struct_020de5b0*);

extern "C" void func_020de574(void);
extern "C" void func_020de714(void* arg0, void* arg1, unsigned char* arg2, void* arg3);

// USA: func_020de6c8
extern "C" ARM int func_020de6c8(void* arg0, void* arg1, void* arg2) {
    unsigned char var0;
    if (arg1 == NULL || arg2 == NULL) return 0;
    func_020de714(arg0, arg1, &var0, (void*)func_020de574);
    if (var0 != 0) return 1;
    return func_020de5b0((struct Struct_020de5b0*)(arg0));
}
