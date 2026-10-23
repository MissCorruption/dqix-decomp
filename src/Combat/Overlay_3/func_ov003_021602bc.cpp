#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_021602bc_48 = 0xc };
enum { Enum_ov003_021602bc_916 = 0x27c };
enum { Enum_ov003_021602bc_552 = 0x110 };
enum { Enum_ov003_021602bc_17244 = 0x413c };
#else
enum { Enum_ov003_021602bc_48 = 0x30 };
enum { Enum_ov003_021602bc_916 = 0x394 };
enum { Enum_ov003_021602bc_552 = 0x228 };
enum { Enum_ov003_021602bc_17244 = 0x435c };
#endif

#include "std_library_functions.h"
#include "Memory/SafeAllocator.h"
#include "Resource/GameResources.h"

struct Struct_ov003_021602bc { char unknown_0_[4][Enum_ov003_021602bc_48]; };

// USA: func_ov003_021602bc
extern "C" ARM void func_ov003_021602bc(char* arg0) {
    char* var0 = (char*)GetGameResources();

    for (int var1 = 0; var1 < 4; var1++) {
        (*(void***)(arg0 + Enum_ov003_021602bc_916))[var1] = 0;
        void* var2 = ((SafeAllocator*)(arg0 + Enum_ov003_021602bc_552))->Allocate(Enum_ov003_021602bc_48);
        (*(void***)(arg0 + Enum_ov003_021602bc_916))[var1] = var2;
        void* var3 = (*(void***)(arg0 + Enum_ov003_021602bc_916))[var1];
        memset(var3, 0, Enum_ov003_021602bc_48);

        Struct_ov003_021602bc* var4 = (Struct_ov003_021602bc*)(var0 + Enum_ov003_021602bc_17244);
        char* var5 = var4->unknown_0_[var1];
        if (var5 != 0) {
            void* var6 = (*(void***)(arg0 + Enum_ov003_021602bc_916))[var1];
#if defined(jpn)
            memcpy(var6, var5, 0xc);
#else
            sprintf((char*)var6, var5);
#endif
        }
    }
}
