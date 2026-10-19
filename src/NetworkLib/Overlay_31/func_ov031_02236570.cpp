#include <globaldefs.h>
#include "System/Memory.h"

struct SaveSlot {
    unsigned char unknown_0[0xe7];
    unsigned char active_;
    unsigned char unknown_e8[7];
    unsigned char flags_;
    unsigned char unknown_f0[14];
    unsigned short checksum_;
};
struct SaveData {
    SaveSlot slots_[4];
    unsigned char unknown_400[0xf8];
    unsigned short crcTable_[256];
};
extern SaveData* data_ov031_02290cfc;
extern "C" unsigned short Crc16Compute_020d1cc8(const unsigned short* table, const unsigned char* data, unsigned int length);
extern "C" void* func_ov031_0223cf4c(int, int);
extern "C" int func_ov031_0221b024(SaveData*, int*, void*);
extern "C" void func_ov031_0223cf70(void**);

// USA: func_ov031_02236570
extern "C" ARM void func_ov031_02236570(int index) {
    int one = 1;
    unsigned char active = data_ov031_02290cfc->slots_[index].active_;
    int selected = 0;
    int pageMask = one << index;
    int dirty[4];
    VectorizedMemset(dirty, 0, sizeof(dirty));
    dirty[index] = one;
    if (index <= 2) {
        if (data_ov031_02290cfc->slots_[0].flags_ & pageMask) selected = one;
        if (active == 255 && selected != 0) {
            data_ov031_02290cfc->slots_[0].flags_ &= ~pageMask;
            data_ov031_02290cfc->slots_[1].flags_ &= ~(pageMask);
            dirty[1] = 1;
            dirty[0] = 1;
        } else if (active != 255 && selected == 0) {
            data_ov031_02290cfc->slots_[0].flags_ |= pageMask;
            data_ov031_02290cfc->slots_[1].flags_ |= pageMask;
            dirty[1] = 1;
            dirty[0] = 1;
        }
    }
    int i = 0;
    int offset = 0;
    do {
        if (dirty[i])
            data_ov031_02290cfc->slots_[i].checksum_ = Crc16Compute_020d1cc8(data_ov031_02290cfc->crcTable_, (const unsigned char*)data_ov031_02290cfc + offset, 254);
        i++;
        offset += 256;
    } while (i < 4);
    void* buffer = func_ov031_0223cf4c(256, 32);
    func_ov031_0221b024(data_ov031_02290cfc, dirty, buffer);
    func_ov031_0223cf70(&buffer);
}
