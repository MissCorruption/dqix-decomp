#include <globaldefs.h>
extern "C" struct SortNode02097628* func_02097668(struct Header02097668*, int);

struct SortNode02097628 { struct SortNode02097628* next; char pad[0x16]; short key; };

// USA: func_02097628
extern "C" ARM void func_02097628(void* c) {
    struct SortNode02097628* p = *(struct SortNode02097628**)c = func_02097668((struct Header02097668*)(c), (int)(-1));
    if (p == 0) return;
    while (p != 0) {
        struct SortNode02097628* next = func_02097668((struct Header02097668*)(c), (int)(p->key));
        p->next = next;
        p = next;
    }
}
