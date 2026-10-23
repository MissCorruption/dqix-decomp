#include <globaldefs.h>

struct Struct_020dbdc0;
extern "C" void func_020dbf70(struct Struct_020dbdc0* arg0);
extern "C" int func_02057924(void);
extern "C" void func_02057f00(int arg0, int arg1);

struct Struct_020dbebc {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
    int unknown_10_;
};

// USA: func_020dbedc
extern "C" ARM void func_020dbedc(struct Struct_020dbebc* arg0) {
    int var0 = arg0->unknown_10_;
    if (var0 == 1) {
        func_020dbf70((struct Struct_020dbdc0*)arg0);
        return;
    }
    if (var0 != 2) return;
    func_02057f00(func_02057924(), arg0->unknown_8_);
    arg0->unknown_10_ = 0;
}
