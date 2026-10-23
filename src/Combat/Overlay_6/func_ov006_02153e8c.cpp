#include <globaldefs.h>

struct Struct_ov006_02153e8c_2 { short unknown_0_; short unknown_2_; };

struct Struct_ov006_02153e8c_3 {
    char unknown_0_[0x20];
    struct Struct_ov006_02153e8c_2* unknown_20_;
    unsigned short unknown_24_;
};

struct Struct_ov006_02153e8c { short unknown_0_; short unknown_2_; };

// USA: func_ov006_02153e8c
extern "C" ARM void func_ov006_02153e8c(struct Struct_ov006_02153e8c_3* arg0, struct Struct_ov006_02153e8c* arg1) {
    short var0 = arg1->unknown_0_;
    unsigned short var1 = arg0->unknown_24_;
    unsigned short var2;
    for (var2 = 0; var2 < var1; var2++) {
        struct Struct_ov006_02153e8c_2* var3 = arg0->unknown_20_ + var2;
        if (var3->unknown_0_ == var0) {
            var3->unknown_0_ = *(short*)arg1;
            var3->unknown_2_ = *(unsigned short*)((char*)arg1 + 2);
            return;
        }
    }
    for (var2 = 0; var2 < var1; var2++) {
        struct Struct_ov006_02153e8c_2* var4 = arg0->unknown_20_ + var2;
        if (var4->unknown_0_ <= 0) {
            var4->unknown_0_ = *(short*)arg1;
            var4->unknown_2_ = *(unsigned short*)((char*)arg1 + 2);
            return;
        }
    }
}
