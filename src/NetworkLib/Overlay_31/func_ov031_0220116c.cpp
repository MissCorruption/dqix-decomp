#include <globaldefs.h>
struct InternetHeader0220116c {
    unsigned char version, service;
    unsigned short length, identification, fragment;
    unsigned char ttl, protocol;
    unsigned short checksum, sourceHigh, sourceLow, destinationHigh, destinationLow;
};
struct Network0220116c {
    unsigned char unknown0[6];
    unsigned short identification;
    unsigned char unknown8[0x50 - 8];
    unsigned int address;
};
extern Network0220116c data_ov031_0224c980;
extern "C" void func_ov031_02201044(void*, unsigned int, const void*, unsigned int, unsigned int, unsigned int);
static inline unsigned short Swap16_0220116c(unsigned short value) {
    return (value >> 8) | (value << 8);
}
// USA: func_ov031_0220116c
extern "C" ARM void func_ov031_0220116c(unsigned char* payload, unsigned int length,
    const unsigned char* extra, unsigned int extraLength, unsigned int destination,
    unsigned char protocol) {
    InternetHeader0220116c* headerEnd = (InternetHeader0220116c*)payload;
    headerEnd[-1].version = 0x45;
    headerEnd[-1].service = 0;
    data_ov031_0224c980.identification++;
    headerEnd[-1].identification = Swap16_0220116c(data_ov031_0224c980.identification);
    headerEnd[-1].ttl = 0x80;
    headerEnd[-1].protocol = protocol;
    unsigned short sourceHigh = data_ov031_0224c980.address >> 16;
    headerEnd[-1].sourceHigh = Swap16_0220116c(sourceHigh);
    unsigned short sourceLow = data_ov031_0224c980.address;
    headerEnd[-1].sourceLow = Swap16_0220116c(sourceLow);
    unsigned short destinationHigh = destination >> 16;
    headerEnd[-1].destinationHigh = Swap16_0220116c(destinationHigh);
    unsigned short destinationLow = destination;
    headerEnd[-1].destinationLow = Swap16_0220116c(destinationLow);
    unsigned short fragment = 0;
    if (length > 0x5c8) {
        const unsigned char* cursor = payload;
        if (length > 0x5c8) do {
            func_ov031_02201044(payload, 0, cursor, 0x5c8, destination, fragment | 0x2000);
            cursor += 0x5c8;
            length -= 0x5c8;
            fragment += 0xb9;
        } while (length > 0x5c8);
        if (length != 0) {
            if (extraLength != 0)
                func_ov031_02201044(payload, 0, cursor, length, destination, fragment | 0x2000);
            else
                func_ov031_02201044(payload, 0, cursor, length, destination, fragment);
            fragment += length >> 3;
            length = 0;
        }
    }
    if (length + extraLength > 0x5c8) do {
        unsigned int count = 0x5c8 - length;
        func_ov031_02201044(payload, length, extra, count, destination, fragment | 0x2000);
        extraLength -= count;
        length = 0;
        extra += count;
        fragment += 0xb9;
    } while (extraLength > 0x5c8);
    if (length + extraLength == 0) return;
    func_ov031_02201044(payload, length, extra, extraLength, destination, fragment);
}

