#include <globaldefs.h>
#include "NitroSDK/LoadToVRAM.h"

struct Struct_ov031_02248e43 { char unknown_0_[25]; };
struct Struct_ov031_02248e2d { char unknown_0_[22]; };
extern const Struct_ov031_02248e43 data_ov031_02248e43;
extern const Struct_ov031_02248e2d data_ov031_02248e2d;
extern char data_ov031_0224b9f4[];
extern "C" void func_ov031_022234d8(void*, void (*)(const void*, unsigned int, unsigned int));
extern "C" void* func_ov031_02223478(const char*);
extern "C" void* func_ov031_0223b61c(void*, int, int);
extern "C" void func_ov031_02234ea8(void*);
extern "C" void func_ov031_02234f34();

struct Struct_ov031_0222b71c {
    int unknown_0_;
    void* unknown_4_;
    void* unknown_8_;
};
struct Struct_ov031_02290c8c_2 {
    int unknown_0_;
    Struct_ov031_0222b71c* unknown_4_;
};
extern Struct_ov031_02290c8c_2 data_ov031_02290c8c;

struct Struct_ov031_0222b71c_2 {
    unsigned short unknown_0_0_ : 2;
    unsigned short unknown_0_2_ : 14;
};
struct Struct_ov031_0222b71c_3 { Struct_ov031_0222b71c_2 unknown_0_[4]; };
#define MAIN_BG_0222b71c (*(volatile Struct_ov031_0222b71c_3*)0x04000008)
#define SUB_BG_0222b71c (*(volatile Struct_ov031_0222b71c_3*)0x04001008)

// USA: func_ov031_0222b71c
extern "C" ARM void func_ov031_0222b71c() {
    Struct_ov031_02248e43 var0 = data_ov031_02248e43;
    Struct_ov031_02248e2d var1 = data_ov031_02248e2d;
    func_ov031_022234d8(data_ov031_0224b9f4, LoadToMainBG3ScreenData);
    data_ov031_02290c8c.unknown_4_->unknown_4_ = func_ov031_0223b61c(func_ov031_02223478(var0.unknown_0_), 0, 4);
    func_ov031_02234ea8(data_ov031_02290c8c.unknown_4_->unknown_4_);
    func_ov031_02234f34();
    data_ov031_02290c8c.unknown_4_->unknown_8_ = func_ov031_0223b61c(func_ov031_02223478(var1.unknown_0_), 0, 4);
    SUB_BG_0222b71c.unknown_0_[0].unknown_0_0_ = 3;
    SUB_BG_0222b71c.unknown_0_[1].unknown_0_0_ = 3;
    MAIN_BG_0222b71c.unknown_0_[0].unknown_0_0_ = 3;
    MAIN_BG_0222b71c.unknown_0_[1].unknown_0_0_ = 2;
    MAIN_BG_0222b71c.unknown_0_[2].unknown_0_0_ = 3;
    MAIN_BG_0222b71c.unknown_0_[3].unknown_0_0_ = 2;
}
