#include <globaldefs.h>

#include "Resource/Script.h"

struct Struct_02013fb4;
extern "C" int data_02108ce0;
extern Script::OpcodeLookupEntry data_020f05f8[];

// USA: func_02064e2c
extern "C" ARM int func_02064e2c(int arg0, int arg1, int arg2, Struct_02013fb4* arg3, int arg4) {
    *((int*)((char*)&data_02108ce0 + 8)) = arg0;
    *((int*)((char*)&data_02108ce0 + 4)) = arg1;
    *((int*)((char*)&data_02108ce0 + 0)) = arg2;
    Script var0;
    var0.Initialize();
    var0.SetOpcodeLookup(data_020f05f8);
    var0.Load(arg3, arg4);
    var0.Execute();
    return 1;
}
