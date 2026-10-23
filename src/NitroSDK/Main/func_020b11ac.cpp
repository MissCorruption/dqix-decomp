#include <globaldefs.h>

extern int data_020e9200[][4];

// USA: func_020b11ac
extern "C" ARM int func_020b11ac(unsigned char *arg0) {
    return data_020e9200[arg0[1]][arg0[0]];
}
