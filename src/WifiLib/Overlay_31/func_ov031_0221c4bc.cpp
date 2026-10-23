#include <globaldefs.h>

struct Struct_ov031_0221c4bc {
    unsigned int unknown_0_;
    unsigned short unknown_4_;
    unsigned char unknown_6_[256];
    short unknown_106_;
    short unknown_108_;
    short unknown_10a_;
    short unknown_10c_;
    short unknown_10e_;
    unsigned char unknown_110_[6];
    unsigned char unknown_116_;
};
struct Struct_ov031_0224e6e0_2 {
    unsigned char unknown_0_[0x14];
    void* unknown_14_;
};
typedef void (*Type_ov031_0221c49c)(int);
typedef void (*Type_ov031_0221c49c_2)(int);
extern Type_ov031_0221c49c data_ov031_0224f4c0;
extern Type_ov031_0221c49c_2 data_ov031_0224f4cc;
extern Struct_ov031_0224e6e0_2 data_ov031_0224e6e0;
extern int data_ov031_0224b070;
extern "C" void func_ov031_0221c49c(int);
extern "C" void func_ov031_0221c4ac(int);
extern "C" int func_ov031_0221d384(int);
extern "C" int func_ov031_0221c5ac(Struct_ov031_0221c4bc*);
extern "C" void func_ov031_0221cfdc(void);
extern "C" int func_ov031_0221e5c8(void*);

static inline void* inline_ov031_0221c4bc(int arg0) {
    typedef void* (*Type_ov031_0221c49c_3)(int);
    Type_ov031_0221c49c_3 var0 = (Type_ov031_0221c49c_3)func_ov031_0221c49c;
    return var0(arg0);
}

// USA: func_ov031_0221c4bc
extern "C" THUMB int func_ov031_0221c4bc(Struct_ov031_0221c4bc* arg0) {
    int var0;
    if (arg0->unknown_106_ == 0 || arg0->unknown_106_ < -1 ||
        arg0->unknown_108_ < -1 || arg0->unknown_10a_ == 0 ||
        arg0->unknown_10a_ < -1 || arg0->unknown_10c_ < -1 ||
        arg0->unknown_10e_ < -1 || arg0->unknown_4_ == 0 ||
        arg0->unknown_4_ > 256 || arg0->unknown_6_[arg0->unknown_4_ - 1] != 0)
        var0 = -1;
    else
        var0 = 0;
    if (data_ov031_0224f4c0 == 0 || data_ov031_0224f4cc == 0)
        var0 = -1;
    if (var0 == -1) {
        arg0->unknown_116_ = 15;
        func_ov031_0221cfdc();
        return -1;
    }
    data_ov031_0224e6e0.unknown_14_ = inline_ov031_0221c4bc(0x5f8);
    if (data_ov031_0224e6e0.unknown_14_ == 0) {
        arg0->unknown_116_ = 15;
        func_ov031_0221cfdc();
        return -1;
    }
    func_ov031_0221d384(-1);
    int var1 = func_ov031_0221c5ac(arg0);
    func_ov031_0221c4ac((int)data_ov031_0224e6e0.unknown_14_);
    func_ov031_0221cfdc();
    if (data_ov031_0224b070 != -1)
        func_ov031_0221e5c8((void*)data_ov031_0224b070);
    return var1;
}
