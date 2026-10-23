#include <globaldefs.h>

struct Struct_0209ffe0 {
    char unknown_0_[0x68];
    short unknown_68_;
    unsigned short unknown_6a_[0x32];
};

// USA: func_0209ffe0
extern "C" ARM void func_0209ffe0(Struct_0209ffe0* arg0, short arg1) {
    short var0 = arg0->unknown_68_;
    if (var0 < 0x32) {
        arg0->unknown_68_ = var0 + 1;
        arg0->unknown_6a_[var0] = arg1;
    }
}
