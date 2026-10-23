#include <globaldefs.h>
extern "C" void func_0204c804(void*);

struct Struct_0207fe44_2 { char unknown_0_[0xe0]; };

struct Struct_0207fe44 {
#if defined(jpn)
    char unknown_0_[0x24];
#else
    char unknown1_0_[0x30];
#endif
    Struct_0207fe44_2* unknown_30_;
    char unknown_34_[0x39 - 0x34];
    unsigned char unknown_39_;
};

// USA: func_0207fe44
extern "C" ARM void func_0207fe44(Struct_0207fe44* arg0) {
    unsigned char var0;
    Struct_0207fe44_2* var1 = arg0->unknown_30_;
    unsigned char var2;
    if (var1 == NULL) return;
    var0 = arg0->unknown_39_;
    for (var2 = 0; var2 < var0; var2++) {
        func_0204c804((void*)(var1));
        var1++;
    }
}
