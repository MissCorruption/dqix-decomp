#include <globaldefs.h>

#include "Combat/NodeLookup.h"

// USA: func_0206db20
extern "C" ARM struct NodeDB20* func_0206db20(void* base, int key) {
    struct NodeDB20* node = *(struct NodeDB20**)base;
    while (node != 0) {
        if (node->id == key) {
            return node;
        }
        node = node->next;
    }
    return 0;
}
