#include <globaldefs.h>

extern char data_ov016_0219d0c0[];

#if defined(jpn)
static const int bankSelectionOffset = 0x34;
#else
static const int bankSelectionOffset = 0x18;
#endif

// USA: func_ov016_0218be5c
extern "C" ARM int func_ov016_0218be5c(void) {
    int var0 = *(int*)(data_ov016_0219d0c0 + bankSelectionOffset);
    if (var0 == 0) {
        return 0x6820000;
    }
    return 0x6800000;
}
