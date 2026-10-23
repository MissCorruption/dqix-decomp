#include <globaldefs.h>

extern "C" void func_020de524(int arg0, int arg1, void** arg2);

typedef int (*Type_020ded1c)(void*, int, int, int);

struct Struct_020ded1c {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned int unknown_4_;
    unsigned int unknown_8_;
    void* unknown_c_;
};

// USA: func_020ded1c
extern "C" ARM int func_020ded1c(struct Struct_020ded1c* arg0, int arg1, int arg2, int arg3) {
    void* var0 = 0;
    int var1;
    char* var2;
    int var3;
    func_020de524(arg2, arg3, &var0);
    if (var0 == NULL) return 0;
    var1 = arg0->unknown_0_;
    var2 = (char*)arg0->unknown_c_;
    for (var3 = 0; var3 < var1; var3++, var2 += 0x20) {
        if (((Type_020ded1c)var0)(var2, arg1, arg2, arg3) != 0) return (int)var2;
    }
    return 0;
}
