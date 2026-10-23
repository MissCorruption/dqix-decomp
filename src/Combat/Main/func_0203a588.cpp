#include <globaldefs.h>

struct Struct_02039e7c;
extern "C" void func_02039ee8(struct Struct_02039e7c* arg0);

struct Struct_0203a588 {
    char unknown_0_[5];
    signed char unknown_5_;
    char unknown_6_[18];
};

struct Struct_0203a588_2 {
    char unknown_0_[0x550];
    struct Struct_0203a588 unknown_550_[16];
};

// USA: func_0203a588
extern "C" ARM void func_0203a588(struct Struct_0203a588_2* arg0) {
    int var0;
    for (var0 = 0; var0 < 16; var0++) {
        if (arg0->unknown_550_[var0].unknown_5_ < 0x23) {
            func_02039ee8((struct Struct_02039e7c*)&arg0->unknown_550_[var0]);
        }
    }
}
