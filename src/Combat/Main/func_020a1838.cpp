#include <globaldefs.h>
#include "NitroSDK/Filesystem/OverlayFSManagement.h"

struct Struct_01ffd34c;
struct Mutex;
void ZeroInitializeMutex(Mutex*);
extern "C" void func_020a18d4(char* arg0);

extern struct Struct_01ffd34c data_01ffd34c;
extern unsigned char data_01ffd344;
extern unsigned char data_01ffd340;
extern char data_01ffd364[8][6];
extern struct OverlayMetadata data_01ffd394[35];
extern int data_01ffd348;

// USA: func_020a1838
extern "C" ARM void func_020a1838(void) {
    unsigned int var0;
    unsigned int var1;

    ZeroInitializeMutex((Mutex*)&data_01ffd34c);
    data_01ffd344 = 1;
    data_01ffd340 = 0;

    for (var0 = 0; var0 < 8; var0++) {
        func_020a18d4(data_01ffd364[var0]);
    }

    for (var1 = 0; var1 < 0x23; var1++) {
        LoadOverlayMetadata(&data_01ffd394[var1], false, var1);
    }

    data_01ffd348 = 0;
}
