#include <globaldefs.h>

extern char data_02101640;

// USA: func_0202d688
extern "C" ARM void func_0202d688(int arg0) {
    *(int*)(&data_02101640 + 0x8) = arg0;
}
