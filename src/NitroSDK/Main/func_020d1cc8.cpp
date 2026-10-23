#include <globaldefs.h>

extern "C" void func_020d1be4(const unsigned short* table, unsigned short* pcrc, const unsigned char* data, unsigned int len);

// USA: func_020d1cc8
extern "C" ARM unsigned short func_020d1cc8(const unsigned short* table, const unsigned char* data, unsigned int len) {
    unsigned short crc = 0;
    func_020d1be4(table, &crc, data, len);
    return crc;
}
