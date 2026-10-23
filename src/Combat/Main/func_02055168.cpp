#include <globaldefs.h>

struct Struct_020546c8;
extern "C" void* func_02055090(struct Struct_020546c8* arg0);

// USA: func_02055168
extern "C" ARM int func_02055168(struct Struct_020546c8* arg0) {
    void* var0 = func_02055090(arg0);
    if (var0 == NULL) return 0;
    return *(int*)var0;
}
