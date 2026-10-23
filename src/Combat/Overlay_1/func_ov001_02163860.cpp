#include <globaldefs.h>

extern "C" int func_ov017_021d60f4(void* arg0);
extern "C" void func_ov017_021d6134(void* arg0, int arg1);
extern "C" int* func_ov001_0215a818(int* arg0);
extern "C" void func_0205eb90(void* arg0, int arg1, int arg2);
extern int data_02108760;

// USA: func_ov001_02163860
extern "C" ARM int func_ov001_02163860(void* arg0, int arg1) {
    int var0 = func_ov017_021d60f4(arg0);
    if (arg1 >= 2) {
        int var1;
        int* var2 = func_ov001_0215a818(&var1);
        if (var2 != NULL) {
            func_0205eb90(&data_02108760, var0, (int)var2);
        }
        func_ov017_021d6134((char*)arg0 + 8, var1);
    } else {
        func_0205eb90(&data_02108760, var0, 0);
    }
    return 1;
}
