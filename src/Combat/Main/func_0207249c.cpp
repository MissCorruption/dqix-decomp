#include <globaldefs.h>

#include "Resource/Script.h"

struct Struct_02013fb4;
extern "C" int data_02108da8;
extern Script::OpcodeLookupEntry data_020f0ca0[];

// USA: func_0207249c
extern "C" ARM int func_0207249c(int arg0, int arg1, Struct_02013fb4* arg2, int arg3) {
    *((int*)((char*)&data_02108da8 + 4)) = arg0;
    *((int*)((char*)&data_02108da8 + 0)) = arg1;
    Script var0;
    var0.Initialize();
    var0.SetOpcodeLookup(data_020f0ca0);
    var0.Load(arg2, arg3);
    var0.Execute();
}
