#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_ov015_0218b6bc;
extern "C" void func_ov015_0218b9ac(Struct_ov015_0218b6bc* arg0, int arg1);

extern Struct_ov015_0218b6bc* data_ov015_02194560;

// USA: func_ov015_0218b6bc
extern "C" ARM int func_ov015_0218b6bc(Script::Parameter* arg0, int arg1) {
    Struct_ov015_0218b6bc* var0 = data_ov015_02194560;
    func_ov015_0218b9ac(var0, arg0->ToInt());
    return 1;
}
