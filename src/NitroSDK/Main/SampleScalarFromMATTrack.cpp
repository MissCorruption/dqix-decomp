#include <globaldefs.h>
#include "Graphics/NSBXX/NSBXX.h"

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020b9278
ARM int SampleScalarFromMATTrack(NSBXXAnimationMAT* animation, unsigned int info, unsigned int data, unsigned int frame) {
    unsigned int index, subIndex;
    unsigned int lastInterp;
    const void* samples;

    if (info & 0x20000000)
        return (int)data;
    samples = (const unsigned char*)animation + data;
    if (!(info & 0xc0000000)) {
        index = frame;
        goto nonInterp;
    }
    lastInterp = info & 0xffff;
    if (info & 0x40000000) {
        if (frame & 1) {
            if (frame > lastInterp) {
                index = (lastInterp >> 1) + 1;
                goto nonInterp;
            } else {
                index = frame >> 1;
                goto interpTwo;
            }
        } else {
            index = frame >> 1;
            goto nonInterp;
        }
    } else {
        if (frame & 3) {
            if (frame > lastInterp) {
                index = (lastInterp >> 2) + (frame & 3);
                goto nonInterp;
            }
            if (frame & 1) {
                int value, subValue;
                if (frame & 2) {
                    subIndex = frame >> 2;
                    index = subIndex + 1;
                } else {
                    index = frame >> 2;
                    subIndex = index + 1;
                }
                if (info & 0x10000000) {
                    value = ((const short*)samples)[index];
                    subValue = ((const short*)samples)[subIndex];
                } else {
                    value = ((const int*)samples)[index];
                    subValue = ((const int*)samples)[subIndex];
                }
                return (value + value + value + subValue) >> 2;
            } else {
                index = frame >> 2;
                goto interpTwo;
            }
        } else {
            index = frame >> 2;
            goto nonInterp;
        }
    }
nonInterp:
    if (info & 0x10000000)
        return ((const short*)samples)[index];
    else
        return ((const int*)samples)[index];
interpTwo:
    int v0, v1;
    if (info & 0x10000000) {
        v0 = ((const short*)samples)[index];
        v1 = *((const short*)samples + index + 1);
    } else {
        v0 = ((const int*)samples)[index];
        v1 = *((const int*)samples + index + 1);
    }
    return (v0 + v1) >> 1;
}
