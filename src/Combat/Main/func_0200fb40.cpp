#if defined(jpn)
#define SUBSTRUCT_LAST_BYTE_OFFSET 0x7ca6
#else
#define SUBSTRUCT_LAST_BYTE_OFFSET 0x7f7a
#endif
#if defined(jpn)
#define SUBSTRUCT_ARRAY_OFFSET 0x7ca2
#else
#define SUBSTRUCT_ARRAY_OFFSET 0x7f76
#endif
#if defined(jpn)
#define SUBSTRUCT_BYTE1_OFFSET 0x7ca1
#else
#define SUBSTRUCT_BYTE1_OFFSET 0x7f75
#endif
#if defined(jpn)
#define SUBSTRUCT_BYTE0_OFFSET 0x7ca0
#else
#define SUBSTRUCT_BYTE0_OFFSET 0x7f74
#endif
#include <globaldefs.h>

// USA: func_0200fb40
extern "C" ARM void func_0200fb40(void* arg0) {
    char* var0 = (char*)arg0;
    unsigned char var1;
    var0[SUBSTRUCT_BYTE0_OFFSET] = 0;
    var0[SUBSTRUCT_BYTE1_OFFSET] = 0;
    for (var1 = 0; var1 < 4; var1++) {
        (var0 + var1)[SUBSTRUCT_ARRAY_OFFSET] = 0;
    }
    var0[SUBSTRUCT_LAST_BYTE_OFFSET] = 0;
}
