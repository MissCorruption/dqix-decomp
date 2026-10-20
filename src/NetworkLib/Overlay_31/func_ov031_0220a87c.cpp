#include <globaldefs.h>
#include "NitroSDK/Memory.h"

struct Record0220a87c {
    unsigned char type;
    unsigned char majorVersion;
    unsigned char minorVersion;
    unsigned char lengthHigh;
    unsigned char lengthLow;
    unsigned char payload[1];
};
struct Connection0220a87c { unsigned char padding_0x0[0x8]; unsigned char type, hasExtra; unsigned char padding_0xa[2]; void* context; };

extern void* (*data_ov031_0224c994)(unsigned int);
extern void (*data_ov031_0224c9c0)(void*);
extern "C" int func_ov031_0220963c(void* context, Record0220a87c* record);
extern "C" unsigned int func_ov031_022037a8(const void* first, unsigned int firstLength, const void* second, unsigned int secondLength, Connection0220a87c* connection);

static inline int SendRecords0220a87c(const unsigned char* first, unsigned int firstLength, const unsigned char* second, unsigned int secondLength, Connection0220a87c* connection, void* context) {
    int chunk;
    int head;
    int tail;
    int sent = 0;
    int remaining = firstLength + secondLength;
    do {
        chunk = remaining > 0xb4f ? 0xb4f : remaining;
        Record0220a87c* record = (Record0220a87c*)data_ov031_0224c994(chunk + 0x19);
        if (record == NULL) return sent;
        head = firstLength >= chunk ? chunk : firstLength;
        tail = chunk - head;
        VectorizedInvertedMemcpy(first, record->payload, head);
        first += head;
        firstLength -= head;
        VectorizedInvertedMemcpy(second, record->payload + head, tail);
        second += tail;
        record->type = 0x17;
        record->majorVersion = 3;
        record->minorVersion = 0;
        record->lengthHigh = chunk >> 8;
        record->lengthLow = chunk;
        unsigned int length = func_ov031_0220963c(context, record);
        if (func_ov031_022037a8(record, length, 0, 0, connection) < length) chunk = 0;
        data_ov031_0224c9c0(record);
        remaining -= chunk;
        sent += chunk;
    } while (remaining != 0 && chunk != 0);
    return sent;
}

// USA: func_ov031_0220a87c
extern "C" ARM int func_ov031_0220a87c(const unsigned char* first, unsigned int firstLength, const unsigned char* second, unsigned int secondLength, Connection0220a87c* connection) {
    return SendRecords0220a87c(first, firstLength, second, secondLength, connection, connection->context);
}
