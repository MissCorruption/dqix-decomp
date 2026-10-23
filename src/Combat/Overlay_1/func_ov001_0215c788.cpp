#include <globaldefs.h>

extern "C" int func_ov017_021d60f4(void*);
extern "C" void* func_ov017_021d612c(void*);
extern "C" float func_ov017_021d6110(void*);
extern "C" void* func_ov001_0215ab20(int);
extern "C" void func_ov001_0215a594(void* arg0, char* arg1, int arg2, int arg3);

// USA: func_ov001_0215c788
extern "C" ARM int func_ov001_0215c788(char* arg0, int arg1) {
    int var0 = 0x1000;
    int var1;
    int var2 = func_ov017_021d60f4(arg0);
    char* var3 = arg0 + 0x8;
    arg0 += 0x10;
    char* var4 = (char*)func_ov017_021d612c(var3);
    var1 = 0;
    if (arg1 >= 3) {
        var1 = func_ov017_021d60f4(arg0);
        arg0 += 0x8;
    }
    if (arg1 >= 4) {
        var0 = (int)(4096.0f * func_ov017_021d6110(arg0));
    }
    void* var5 = func_ov001_0215ab20(var2);
    if (var5 == NULL) return 0;
    func_ov001_0215a594(var5, var4, var1, var0);
    return 1;
}
