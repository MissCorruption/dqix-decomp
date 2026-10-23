#include <globaldefs.h>

#if defined(jpn)
#define func_02046c78 func_02047a98
#endif

struct CountNode {
    char pad[4];
    struct CountNode* next;
};

struct CountHead {
    struct CountNode* first;
};

// USA: func_02046c78
extern "C" ARM int func_02046c78(struct CountHead* head) {
    int count = 0;
    struct CountNode* n = head->first;
    while (n != 0) {
        n = n->next;
        count++;
    }
    return count;
}
