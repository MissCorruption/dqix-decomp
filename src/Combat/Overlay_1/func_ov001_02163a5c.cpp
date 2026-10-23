#include <globaldefs.h>

extern "C" int func_ov017_021d60f4(void*);
extern int data_02108760;
extern int data_02109bf4;
extern "C" void func_0205e92c(void* obj);
extern "C" void func_0209c278(void* obj);
extern "C" int func_0209c2b8(void* ctx);
extern "C" int func_0209c290(void* ctx);
extern "C" void func_0205ea20(void* objRaw, int mode);

// USA: func_ov001_02163a5c
extern "C" ARM int func_ov001_02163a5c(void* self) {
    int cond = func_ov017_021d60f4(self);
    if (cond != 0) {
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
