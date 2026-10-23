#include <globaldefs.h>

extern const unsigned char data_020ee748[][5];

// USA: func_020dd11c
extern "C" ARM int func_020dd11c(unsigned int arg0, unsigned int arg1) {
    if (arg0 == 0 || arg0 >= 0xd) return 0;
    if (arg1 >= 5) return 0;
    return data_020ee748[arg0][arg1];
}
