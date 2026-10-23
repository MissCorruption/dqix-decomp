#include <globaldefs.h>

extern "C" void func_0209e6ac(void* arg0, int arg1, int arg2);
extern "C" int func_ov017_021d60f4(void*);
extern "C" void* func_0209dccc();

// USA: func_0209cebc
extern "C" ARM int func_0209cebc(void* arg0) {
    void* var0 = func_0209dccc();
    if (var0 == NULL) return 0;
    func_0209e6ac(var0, func_ov017_021d60f4(arg0), func_ov017_021d60f4((char*)arg0 + 8));
    return 1;
}
