#include <globaldefs.h>

struct Struct_02049520_2;
extern "C" void func_02049550(struct Struct_02049520_2* arg0);

struct Struct_02049520 {
    unsigned char unknown_0_[0x20];
    unsigned int unknown_20_;
};
struct Struct_02048f64_3 {
    unsigned char unknown_0_[0x13c];
    struct Struct_02049520* unknown_13c_;
};

// USA: func_02049520
extern "C" ARM void func_02049520(struct Struct_02048f64_3* arg0) {
    struct Struct_02049520* var0 = arg0->unknown_13c_;
    if (var0 == NULL) return;
    func_02049550((struct Struct_02049520_2*)((unsigned char*)var0 + 0x4e));
    arg0->unknown_13c_->unknown_20_ &= ~0x4;
}
