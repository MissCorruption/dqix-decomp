#include <globaldefs.h>

extern "C" void func_0202c848(int arg0);
extern "C" void func_0202dd28(void);
extern "C" int func_020d5214(int arg0);
extern "C" int func_0202cd28(unsigned short*);

struct Struct_0202ccdc {
    char unknown_0_[2];
    unsigned short unknown_2_;
};

// USA: func_0202ccdc
extern "C" ARM void func_0202ccdc(struct Struct_0202ccdc* arg0) {
    if (arg0->unknown_2_ != 0) {
        func_0202c848(arg0->unknown_2_);
        func_0202dd28();
        return;
    }
    int var0 = func_020d5214((int)func_0202cd28);
    int var1;
    if (var0 == 2) {
        var1 = 1;
    } else {
        func_0202c848(var0);
        var1 = 0;
    }
    if (var1) return;
    func_0202dd28();
}
