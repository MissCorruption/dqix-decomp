#include <globaldefs.h>

extern "C" void* func_02055624(void* obj);
extern "C" void* func_0205560c(void* obj);

struct Node02058564 {
    unsigned char pad[0x1ec];
    struct Node02058564* next;
};

struct NodeList02058564 {
    struct Node02058564* head;
    int count;
};

// USA: func_02058564
extern "C" ARM void func_02058564(struct NodeList02058564* list) {
    struct Node02058564* node;
    if (list->count <= 0) return;
    node = list->head;
    while (node != NULL) {
        func_02055624(node);
        func_0205560c(node);
        node = node->next;
    }
}
