#include <globaldefs.h>
#include "NitroSDK/Filesystem/OverlayFSManagement.h"
#include "Resource/ResourceMutex.h"
#include "NitroSDK/Mutex.h"

extern "C" int func_020a1bb4(unsigned int arg0);
extern "C" void func_020d9834(int arg0);
bool LoadCompressedOverlay(const OverlayMetadata& overlay);
void DecompressAndStaticInitializeOverlay(const OverlayMetadata& overlay);

extern volatile int data_01ffd348;
struct Struct_01ffd364 {
    volatile signed char unknown_0_[6];
};
extern Struct_01ffd364 data_01ffd364[8];
extern volatile unsigned char data_01ffd340;
extern volatile unsigned char data_01ffd344;
extern Mutex data_01ffd34c;
extern OverlayMetadata data_01ffd394[35];

struct Struct_020e8f20_2 {
    int unknown_0_;
    int unknown_4_;
};
extern Struct_020e8f20_2 data_020e8f20[35];

// USA: func_020a1940
extern "C" ARM int func_020a1940(int arg0) {
    int var0 = 0;
    if ((unsigned int)arg0 < 35) {
        Struct_020e8f20_2* var1;
        int var2 = data_01ffd348;
        var1 = data_020e8f20;
        Struct_01ffd364* const var3 = &data_01ffd364[var2];
        int var4 = var1[arg0].unknown_0_;
        signed char var5 = var3->unknown_0_[var4];
        if (var5 != arg0) {
            func_020a1bb4(var5);
            while (data_01ffd340 != 0) {
                func_020d9834(0);
            }
            data_01ffd340 = 1;
            LockResourceMutex();
            OverlayMetadata* const var6 = data_01ffd394;
            LoadCompressedOverlay(var6[arg0]);
            DecompressAndStaticInitializeOverlay(var6[arg0]);
            UnlockResourceMutex();
            data_01ffd340 = 0;
            if (data_01ffd344 != 0) {
                LockMutex(&data_01ffd34c);
            }
            var3->unknown_0_[var1[arg0].unknown_0_] = (signed char)arg0;
            if (data_01ffd344 != 0) {
                UnlockMutex(&data_01ffd34c);
            }
            var0 = 1;
        } else {
            var0 = 1;
        }
    }
    return var0;
}
