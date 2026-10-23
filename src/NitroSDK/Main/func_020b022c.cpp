#include <globaldefs.h>

struct Struct_020afec4 {
    unsigned int unknown_0_;
    unsigned int unknown_4_;
};
struct Struct_0205ab78 {
    unsigned char unknown_0_[0xc];
    unsigned short unknown_c_;
    unsigned short unknown_e_;
};

extern "C" struct Struct_020afec4 *func_020b0288(struct Struct_0205ab78 *arg0, unsigned int arg1);

struct Struct_020b022c { char unknown_0_[0x4]; unsigned int unknown_4_; };
extern "C" void func_020b0268(struct Struct_020b022c* arg0);

// USA: func_020b022c
extern "C" ARM int func_020b022c(struct Struct_0205ab78* arg0, void** arg1) {
    struct Struct_020afec4* var0 = func_020b0288(arg0, 0x50434d50);
    if (var0 == NULL) {
        *arg1 = NULL;
        return 0;
    }
    func_020b0268((struct Struct_020b022c*)((char*)var0 + 8));
    *arg1 = (char*)var0 + 8;
    return 1;
}
