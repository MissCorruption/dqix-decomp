#include <globaldefs.h>


extern "C" int func_020ca4b4(void*, void*, int);

struct Struct_ov016_0219d1c0_5 {
    void* unknown_0_;
    unsigned char unknown_4_[0x8];
    unsigned int unknown_c_;
    void* unknown_10_;
};

extern struct Struct_ov016_0219d1c0_5 data_ov016_0219d1c0;
extern unsigned char data_ov016_0219cbe0[1];

// USA: func_ov016_0218fdc0
extern "C" ARM void* func_ov016_0218fdc0(void) {
    if (data_ov016_0219d1c0.unknown_0_ != NULL)
        goto done;
    if (data_ov016_0219d1c0.unknown_c_ < 0x300)
        goto fallback;
    data_ov016_0219d1c0.unknown_0_ = data_ov016_0219d1c0.unknown_10_;
    func_020ca4b4(data_ov016_0219cbe0, data_ov016_0219d1c0.unknown_10_, 0x300);
    data_ov016_0219d1c0.unknown_10_ = (unsigned char*)data_ov016_0219d1c0.unknown_10_ + 0x300;
    data_ov016_0219d1c0.unknown_c_ -= 0x300;
    goto done;
fallback:
    return data_ov016_0219cbe0;
done:
    return data_ov016_0219d1c0.unknown_0_;
}
