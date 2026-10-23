#include <globaldefs.h>
#include "NitroSDK/Filesystem/FileAccessor.h"
#include "NitroSDK/Filesystem/LowNitroHandle.h"

struct Struct_0203a974
{
    char unknown_0_[0x30];
    int unknown_30_;
    NitroVM unknown_34_;
    NitroFileAccessor unknown_7c_;
    void* unknown_84_;
    unsigned int unknown_88_;
    void* unknown_8c_;
    unsigned int unknown_90_;
};

extern struct Struct_0203a974* data_02110370;
extern "C" int func_020bd190(struct Struct_0203a974* arg0, int arg1, int arg2);

// USA: func_020bd110
extern "C" ARM int func_020bd110(struct Struct_0203a974* arg0, const char* arg1, int arg2, int arg3)
{
    arg0->unknown_8c_ = 0;
    arg0->unknown_84_ = 0;
    arg0->unknown_88_ = 0;
    arg0->unknown_90_ = 0;

    int var0 = CreateFileAccessor(&arg0->unknown_7c_, arg1);
    if (var0 == 0)
        return var0;

    NitroVM_Initialize(&arg0->unknown_34_);

    var0 = NitroVM_PrepareReadFileByID(&arg0->unknown_34_, arg0->unknown_7c_);
    if (var0 == 0)
        return var0;

    arg0->unknown_30_ = 1;

    int var1 = func_020bd190(arg0, arg2, arg3);
    if (var1 != 0)
    {
        data_02110370 = arg0;
        return (int)&data_02110370;
    }

    return var1;
}
