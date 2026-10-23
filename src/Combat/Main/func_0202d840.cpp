#include <globaldefs.h>

extern char data_021015a0;
extern "C" void func_0202c848(int);
extern "C" int func_0202d788(unsigned short);

struct Struct_0202d840 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned short unknown_4_[2];
    unsigned short unknown_8_;
    unsigned short unknown_a_;
};

// USA: func_0202d840
extern "C" ARM void func_0202d840(struct Struct_0202d840* arg0) {
    if (arg0->unknown_2_ != 0) {
        func_0202c848(arg0->unknown_2_);
        *(int*)(&data_021015a0 + 0x10) = 9;
        return;
    }
    unsigned short var0 = *(unsigned short*)(&data_021015a0 + 0x6);
    unsigned short var1 = arg0->unknown_a_;
    unsigned short var2 = arg0->unknown_8_;
    if (var0 > var1) {
        *(unsigned short*)(&data_021015a0 + 0x6) = var1;
        *(unsigned short*)(&data_021015a0 + 0xc) = 1 << (var2 - 1);
    } else if (var0 == var1) {
        unsigned short var3 = *(unsigned short*)(&data_021015a0 + 0xc);
        *(unsigned short*)(&data_021015a0 + 0xc) = var3 | (1 << (var2 - 1));
    }
    unsigned short var4 = (unsigned short)(var2 + 1);
    int var5 = func_0202d788(var4);
    if (var5 == 0x18) {
        *(int*)(&data_021015a0 + 0x10) = 7;
        return;
    }
    if (var5 != 2) {
        *(int*)(&data_021015a0 + 0x10) = 9;
    }
}
