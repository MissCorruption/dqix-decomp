#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_02013fb4;

extern int data_020ef2bc;
extern Script::OpcodeLookupEntry data_020ef2c0[];

struct Struct_020fdc14_5 {
    int unknown_0_;
    void* unknown_4_;
    int unknown_8_;
};
extern struct Struct_020fdc14_5 data_020fdc14;

// USA: func_0201c724
extern "C" ARM void func_0201c724(int arg0, void* arg1, struct Struct_02013fb4* arg2, int arg3) {
    Script var0;
    data_020fdc14.unknown_4_ = arg1;
    data_020ef2bc = arg0;
    var0.Initialize();
    var0.SetOpcodeLookup(data_020ef2c0);
    var0.Load(arg2, arg3);
    var0.Execute();
    data_020fdc14.unknown_4_ = 0;
    data_020ef2bc = -1;
}
