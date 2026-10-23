#include <globaldefs.h>

struct Node021df5cc {
    char pad0[8];
    struct Node021df5cc* next;
};

// USA: func_ov025_021df5cc
extern "C" ARM struct Node021df5cc* func_ov025_021df5cc(struct Node021df5cc* node) {
    struct Node021df5cc* n;
    while ((n = node->next) != NULL) {
        node = n;
    }
    return node;
}
