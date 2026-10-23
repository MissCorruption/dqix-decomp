#include <globaldefs.h>

extern "C" void func_020d1c64(const unsigned int* table, unsigned int* pcrc, const unsigned char* data, unsigned int len);

// USA: func_020d1cf0
extern "C" ARM unsigned int func_020d1cf0(const unsigned int* table, const unsigned char* data, unsigned int len) {
    unsigned int crc = ~0;
    func_020d1c64(table, &crc, data, len);
    return ~crc;
}
