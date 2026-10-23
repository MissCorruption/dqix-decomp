#include <globaldefs.h>

// USA: func_02083be8
extern "C" ARM int func_02083be8(unsigned char* arg0) {
    int var0;
    for (var0 = 0; var0 < 9; var0++) {
#if defined(jpn)
        if ((arg0 + var0)[0x878] != 0) {
#else
        if ((arg0 + var0)[0x910] != 0) {
#endif
            return 1;
        }
    }
    return 0;
}
