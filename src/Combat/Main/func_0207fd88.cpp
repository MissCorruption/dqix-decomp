#include <globaldefs.h>

extern "C" void func_0204b088(void* arg0, int arg1);

struct Struct_0207fd88_2 { char unknown_0_[0x20]; };

struct Struct_0207fd88 {
    #if defined(jpn)
    char unknown_0_[0x20];
#else
    char unknown1_0_[0x2c];
#endif
    Struct_0207fd88_2* unknown_2c_;
    char unknown_30_[0x38 - 0x30];
    unsigned char unknown_38_;
};

// USA: func_0207fd88
extern "C" ARM void func_0207fd88(Struct_0207fd88* arg0) {
    unsigned char var0;
    Struct_0207fd88_2* var1 = arg0->unknown_2c_;
    unsigned char var2;
    if (var1 == NULL) return;
    var0 = arg0->unknown_38_;
    for (var2 = 0; var2 < var0; var2++) {
        func_0204b088(var1, 0);
        var1++;
    }
}
