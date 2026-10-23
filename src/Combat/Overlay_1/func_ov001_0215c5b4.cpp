#include <globaldefs.h>

extern "C" int func_ov017_021d60f4(void*);
extern "C" void* func_ov001_0215ab20(int arg0);
extern "C" void func_ov001_0215a4e8(void* arg0, int arg1, int arg2);

// USA: func_ov001_0215c5b4
extern "C" ARM int func_ov001_0215c5b4(void* arg0) {
    int var0 = func_ov017_021d60f4(arg0);
    void* var1 = func_ov001_0215ab20(var0);
    if (var1 == NULL) {
        return 0;
    }
    int var2 = func_ov017_021d60f4((char*)arg0 + 0x8);
    int var3 = func_ov017_021d60f4((char*)arg0 + 0x10);
    func_ov001_0215a4e8(var1, var2, var3);
    return 1;
}
