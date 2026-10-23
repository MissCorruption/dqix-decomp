#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov006_0215f348_20 = 0xc };
#else
enum { Enum_ov006_0215f348_20 = 0x14 };
#endif

extern "C" void func_0208103c(void* arg0, int arg1, int arg2);
extern "C" void func_020813ec(void*, int);

struct Struct_ov006_0215b7e8_2 {
    char unknown_0_[Enum_ov006_0215f348_20];
    void* unknown_14_;
    char unknown_18_[0x360 - Enum_ov006_0215f348_20 - 4];
    short unknown_360_;
};

// USA: func_ov006_0215f348
extern "C" ARM void func_ov006_0215f348(struct Struct_ov006_0215b7e8_2* arg0) {
    short var0 = -1;
    switch (arg0->unknown_360_) {
    case 2:
        var0 = 4;
        break;
    case 3:
        var0 = 7;
        break;
    case 4:
        break;
    }
    short var1 = 5;
    for (unsigned char var2 = 0; var2 < 3; var2++) {
        func_0208103c(arg0->unknown_14_, var1, var0);
        var1 = (short)(var1 + 1);
        if (var0 >= 0) {
            var0 = (short)(var0 + 1);
        }
    }
    func_020813ec(arg0->unknown_14_, 3);
}
