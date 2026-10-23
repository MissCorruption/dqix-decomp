#include <globaldefs.h>

extern "C" int func_ov017_021d60f4(void*);
extern "C" int func_ov017_021d6134(void*, int);
extern "C" void* func_0209dccc();
struct Struct_0209da08;
extern "C" int func_0209fc9c(struct Struct_0209da08*, int);

// USA: func_0209da08
extern "C" ARM int func_0209da08(void* arg0) {
    void* var0 = func_0209dccc();
    if (var0 == NULL) return 0;
    int var1 = func_ov017_021d60f4(arg0);
    int var2 = func_0209fc9c((struct Struct_0209da08*)var0, var1);
    func_ov017_021d6134((char*)arg0 + 8, var2);
    return 1;
}
