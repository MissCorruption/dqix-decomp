#include <globaldefs.h>

extern "C" int func_ov017_021d60f4(void*);
extern int data_02108760;
extern int data_02109bf4;
extern "C" void func_0205e92c(void* arg0);
extern "C" void func_0209c278(void* arg0);
extern "C" int func_0209c2b8(void* arg0);
extern "C" int func_0209c290(void* arg0);
extern "C" void func_0205ea20(void* arg0, int arg1);

// USA: func_ov001_02163a5c
extern "C" ARM int func_ov001_02163a5c(void* arg0) {
    int var0 = func_ov017_021d60f4(arg0);
    if (var0 != 0) {
        func_0205e92c(&data_02108760);
        func_0209c278(&data_02109bf4);
        func_0209c2b8(&data_02109bf4);
    } else {
        func_0209c278(&data_02109bf4);
        func_0209c290(&data_02109bf4);
        func_0205ea20(&data_02108760, 0x64);
    }
    return 1;
}
