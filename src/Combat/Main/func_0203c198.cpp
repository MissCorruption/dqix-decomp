#include <globaldefs.h>
#include "std_library_functions.h"

extern char* data_02105244;
extern "C" void func_0203c54c(char* obj, short* idxPtr);

// USA: func_0203c198
extern "C" ARM void func_0203c198(char* obj) {
    if (data_02105244 == NULL) return;
#if defined(jpn)
    func_0203c54c(data_02105244, reinterpret_cast<short*>(obj));
    memset(obj, -1, 0x14);
    *(unsigned int*)(obj + 0x30) &= ~0xff0000;
#else
    func_0203c54c(data_02105244, (short*)(obj + 0x14));
    *(short*)(obj + 0x14) = -1;
#endif
}
