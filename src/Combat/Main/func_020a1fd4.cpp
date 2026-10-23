#include <globaldefs.h>

extern unsigned char data_02109da4;
extern unsigned char data_02109da6;

// USA: func_020a1fd4
extern "C" ARM void func_020a1fd4(unsigned char arg0) {
    const unsigned char* var0 = &data_02109da4;
    if (var0[1] != 0) {
        (&data_02109da6)[(&data_02109da4)[1] - 1] = arg0;
    }
}
