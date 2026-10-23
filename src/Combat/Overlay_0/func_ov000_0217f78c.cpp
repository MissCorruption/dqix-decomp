#include <globaldefs.h>

extern "C" int func_ov000_0217f7d4(void* arg0);
extern "C" void* func_ov000_02161318(void* arg0, int arg1);
extern "C" void func_ov000_0217fa60(void* arg0);
extern "C" void func_ov000_02174c14(void* arg0);
struct Struct_ov000_02170fd0;
extern "C" void func_ov000_02170fd0(struct Struct_ov000_02170fd0* arg0, int arg1);

// USA: func_ov000_0217f78c
extern "C" ARM void func_ov000_0217f78c(void* arg0) {
    char* var0 = (char*)arg0;
    int var1 = func_ov000_0217f7d4(var0);
    void* var2 = func_ov000_02161318(var0, var1);
    if (var2 != NULL) {
        *(int*)(var0 + 0x17c) = var1;
        func_ov000_02170fd0((struct Struct_ov000_02170fd0*)var2, 0);
        return;
    }
    func_ov000_0217fa60(var0);
    func_ov000_02174c14(var0);
}
