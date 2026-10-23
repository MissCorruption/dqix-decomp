#include <globaldefs.h>
#include "Resource/Script.h"
#if defined(jpn)
#include "NitroSDK/Filesystem/NarcHandle.h"
#include "NitroSDK/Filesystem/LowNitroHandle.h"
#include "NitroSDK/Filesystem/FileAccessor.h"
extern const char data_ov017_021d8489[];
extern const char data_ov017_021d848d[];
#endif

struct Struct_ov017_021d8438 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    int unknown_4_[];
};
extern struct Struct_ov017_021d8438 data_ov017_021d8438;

struct Struct_ov017_021d7c54_5 {
    signed char unknown_0_;
    signed char unknown_1_;
};
extern struct Struct_ov017_021d7c54_5 data_ov017_021d7c54;

#if defined(jpn)
extern "C" Script::OpcodeLookupEntry data_ov017_021d8434[];
#else
extern "C" Script::OpcodeLookupEntry data_ov017_021d7c58[];
#endif

// USA: func_ov017_021ba810
extern "C" ARM int func_ov017_021ba810(const void* arg0, unsigned int arg1, int arg2, int arg3, int arg4, int arg5, int arg6) {
#if defined(jpn)
    NarcHandle var0;
    NitroVM var1;
    char var2[0x50];
#endif
    Script var3;
#if defined(jpn)
    char var4[4];
#endif
    if (arg2 < 0 || arg2 > 999) {
        return 0;
    }
#if defined(jpn)
    if (!var0.Initialize(data_ov017_021d8489, static_cast<const unsigned char*>(arg0))) return 0;
    NitroVM_Initialize(&var1);
    unsigned int var5;
    bool var6;
    unsigned int var7 = 0;
    sprintf(var4, data_ov017_021d848d, arg2);
    var6 = false;
    while (PrepareReadFileInNARCByID(&var1, &var0, var7)) {
        NitroVM_WriteOutFilePath(&var1, var2, sizeof(var2));
        var5 = var1.fileInfo.unknown_8_ - var1.fileInfo.unknown_4_;
        NitroVM_FinishRead(&var1);
        if (strstr(var2, var4)) {
            var6 = true;
            break;
        }
        ++var7;
    }
    if (!var6) {
        var0.Destroy();
        return 0;
    }
    arg0 = var0.GetFileByIndex(var7);
#endif
    data_ov017_021d8438.unknown_4_[0] = arg3;
    data_ov017_021d8438.unknown_4_[6] = arg2;
    data_ov017_021d8438.unknown_4_[1] = arg4;
    data_ov017_021d8438.unknown_4_[3] = 0;
    data_ov017_021d8438.unknown_4_[4] = 0;
    data_ov017_021d8438.unknown_4_[5] = arg5;
    data_ov017_021d8438.unknown_4_[7] = arg6;
    data_ov017_021d8438.unknown_2_ = 0;
    data_ov017_021d7c54.unknown_0_ = -1;
    data_ov017_021d8438.unknown_0_ = 0;
    data_ov017_021d8438.unknown_1_ = 0;
    data_ov017_021d8438.unknown_4_[2] = 0;
    data_ov017_021d7c54.unknown_1_ = -1;
    var3.Initialize();
#if defined(jpn)
    var3.SetOpcodeLookup(data_ov017_021d8434);
#else
    var3.SetOpcodeLookup(data_ov017_021d7c58);
#endif
#if defined(jpn)
    var3.Load(arg0, var5);
#else
    var3.Load(arg0, arg1);
#endif
    var3.Execute();
#if defined(jpn)
    var0.Destroy();
#endif
    if (data_ov017_021d8438.unknown_4_[3] != 0) {
        return data_ov017_021d8438.unknown_4_[3];
    }
    return data_ov017_021d8438.unknown_4_[4];
}
