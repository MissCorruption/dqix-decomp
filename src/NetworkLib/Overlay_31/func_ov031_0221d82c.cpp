#include <globaldefs.h>

struct ValidationRecord {
    unsigned char type;
    unsigned char unknown01;
    unsigned short length;
    unsigned short next;
    unsigned char data[1];
};
struct ResponseValidation {
    unsigned char primary[0x80];
    unsigned char secondary[0x80];
    unsigned char address[4];
};
struct ValidationState {
    unsigned char pad0[0x34];
    unsigned int checksum34;
    unsigned int checksum38;
};
extern ValidationState data_ov031_0224e6e0;
extern "C" unsigned short func_ov031_0221e638(unsigned short);
extern "C" unsigned int func_ov031_0221e610(unsigned int);
extern "C" unsigned int func_ov031_0221d8e8(unsigned char*, int);
extern "C" void func_ov031_0221e51c(void*, const void*, unsigned int);
extern "C" void func_ov031_0221e52c(void*, int, unsigned int);

// USA: func_ov031_0221d82c
extern "C" THUMB int func_ov031_0221d82c(unsigned char* records, ResponseValidation* output) {
    func_ov031_0221e52c(output, 0, sizeof(ResponseValidation));
    ValidationRecord* record = (ValidationRecord*)records;
    for (;;) {
        int length = func_ov031_0221e638(record->length);
        if (length <= 0) return -1;
        switch (record->type) {
        case 0:
            func_ov031_0221e51c(output->primary, record->data, length);
            break;
        case 1:
            func_ov031_0221e51c(output->secondary, record->data, length);
            break;
        case 2:
            func_ov031_0221e51c(output->address, record->data, length);
            break;
        case 3:
        case 4:
            length = func_ov031_0221e638(record->data[0]);
            if (length <= 0) return -2;
            break;
        case 5:
            data_ov031_0224e6e0.checksum34 = func_ov031_0221e610(func_ov031_0221d8e8(record->data, length));
            break;
        case 6:
            data_ov031_0224e6e0.checksum38 = func_ov031_0221e610(func_ov031_0221d8e8(record->data, length));
            break;
        default:
            return -1;
        }
        if (record->next == 0) break;
        record = (ValidationRecord*)(records + func_ov031_0221e638(record->next));
    }
    return 0;
}
