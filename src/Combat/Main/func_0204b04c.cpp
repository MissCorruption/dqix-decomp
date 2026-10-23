#include <globaldefs.h>

void CleanInvalidateCacheRange(const void* addr, unsigned int size);

extern unsigned int data_020e7b98[][4];

struct Struct_0204b04c {
    char unknown_0_[0x14];
    void* unknown_14_;
    unsigned int unknown_18_;
    char unknown_1c_[3];
    unsigned char unknown_1f_;
};

static inline unsigned int inline_0204b04c(unsigned int arg0, unsigned int arg1) {
    return data_020e7b98[arg0][arg1];
}

// USA: func_0204b04c
extern "C" ARM void func_0204b04c(Struct_0204b04c* arg0, void* arg1) {
    if (arg1 == NULL) arg1 = arg0->unknown_14_;
    if (arg1 == NULL) return;
    CleanInvalidateCacheRange(arg1, inline_0204b04c(arg0->unknown_1f_, arg0->unknown_18_));
}