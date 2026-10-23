#include <globaldefs.h>

extern "C" void func_020d8654(void);
struct Struct_020db264;
extern "C" void func_020db360(struct Struct_020db264* arg0, int arg1);
extern "C" int func_020db9a8(struct Struct_020db264* arg0);
extern "C" void func_020d8694(void);

// USA: func_020db264
extern "C" ARM void func_020db264(void* arg0, int arg1, int arg2, int arg3, int arg4) {
    char* var0 = (char*)arg0;
    if (*(unsigned char*)(var0 + 0x50) != 0 && arg1 != 0) {
        return;
    }
    func_020d8654();
    if (arg3 == 0) {
        *(short*)(var0 + 0x66) = 0;
    }
    *(unsigned char*)(var0 + 0x50) = (unsigned char)arg1;
    *(unsigned char*)(var0 + 0x52) = (unsigned char)arg2;
    int var1 = (arg1 == 0);
    unsigned char var2 = (unsigned char)arg4;
    *(unsigned char*)(var0 + 0x53) = (unsigned char)arg3;
    *(unsigned char*)(var0 + 0x54) = var2;
    func_020db360((struct Struct_020db264*)arg0, var1);
    *(unsigned char*)(var0 + 0x3c) = func_020db9a8((struct Struct_020db264*)arg0);
    func_020d8694();
}
