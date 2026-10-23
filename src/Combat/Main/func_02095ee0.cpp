#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "Resource/Script.h"

struct Struct_020534ac;

struct Struct_0201f040;

struct Struct_0201f040_2;
struct Struct_02013fb4;

struct Struct_0201f040_3;

struct Struct_02109404_8 {
    char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    char unknown_3_[3];
    unsigned short unknown_6_;
};
extern struct Struct_02109404_8 data_02109404;
extern char data_020f13fc[];

struct Struct_02095ee0 {
    char unknown_0_[0xa8];
    int unknown_a8_;
    char unknown_ac_[0x4c4 - 0xac];
    int unknown_4c4_;
};

// USA: func_02095ee0
extern "C" ARM int func_02095ee0(struct Struct_02095ee0* arg0) {
    char var0[0x430];
    int var1 = (int)BackgroundLoader::GetInstance();
    int var2, var3;
    int var4;

    if (arg0->unknown_4c4_ < 0) {
        return -1;
    }

    if (((BackgroundLoader*)(var1))->GetTaskStatus((int)(arg0->unknown_4c4_)) != 0) {
        ((BackgroundLoader*)((struct Struct_020534ac*)var1))->GetLoadedFileByID((int)(arg0->unknown_4c4_), (void**)(&var2), (unsigned int*)(&var3));

        data_02109404.unknown_6_ = 0;
        data_02109404.unknown_1_ = 0;

        if (arg0->unknown_a8_ == 0) {
            ((BackgroundLoader*)(var1))->RemoveTask((int)(arg0->unknown_4c4_));
            arg0->unknown_4c4_ = -1;
            return 2;
        }

        ((Script*)((struct Struct_0201f040*)var0))->Initialize();
        ((Script*)var0)->SetOpcodeLookup((Script::OpcodeLookupEntry*)data_020f13fc);
        ((Script*)((struct Struct_0201f040_2*)var0))->Load((struct Struct_02013fb4*)var2, var3);
        ((Script*)((struct Struct_0201f040_3*)var0))->Execute();
        ((BackgroundLoader*)(var1))->RemoveTask((int)(arg0->unknown_4c4_));
        arg0->unknown_4c4_ = -1;

        for (var4 = 0; var4 < data_02109404.unknown_6_; var4++) {}
        return 1;
    }

    return (((BackgroundLoader*)(var1))->GetTaskStatus((int)(arg0->unknown_4c4_)) == -1) ? 2 : 0;
}
