#include <globaldefs.h>

struct Struct_ov031_0223ba20_2 {
    int unknown_0_;
    int unknown_4_;
};

struct Struct_ov031_0223ba20 {
    char unknown_0_[8];
    Struct_ov031_0223ba20_2* unknown_8_;
    unsigned char unknown_c_;
};

extern "C" void func_ov031_0223d8a0(void* arg0);
extern "C" void func_ov031_0223bf48(int arg0, void* arg1);
extern void* data_ov031_02290d28;

// USA: func_ov031_0223ba20
extern "C" ARM void func_ov031_0223ba20(void* arg0) {
    Struct_ov031_0223ba20* var0 = (Struct_ov031_0223ba20*)arg0;
    int var1 = 0;

    Struct_ov031_0223ba20_2* var2 = var0->unknown_8_;
    int var3 = 0;
    int var4 = var0->unknown_c_;
    if (var4 > 0) {
        do {
            var2->unknown_0_ = (var2->unknown_0_ & 0xc1fffcff) | 0x200;
            var3++;
            var2++;
        } while (var3 < var0->unknown_c_);
    }

    func_ov031_0223d8a0(arg0);

    void* var5 = data_ov031_02290d28;
    if ((unsigned int)arg0 >= (unsigned int)((char*)var5 + 0x228)) {
        var1 = 1;
    }
    int var6 = *(int*)((char*)var5 + var1 * 0x228 + 0x224);
    func_ov031_0223bf48(var6, arg0);
}
