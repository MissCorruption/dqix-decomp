#include <globaldefs.h>

#if defined(jpn)
enum { ByteBase = 0x7000, ByteOffset = 0x3b };
#else
enum { ByteBase = 0x6000, ByteOffset = 0xe4b };
#endif

// USA: func_ov025_021dcc64
extern "C" ARM unsigned char func_ov025_021dcc64(void* obj) {
    unsigned char* base = (unsigned char*)obj;
    return (base + ByteBase)[ByteOffset];
}
