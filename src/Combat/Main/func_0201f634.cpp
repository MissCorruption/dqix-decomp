#include <globaldefs.h>
#include "Resource/Script.h"
#include "Combat/CombatScriptContext.h"

#include "std_library_functions.h"

struct Struct_0201c3a4;

// USA: func_0201f634
extern "C" ARM int func_0201f634(const Script::Parameter* arg0) {
    const Script::Parameter* var0 = arg0;
    strcpy(data_020fdc4c.unknown_10_ + 0x548, var0[0].ToString());
    return 1;
}
