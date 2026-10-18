#include <globaldefs.h>

// USA: func_ov031_022228c0
extern "C" THUMB int func_ov031_022228c0(char* output, int input) {
    char* cursor = output;
    unsigned char value = input;
    int index = 0;
    int digit = (value & 0xf0) >> 4;
    int low = value & 0xf;
    do {
        if (digit <= 9) {
            digit += '0';
        } else {
            digit += 'A' - 10;
        }
        index++;
        *cursor++ = digit;
        digit = low;
    } while (index < 2);
    *cursor = 0;
    return cursor - output;
}
