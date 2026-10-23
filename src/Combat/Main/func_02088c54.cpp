#include <globaldefs.h>

// USA: func_02088c54
extern "C" ARM int func_02088c54(unsigned char* arg0) {
    int var0 = *(int*)(arg0 + 0x14);
    if (var0 & 1) {
        return 0;
    }
    return (var0 & 0x20000) == 0;
}
