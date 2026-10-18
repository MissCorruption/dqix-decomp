#include <globaldefs.h>

int DecodeBase64Char_02215af4(unsigned int);

// USA: func_ov031_02215b64
extern "C" ARM int func_ov031_02215b64(const unsigned char* input, unsigned char* output, unsigned int count, unsigned int capacity) {
    unsigned int tmp;
    unsigned int tail;
    int k;
    unsigned int acc;
    int i;
    int remain;
    int whole;
    int size = (count * 3) >> 2;
    int j;
    if (capacity >= (count * 3) >> 2) {
        remain = count & 3;
        whole = count - remain;
    } else {
        return -1;
    }
    for (i = 0; i < whole; i += 4) {
        acc = 0;
        for (j = 0; j < 4; j++) {
            acc |= DecodeBase64Char_02215af4(input[i + j]) << ((3 - j) * 6);
        }
        tmp = acc;
        for (k = 0; k < 3; k++) {
            output[(i / 4) * 3 + k] = ((unsigned char*)&tmp)[2 - k];
        }
    }
    if (remain) {
        tail = 0;
        acc = 0;
        for (j = 0; j < remain; j++) {
            acc |= DecodeBase64Char_02215af4(input[whole + j]) << ((3 - j) * 6);
            tail |= acc;
        }
        for (k = 0; k < remain; k++) {
            output[(whole * 3) / 4 + k] = ((unsigned char*)&tail)[2 - k];
        }
    }
    return size;
}

