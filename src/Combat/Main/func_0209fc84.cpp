#include <globaldefs.h>

struct Struct_0209d38c {
    char unknown_0_[4];
    char* unknown_4_;
    char unknown_8_[0x90];
    int unknown_98_;
};

// USA: func_0209fc84
extern "C" ARM int func_0209fc84(struct Struct_0209d38c* arg0, int arg1) {
    return (arg1 == 0) ? *(unsigned char*)(arg0->unknown_4_ + 0x8e07) : arg0->unknown_98_;
}
