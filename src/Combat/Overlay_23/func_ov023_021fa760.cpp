#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_ov023_021fa760_2 {
    char unknown_0_[4];
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned short unknown_8_;
    unsigned short unknown_a_;
    char unknown_c_[4];
    int unknown_10_;
    char unknown_14_[0xc];
    int unknown_20_;
    char unknown_24_[0x50];
    unsigned char unknown_74_;
    char unknown_75_[3];
    char unknown_78_[0x10];
};

extern "C" void func_ov023_021f6ed8(void* arg0);
extern "C" void func_ov023_021faa60(void* arg0, int arg1);
extern "C" void func_0205a444(char* arg0);

// USA: func_ov023_021fa760
#if defined(jpn)
struct Struct_ov023_021fa760 {
    char unknown_0_[4];
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned short unknown_8_;
    unsigned short unknown_a_;
    char unknown_c_[4];
    int unknown_10_;
    char unknown_14_[0xc];
    char unknown_20_[0x50];
    unsigned char unknown_70_;
    char unknown_71_[3];
    char unknown_74_[0x10];
};

extern "C" ARM int func_ov023_021fa760(struct Struct_ov023_021fa760* arg0, int arg1, int arg2, int arg3, int arg4, int arg5) {
    func_ov023_021f6ed8(arg0);
    arg0->unknown_4_ = 0xa;
    arg0->unknown_6_ = arg2;
    arg0->unknown_8_ = arg3;
    arg0->unknown_a_ = 0;
    arg0->unknown_10_ = arg4;
    func_0205a444((char*)arg0 + 0x20);
    memset(arg0->unknown_74_, 0, 0x10);
    arg0->unknown_70_ = arg5;
    func_ov023_021faa60(arg0, arg1);
    return 1;
}
#else
extern "C" ARM int func_ov023_021fa760(struct Struct_ov023_021fa760_2* arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6) {
    func_ov023_021f6ed8(arg0);
    arg0->unknown_4_ = 0xa;
    arg0->unknown_6_ = arg2;
    arg0->unknown_8_ = arg3;
    arg0->unknown_a_ = 0;
    arg0->unknown_20_ = arg4;
    arg0->unknown_10_ = arg5;
    func_0205a444((char*)arg0 + 0x24);
    memset(arg0->unknown_78_, 0, 0x10);
    arg0->unknown_74_ = arg6;
    func_ov023_021faa60(arg0, arg1);
    return 1;
}
#endif
