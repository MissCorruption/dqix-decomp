#include <globaldefs.h>

typedef void (*Type_0204b088)(void*, int, unsigned int);
extern unsigned int data_020e7b98[][4];
extern Type_0204b088 data_020f0218[][4];
struct Struct_0204b088 {
    char unknown_0_[0x14];
    void* unknown_14_;
    unsigned int unknown_18_;
    unsigned char unknown_1c_0_ : 4;
    unsigned char unknown_1c_4_ : 4;
    char unknown_1d_[2];
    unsigned char unknown_1f_;
};

// USA: func_0204b088
extern "C" ARM void func_0204b088(Struct_0204b088* arg0, void* arg1) {
    if (!arg1) arg1 = arg0->unknown_14_;
    if (!arg1) return;
    unsigned int var0 = arg0->unknown_1c_0_;
    unsigned int var1 = arg0->unknown_1c_4_;
    unsigned int var2 = arg0->unknown_1f_;
    unsigned int var3 = arg0->unknown_18_;
    unsigned int var4 = data_020e7b98[var2][var3];
    Type_0204b088 var5 = data_020f0218[var0][var1];
    arg0 = (Struct_0204b088*)arg1;
    var5(arg0, 0, var4);
}
