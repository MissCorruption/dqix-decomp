#include <globaldefs.h>
#include "System/OverlayMD5.h"

extern "C" void func_ov031_02222818(void*, const void*, unsigned int);
extern "C" void func_ov031_02221f78(unsigned int*, const unsigned char*);

// USA: func_ov031_02221eac
extern "C" THUMB void func_ov031_02221eac(OverlayMD5Context* context, const void* bytes, unsigned int length) {
    const unsigned char* input = static_cast<const unsigned char*>(bytes);
    unsigned int offset;
    unsigned int used = (context->bitCount[0] >> 3) & 63;
    context->bitCount[0] += length << 3;
    if (context->bitCount[0] < (length << 3)) context->bitCount[1]++;
    context->bitCount[1] += length >> 29;
    offset = 64 - used;
    if (length >= offset) {
        func_ov031_02222818(context->buffer + used, input, offset);
        func_ov031_02221f78(context->state, context->buffer);
        if (offset + 63 < length) {
            do {
                func_ov031_02221f78(context->state, input + offset);
                offset += 64;
            } while (offset + 63 < length);
        }
        used = 0;
    } else offset = 0;
    func_ov031_02222818(context->buffer + used, input + offset, length - offset);
}
