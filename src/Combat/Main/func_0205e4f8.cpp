#include <globaldefs.h>

extern "C" void func_020d8654(void);
extern "C" void* func_0202ae18(void);
extern "C" void* func_0202c19c(void* arg0);
extern "C" void func_020d8694(void);

struct Struct_0205e4f8 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[0x18 - 1];
    struct Struct_0205e4f8* unknown_18_;
};

struct Struct_0205e4f8_2 {
    unsigned char unknown_0_[0x10];
    unsigned char unknown_10_;
    unsigned char unknown_11_[0x14 - 0x11];
};

// USA: func_0205e4f8
extern "C" ARM int func_0205e4f8(void* arg0, int arg1) {
    int var0 = 0;
    func_020d8654();
    struct Struct_0205e4f8* var1 = *(struct Struct_0205e4f8**)((char*)arg0 + 0x150c);
    while (var1 != NULL) {
        if (var1->unknown_0_ == arg1) {
            var0 = 1;
            break;
        }
        var1 = var1->unknown_18_;
    }
    if (!var0) {
        struct Struct_0205e4f8_2* var2 = (struct Struct_0205e4f8_2*)func_0202c19c(func_0202ae18());
        for (int var3 = 0; var3 < 5; var3++) {
            if (var2[var3].unknown_10_ == arg1) {
                var0 = 1;
                break;
            }
        }
    }
    func_020d8694();
    return var0;
}
