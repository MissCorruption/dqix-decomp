#include <globaldefs.h>

extern "C" int func_ov017_021d60f4(void*);
extern "C" void func_ov017_021d6134(void*, int);
extern "C" void* func_0209dccc();
struct Struct_0209d38c;
extern "C" int func_0209fc84(struct Struct_0209d38c*, int);

// USA: func_0209d38c
extern "C" ARM int func_0209d38c(char* arg0) {
    void* var0 = func_0209dccc();
    if (var0 == NULL) return 0;
    int var1 = func_0209fc84((struct Struct_0209d38c*)var0, func_ov017_021d60f4(arg0));
    func_ov017_021d6134(arg0 + 8, var1);
    return 1;
}
