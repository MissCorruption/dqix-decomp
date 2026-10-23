#include <globaldefs.h>

// USA: func_02088ab8
extern "C" ARM int func_02088ab8(unsigned char* arg0) {
    if (((int*)arg0)[5] & 1) {
        return 0;
    }
    return (((int*)arg0)[6] & 0x40) == 0;
}
