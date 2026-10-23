#include <globaldefs.h>
#include "std_library_functions.h"

extern char* data_02105244;
extern "C" void func_0203c54c(char* arg0, short* arg1);

// USA: func_0203c198
extern "C" ARM void func_0203c198(char* arg0) {
    if (data_02105244 == NULL) return;
#if defined(jpn)
    func_0203c54c(data_02105244, reinterpret_cast<short*>(arg0));
    memset(arg0, -1, 0x14);
    *(unsigned int*)(arg0 + 0x30) &= ~0xff0000;
#else
    func_0203c54c(data_02105244, (short*)(arg0 + 0x14));
    *(short*)(arg0 + 0x14) = -1;
#endif
}
