// USA: func_ov009_02184d70
#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "Resource/CharacterCreationUI.h"

extern "C" int func_020e0434(Struct_0201099c_3*, int);

extern "C" ARM void func_ov009_02184d70(void* arg0) {
    Struct_ov009_021842a0* var0 = (Struct_ov009_021842a0*)arg0;
    if (!(var0->unknown_d9c_ & 0x80) || var0->unknown_d94_ == 2)
        return;
    BackgroundLoader* var1 = BackgroundLoader::GetInstance();
    unsigned char var2 = var0->unknown_d94_;
#if !defined(jpn)
    int var3 = var0->unknown_c58_;
#endif
    if (var2 == 0) {
#if defined(jpn)
        int var3 = var0->unknown_c58_;
#endif
        short var4 = var3;
        if ((var3 == 3) | ((var3 == 2) | (var3 == 5)))
            var4 = var0->unknown_da3_ * 100 + var4;
#if defined(jpn)
        const char* var5 = (const char*)func_020e0434(&var0->unknown_e0_, var4);
        var0->unknown_d90_ = var1->QueueLoadFile(var5, 0);
#else
        const char* var6 = (const char*)func_020e0434(&var0->unknown_e0_, (short)(var4 + 50));
        const char* var7 = (const char*)func_020e0434(&var0->unknown_e0_, var4);
        var0->unknown_d90_ = var1->QueueLoadFileInGP2(var7, var6, 0);
#endif
        var0->unknown_d94_ = 1;
    } else if (var2 == 1) {
        if (var1->GetTaskStatus(var0->unknown_d90_) != 0)
            var0->unknown_d94_ = 2;
    }
}
