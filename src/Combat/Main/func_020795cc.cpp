#include <globaldefs.h>

// USA: func_020795cc
extern "C" ARM int func_020795cc(unsigned char* arg0) {
    int var0 = arg0[0x17d];
    if (var0 & 8) {
        return (unsigned char)(var0 >> 4) & 3;
    }
    return -1;
}
