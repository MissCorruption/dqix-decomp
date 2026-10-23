#include <globaldefs.h>

struct Struct_020dfc40;
struct Struct_0201099c_14 {
    unsigned char unknown_0_[0xc];
    short unknown_c_;
    short unknown_e_;
    int unknown_10_;
    void* unknown_14_;
};

extern "C" int func_020dfe88(struct Struct_020dfc40* arg0);
extern "C" void func_020dfc40(struct Struct_0201099c_14* arg0);
extern "C" int func_020e05f8(char*, char const*, short);
extern "C" int func_020dfd40(void* arg0, char* arg1, char* arg2);

// USA: func_020dfc84
extern "C" ARM int func_020dfc84(void* arg0, void* arg1, char* arg2, char* arg3, short arg4, short arg5) {
    char var0[0x60];
    struct Struct_0201099c_14* var1;

    var1 = (struct Struct_0201099c_14*)arg0;
    func_020dfe88((struct Struct_020dfc40*)arg0);
    func_020dfc40(var1);
    var1->unknown_14_ = arg1;
    var1->unknown_c_ = arg5;
    var1->unknown_e_ = 1;

    if (arg4 >= 0) {
        func_020e05f8(var0 + 0x20, arg2, arg4);
        if (arg3 != 0) {
            func_020e05f8(var0, arg3, arg4);
            func_020dfd40(arg0, var0 + 0x20, var0);
        } else {
            func_020dfd40(arg0, var0 + 0x20, 0);
        }
        return;
    }

    if (arg3 != 0) {
        func_020dfd40(arg0, arg2, arg3);
    } else {
        func_020dfd40(arg0, arg2, 0);
    }
}
