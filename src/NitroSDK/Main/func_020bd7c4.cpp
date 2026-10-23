#include <globaldefs.h>
#include "NitroSDK/Filesystem/NitroVM.h"

int NitroVM_ReadSync(NitroVM* vm, void* dst, int capacity);
int NitroVM_Seek(NitroVM* vm, int position, int whence);

struct Struct_020bd7c4 {
    unsigned long unknown_0_;
    unsigned long unknown_4_;
    void* unknown_8_;
    unsigned long unknown_c_;
};

struct Struct_020bd7c4_2 {
    unsigned long unknown_0_;
    unsigned long unknown_4_;
    unsigned long unknown_8_;
    Struct_020bd7c4 unknown_c_[1];
};

struct Struct_020bd7c4_3 {
    char unknown_0_[0x34];
    NitroVM unknown_34_;
    char unknown_7c_[8];
    Struct_020bd7c4_2* unknown_84_;
    void* unknown_88_;
    void* unknown_8c_;
    long unknown_90_;
};

extern Struct_020bd7c4_3* data_02110370;

// USA: func_020bd7c4
extern "C" ARM long func_020bd7c4(unsigned long arg0, void* arg1, long arg2, long arg3) {
    long var0;
    long var1;
    long var2;
    Struct_020bd7c4_3* var3;
    long var4;

    var3 = data_02110370;
    if (arg0 >= var3->unknown_84_->unknown_8_)
        return -1;

    const Struct_020bd7c4* var5 = &var3->unknown_84_->unknown_c_[arg0];

    var1 = var3->unknown_90_;
    if (var1 == 0)
        var1 = arg2;

    var0 = 0;
    if (var0 < arg2) do {
        var2 = arg2 - var0;
        if (var2 > var1)
            var2 = var1;
        if (var2 > var5->unknown_4_ - arg3)
            var2 = (long)(var5->unknown_4_ - arg3);
        if (var2 == 0)
            break;

        if (!NitroVM_Seek(&var3->unknown_34_, (long)(var5->unknown_0_ + arg3), 0))
            return -1;

        var4 = NitroVM_ReadSync(&var3->unknown_34_, arg1, var2);
        if (var4 < 0)
            return var4;

        var0 += var4;
        arg3 += var4;
        arg1 = (unsigned char*)arg1 + var4;
    } while (var0 < arg2);
    return var0;
}
