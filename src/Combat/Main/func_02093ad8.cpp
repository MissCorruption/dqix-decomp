#include <globaldefs.h>

struct CopyPayload {
#if defined(jpn)
    char data[11];
#else
    char data[48];
#endif
};

struct CopyableRecord {
    CopyPayload payload;
#if defined(jpn)
    unsigned char unknownB;
#endif
    short requestId;
    signed char partySlot;
    unsigned char flags;
};

extern "C" void func_02093980(char* storage);
extern "C" void func_02093b54(CopyableRecord* destination, CopyableRecord* source);

// USA: func_02093ad8
extern "C" ARM void func_02093ad8(void* unused, CopyableRecord* source, CopyableRecord* destination, int count) {
    int i;
    for (i = 0; i < 8; i++) {
        func_02093980((char*)(destination + i));
    }
    int j;
    for (j = 0; j < count; j++) {
        func_02093b54(destination + j, source + j);
    }
    int k;
    for (k = 0; k < 8; k++) {
        func_02093980((char*)(source + k));
    }
}
