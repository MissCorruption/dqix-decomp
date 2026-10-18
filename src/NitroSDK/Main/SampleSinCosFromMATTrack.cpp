#include <globaldefs.h>
#include "Graphics/NSBXX/NSBXX.h"

struct MATSinCosSample { short sine; short cosine; };

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020b9378
ARM unsigned int SampleSinCosFromMATTrack(NSBXXAnimationMAT* animation, unsigned int info, unsigned int data, unsigned int frame) {
    unsigned int index, subIndex;
    unsigned int lastInterp;
    const void* samples;
    if (info & 0x20000000)
        return data;
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
                int sine, subSine;
                int cosine, subCosine;
                if (frame & 2) {
                    subIndex = frame >> 2;
                    index = subIndex + 1;
                } else {
                    index = frame >> 2;
                    subIndex = index + 1;
                }
                sine = ((const MATSinCosSample*)samples)[index].sine;
                cosine = ((const MATSinCosSample*)samples)[index].cosine;
                subSine = ((const MATSinCosSample*)samples)[subIndex].sine;
                subCosine = ((const MATSinCosSample*)samples)[subIndex].cosine;
                sine = (sine + sine + sine + subSine) >> 2;
                cosine = (cosine + cosine + cosine + subCosine) >> 2;
                return (sine & 0xffff) | (cosine << 16);
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
    return *((const unsigned int*)samples + index);
interpTwo:
    int sine0, sine1;
    int cosine0, cosine1;
    sine0 = ((const MATSinCosSample*)samples)[index].sine;
    cosine0 = ((const MATSinCosSample*)samples)[index].cosine;
    sine1 = ((const MATSinCosSample*)samples + index + 1)->sine;
    cosine1 = ((const MATSinCosSample*)samples + index + 1)->cosine;
    return (((sine0 + sine1) >> 1) & 0xffff) | (((cosine0 + cosine1) >> 1) << 16);
}
