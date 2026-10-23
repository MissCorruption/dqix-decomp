#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov005_02156658_15800 = 0x3d30 };
#else
enum { Enum_ov005_02156658_15800 = 0x3db8 };
#endif

struct Struct_ov005_02153954 {
    char unknown_0_[Enum_ov005_02156658_15800];
    unsigned char unknown_3db8_;
    char unknown_3db9_[3];
    unsigned char unknown_3dbc_;
    char unknown_3dbd_[15];
    unsigned int unknown_3dcc_;
};

extern "C" int func_ov005_02158560(Struct_ov005_02153954*, unsigned char, int);
extern "C" void func_ov005_0215792c(Struct_ov005_02153954*, int);
extern "C" void func_ov005_021579ec(Struct_ov005_02153954*, unsigned char, unsigned char);
extern "C" int func_ov005_021585fc(Struct_ov005_02153954*, int);
extern "C" void func_ov005_021555c0(Struct_ov005_02153954*);

// USA: func_ov005_02156658
extern "C" ARM void func_ov005_02156658(Struct_ov005_02153954* arg0, int arg1, int arg2) {
    int var0 = 0;
    if ((arg0->unknown_3dcc_ & 4) && arg2 > 1 && arg2 < 19 && arg1 > 129 && arg1 < 255) {
        unsigned char var1 = arg0->unknown_3dbc_;
        int var2 = 113;
        for (int var3 = 0; var3 < 8; ++var3) {
            var2 += 16;
            if (var3 == 7) --var2;
            int var4 = var2 + 16;
            if (arg1 >= var2 && arg1 < var4) { var1 = var3; break; }
        }
        arg0->unknown_3dcc_ |= 0x100;
        var0 = func_ov005_02158560(arg0, var1, 0);
        func_ov005_0215792c(arg0, 2);
        func_ov005_021579ec(arg0, arg0->unknown_3db8_, var1);
    }
    if ((arg0->unknown_3dcc_ & 8) && arg2 > 157 && arg2 < 174) {
        int var5 = 0;
        if (arg1 > 137 && arg1 < 153) var5 = -1;
        if (arg1 > 230 && arg1 < 246) var5 = 1;
        if (var5 == 0) return;
        var0 = func_ov005_021585fc(arg0, var5);
        if (var5 < 0) arg0->unknown_3dcc_ |= 0x20000;
        else arg0->unknown_3dcc_ |= 0x40000;
    }
    if (var0) func_ov005_021555c0(arg0);
}
