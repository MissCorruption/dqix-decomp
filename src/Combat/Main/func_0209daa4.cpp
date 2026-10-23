#include <globaldefs.h>

extern "C" void* func_0209dccc();
extern "C" int func_ov017_021d60f4(void*);

struct Struct_0209daa4;
extern "C" void func_0209fde8(struct Struct_0209daa4* arg0, int arg1, int arg2, int arg3);

// USA: func_0209daa4
extern "C" ARM int func_0209daa4(void* arg0) {
    void* var0 = func_0209dccc();
    if (var0 == NULL) return 0;
    int var1 = func_ov017_021d60f4(arg0);
    int var2 = func_ov017_021d60f4((char*)arg0 + 0x8);
    int var3 = func_ov017_021d60f4((char*)arg0 + 0x10);
    func_0209fde8((struct Struct_0209daa4*)var0, var1, var2, var3);
    return 1;
}
