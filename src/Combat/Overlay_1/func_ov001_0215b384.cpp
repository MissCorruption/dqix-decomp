#include <globaldefs.h>

extern "C" int func_ov017_021d60f4(void*);
extern "C" void* func_020704fc(void*);
struct Struct_020708c8;
extern "C" void func_020708c8(struct Struct_020708c8*, unsigned int);

// USA: func_ov001_0215b384
extern "C" ARM int func_ov001_0215b384(void* arg0) {
    int var0 = func_ov017_021d60f4(arg0);
    void* var1 = func_020704fc((void*)var0);
    if (var1 != NULL) {
        func_020708c8((struct Struct_020708c8*)var1, var0);
    }
    return 1;
}
