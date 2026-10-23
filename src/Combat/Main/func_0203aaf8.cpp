#include <globaldefs.h>

struct Struct_0203a974_2;
extern "C" int func_020bdac0(struct Struct_0203a974_2* arg0);
extern "C" void* func_020bd42c(void*);
extern "C" int func_020bdcc4(void*, int, int);
extern "C" int func_020bdc98(void*, int);

// USA: func_0203aaf8
extern "C" ARM int func_0203aaf8(void* arg0, void* arg1, int* arg2) {
    char* var0 = (char*)arg0;
    if (*(void**)var0 == NULL) return 0;
    func_020bd42c(var0 + 0x4);
    if (arg2 != NULL) {
        func_020bdcc4(arg1, 3, *(int*)var0);
        *arg2 = func_020bdac0(*(struct Struct_0203a974_2**)var0);
        func_020bdcc4(arg1, 4, *(int*)var0);
    } else {
        func_020bdc98(arg1, *(int*)var0);
    }
    return 1;
}
