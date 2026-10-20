#include <globaldefs.h>
#include "NitroSDK/Memory.h"

#if defined(jpn)
#define func_020c9be0 func_020cb6ac
#endif

struct SettingsWriteBuffer0221aed8 {
    unsigned char data[0xf0];
    unsigned char signature[14];
    unsigned short crc;
    unsigned char verification[0x100];
    unsigned short crc_table[256];
};
struct SettingsStorage0221aed8 {
    int field_0;
    int field_4;
    int address;
};
extern SettingsStorage0221aed8 data_ov031_0224e6a0;
extern unsigned char data_ov031_0224e6ac[];
extern "C" void* func_ov031_0221b8e4(void*);
extern "C" int func_ov031_0221b6f0(int, int, int);
extern "C" int func_ov031_0221b780(int, int, int);
extern "C" int func_ov031_0221b848();
extern "C" void func_020c9be0();
void GenCrc16Table_020d1ba0(unsigned short*, unsigned short);
extern "C" unsigned short Crc16Compute_020d1cc8(const unsigned short*, const unsigned char*, unsigned int);
int CheckAndCompare_0221b7fc(int, int, int, int);

// USA: func_ov031_0221aed8
extern "C" ARM int func_ov031_0221aed8(void* storage, SettingsWriteBuffer0221aed8* buffer) {
    int count;
    int address = data_ov031_0224e6a0.address;
    func_ov031_0221b8e4(storage);
    GenCrc16Table_020d1ba0(buffer->crc_table, 0xa001);
    count = 0;
    do {
        if (func_ov031_0221b6f0(address, 0x100, (int)buffer) == 0) {
            func_020c9be0();
            return 0;
        }
        VectorizedInvertedMemcpy(data_ov031_0224e6ac, buffer->signature, 14);
        buffer->crc = Crc16Compute_020d1cc8(buffer->crc_table, buffer->data, 0xfe);
        do {
            func_ov031_0221b780(address, 0x100, (int)buffer);
        } while (CheckAndCompare_0221b7fc((int)buffer, address, 0x100, (int)buffer->verification) == 0);
        count++;
        address += 0x100;
    } while (count < 2);
    return func_ov031_0221b848() != 0;
}
