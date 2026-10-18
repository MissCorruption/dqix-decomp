#include <globaldefs.h>
#include "System/Memory.h"

int TrimTrailingZeroShorts_0220bb24(unsigned short*, int);
void PropagateCarryFromIndex_0220be04(unsigned short*, int, int, int);

// USA: func_ov031_0220bf5c
extern "C" ARM void func_ov031_0220bf5c(unsigned short* output, unsigned short* input, int count) {
    int i;
    int position;
    unsigned int crossProduct;
    int outer;
    int length;
    length = TrimTrailingZeroShorts_0220bb24(input, count);
    if (count > length * 2) VectorizedMemset(output + length * 2, 0, (count - length * 2) * 2);
    i = 0;
    if (length > 0) {
        position = 0;
        do {
            if (position >= count) break;
            unsigned int value = input[i];
            unsigned int product = value * value;
            output[position] = product;
            if (position == count - 1) break;
            i++;
            unsigned short* slot = output + position;
            slot[1] = product >> 16;
            position += 2;
        } while (i < length);
    }
    outer = 0;
    if (length > 0) do {
        i = outer + 1;
        while (i < length && (position = outer + i) < count) {
            unsigned int factor = input[i];
            unsigned int coefficient = input[outer];
            crossProduct = factor * coefficient;
            if (crossProduct <= 0x7fff8000u) PropagateCarryFromIndex_0220be04(output, crossProduct * 2, position, count);
            else {
                PropagateCarryFromIndex_0220be04(output, crossProduct, position, count);
                PropagateCarryFromIndex_0220be04(output, crossProduct, position, count);
            }
            i++;
        }
        outer++;
    } while (outer < length);
}
