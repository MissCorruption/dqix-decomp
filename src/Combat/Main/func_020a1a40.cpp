#include <globaldefs.h>
#include "NitroSDK/Mutex.h"
#include "Resource/ResourceMutex.h"
#include "NitroSDK/Filesystem/OverlayFSManagement.h"
#include "NitroSDK/Filesystem/FSInnerDefs.h"
#include "NitroSDK/Filesystem/FileAccessor.h"

extern "C" void func_020d9834(int arg0);
void NitroVM_Initialize(NitroVM* vm);
void DecompressAndStaticInitializeOverlay(const OverlayMetadata& overlay);
extern "C" int func_020a1ccc(unsigned int arg0);

extern volatile int data_01ffd348;
extern volatile unsigned char data_01ffd344;
extern volatile unsigned char data_01ffd340;
extern signed char data_01ffd364;
extern Mutex data_01ffd34c;
extern struct OverlayMetadata data_01ffd394[35];

extern int data_020e8f20[][2];

// USA: func_020a1a40
extern "C" ARM int func_020a1a40(unsigned int arg0) {
    int var0 = 0;
    int (*var1)[2];
    int var2;
    volatile signed char* var3;
    int var4;
    const OverlayMetadata* var5;
    NitroVM var6;
    bool var7;
    if (arg0 < 0x23) {
        var1 = data_020e8f20;
        var2 = data_01ffd348;
        var3 = &data_01ffd364 + var2 * 6;
        var4 = var3[var1[arg0][0]];
        if (var4 != (int)arg0) {
            func_020a1ccc(var4);
            while (data_01ffd340) {
                func_020d9834(0);
            }
            data_01ffd340 = 1;
            LockResourceMutex();
            var5 = &data_01ffd394[arg0];
            NitroVM_Initialize(&var6);
            var7 = LoadCompressedOverlay(*var5, &var6);
            UnlockResourceMutex();
            if (var7) {
                var0 = 0;
                for (;;) {
                    if (!GET_FLAG_BIT(var6.flags, NITROVM_FLAG_IN_HANDLE_QUEUE)) {
                        break;
                    }
                    func_020d9834(0);
                }
                LockResourceMutex();
                NitroVM_FinishRead(&var6);
                DecompressAndStaticInitializeOverlay(*var5);
                UnlockResourceMutex();
                data_01ffd340 = 0;
                if (data_01ffd344) {
                    LockMutex(&data_01ffd34c);
                }
                var3[var1[arg0][0]] = arg0;
                if (data_01ffd344) {
                    UnlockMutex(&data_01ffd34c);
                }
                var0 = 1;
            } else {
                data_01ffd340 = 0;
            }
        } else {
            var0 = 1;
        }
    }
    return var0;
}
