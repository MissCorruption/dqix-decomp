#include <globaldefs.h>
#include "NitroSDK/Memory.h"

extern "C" int func_ov031_0220bb24(unsigned short* arr, int len);

// USA: func_ov031_0220bb7c
extern "C" ARM void func_ov031_0220bb7c(unsigned short* dst, unsigned short* a, unsigned short* b, int len) {
    int lenA = func_ov031_0220bb24(a, len);
    int lenB = func_ov031_0220bb24(b, len);
    int n = lenA;
    if (n < lenB)
        n = lenB;
    if (n != len)
        n = n + 1;
    int i;
    unsigned int carry;
    carry = 0;
    i = 0;
    if (n > 0) {
        do {
            unsigned int sum = a[i] + b[i] + carry;
            dst[i] = (unsigned short)sum;
            carry = sum >> 16;
        } while (++i < n);
    }
    if (dst == a || dst == b)
        return;
    VectorizedMemset(dst + i, 0, (len - i) * 2);
}
