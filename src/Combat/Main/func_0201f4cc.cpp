#include <globaldefs.h>
#include "Resource/Script.h"
#include "Combat/CombatScriptContext.h"

struct Struct_0201c1c8;

// USA: func_0201f4cc
extern "C" ARM int func_0201f4cc(Script::Parameter* arg0) {
    const Script::Parameter* var0 = arg0;
    int var1 = var0[0].ToInt();
    int var2 = var0[1].ToInt();
    char* var3 = data_020fdc4c.unknown_10_;
    *(int*)(var3 + 0x18) = var1;
    *(int*)(var3 + 0x1c) = var2;
    return 1;
}
