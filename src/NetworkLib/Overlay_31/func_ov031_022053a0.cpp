#include <globaldefs.h>

extern "C" void func_ov031_02203164(int arg0);
extern "C" void func_ov031_02203270(void* arg0);
extern "C" void func_ov031_0220321c(void);
extern "C" void func_ov031_02203190(void);
extern "C" void func_ov031_02203288(int arg0);
extern "C" void func_ov031_0220603c(void);

struct Struct_ov031_022053a0 {
    unsigned char unknown_0_[0x68];
    int unknown_68_;
    unsigned char unknown_6c_[4];
    short unknown_70_;
    unsigned char unknown_72_[1];
    signed char unknown_73_;
};

struct Struct_ov031_022053a0_2 {
    unsigned char unknown_0_[4];
    Struct_ov031_022053a0* unknown_4_;
};

// USA: func_ov031_022053a0
extern "C" ARM int func_ov031_022053a0(Struct_ov031_022053a0_2* arg0) {
    Struct_ov031_022053a0* var0 = arg0->unknown_4_;
    func_ov031_02203164((int)var0);
    signed char var1 = var0->unknown_73_;
    int var2 = var0->unknown_68_;

    switch (var1) {
    case 0:
    case 4:
        func_ov031_02203270((void*)(var2 + 0x20));
        func_ov031_0220321c();
        break;
    case 1:
        func_ov031_0220321c();
        func_ov031_02203190();
        func_ov031_02203288((int)func_ov031_0220603c);
        break;
    case 2:
        func_ov031_02203190();
        break;
    default:
        break;
    }

    var0->unknown_70_ = 1;
    return 0;
}
