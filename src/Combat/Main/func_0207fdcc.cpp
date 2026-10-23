#include <globaldefs.h>
extern "C" void func_0204c804(void*);

struct Struct_0207fdcc;

struct Struct_0207fdcc_2 {
#if defined(jpn)
    char unknown_0_[0x24];
#else
    char unknown1_0_[0x30];
#endif
    struct Struct_0207fdcc* unknown_30_;
};

extern "C" struct Struct_0207fdcc* func_02081da8(struct Struct_0207fdcc_2* arg0, int arg1);

// USA: func_0207fdcc
extern "C" ARM void func_0207fdcc(struct Struct_0207fdcc_2* arg0, int arg1) {
    struct Struct_0207fdcc* var0;
    if (arg0->unknown_30_ == NULL) return;
    var0 = func_02081da8(arg0, arg1);
    if (var0 == NULL) return;
    func_0204c804((void*)(var0));
}
