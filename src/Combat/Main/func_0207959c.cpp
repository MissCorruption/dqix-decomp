#include <globaldefs.h>

struct Struct_0207959c {
    unsigned char unknown_0_[0x17d];
    unsigned char unknown_17d_;
};

// USA: func_0207959c
extern "C" ARM int func_0207959c(struct Struct_0207959c* arg0, int arg1) {
    unsigned char var0 = arg0->unknown_17d_;
    if (var0 & 8) {
        return ((unsigned char)(var0 >> 4) & 3) == arg1;
    }
    return 0;
}
