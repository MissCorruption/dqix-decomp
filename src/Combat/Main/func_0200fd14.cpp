#include <globaldefs.h>
#include "NitroSDK/Memory.h"

struct Struct_0200fd14 { char* unknown_0_; };

// USA: func_0200fd14
// Copies 'length' bytes out of the stream at stream->ptr and advances the pointer.
extern "C" ARM void func_0200fd14(struct Struct_0200fd14* arg0, void* arg1, unsigned int arg2) {
    VectorizedInvertedMemcpy(arg0->unknown_0_, arg1, arg2);
    arg0->unknown_0_ += arg2;
}
