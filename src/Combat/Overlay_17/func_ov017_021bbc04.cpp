#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov017_021bbc04_284 = 0x118 };
#else
enum { Enum_ov017_021bbc04_284 = 0x11c };
#endif

// USA: func_ov017_021bbc04
extern "C" ARM unsigned short func_ov017_021bbc04(void* arg0) {
    return *(unsigned short*)((char*)arg0 + Enum_ov017_021bbc04_284);
}
