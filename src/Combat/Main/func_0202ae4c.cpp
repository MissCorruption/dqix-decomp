#include <globaldefs.h>
#include "std_library_functions.h"

#if defined(jpn)
#include "NitroSDK/Memory.h"
#define data_020ef7a0 data_020ef690
#endif

extern "C" void __clear(void* arg0, int arg1);
struct Struct_020fefec;
struct Struct_020feffc;
extern "C" ARM void func_0202baf4(struct Struct_020fefec* arg0, struct Struct_020feffc* arg1);
extern "C" ARM int func_020d2f28(char* arg0, const char* arg1, int arg2);

extern char data_020ef7a0[];
extern struct Struct_020fefec data_020fefec;

struct Struct_0202ae4c {
    char unknown_0_[0x3c];
    unsigned short unknown_3c_;
    char unknown_3e_[0xc];
    unsigned char unknown_4a_;
    char unknown_4b_[0x5];
    char unknown_50_[0x14];
    unsigned char unknown_64_;
};

// USA: func_0202ae4c
extern "C" ARM void func_0202ae4c(struct Struct_0202ae4c* arg0) {
    char var0[0x18];
#if !defined(jpn)
    __clear(var0, 0x15);
#endif
    if (arg0->unknown_3c_ != 0 && arg0->unknown_4a_ == 0x24) {
#if defined(jpn)
        VectorizedInvertedMemcpy(arg0->unknown_50_, var0, arg0->unknown_64_ << 1);
#else
        memcpy(var0, arg0->unknown_50_, arg0->unknown_64_);
#endif
    } else {
        func_020d2f28(var0, data_020ef7a0, 0x15);
    }
    func_0202baf4(&data_020fefec, (struct Struct_020feffc*)arg0);
}
