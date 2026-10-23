#include <globaldefs.h>

struct Struct_0207f524;

struct Struct_0207f7ac {
    char unknown_0_[0x2a];
    unsigned char unknown_2a_;
};

extern "C" struct Struct_0207f7ac* func_0207f6ac(struct Struct_0207f524* arg0, int arg1);

// USA: func_0207f7ac
extern "C" ARM void func_0207f7ac(struct Struct_0207f524* arg0, int arg1, int arg2) {
    struct Struct_0207f7ac* var0 = func_0207f6ac(arg0, arg1);
    if (var0 != NULL) {
        var0->unknown_2a_ |= arg2;
    }
}
