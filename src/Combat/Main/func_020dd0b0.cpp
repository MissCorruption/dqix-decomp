#include <globaldefs.h>

struct Struct_0201099c_14 {
    unsigned char unknown_0_[0x14];
    int unknown_14_;
};

extern "C" void* func_020dfc2c(void* arg0);
extern "C" void func_020dfc40(struct Struct_0201099c_14* arg0);

extern "C" int func_020e04f4(int arg0, void* arg1, int arg2, int arg3, unsigned char arg4, int arg5);

extern const char data_020f29cc[];
extern const char data_020f29b8[];

// USA: func_020dd0b0
extern "C" ARM void func_020dd0b0(int arg0, char* arg1) {
    const char* var0;
    const char* var1;
    if (arg0 >= 0 && arg1 != NULL) {
        struct Struct_0201099c_14 var2;
        var1 = data_020f29b8;
        var0 = data_020f29cc;
        arg1[0] = 0;
        func_020dfc2c(&var2);
        func_020dfc40(&var2);
    } else {
        return;
    }
    func_020e04f4((int)arg1, (void*)var0, arg0, 0, 1, (int)var1);
}
