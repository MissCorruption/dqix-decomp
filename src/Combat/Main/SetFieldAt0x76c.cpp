#include <globaldefs.h>

// USA: func_020263dc
ARM void SetFieldAt0x76c_020263dc(unsigned char* obj, void* value) {
#if defined(jpn)
    *(void**)(obj + 0x6c0) = value;
#else
    *(void**)(obj + 0x76c) = value;
#endif
}
