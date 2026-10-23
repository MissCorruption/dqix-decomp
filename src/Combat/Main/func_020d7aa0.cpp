#include <globaldefs.h>

extern "C" void func_02094ab0(int arg0);
extern "C" void func_ov017_0218b5c0(int arg0, int arg1);
extern "C" void func_ov017_0218b5f8(int arg0);

extern "C" int func_02094a00(void);
extern "C" int func_020421a0(void);
extern "C" void func_02043204(char* arg0);

struct Struct_0214e34c;
extern "C" void func_020d7a5c(struct Struct_0214e34c* arg0);

struct Struct_020d7aa0 {
    unsigned char unknown_0_0_ : 6;
    unsigned char unknown_0_6_ : 1;
    unsigned char unknown_0_7_ : 1;
};

struct Struct_020d7aa0_2 {
    #if defined(jpn)
    unsigned char unknown_0_[0xf0];
#else
    unsigned char unknown1_0_[0x150];
#endif
    struct Struct_020d7aa0 unknown_150_;
};

// USA: func_020d7aa0
extern "C" ARM void func_020d7aa0(struct Struct_020d7aa0_2* arg0) {
    int var0 = func_02094a00();
    if (arg0->unknown_150_.unknown_0_7_) {
        func_02094ab0(var0);
    }
    if (arg0->unknown_150_.unknown_0_6_) {
        func_02043204((char*)func_020421a0());
        arg0->unknown_150_.unknown_0_6_ = 0;
    }
    func_ov017_0218b5c0(1, -1);
    func_ov017_0218b5f8(-1);
    func_020d7a5c((struct Struct_0214e34c*)arg0);
}
