#include <globaldefs.h>
#include "System/Memory.h"

struct Slot_0221be38 {
    unsigned char payload[0xef];
    unsigned char validMask;
    unsigned char key[0xe];
    unsigned short checksum;
};

struct PersistentSlots {
    Slot_0221be38 slots[4];
    unsigned char padding_400[0x100];
    unsigned short crcTable[0x100];
};

int SetupTimingSlot_0221afb4(void*);
int Check_0221aff8_0221aff8(int);
void GenCrc16Table_020d1ba0(unsigned short*, unsigned short);
unsigned short Crc16Compute_020d1cc8(const unsigned short*, const unsigned char*, unsigned int);
extern "C" int func_ov031_0221bcb8(Slot_0221be38*);
void CopyFrom0224e6ac_0221b140(void*);
int InitAndScrambleRegions_0221bdb8(char*);
extern "C" int func_ov031_0221b0ac(void*);
void ClearSlot_0221be38(Slot_0221be38*, int);
extern "C" void func_020ca390(int, void*, unsigned int);

// USA: func_ov031_0221b9b0
extern "C" ARM int func_ov031_0221b9b0(PersistentSlots* state) {
    VectorizedMemset(state, 0, 0x700);
    if (!SetupTimingSlot_0221afb4(state))
        return -10001;
    GenCrc16Table_020d1ba0(state->crcTable, 0xa001);
    if (!Check_0221aff8_0221aff8((int)state))
        return -10001;

    int valid[4];
    VectorizedMemset(valid, 0, sizeof(valid));
    int index = 0;
    const unsigned char* block = (const unsigned char*)state->slots;
    Slot_0221be38* slot = state->slots;
    do {
        unsigned short checksum = Crc16Compute_020d1cc8(state->crcTable, block, 0xfe);
        if (checksum == state->slots[index].checksum) {
            if (func_ov031_0221bcb8(slot))
                valid[index] = 1;
        }
        ++index;
        block += 0x100;
        ++slot;
    } while (index < 3);
    unsigned short checksum = Crc16Compute_020d1cc8(state->crcTable, (const unsigned char*)&state->slots[3], 0xfe);
    if (checksum == state->slots[3].checksum)
        valid[3] = 1;

    if (valid[0] && valid[1] && valid[2] && valid[3]) {
        CopyFrom0224e6ac_0221b140(state->slots[0].key);
        return 0;
    }
    if (!valid[0] && !valid[1] && !valid[2] && !valid[3]) {
        InitAndScrambleRegions_0221bdb8((char*)state);
        return func_ov031_0221b0ac(state) ? 0 : -10000;
    }
    if (!(valid[0] && valid[1]) && !(valid[2] && valid[3])) {
        InitAndScrambleRegions_0221bdb8((char*)state);
        return func_ov031_0221b0ac(state) ? 0 : -10000;
    }
    if (!valid[0] && !valid[1]) {
        InitAndScrambleRegions_0221bdb8((char*)state);
        return func_ov031_0221b0ac(state) ? -10003 : -10000;
    }
    if (!valid[0]) {
        ClearSlot_0221be38(state->slots, 0);
        VectorizedInvertedMemcpy(state->slots[1].key, state->slots[0].key, 0xe);
        state->slots[0].validMask = state->slots[1].validMask;
    } else if (!valid[1]) {
        ClearSlot_0221be38(state->slots, 1);
        VectorizedInvertedMemcpy(state->slots[0].key, state->slots[1].key, 0xe);
        state->slots[1].validMask = state->slots[0].validMask;
    }
    CopyFrom0224e6ac_0221b140(state->slots[0].key);
    if (!valid[2])
        ClearSlot_0221be38(state->slots, 2);
    if (!valid[3])
        func_020ca390(0, &state->slots[3], 0x100);

    int changed = 0;
    index = 0;
    do {
        if (!valid[index] && (state->slots[0].validMask & (1 << index))) {
            state->slots[0].validMask &= ~(1 << index);
            changed = 1;
            state->slots[1].validMask = state->slots[0].validMask;
        }
        ++index;
    } while (index < 3);
    if (!func_ov031_0221b0ac(state))
        return -10000;
    return changed ? -10002 : 0;
}
