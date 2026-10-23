#include <globaldefs.h>

struct Struct_0205d81c;
struct Struct_0205d0e0;
extern "C" struct Struct_0205d0e0* func_0205d81c(struct Struct_0205d81c* arg0, int arg1);

extern "C" void func_0204f138(unsigned char* arg0, unsigned char** arg1, unsigned char** arg2, unsigned char** arg3, unsigned char** arg4);

struct Struct_0205bd58;
extern "C" void func_0205bd58(struct Struct_0205bd58* arg0, int arg1, int arg2, int arg3, int arg4, int arg5);

struct Struct_0205d904 {
    char unknown_0_[0xac];
    short unknown_ac_;
    short unknown_ae_;
};

// USA: func_0205d904
extern "C" ARM void func_0205d904(unsigned char* arg0) {
    struct Struct_0205d0e0* var0;
    unsigned char* var1;
    unsigned char* var2;
    unsigned char* var3;
    unsigned char* var4;
    struct Struct_0205d904* var5;

    var0 = func_0205d81c((struct Struct_0205d81c*)arg0, arg0[0xb0]);
    if (var0 == NULL) return;

    func_0204f138((unsigned char*)var0, &var1, &var2, &var3, &var4);
    func_0205bd58((struct Struct_0205bd58*)(arg0 + 4), 0x12, (int)var1, (int)var2, (int)var3, (int)var4);

    var5 = (struct Struct_0205d904*)var0;
    {
        short var6 = var5->unknown_ac_;
        short var7 = var5->unknown_ae_;
        *(short*)(arg0 + 0x3c) = var6 << 3;
        *(short*)(arg0 + 0x3e) = var7 << 3;
    }
}
