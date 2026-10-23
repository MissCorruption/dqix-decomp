#include <globaldefs.h>

struct Struct_020bc180_2 { int unknown_0_; int unknown_4_; int unknown_8_; int unknown_c_; };
struct Struct_020bc2f0 { char unknown_0_[8]; int unknown_8_; int unknown_c_; };

extern "C" ARM void func_020c0260(struct Struct_020bc180_2* arg0);
extern "C" ARM int func_020c0278(struct Struct_020bc2f0* arg0);
extern "C" ARM int func_020c022c(struct Struct_020bc180_2* arg0);
extern "C" int func_020d1ff0(int arg0, int arg1, int arg2);

extern "C" void func_020bcf3c(void);

extern char data_0210fd74;
extern char data_0210fdbc;

// USA: func_020bceb4
extern "C" ARM void func_020bceb4(void) {
    char* var0 = &data_0210fdbc;
    if (*(int*)(&data_0210fd74 + 0x48) == 0) {
        return;
    }
    if (*(int*)(var0 + 0x4) != 0) {
        return;
    }
    func_020c0260((struct Struct_020bc180_2*)(var0 + 0x3c));
    if (*(int*)(var0 + 0x4c) != 0) {
        if (func_020c0278((struct Struct_020bc2f0*)(var0 + 0x3c)) != 0) {
            func_020bcf3c();
            return;
        }
    }
    int var1 = func_020c022c((struct Struct_020bc180_2*)(var0 + 0x3c)) >> 8;
    if (var1 == *(int*)(var0 + 0x50)) {
        return;
    }
    func_020d1ff0(*(int*)(var0 + 0x24), var1, 0);
    *(int*)(var0 + 0x50) = var1;
}
