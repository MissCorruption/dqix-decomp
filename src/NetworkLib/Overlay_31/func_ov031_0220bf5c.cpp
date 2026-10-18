#include <globaldefs.h>
#include "System/Memory.h"

int TrimTrailingZeroShorts_0220bb24(unsigned short*, int);
void PropagateCarryFromIndex_0220be04(unsigned short*, int, int, int);

// USA: func_ov031_0220bf5c
extern "C" ARM void func_ov031_0220bf5c(unsigned short* output, unsigned short* input, int count) {
    int i;
    int inner;
    int position;
    int outer;
    unsigned int product;
    int length;
    length = TrimTrailingZeroShorts_0220bb24(input, count);
    if (count > length * 2) VectorizedMemset(output + length * 2, 0, (count - length * 2) * 2);
    for (i = 0; i < length; i++) {
        position = i * 2;
        if (position >= count) break;
        product = input[i] * input[i];
        output[position] = product;
        if (position == count - 1) break;
        output[position + 1] = product >> 16;
    }
    for (outer = 0; outer < length; outer++) {
        for (inner = outer + 1; inner < length && (position = outer + inner) < count; inner++) {
            product = input[inner] * input[outer];
            if (product <= 0x7fff8000u) {
                PropagateCarryFromIndex_0220be04(output, product * 2, position, count);
            } else {
                PropagateCarryFromIndex_0220be04(output, product, position, count);
                PropagateCarryFromIndex_0220be04(output, product, position, count);
            }
        }
    }
}
