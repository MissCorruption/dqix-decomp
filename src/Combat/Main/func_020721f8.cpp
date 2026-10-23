#include <globaldefs.h>
extern "C" struct SortNode020721f8* func_02072238(struct Container02072238*, int);

struct SortNode020721f8 {
    unsigned char pad0[0x1a];
    short sortKey;
    struct SortNode020721f8* next;
};

struct SortList020721f8 {
    struct SortNode020721f8* head;
};


// USA: func_020721f8
extern "C" ARM void func_020721f8(struct SortList020721f8* list) {
    struct SortNode020721f8* node;
    list->head = func_02072238((struct Container02072238*)(list), (int)(-1));
    if (list->head == NULL) return;
    node = list->head;
    while (node != NULL) {
        struct SortNode020721f8* next = func_02072238((struct Container02072238*)(list), (int)(node->sortKey));
        node->next = next;
        node = next;
    }
}
