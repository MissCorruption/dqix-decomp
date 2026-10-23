#include <globaldefs.h>
#include "Resource/Script.h"
#include "Combat/BufferedScriptResult.h"

#if defined(jpn)
#define data_020f0d30 data_020f0e28
#endif

extern Struct_02074060* data_02108dd8;
extern int data_020f0d2c;
extern Script::OpcodeLookupEntry data_020f0d30[];

// USA: func_0207416c
extern "C" ARM int func_0207416c(Struct_02074060* arg0, int arg1, const void* arg2, unsigned int arg3) {
    Script var0;
    data_02108dd8 = arg0;
    data_020f0d2c = arg1;
    var0.Initialize();
    var0.SetOpcodeLookup(data_020f0d30);
    var0.Load(arg2, arg3);
    var0.Execute();
    return 1;
}
