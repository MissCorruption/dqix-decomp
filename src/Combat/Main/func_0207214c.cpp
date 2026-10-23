#include <globaldefs.h>
extern "C" struct SortNode0207214c* func_0207218c(struct Container0207218c*, int);

struct SortNode0207214c {
    unsigned char pad0[0x18];
    short sortKey;
    unsigned char pad1a[2];
    struct SortNode0207214c* next;
};

struct SortList0207214c {
    struct SortNode0207214c* head;
};


// USA: func_0207214c
extern "C" ARM void func_0207214c(struct SortList0207214c* list) {
    struct SortNode0207214c* node;
    list->head = func_0207218c((struct Container0207218c*)(list), (int)(-1));
    if (list->head == NULL) return;
    node = list->head;
    while (node != NULL) {
        struct SortNode0207214c* next = func_0207218c((struct Container0207218c*)(list), (int)(node->sortKey));
        node->next = next;
        node = next;
    }
}
