// KEEP-NAME
#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Resource/Script.h"
#include "Combat/ScriptElementList.h"

#if defined(jpn)
#define data_020f121c data_020f12ec
#endif

extern Script::OpcodeLookupEntry data_020f121c[];

// USA: func_0208d860
extern "C" ARM void func_0208d860(Struct_0208d550* arg0, SafeAllocator* arg1,
                                                const void* arg2, unsigned int arg3,
                                                const short* arg4, short arg5,
                                                unsigned short arg6) {
    if (arg1 != NULL && arg2 != NULL && arg3 != 0) {
        data_02108fc0.unknown_4_ = arg0;
        data_02108fc0.unknown_4_->unknown_8_ = arg4;
        data_02108fc0.unknown_4_->unknown_c_ = arg5;
        data_02108fc0.unknown_4_->unknown_e_ = arg6;
        data_02108fc0.unknown_0_ = arg1;
        Script var0;
        var0.Initialize();
        var0.SetOpcodeLookup(data_020f121c);
        var0.Load(arg2, arg3);
        var0.Execute();
    }
}
