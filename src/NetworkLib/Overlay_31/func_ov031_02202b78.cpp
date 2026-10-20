#include <globaldefs.h>
#include "NitroSDK/Memory.h"
#include "NitroSDK/Timing.h"

struct IPv4Packet02202b78 {
    unsigned char header;
    unsigned char service;
    unsigned short length;
    unsigned short identification;
    unsigned short fragment;
    unsigned char ttl;
    unsigned char protocol;
    unsigned short checksum;
    unsigned short sourceHigh;
    unsigned short sourceLow;
    unsigned short destinationHigh;
    unsigned short destinationLow;
};
struct FragmentAssembly02202b78 {
    unsigned long source;
    unsigned short count;
    unsigned short identification;
    unsigned short totalBlocks;
    unsigned short totalLength;
    unsigned short starts[8];
    unsigned short ends[8];
    unsigned long timestamp;
    unsigned char* payload;
    unsigned char* allocation;
};
struct ProcessorContext;
struct NetworkAllocator02202b78 {
    unsigned char sendFailed;
    unsigned char addressConflict;
    unsigned short mss;
    unsigned short pingSequence;
    unsigned short ipIdentification;
    unsigned short ephemeralPort;
    unsigned char field_0x0a[2];
    int status;
    unsigned long staticIp;
    void* (*allocate)(unsigned long);
    void (*addressCallback)();
    unsigned long netmask;
    unsigned long dhcpServer;
    unsigned long yieldSleep;
    unsigned long receiveHead;
    unsigned long gateway;
    unsigned long receiveTail;
    unsigned long requestedIp;
    unsigned long dhcpRetry;
    void (*scavengerCallback)();
    void (*release)(void*);
    unsigned long calmDown;
    int (*linkIsOn)();
    unsigned long leaseTime;
    unsigned long hostIp;
    ProcessorContext* receiveWaiter;
    unsigned char* receiveRing;
    unsigned long receiveRingSize;
    unsigned long dns[2];
    unsigned long long random;
    unsigned long long randomMultiplier;
    unsigned long long randomAddend;
};
extern FragmentAssembly02202b78 data_ov031_0224cca8[8];
extern const NetworkAllocator02202b78 data_ov031_0224c980[];

static inline unsigned short Swap16_02202b78(unsigned short value) {
    return (value >> 8) | (value << 8);
}

// USA: func_ov031_02202b78
extern "C" ARM IPv4Packet02202b78* func_ov031_02202b78(IPv4Packet02202b78* packet, int* release) {
    unsigned short identification;
    unsigned long headerLength;
    FragmentAssembly02202b78* available = NULL;
    FragmentAssembly02202b78* assembly;
    unsigned long offset;
    unsigned long flags, payloadLength, end, source, endBlock, index;
    unsigned long count;
    unsigned long total;
    unsigned long rangeIndex;
    unsigned long covered;
    *release = 0;
    flags = Swap16_02202b78(packet->fragment);
    if (!(flags & 0x3fff)) return packet;
    identification = packet->header;
    unsigned short sourceLow = packet->sourceLow;
    unsigned short sourceHigh = packet->sourceHigh;
    headerLength = (identification & 15) * 4;
    source = ((unsigned long)Swap16_02202b78(sourceHigh) << 16) | Swap16_02202b78(sourceLow);
    identification = packet->identification;
    index = 0;
    assembly = data_ov031_0224cca8;
    do {
        if (assembly->count && assembly->source == source && assembly->identification == identification) break;
        ++index;
        if (!assembly->count && !available) available = assembly;
        ++assembly;
    } while (index < 8);
    payloadLength = Swap16_02202b78(packet->length) - headerLength;
    offset = flags & 0x1fff;
    end = payloadLength + (offset << 3);
    if (index == 8) {
        if (!available || end > 4096) return NULL;
        assembly = available;
        assembly->allocation = static_cast<unsigned char*>(data_ov031_0224c980[0].allocate(headerLength + 14 + 4096));
        if (!assembly->allocation) return NULL;
        assembly->source = source;
        assembly->identification = identification;
        assembly->totalBlocks = 0;
        assembly->timestamp = GetCurrentTimestamp() >> 16;
        assembly->payload = assembly->allocation + 14 + headerLength;
        VectorizedInvertedMemcpy(packet, assembly->allocation + 14, headerLength);
    }
    if (assembly->count == 8 || end > 4096) {
        assembly->count = 0;
        data_ov031_0224c980[0].release(assembly->allocation);
        return NULL;
    }
    endBlock = offset + ((payloadLength + 7) >> 3);
    if (!(flags & 0x2000)) {
        assembly->totalLength = end;
        assembly->totalBlocks = endBlock;
    }
    assembly->starts[assembly->count] = offset;
    assembly->ends[assembly->count] = endBlock;
    assembly->count++;
    VectorizedInvertedMemcpy((unsigned char*)packet + headerLength, assembly->payload + (offset << 3), payloadLength);
    total = assembly->totalBlocks;
    if (!total) return NULL;
    count = assembly->count;
    covered = 0;
    rangeIndex = 0;
    if (rangeIndex < count) do {
        if (assembly->starts[rangeIndex] <= covered && covered < assembly->ends[rangeIndex]) {
            covered = assembly->ends[rangeIndex];
            rangeIndex = 0;
        } else {
            rangeIndex++;
        }
    } while (rangeIndex < count);
    if (covered < total) return NULL;
    unsigned char* allocation = assembly->allocation;
    IPv4Packet02202b78* result = (IPv4Packet02202b78*)(allocation + 14);
    unsigned short length = assembly->totalLength + ((result->header & 15) * 4);
    result->length = (length >> 8) | (length << 8);
    assembly->count = 0;
    *release = 1;
    return result;
}
