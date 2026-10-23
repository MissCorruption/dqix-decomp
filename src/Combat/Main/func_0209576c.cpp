#include <globaldefs.h>
#include "Resource/QuestScriptOwner.h"
#include "Resource/Script.h"

unsigned char data_02109406;
unsigned char data_02109404;
unsigned char data_02109405;
unsigned char data_02109408;
unsigned char data_02109407;
unsigned short data_0210940c;
unsigned short data_0210940a;
SafeAllocator* data_02109410;
unsigned char* data_02109414;

extern short data_020f13d8;
extern Script::OpcodeLookupEntry data_020f1444[];

// USA: func_0209576c
extern "C" ARM void func_0209576c(Struct_020956b8* arg0, SafeAllocator* arg1,
                                 const void* arg2, unsigned int arg3, unsigned char arg4) {
    if (arg1 != NULL && arg2 != NULL && arg3 != 0) {
        data_02109410 = arg1;
        arg0->unknown_a4_ = NULL;
        data_02109404 = arg4;
        data_02109406 = 0;
        data_020f13d8 = -1;
        Script var0;
        var0.Initialize();
        var0.SetOpcodeLookup(data_020f1444);
        var0.Load(arg2, arg3);
        var0.Execute();
    }
}
