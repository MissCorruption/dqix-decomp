#include <globaldefs.h>
#include "NitroSDK/Memory.h"

int TrimTrailingZeroShorts_0220bb24(unsigned short*, int);
extern "C" void func_ov031_0220bf5c(unsigned short*, unsigned short*, int);
extern "C" void func_ov031_0220c0dc(unsigned short*, unsigned short*, unsigned short*, unsigned short*, int, unsigned short*);
extern "C" void func_ov031_0220be38(unsigned short*, unsigned short*, unsigned short*, int);
extern void* (*data_ov031_0224c994)(unsigned int);
extern void (*data_ov031_0224c9c0)(void*);

// USA: func_ov031_0220c2bc
extern "C" ARM void func_ov031_0220c2bc(unsigned short* result, unsigned short* base, unsigned short* exponent, int length, unsigned short* modulus) {
    unsigned short* temporary = (unsigned short*)data_ov031_0224c994(length * 8);
    if (!temporary) return;
    unsigned short* scratch = temporary + length;
    VectorizedMemset(result + 1, 0, (length - 1) * 2);
    result[0] = 1;
    int bit = (length - TrimTrailingZeroShorts_0220bb24(exponent, length)) * 16;
    if ((unsigned int)bit < (unsigned int)(length << 4)) { do {
        if ((exponent + (length - (bit >> 4)))[-1] & (0x8000u >> (bit & 15))) {
            VectorizedInvertedMemcpy(base, result, length * 2);
            ++bit;
            break;
        }
        ++bit;
    } while ((unsigned int)bit < (unsigned int)(length << 4)); }
    if ((unsigned int)bit < (unsigned int)(length << 4)) { do {
        func_ov031_0220bf5c(temporary, result, length);
        VectorizedInvertedMemcpy(temporary, result, length * 2);
        if (modulus) func_ov031_0220c0dc(0, result, modulus, result, length, scratch);
        if ((exponent + (length - (bit >> 4)))[-1] & (0x8000u >> (bit & 15))) {
            func_ov031_0220be38(temporary, result, base, length);
            VectorizedInvertedMemcpy(temporary, result, length * 2);
            if (modulus) func_ov031_0220c0dc(0, result, modulus, result, length, scratch);
        }
        ++bit;
    } while ((unsigned int)bit < (unsigned int)(length << 4)); }
    data_ov031_0224c9c0(temporary);
}
