#include <globaldefs.h>
#include "NitroSDK/Memory.h"

#if defined(jpn)
#define func_020ca390 func_020cbe5c
#endif

extern "C" void func_020ca390(int a, void* b, unsigned int c);
extern "C" void func_ov031_0221bfe8(void* buf);
extern "C" void* func_ov031_0221b8e4(void* buf);

struct Region_0221bdb8 {
    unsigned char pad[0xe7];
    unsigned char flag;
    unsigned char pad2[8];
    unsigned char key[0x10];
};

// USA: func_ov031_0221bdb8
extern "C" ARM int func_ov031_0221bdb8(char* obj) {
    char buf[0x14];
    Region_0221bdb8* regions = (Region_0221bdb8*)obj;
    func_020ca390(0, obj, 0x400);
    for (int i = 0; i < 3; i++) {
        regions[i].flag = 0xff;
    }
    func_ov031_0221bfe8(buf);
    void* key = func_ov031_0221b8e4(buf);
    for (int k = 0; k < 2; k++) {
        VectorizedInvertedMemcpy(key, regions[k].key, 0xe);
    }
    return 0;
}
