#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_0201c1c8 { int unknown_0_; int unknown_4_; };
extern "C" void* func_0207f100(unsigned char* arg0, short arg1);

struct Struct_0207eef8 {
    unsigned char unknown_0_[4];
    unsigned short* unknown_4_;
    unsigned char unknown_8_[0xc];
    unsigned char unknown_14_;
};
struct Struct_0207eef8_2 {
    struct Struct_0207eef8* unknown_0_;
    short unknown_4_;
    short unknown_6_;
};
extern void* data_02108ed8[2];

// USA: func_0207eef8
extern "C" ARM int func_0207eef8(struct Struct_0201c1c8* arg0) {
    struct Struct_0207eef8_2* var0 = (struct Struct_0207eef8_2*)data_02108ed8[1];
    struct Struct_0207eef8* var1 = (struct Struct_0207eef8*)func_0207f100((unsigned char*)var0, (short)(var0->unknown_4_ - 1));
    unsigned short* var2 = var1->unknown_4_;
    unsigned char var3 = 0;
    while (var3 < var1->unknown_14_) {
        var2[var3] = (unsigned short)((Script::Parameter*)arg0)->ToInt();
        arg0++;
        var3++;
    }
    return 1;
}
