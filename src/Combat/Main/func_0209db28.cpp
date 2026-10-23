#include <globaldefs.h>
extern "C" void func_0209fe08(struct Struct_0209db28*, int);

extern "C" void* func_0209dccc();
extern "C" int func_ov017_021d60f4(void*);

// USA: func_0209db28
extern "C" ARM int func_0209db28(void* arg0) {
    void* var0 = func_0209dccc();
    if (var0 == NULL) return 0;
    func_0209fe08((struct Struct_0209db28*)(var0), (int)(func_ov017_021d60f4(arg0)));
    return 1;
}
