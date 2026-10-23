#include <globaldefs.h>

extern "C" void func_02098364(void* arg0);

struct Struct_020982b4_2 {
    unsigned char unknown_0_[0xe8];
};

struct Struct_020982b4 {
    unsigned char unknown_0_[0xb34];
    int unknown_b34_;
    int unknown_b38_;
    int unknown_b3c_;
    unsigned char unknown_b40_;
    unsigned char unknown_b41_;
    unsigned char unknown_b42_;
    unsigned char unknown_b43_;
    int unknown_b44_;
    int unknown_b48_;
    int unknown_b4c_;
    int unknown_b50_;
    int unknown_b54_;
    int unknown_b58_;
    int unknown_b5c_;
    unsigned char unknown_b60_;
    unsigned char unknown_b61_;
    unsigned char unknown_b62_;
};

// USA: func_020982b4
extern "C" ARM void func_020982b4(Struct_020982b4_2* arg0) {
    Struct_020982b4* var0 = (Struct_020982b4*)((char*)arg0 + 0x1000);
    int var1 = 0;
    var0->unknown_b34_ = var1;
    var0->unknown_b38_ = var1;
    var0->unknown_b3c_ = 1;
    var0->unknown_b40_ = 1;
    var0->unknown_b41_ = 1;
    var0->unknown_b42_ = var1;
    var0->unknown_b44_ = var1;
    var0->unknown_b48_ = var1;
    var0->unknown_b4c_ = var1;
    var0->unknown_b50_ = var1;
    var0->unknown_b54_ = var1;
    var0->unknown_b60_ = 1;
    var0->unknown_b61_ = var1;
    var0->unknown_b62_ = var1;
    *(unsigned short*)((char*)arg0 + 0x1b64) = var1;
    var0->unknown_b58_ = var1;
    Struct_020982b4_2* var2 = arg0;
    var0->unknown_b5c_ = var1;
    for (int var3 = 0; var3 < 30; var3++, var2++) {
        func_02098364(var2);
    }
    for (int var4 = 0; var4 < 3; var4++) {
        *(int*)((char*)arg0 + var4 * 4 + 0x1b68) = -1;
    }
    *(int*)((char*)arg0 + 0x1b74) = 0;
}
