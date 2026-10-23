#include <globaldefs.h>

#if defined(jpn)
enum { Enum_0208e444_3290 = 0xa7a };
#else
enum { Enum_0208e444_3290 = 0xcda };
#endif
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"
#include "Resource/Script.h"
#include "Resource/GameResources.h"

struct Struct_0201c1c8;

struct Struct_02108fe4 {
    char unknown_0_[0xc];
    unsigned short* unknown_c_;
};
extern struct Struct_02108fe4 data_02108fe4;

// USA: func_0208e444
extern "C" ARM int func_0208e444(char* arg0) {
    unsigned char* var0 = (unsigned char*)GameState::GetInstance() + 0x5000;
    unsigned char var1 = var0[Enum_0208e444_3290];
    unsigned char var2 = (unsigned char)((Script::Parameter*)((Struct_0201c1c8*)arg0))->ToInt();
    arg0 += 8;
    if (var1 == var2) {
        SafeAllocator* var3 = (SafeAllocator*)(((int)GetGameResources()) + 0x1a0);
        int var4 = (int)var3->Allocate(0x20);
        data_02108fe4.unknown_c_ = (unsigned short*)var4;
        for (int var5 = 0; var5 < 0x10; var5++) {
            unsigned short var6 = (unsigned short)((Script::Parameter*)((Struct_0201c1c8*)arg0))->ToInt();
            arg0 += 8;
            *(unsigned short*)var4 = var6;
            var4 += 2;
        }
    }
    return 1;
}
