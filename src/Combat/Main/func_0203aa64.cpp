#include <globaldefs.h>

struct Struct_0203a974_2;
extern "C" int func_020bdac0(struct Struct_0203a974_2*);

// USA: func_0203aa64
extern "C" ARM int func_0203aa64(void* arg0) {
    void* var0 = *(void**)arg0;
    if (var0 == NULL) return 0;
    return func_020bdac0((struct Struct_0203a974_2*)var0);
}
