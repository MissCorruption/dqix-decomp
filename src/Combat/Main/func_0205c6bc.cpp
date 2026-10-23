#include <globaldefs.h>

extern "C" int func_0205bea0(void* arg0);

struct Struct_0205c5b0_2 {
    char unknown_0_[0x94];
    unsigned char unknown_94_;
};

// USA: func_0205c6bc
extern "C" ARM int func_0205c6bc(Struct_0205c5b0_2* arg0) {
    int var0 = 0;
    if (arg0->unknown_94_) {
        var0 = func_0205bea0((char*)arg0 + 4);
    }
    return var0;
}
