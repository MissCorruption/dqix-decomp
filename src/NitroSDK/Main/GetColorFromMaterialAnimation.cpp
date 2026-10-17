#include <globaldefs.h>
#include "Graphics/NSBXX/NSBXX.h"

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020b8e60
ARM unsigned short GetColorFromMaterialAnimation(NSBXXAnimationMAM* anim, unsigned int info, unsigned int frame)
{
    const unsigned short* data;
    unsigned int last;
    unsigned int idx;
    if (info & 0x20000000)
        return (unsigned short)(info & 0xffff);
    data = (const unsigned short*)((const unsigned char*)anim + (info & 0xffff));
    if (!(info & 0xc0000000))
        return data[frame];
    last = (info & 0x1fff0000) >> 16;
    if (info & 0x40000000) {
        if (frame & 1) {
            if (frame > last)
                return *(data + (last >> 1) + 1);
            else {
                idx = frame >> 1;
                goto interpolate;
            }
        } else {
            return data[frame >> 1];
        }
    } else {
        if (frame & 3) {
            if (frame > last)
                return *(data + (last >> 2) + (frame & 3));
            if (frame & 1) {
                unsigned int idxSub;
                unsigned int v, vSub;
                unsigned int c, cSub;
                unsigned int result;
                enum { rbMask = 0x7c1f };
                enum { gMask = 0x3e0 };
                if (frame & 2) {
                    idxSub = frame >> 2;
                    idx = idxSub + 1;
                } else {
                    idx = frame >> 2;
                    idxSub = idx + 1;
                }
                v = data[idx];
                vSub = data[idxSub];
                c = v & rbMask;
                cSub = vSub & rbMask;
                result = ((c + c + c + cSub) >> 2) & rbMask;
                c = v & gMask;
                cSub = vSub & gMask;
                result |= ((c + c + c + cSub) >> 2) & gMask;
                return (unsigned short)result;
            } else {
                idx = frame >> 2;
                goto interpolate;
            }
        } else {
            return data[frame >> 2];
        }
    }
interpolate:
    {
        unsigned int result;
        unsigned int v0 = data[idx];
        unsigned int v1 = *(data + idx + 1);
        enum { rbMask = 0x7c1f };
        enum { gMask = 0x3e0 };
        result = (((v0 & rbMask) + (v1 & rbMask)) >> 1) & rbMask;
        result |= (((v0 & gMask) + (v1 & gMask)) >> 1) & gMask;
        return (unsigned short)result;
    }
}
