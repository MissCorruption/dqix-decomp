#include <globaldefs.h>

struct Struct_0205c53c;
extern "C" void func_0205c564(struct Struct_0205c53c* arg0);
struct Struct_0204c754;
extern "C" void func_0204c754(struct Struct_0204c754* arg0);
struct Struct_02020cb8_3;
extern "C" void func_0204afb4(struct Struct_02020cb8_3* arg0);

struct Struct_0205d048 {
    char unknown_0_[0x98];
    char* unknown_98_;
    char* unknown_9c_;
    char unknown_a0_[0xb2 - 0xa0];
    unsigned char unknown_b2_;
    unsigned char unknown_b3_;
    unsigned char unknown_b4_;
};

// USA: func_0205d048
extern "C" ARM void func_0205d048(struct Struct_0205d048* arg0) {
    func_0205c564((struct Struct_0205c53c*)arg0);
    if (arg0->unknown_9c_ != 0 && arg0->unknown_b3_ != 0) {
        unsigned char var0;
        for (var0 = 0; var0 < arg0->unknown_b3_; var0++) {
            func_0204c754((struct Struct_0204c754*)(arg0->unknown_9c_ + var0 * 0xe0));
        }
    }
    if (arg0->unknown_98_ != 0) {
        unsigned char var1;
        for (var1 = 0; var1 < arg0->unknown_b2_; var1++) {
            func_0204afb4((struct Struct_02020cb8_3*)(arg0->unknown_98_ + var1 * 0x20));
        }
    }
    arg0->unknown_98_ = 0;
    arg0->unknown_9c_ = 0;
    arg0->unknown_b3_ = 0;
    arg0->unknown_b4_ = 0;
}
