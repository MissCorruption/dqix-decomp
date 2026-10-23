#include <globaldefs.h>
#include <Combat/Overlay31EntryLookup.h>
#include <NitroSDK/NSBXX/RenderCommands_Common.h>

#if defined(jpn)
#define func_020ca408 func_020cbed4
#endif

extern "C" int func_ov031_0220eb88(int);
extern "C" int func_ov031_0220eb30(void);

// USA: func_ov031_0221efe8
extern "C" THUMB int func_ov031_0221efe8(unsigned char* arg0, int arg1) {
    func_ov031_0220eb88(1);
    int var0 = func_ov031_0220eb30();
    if (var0 > 0) {
        int var1 = 0;
        if (var1 < var0) do {
            if (var1 >= arg1) break;
            func_020ca408(func_ov031_0220ec04((unsigned short)var1), arg0, 0xc0);
            ++var1;
            arg0 += 0xc0;
        } while (var1 < var0);
    }
    func_ov031_0220eb88(0);
    return var0;
}
