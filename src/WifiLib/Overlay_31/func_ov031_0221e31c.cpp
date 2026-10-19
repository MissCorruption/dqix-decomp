#include <globaldefs.h>

// USA: func_ov031_0221e31c
extern "C" THUMB void func_ov031_0221e31c(int, unsigned int* table) {
    unsigned int crc;
    int i;
    int bit;
    i = 0;
    do {
        crc = i;
        bit = 0;
        do {
            if (crc & 1) crc = (crc >> 1) ^ 0xEDB88320;
            else crc >>= 1;
            bit++;
        } while (bit < 8);
        *table++ = crc;
        i++;
    } while (i < 256);
}
