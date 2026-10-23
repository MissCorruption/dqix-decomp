#include <globaldefs.h>
#include "World/BmdjScriptNode.h"

// USA: func_02013454
extern "C" ARM void func_02013454(BmdjScriptNode* node) {
    node->unknown0 = -1;
    node->unknown40 = 0;
    node->elements = NULL;
    node->next = NULL;
    func_0201f01c(&node->scriptState);
    node->position.x = 0;
    node->position.y = 0;
    node->position.z = 0;
}
