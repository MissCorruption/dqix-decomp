#include <globaldefs.h>
#include "Resource/Script.h"
#include "Combat/CombatScriptContext.h"

struct Struct_0201c1c8;

// USA: func_0201f844
extern "C" ARM int func_0201f844(Script::Parameter* arg0) {
    const Script::Parameter* var0 = arg0;
    int var1 = var0[0].ToInt();
    *(int*)(data_020fdc4c.unknown_10_ + 0x14) = var1;
    return 1;
}
