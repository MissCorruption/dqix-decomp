#include <globaldefs.h>
#include "std_library_functions.h"

#if defined(jpn)
static const int kBufferOffset = 0x4208;
#else
static const int kBufferOffset = 0x44b8;
#endif

// USA: func_ov017_021972cc
extern "C" ARM void func_ov017_021972cc(char* arg0) {
    memset(arg0 + kBufferOffset, 0, 8);
    *(unsigned char*)(arg0 + kBufferOffset + 8) = 0;
}
