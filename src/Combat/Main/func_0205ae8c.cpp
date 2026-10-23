#include <globaldefs.h>

extern "C" void func_0205addc(void* arg0, unsigned char arg1);

struct Struct_0205ae8c {
    char unknown_0_[4];
    unsigned short unknown_4_;
};

// USA: func_0205ae8c
extern "C" ARM void func_0205ae8c(void* arg0) {
    unsigned short var0;
    struct Struct_0205ae8c* var1;
    unsigned short var2;

    var1 = *(struct Struct_0205ae8c**)((char*)arg0 + 0x3c);
    if (var1 == 0) {
        return;
    }
    var0 = var1->unknown_4_;
    var2 = 0;
    while (var2 < var0) {
        func_0205addc(arg0, (unsigned char)var2);
        var2++;
    }
}
