#include <globaldefs.h>

#if defined(jpn)
#define func_020b2a6c func_020b4538
#endif

struct Struct_020b2a6c {
    unsigned char unknown_0_[0x17];
    unsigned char unknown_17_;
    unsigned char unknown_18_;
};

// USA: func_020b2a6c
extern "C" ARM unsigned int func_020b2a6c(unsigned char* arg0, struct Struct_020b2a6c* arg1) {
    unsigned char var0;
    if (arg0 == NULL || arg1 == NULL) {
        return 0;
    }
    var0 = arg0[0];
    switch (var0) {
    case 0x4d:
        return ((arg1->unknown_18_ << 1) + 0x1c) & ~3;
    case 0x4a:
    case 0x56:
        return ((arg1->unknown_17_ << 1) + 0x1c) & ~3;
    }
    return 0;
}
