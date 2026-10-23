#include <globaldefs.h>
#include "NitroSDK/OverlayResponse.h"

struct Struct_ov031_0221d6a8_2 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned char unknown_4_[1];
};

struct Struct_ov031_0221d6a8 {
    Struct_ov031_0221d3b0 unknown_0_;
    Struct_ov031_0221d6a8_2 unknown_18_;
};

extern "C" void func_ov031_0221e51c(void*, const void*, unsigned int);
extern "C" int func_ov031_0221e650(const char*);
extern "C" int func_ov031_0221e354(const void*, int, const void*, int);
extern "C" void func_ov031_0221d060(int);
extern "C" int func_ov031_0221d79c(int, const char*);
extern "C" void* func_ov031_0221c49c(int);
extern "C" int func_ov031_0221e164(const void*, void*, int, int, const void*, const void*, int);
extern "C" void func_ov031_0221c4ac(int);
extern "C" int func_ov031_0221d06c();
extern "C" unsigned short func_ov031_0221e5f8(unsigned short);
extern char data_ov031_0224b0dc[8];
extern char data_ov031_0224f440[8];

// USA: func_ov031_0221d6a8
extern "C" THUMB int func_ov031_0221d6a8(Struct_ov031_0221d6a8* arg0) {
    Struct_ov031_0221d6a8_2* var0 = &arg0->unknown_18_;
    char var1[8];
    func_ov031_0221e51c(var1, &arg0->unknown_0_.unknown_10_, 8);
    if (func_ov031_0221e354(var1, 8, data_ov031_0224b0dc,
                           func_ov031_0221e650(data_ov031_0224b0dc)) == -1) {
        func_ov031_0221d060(2);
        return -100;
    }
    int var2 = func_ov031_0221d79c(func_ov031_0221e638(arg0->unknown_0_.unknown_6_), var1);
    if (var2 != 0) return var2;
    if (func_ov031_0221e638(arg0->unknown_0_.unknown_6_) == 0x1000)
        func_ov031_0221e51c(data_ov031_0224f440, var1, 8);
    if ((func_ov031_0221e638(arg0->unknown_0_.unknown_c_) & 15) == 0)
        return 0;
    int var3 = func_ov031_0221e638(var0->unknown_0_);
    unsigned char* var4 = static_cast<unsigned char*>(func_ov031_0221c49c(var3));
    if (var4 == 0) {
        func_ov031_0221d060(2);
        return 100;
    }
    if (func_ov031_0221e164(var0->unknown_4_, var4, var3, arg0->unknown_0_.unknown_e_,
                          &var0->unknown_2_, data_ov031_0224f440, 8) < 0) {
        func_ov031_0221c4ac((int)var4);
        if (func_ov031_0221d06c() == 2)
            return 100;
        return 200;
    }
    func_ov031_0221e51c(var0, var4, var3);
    arg0->unknown_0_.unknown_a_ = func_ov031_0221e5f8((unsigned short)var3);
    func_ov031_0221c4ac((int)var4);
    return 0;
}
