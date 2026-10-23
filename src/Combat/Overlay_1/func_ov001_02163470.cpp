#include <globaldefs.h>

extern "C" int func_ov017_021d60f4(void* arg0);
extern "C" void* func_ov001_0215ab20(int arg0);
extern "C" void* func_ov001_0215a6bc(void* arg0, int arg1);

// USA: func_ov001_02163470
extern "C" ARM int func_ov001_02163470(void* arg0) {
    int var0 = func_ov017_021d60f4(arg0);
    void* var1 = func_ov001_0215ab20(var0);
    if (var1 == NULL) {
        return 0;
    }
    int var2 = func_ov017_021d60f4((char*)arg0 + 0x8);
    func_ov001_0215a6bc(var1, var2);
    return 1;
}
