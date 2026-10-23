#include <globaldefs.h>
#include "Resource/GameResources.h"

#if defined(jpn)
#define func_ov017_021a7c28 func_ov017_021a85b8
#endif

struct Struct_02015438;
extern "C" int func_02046b24(Struct_02015438** arg0);
struct Struct_0201bdac_2;
struct Struct_0201bdac;
extern "C" void func_020469b4(Struct_0201bdac_2* arg0, Struct_0201bdac* arg1);
extern "C" void func_ov017_021a7adc(char* arg0);
extern "C" void func_ov017_021a7c28(unsigned char* arg0, unsigned char* arg1);

// USA: func_ov017_021a7a74
extern "C" ARM void func_ov017_021a7a74(void* arg0, unsigned char* arg1) {
#if defined(jpn)
 enum {Enum_ov017_021a7a74_1788=0x4ec, Enum_ov017_021a7a74_2828=0x8ec, Enum_ov017_021a7a74_2968=0x978};
#else
 enum {Enum_ov017_021a7a74_1788=0x6fc, Enum_ov017_021a7a74_2828=0xb0c, Enum_ov017_021a7a74_2968=0xb98};
#endif
    int var0 = (int)GetGameResources();
    Struct_02015438** var1 = *(Struct_02015438***)(var0 + 0x3000 + Enum_ov017_021a7a74_1788);
    int var2 = func_02046b24(var1);
    if (var2 == 0x1a) {
        int* var3 = *(int**)(var0 + 0x3000 + Enum_ov017_021a7a74_2828);
        if (*(int*)((char*)var3 + 0x64) != 0) {
            return;
        }
    }
    unsigned char* var4 = *(unsigned char**)(var0 + 0x3000 + Enum_ov017_021a7a74_2968);
    func_ov017_021a7adc((char*)var4);
    func_ov017_021a7c28(var4, arg1);
    func_020469b4((Struct_0201bdac_2*)var1, (Struct_0201bdac*)var4);
}
