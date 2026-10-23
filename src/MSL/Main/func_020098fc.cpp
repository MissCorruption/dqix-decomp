#include <globaldefs.h>

extern "C" void func_0200961c(void* arg0, unsigned char arg1);

struct Struct_020098fc {
    unsigned char unknown_0_;
    char unknown_1_;
    unsigned short unknown_2_;
    unsigned char unknown_4_;
    unsigned char unknown_5_[0x20];
};

// USA: func_020098fc
extern "C" ARM void func_020098fc(Struct_020098fc* arg0, char* arg1, unsigned short arg2) {
    arg0->unknown_2_ = arg2;
    arg0->unknown_0_ = 0;
    int var0 = 0;
    while (var0 < 0x20 && *arg1 != 0) {
        arg0->unknown_5_[var0] = *arg1++ - 0x30;
        var0++;
    }
    arg0->unknown_4_ = var0;
    char var1 = *arg1;
    if (var1 == 0) return;
    if (var1 < 5) return;
    if (var1 > 5) goto callOther;
    {
        char var2 = arg1[1];
        arg1 += 1;
        if (var2 != 0) {
            do {
                if (var2 != 0x30) goto callOther;
                var2 = *++arg1;
            } while (var2 != 0);
        }
    }
    if ((arg0->unknown_5_[var0 - 1] & 1) == 0) return;
callOther:
    func_0200961c(arg0, arg0->unknown_4_);
}
