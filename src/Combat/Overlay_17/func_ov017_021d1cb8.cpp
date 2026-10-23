#include <globaldefs.h>

struct Struct_0202c1a4 {
    char unknown_0_[0x1038];
    signed char unknown_1038_[16];
};

extern "C" int* func_0202ae18(void);
extern "C" int func_0202b7d8(int* arg0);
extern "C" signed char func_0202c1a4(struct Struct_0202c1a4* arg0);
extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

struct Struct_ov017_021d1cb8 {
    unsigned char unknown_0_;
    char unknown_1_[19];
};

// USA: func_ov017_021d1cb8
extern "C" ARM void func_ov017_021d1cb8(void) {
    if (!func_0202b7d8(func_0202ae18())) return;
    if (func_0202c1a4((struct Struct_0202c1a4*)func_0202ae18()) != 0) return;
    void* var0 = func_0202ae24();

    struct Struct_ov017_021d1cb8 var1;
    var1.unknown_0_ = 0xb4;
    func_0205e330(var0, &var1, 0);
}
