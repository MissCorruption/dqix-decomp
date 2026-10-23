#include <globaldefs.h>

// USA: func_ov003_0215ee68
extern "C" ARM int func_ov003_0215ee68(void* arg0) {
    unsigned char* var0 = (unsigned char*)arg0;
    var0[0x1e] = 1;
    var0[0x20] = (var0[0x20] != 0) ? 0 : 1;
    return 5;
}
