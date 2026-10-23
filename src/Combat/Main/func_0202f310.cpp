#include <globaldefs.h>

extern "C" void sprintf(void* arg0, void* arg1, int arg2);
extern "C" void func_0204719c(void* arg0);
extern "C" void func_02047b40(void* arg0, int arg1, void* arg2);

extern int GetFileFromNARCInMemory(const char* filename);

extern int data_020ef7c4;

struct Struct_0202f310 { char unknown_0_[0x28]; };

// USA: func_0202f310
extern "C" ARM void func_0202f310(char* arg0, void* arg1, void* arg2) {
    struct Struct_0202f310 var0;
    char* var1;
    int var2;
    var1 = arg0;
    for (var2 = 0; var2 < 8; var2++) {
        int var3;
        sprintf(&var0, &data_020ef7c4, var2);
        var3 = GetFileFromNARCInMemory((const char*)&var0);
        func_0204719c(var1);
        func_02047b40(var1, var3, arg1);
        var1 += 0x88;
    }
}
