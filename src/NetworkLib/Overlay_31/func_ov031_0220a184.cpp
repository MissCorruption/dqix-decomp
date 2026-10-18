#include <globaldefs.h>
#include <System/Memory.h>

struct SecurityHandshake {
    unsigned char state;
    unsigned char field_0x1;
    unsigned char record[0x2e];
    unsigned char field_0x30[0x425];
    unsigned char status;
    unsigned char field_0x456[0x3e];
    unsigned char modulus[0x100];
    int modulusLength;
    unsigned char exponent[8];
    int exponentLength;
    unsigned char field_0x5a4[8];
    unsigned char sendHeader;
};

struct SecurityConnection {
    unsigned char field_0x0[0xc];
    SecurityHandshake* handshake;
};

extern "C" void func_ov031_022037a8(const void*, int, int, int, SecurityConnection*);
extern "C" void func_ov031_02209cf8(void*, int);
void BytesToShortArrayBE_0220c8d0(unsigned short*, unsigned char*, int, int);
unsigned int SwapActiveContextPriority_02207cf0();
extern "C" void func_ov031_0220c2bc(unsigned short*, unsigned short*, unsigned short*, int, unsigned short*);
void SetActiveContextPriorityIfValid_02207d3c(unsigned int);
void InitTwoSections_022098ac(void*, int, int);
extern unsigned char data_ov031_02245fa8[8];
extern void* (*data_ov031_0224c994)(unsigned int);
extern int (*data_ov031_0224c9c0)(void*);

// USA: func_ov031_0220a184
extern "C" ARM int func_ov031_0220a184(SecurityConnection* connection) {
    SecurityHandshake* handshake = connection->handshake;
    unsigned short* workspace;
    unsigned short* modulus;
    int words;
    unsigned char* padding;
    int length;
    if (handshake->sendHeader)
        func_ov031_022037a8(data_ov031_02245fa8, 7, 0, 0, connection);
    handshake->state = 3;
    handshake->field_0x1 = 0;
    func_ov031_02209cf8(handshake->record, 0x2e);
    length = handshake->modulusLength;
    words = (length * 2) / 2;
    padding = (unsigned char*)data_ov031_0224c994(length);
    if (padding == 0) {
        handshake->status = 9;
        return 9;
    }
    padding[0] = 0;
    padding[1] = 2;
    func_ov031_02209cf8(padding + 2, length - 0x33);
    padding[length - 0x31] = 0;
    VectorizedInvertedMemcpy(handshake, padding + length - 0x30, 0x30);
    workspace = (unsigned short*)data_ov031_0224c994(words * 8);
    if (workspace == 0) {
        data_ov031_0224c9c0(padding);
        handshake->status = 9;
        return 9;
    }
    unsigned short* message = workspace + words;
    unsigned short* exponent = message + words;
    modulus = exponent + words;
    BytesToShortArrayBE_0220c8d0(message, padding, length, words);
    BytesToShortArrayBE_0220c8d0(exponent, handshake->exponent, handshake->exponentLength, words);
    BytesToShortArrayBE_0220c8d0(modulus, handshake->modulus, length, words);
    unsigned int priority = SwapActiveContextPriority_02207cf0();
    func_ov031_0220c2bc(workspace, message, exponent, words, modulus);
    SetActiveContextPriorityIfValid_02207d3c(priority);
    unsigned char* packet = (unsigned char*)data_ov031_0224c994(length + 0x49);
    if (packet == 0) {
        data_ov031_0224c9c0(padding);
        data_ov031_0224c9c0(workspace);
        handshake->status = 9;
        return 9;
    }
    packet[0] = 0x16;
    packet[1] = 3;
    packet[2] = 0;
    packet[3] = (length + 4) >> 8;
    packet[4] = length + 4;
    packet[5] = 0x10;
    packet[6] = length >> 16;
    packet[7] = length >> 8;
    packet[8] = length;
    unsigned char* cursor = packet + 9;
    if (length & 1)
        *cursor++ = workspace[length / 2];
    int index = length / 2 - 1;
    if (index >= 0) {
        do {
            *cursor = workspace[index] >> 8;
            cursor[1] = workspace[index];
            --index;
            cursor += 2;
        } while (index >= 0);
    }
    func_ov031_022037a8(packet, length + 9, 0, 0, connection);
    InitTwoSections_022098ac(handshake, (int)(packet + 5), length + 4);
    data_ov031_0224c9c0(packet);
    data_ov031_0224c9c0(workspace);
    return data_ov031_0224c9c0(padding);
}
