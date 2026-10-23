#include <globaldefs.h>
#if defined(jpn)
enum { Enum_0207fd44_44 = 0x20 };
#else
enum { Enum_0207fd44_44 = 0x2c };
#endif

extern "C" void func_0204b04c(void* arg0, int arg1);

struct Struct_0207fd44 { char unknown_0_[0x20]; };

struct Struct_0207fd44_2 {
    char unknown_0_[Enum_0207fd44_44];
    Struct_0207fd44* unknown_2c_;
    char unknown_30_[0x38 - 0x30];
    unsigned char unknown_38_;
};

// USA: func_0207fd44
extern "C" ARM void func_0207fd44(Struct_0207fd44_2* arg0) {
    unsigned char var0;
    Struct_0207fd44* var1 = arg0->unknown_2c_;
    unsigned char var2;
    if (var1 == NULL) return;
    var0 = arg0->unknown_38_;
    for (var2 = 0; var2 < var0; var2++) {
        func_0204b04c(var1, 0);
        var1++;
    }
}
