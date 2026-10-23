#include <globaldefs.h>

extern int data_020f0218[][4];

// USA: func_0204a5f8
extern "C" ARM int func_0204a5f8(int a, int b) {
    return data_020f0218[a][b];
}
