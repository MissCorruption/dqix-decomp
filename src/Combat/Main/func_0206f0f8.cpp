#include <globaldefs.h>
#include "Resource/MonsterDefinition.h"

// USA: func_0206f0f8
extern "C" ARM int func_0206f0f8(Header0206f0f8* header) {
    return header->count * sizeof(MonsterDefinition);
}
