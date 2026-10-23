#include <globaldefs.h>

#pragma define_section initcode ".init" RX

struct Struct_020401e4;
extern "C" struct Struct_020401e4* func_0203ef60(struct Struct_020401e4* arg0);

struct Struct_020efd8c {
    float unknown_0_;
    float unknown_4_;
    float unknown_8_;
    int unknown_c_;
    int unknown_10_;
    float unknown_14_;
};

struct Struct_021075d8 {
    float unknown_0_;
    int unknown_4_;
    float unknown_8_;
    float unknown_c_;
    int unknown_10_;
    float unknown_14_;
    float unknown_18_;
};

extern struct Struct_020efd8c data_020efd8c;
extern struct Struct_021075d8 data_021075d8;
extern struct Struct_020401e4 data_021075f4;

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020e5c58
extern "C" __declspec(initcode) ARM void __sinit_020e5c58(void) {
    data_021075d8.unknown_8_ = data_020efd8c.unknown_0_ + data_020efd8c.unknown_4_ + data_020efd8c.unknown_8_ + data_020efd8c.unknown_14_;
    data_021075d8.unknown_0_ = data_021075d8.unknown_c_ + data_020efd8c.unknown_0_;
    float var0 = data_021075d8.unknown_0_ + data_020efd8c.unknown_4_;
    float var1 = data_020efd8c.unknown_8_;
    data_021075d8.unknown_18_ = var0;
    data_021075d8.unknown_14_ = var0 + var1;
    func_0203ef60(&data_021075f4);
}
