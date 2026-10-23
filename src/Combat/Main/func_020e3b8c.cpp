#include <globaldefs.h>

#if defined(jpn)
enum { Enum_020e3b8c_15364 = 0x39e4, Enum_020e3b8c_14084 = 0x34f4 };
#else
enum { Enum_020e3b8c_15364 = 0x3c04, Enum_020e3b8c_14084 = 0x3704 };
#endif


struct Struct_02046b38_2 {
    char unknown_0_[4];
    struct Struct_02046b38_2* unknown_4_;
};
struct Struct_02046b38 {
    struct Struct_02046b38_2* unknown_0_;
};
extern "C" int func_02046b38(struct Struct_02046b38* arg0, struct Struct_02046b38_2* arg1);

struct Struct_020e3b8c {
    char unknown_0_[0x14];
    int unknown_14_[2];
};
extern "C" void func_020e3ed8(struct Struct_020e3b8c* arg0);

struct Struct_020e3b8c_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[7];
    unsigned char unknown_8_;
    unsigned char unknown_9_;
    unsigned short unknown_a_;
    int unknown_c_;
    int unknown_10_;
    int unknown_14_[2];
    int unknown_1c_;
    int unknown_20_;
    unsigned char unknown_24_;
};
extern "C" void func_020e3c34(struct Struct_020e3b8c_2* arg0);

struct Struct_0201bdac {
    char unknown_0_[2];
    unsigned char unknown_2_;
    char unknown_3_;
    struct Struct_0201bdac* unknown_4_;
};
struct Struct_0201bdac_2 {
    struct Struct_0201bdac* unknown_0_;
    struct Struct_0201bdac* unknown_4_;
};
extern "C" void func_020469b4(struct Struct_0201bdac_2* arg0, struct Struct_0201bdac* arg1);

extern "C" void func_02046a8c(void* arg0, void* arg1);

// USA: func_020e3b8c
extern "C" ARM void func_020e3b8c(char* arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, unsigned char arg7)
{
    struct Struct_020e3b8c_2* var0 = (struct Struct_020e3b8c_2*)(arg0 + Enum_020e3b8c_15364 + arg1 * (int)sizeof(struct Struct_020e3b8c_2));

    if (func_02046b38(*(struct Struct_02046b38**)(arg0 + Enum_020e3b8c_14084), (struct Struct_02046b38_2*)var0)) {
        func_020e3ed8((struct Struct_020e3b8c*)var0);
        func_02046a8c(*(void**)(arg0 + Enum_020e3b8c_14084), var0);
    }

    func_020e3c34(var0);

    var0->unknown_9_ = (unsigned char)arg1;
    var0->unknown_a_ = (unsigned short)arg2;
    var0->unknown_c_ = arg3;
    var0->unknown_8_ = (arg4 != 0) ? 1 : 0;
    var0->unknown_20_ = arg5;
    var0->unknown_10_ = arg6;
    var0->unknown_24_ = arg7;

    func_020469b4(*(struct Struct_0201bdac_2**)(arg0 + Enum_020e3b8c_14084), (struct Struct_0201bdac*)var0);
}
