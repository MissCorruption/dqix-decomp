#include <globaldefs.h>

extern "C" char* func_0204673c(char* records, char* path);

struct NamedRecordHeader {
    char name[0x40];
    unsigned int payloadOffset;
    unsigned int payloadLength;
    unsigned int recordStride;
};

// USA: func_020467c0
extern "C" ARM char* func_020467c0(void* records, char* path, unsigned int* outSize) {
    NamedRecordHeader* record = (NamedRecordHeader*)func_0204673c((char*)records, path);
    if (record == NULL) return NULL;
    if (outSize != NULL) *outSize = record->payloadLength;
    return (char*)record + record->payloadOffset;
}
