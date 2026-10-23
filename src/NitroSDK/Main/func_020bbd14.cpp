#include <globaldefs.h>

extern "C" void func_020d21c0(void);
extern "C" void func_020bbdd8(void);
extern "C" void func_020bbe10(void);
extern "C" void func_020bbf18(void);
extern "C" void func_020bce9c(void);
extern "C" void func_020bc23c(void);

struct Struct_0210cfd0 { char unknown_0_[8]; struct Struct_0210cfd0* unknown_8_; };
extern "C" void func_020cef34(struct Struct_0210cfd0* arg0);

struct Struct_0210cfdc { char unknown_0_[8]; struct Struct_0210cfdc* unknown_8_; };
extern "C" void func_020cef4c(struct Struct_0210cfdc* arg0);

extern struct Struct_0210cfd0 data_0210cfd0;
extern struct Struct_0210cfdc data_0210cfdc;

struct Struct_0210cfc0 {
    char unknown_0_;
    char unknown_1_[3];
    int unknown_4_;
    char unknown_8_[0xc - 8];
    int unknown_c_;
    void (*unknown_10_)(void);
    int unknown_14_;
    char unknown_18_[0x1c - 0x18];
    void (*unknown_1c_)(void);
    int unknown_20_;
};
extern struct Struct_0210cfc0 data_0210cfc0;

// USA: func_020bbd14
extern "C" ARM void func_020bbd14(void) {
    if (data_0210cfc0.unknown_c_ != 0) return;
    data_0210cfc0.unknown_c_ = 1;
    func_020d21c0();
    data_0210cfc0.unknown_10_ = func_020bbdd8;
    data_0210cfc0.unknown_14_ = 0;
    data_0210cfc0.unknown_1c_ = func_020bbe10;
    data_0210cfc0.unknown_20_ = 0;
    func_020cef34(&data_0210cfd0);
    func_020cef4c(&data_0210cfdc);
    func_020bbf18();
    func_020bce9c();
    func_020bc23c();
    data_0210cfc0.unknown_0_ = -1;
    data_0210cfc0.unknown_4_ = 1;
}
