#include <globaldefs.h>

struct Struct_0205d0e0_2 {
    char unknown_0_[0x98];
    int unknown_98_;
    void* unknown_9c_;
    char unknown_a0_[0x14];
    unsigned char unknown_b4_;
};
extern "C" void* func_0205d888(struct Struct_0205d0e0_2* arg0);

struct Struct_0205d6a0 {
    char unknown_0_[0x98];
    int unknown_98_;
    int unknown_9c_;
    char unknown_a0_[0xb3 - 0xa0];
    unsigned char unknown_b3_;
};
extern "C" void func_0205d6a0(struct Struct_0205d6a0* arg0, int arg1);

struct Struct_0205d0e0 {
    char unknown_0_[0xC4];
    unsigned char unknown_c4_;
    char unknown_c5_[0xE0 - 0xC5];
};
struct Struct_0205d81c {
    char unknown_0_[0x98];
    int unknown_98_;
    struct Struct_0205d0e0* unknown_9c_;
    char unknown_a0_[0xB3 - 0xA0];
    unsigned char unknown_b3_;
    unsigned char unknown_b4_;
};
extern "C" struct Struct_0205d0e0* func_0205d81c(struct Struct_0205d81c* arg0, int arg1);

extern unsigned char data_ov000_021834cc[8];
extern unsigned char data_ov000_021834cd[8];

// USA: func_ov000_0217629c
extern "C" ARM void func_ov000_0217629c(void* arg0) {
    if (*(void**)((char*)arg0 + 0x38) == 0) return;
    int var0 = 1;
    void* var1 = func_0205d888((struct Struct_0205d0e0_2*)*(void**)((char*)arg0 + 0x38));
    int var2;
    for (var2 = 0; var2 < 4; var2++) {
        if (data_ov000_021834cc[var2 << 1] == ((struct Struct_0205d0e0*)var1)->unknown_c4_) {
            var0 = 2;
            break;
        }
    }
    int var3;
    for (var3 = 0; var3 < var0; var3++) {
        func_0205d6a0((struct Struct_0205d6a0*)*(void**)((char*)arg0 + 0x38), 0);
    }
    var1 = func_0205d888((struct Struct_0205d0e0_2*)*(void**)((char*)arg0 + 0x38));
    if (var1 == 0) return;
    for (var2 = 0; var2 < 4; var2++) {
        if (data_ov000_021834cc[var2 << 1] == ((struct Struct_0205d0e0*)var1)->unknown_c4_) {
            int var4 = data_ov000_021834cd[var2 << 1];
            struct Struct_0205d0e0* var5 = func_0205d81c((struct Struct_0205d81c*)*(void**)((char*)arg0 + 0x38), var4);
            if (var5 != 0) {
                *(short*)((char*)var5 + 0xc2) = 0;
            }
            return;
        }
    }
}
