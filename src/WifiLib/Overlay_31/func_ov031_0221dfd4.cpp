#include <globaldefs.h>

struct Struct_ov031_0221dfd4 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned char unknown_4_[1];
};
extern const unsigned char data_ov031_0224f440[8];
extern "C" int func_ov031_0221e0e8(const void*, void*, int, unsigned char*, unsigned short*, const void*, int);
extern "C" unsigned short func_ov031_0221e5f8(unsigned short);
extern "C" void func_ov031_0221e51c(void*, const void*, unsigned int);

// USA: func_ov031_0221dfd4
extern "C" THUMB void func_ov031_0221dfd4(int arg0, Struct_ov031_0221dfd4* arg1, const void* arg2, short* arg3, unsigned short* arg4, unsigned char* arg5)
{
    if (arg0 == 1) {
        *arg4 = 1;
        func_ov031_0221e0e8(arg2, arg1->unknown_4_, *arg3, arg5, &arg1->unknown_2_, data_ov031_0224f440, 8);
        arg1->unknown_0_ = func_ov031_0221e5f8(*arg3);
        *arg3 += 4;
    } else {
        func_ov031_0221e51c(arg1, arg2, *arg3);
    }
}
