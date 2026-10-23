#include <globaldefs.h>

extern "C" void func_0205ac40(void* arg0, void* arg1);

struct Struct_ov013_02187784 {
    char unknown_0_[0x14];
    int unknown_14_;
    int unknown_18_;
    char unknown_1c_[0x22 - 0x1c];
    unsigned char unknown_22_;
    char unknown_23_[0x25 - 0x23];
    unsigned char unknown_25_;
    unsigned char unknown_26_;
};

// USA: func_ov013_02187784
extern "C" ARM void func_ov013_02187784(void* arg0) {
    unsigned char* var0 = (unsigned char*)arg0;
    if (*(void**)(var0 + 0x48) == 0) return;
    if (var0[0x69] & 1) return;
    signed char var1 = *(signed char*)(var0 + 0x6a);
    if (var1 < 0) return;

    char* var2 = *(char**)(var0 + 0x4c);
    Struct_ov013_02187784* var3 = (Struct_ov013_02187784*)(var2 + var1 * 0x28);

    for (int var4 = 0; var4 < 10; var4++) {
        short* var5 = *(short**)(var0 + 0x50);
        short var6 = var5[var4];
        if (var6 >= 0) {
            short* var7 = *(short**)(var0 + 0x54);
            short var8 = var7[var4];
            if (var8 >= 0) {
                var3->unknown_14_ = var6 << 12;
                var3->unknown_18_ = var8 << 12;
                var3->unknown_22_ = var4 + 0x20;
                var3->unknown_26_ = 0;
                unsigned char* var9 = *(unsigned char**)(var0 + 0x58);
                var3->unknown_25_ = var9[var4];
                func_0205ac40(*(void**)(var0 + 0x48), var3);
            }
        }
    }
}
