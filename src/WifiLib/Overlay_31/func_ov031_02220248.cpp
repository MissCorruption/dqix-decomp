#include <globaldefs.h>

// USA: func_ov031_02220248
extern "C" THUMB unsigned char* func_ov031_02220248(unsigned char** cursor, unsigned char* end, unsigned int* typeOut, unsigned int* lenOut) {
    unsigned char* p = *cursor;
    if (p >= end)
        return 0;

    unsigned short type = *(unsigned short*)(p + 0);
    *typeOut = (unsigned short)((unsigned char)(type >> 8) | ((type << 8) & 0xff00));

    unsigned short len = *(unsigned short*)(p + 2);
    unsigned int swappedLen = (unsigned short)((unsigned char)(len >> 8) | ((len << 8) & 0xff00));
    *lenOut = swappedLen;

    unsigned char* data = p + 4;
    *cursor = data + (((swappedLen + 11) & ~7) - 4);
    return data;
}
