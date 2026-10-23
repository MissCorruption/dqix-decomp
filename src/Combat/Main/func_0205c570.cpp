#include <globaldefs.h>

struct Struct_0205bd04;
extern "C" int func_0205bd04(struct Struct_0205bd04*);
struct Struct_0205bb84;
extern "C" int func_0205bb84(struct Struct_0205bb84*);

struct Struct_0205c570 {
    char unknown_0_[0x50];
    unsigned char unknown_50_;
    char unknown_51_[0x94 - 0x51];
    unsigned char unknown_94_;
    unsigned char unknown_95_;
};

// USA: func_0205c570
extern "C" ARM int func_0205c570(struct Struct_0205c570* arg0) {
    int var0 = -1;
    if (arg0->unknown_94_ != 0 && arg0->unknown_50_ != 0) {
        var0 = func_0205bd04((struct Struct_0205bd04*)((char*)arg0 + 0x4));
    }
    if (arg0->unknown_95_ == 0) {
        return var0;
    }
    return func_0205bb84((struct Struct_0205bb84*)((char*)arg0 + 0x54));
}
