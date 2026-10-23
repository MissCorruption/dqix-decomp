#include <globaldefs.h>
#include "NitroSDK/Memory.h"

extern "C" int func_ov031_0220bb4c(unsigned short*, int);
extern "C" void func_ov031_0220c0dc(unsigned short*, unsigned short*, unsigned short*, unsigned short*, int, unsigned short*);
extern "C" void func_ov031_0220be38(unsigned short*, unsigned short*, unsigned short*, int);
extern "C" void func_ov031_0220bcbc(unsigned short*, unsigned short*, unsigned short*, int);
extern "C" void func_ov031_0220bb7c(unsigned short*, unsigned short*, unsigned short*, int);

// USA: func_ov031_0220c450
extern "C" ARM void func_ov031_0220c450(unsigned short* output, unsigned short* input, unsigned short* modulus, int length, unsigned short* workspace) {
    unsigned short* quotient = workspace + length;
    unsigned short* previous = quotient + length;
    unsigned short* coefficient = previous + length;
    unsigned short* nextCoefficient = coefficient + length;
    unsigned short* remainder = nextCoefficient + length;
    unsigned short* scratch = remainder + length;
    unsigned int byteCount = length * 2;
    VectorizedInvertedMemcpy(input, workspace, byteCount);
    VectorizedInvertedMemcpy(modulus, previous, byteCount);
    coefficient[0] = 1;
    if (func_ov031_0220bb4c(workspace, length) > 0) {
        do {
            func_ov031_0220c0dc(quotient, previous, workspace, remainder, length, scratch);
            VectorizedInvertedMemcpy(workspace, previous, byteCount);
            VectorizedInvertedMemcpy(remainder, workspace, byteCount);
            func_ov031_0220be38(remainder, quotient, coefficient, length);
            func_ov031_0220bcbc(remainder, nextCoefficient, remainder, length);
            VectorizedInvertedMemcpy(coefficient, nextCoefficient, byteCount);
            VectorizedInvertedMemcpy(remainder, coefficient, byteCount);
        } while (func_ov031_0220bb4c(workspace, length) > 0);
    }
    func_ov031_0220bb7c(nextCoefficient, nextCoefficient, modulus, length);
    func_ov031_0220c0dc(NULL, nextCoefficient, modulus, output, length, scratch);
}
