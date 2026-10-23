#include <globaldefs.h>

extern "C" int func_ov017_021d60f4(void*);
extern "C" void* func_ov001_0215ab20(int);
extern "C" void* func_ov001_0215a510(void* arg0, int arg1);

// USA: func_ov001_0215c820
extern "C" ARM int func_ov001_0215c820(void* arg0) {
    int var0 = func_ov017_021d60f4(arg0);
    void* var1 = func_ov001_0215ab20(var0);
    if (var1 == NULL) return 0;
    int var2 = func_ov017_021d60f4((char*)arg0 + 8);
    func_ov001_0215a510(var1, var2);
    return 1;
}
