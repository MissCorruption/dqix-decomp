#include <globaldefs.h>

struct Node02169b54 { int id; struct Node02169b54* next; };

// USA: func_ov000_02169b54
extern "C" ARM struct Node02169b54* func_ov000_02169b54(struct Node02169b54* node, int id) {
    while (node) {
        if (node->id == id) return node;
        node = node->next;
    }
    return 0;
}
