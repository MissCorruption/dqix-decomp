#include <globaldefs.h>

extern "C" void func_ov031_02203164(int v);
extern "C" void func_ov031_02203270(void* obj);
extern "C" void func_ov031_0220321c(void);
extern "C" void func_ov031_02203190(void);
extern "C" void func_ov031_02203288(int value);
extern "C" void func_ov031_0220603c(void);

struct Inner022053a0 {
    unsigned char pad0[0x68];
    int field68;
    unsigned char pad1[4];
    short field70;
    unsigned char pad2[1];
    signed char field73;
};

struct Outer022053a0 {
    unsigned char pad0[4];
    Inner022053a0* field4;
};

// USA: func_ov031_022053a0
extern "C" ARM int func_ov031_022053a0(Outer022053a0* param) {
    Inner022053a0* obj = param->field4;
    func_ov031_02203164((int)obj);
    signed char selector = obj->field73;
    int extra = obj->field68;

    switch (selector) {
    case 0:
    case 4:
        func_ov031_02203270((void*)(extra + 0x20));
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

    obj->field70 = 1;
    return 0;
}
