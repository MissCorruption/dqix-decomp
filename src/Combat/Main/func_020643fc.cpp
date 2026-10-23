#include <globaldefs.h>

struct Struct_0205f9cc {
    char unknown_0_[6];
    unsigned char unknown_6_;
    char unknown_7_[9];
    struct Struct_0205f9cc* unknown_10_;   // 0x10
    struct Struct_0205f9cc* unknown_14_;  // 0x14
};

extern char data_02108844;

// USA: func_020643fc
extern "C" ARM void func_020643fc(void* arg0, struct Struct_0205f9cc* arg1) {
    struct Struct_0205f9cc* var0 = *(struct Struct_0205f9cc**)(&data_02108844 + 0x47c);
    struct Struct_0205f9cc* var1;
    if (var0 == NULL) {
        *(struct Struct_0205f9cc**)(&data_02108844 + 0x47c) = arg1;
        return;
    }
    while (var0 != NULL) {
        if (var0->unknown_6_ == arg1->unknown_6_) {
            while (var0->unknown_10_ != NULL) var0 = var0->unknown_10_;
            var0->unknown_10_ = arg1;
            return;
        }
        var1 = var0;
        var0 = var0->unknown_14_;
    }
    if (var0 == NULL) var1->unknown_14_ = arg1;
}
