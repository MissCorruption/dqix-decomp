#include <globaldefs.h>
#include "Resource/GameResources.h"

extern "C" void func_ov017_021a6be4(unsigned char* arg0);
struct Struct_0201bdac_2;
struct Struct_0201bdac;
extern "C" void func_020469b4(struct Struct_0201bdac_2* arg0, struct Struct_0201bdac* arg1);

#if defined(jpn)
static const int kList=0x4ec, kNode=0x970, kFirst=0x41fe, kSecond=0x4200;
#else
static const int kList=0x6fc, kNode=0xb90, kFirst=0x44ae, kSecond=0x44b0;
#endif

// USA: func_ov017_021a6b9c
extern "C" ARM void func_ov017_021a6b9c(void* arg0, int arg1) {
    unsigned char* var0 = (unsigned char*)GetGameResources();
    unsigned char* var1 = *(unsigned char**)(var0 + 0x3000 + kList);
    unsigned char* var2 = *(unsigned char**)(var0 + 0x3000 + kNode);
    func_ov017_021a6be4(var2);
    var2[0x10] = arg1;
    func_020469b4((struct Struct_0201bdac_2*)var1, (struct Struct_0201bdac*)var2);
    *(unsigned short*)(var0 + kFirst) = 0;
    *(unsigned short*)(var0 + kSecond) = 0;
}
