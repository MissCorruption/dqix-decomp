#include <globaldefs.h>

// USA: func_02026bc8
ARM void SetBit02026bc8(unsigned char* obj, int index) {
#if defined(jpn)
    obj[0x9ca] |= 1 << index;
#else
    obj[0xA96] |= 1 << index;
#endif
}
