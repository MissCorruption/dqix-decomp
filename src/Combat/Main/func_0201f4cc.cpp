#include <globaldefs.h>
#include "Resource/Script.h"
#include "Combat/CombatScriptContext.h"

struct Variant02030b0c;

// USA: func_0201f4cc
extern "C" ARM int func_0201f4cc(Script::Parameter* args) {
    const Script::Parameter* parameters = args;
    int v1 = parameters[0].ToInt();
    int v2 = parameters[1].ToInt();
    char* obj = data_020fdc4c.currentObject;
    *(int*)(obj + 0x18) = v1;
    *(int*)(obj + 0x1c) = v2;
    return 1;
}
