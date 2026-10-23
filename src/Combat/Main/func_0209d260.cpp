#include <globaldefs.h>
extern "C" void* func_02094d6c(void);

extern "C" int func_ov017_021d60f4(void*);
struct FindEntryById02096134Table;
struct FindEntryById02096134Elem;
extern "C" struct FindEntryById02096134Elem* func_02096134(struct FindEntryById02096134Table*, int);

// USA: func_0209d260
extern "C" ARM int func_0209d260(void* arg) {
    void* table = func_02094d6c();
    if (table == NULL) return 0;
    unsigned int* entry = (unsigned int*)func_02096134((struct FindEntryById02096134Table*)table, func_ov017_021d60f4(arg));
    if (entry == NULL) return 0;
    *entry |= 0x4000;
    return 1;
}
