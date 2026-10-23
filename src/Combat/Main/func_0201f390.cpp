#include <globaldefs.h>
#include "Resource/Script.h"
#include "Combat/CombatScriptContext.h"

struct Struct_0201c1c8;
extern "C" void func_02027b10(void* arg0, int arg1);

// USA: func_0201f390
extern "C" ARM int func_0201f390(Script::Parameter* arg0) {
    const Script::Parameter* var0 = arg0;
    int var1 = var0[0].ToInt();
    func_02027b10(data_020fdc4c.unknown_10_, var1);
    return 1;
}
