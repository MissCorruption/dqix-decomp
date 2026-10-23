#include <globaldefs.h>

struct EntryTable0209bd94;
struct Entry0209be28 {
    unsigned short key;
    unsigned short count;
    int field_4;
    unsigned char sub[0x18];
};
extern "C" struct Entry0209be28* func_0209bd94(struct EntryTable0209bd94*, int);

// USA: func_0209be28
extern "C" ARM void func_0209be28(struct EntryTable0209bd94* table, int key, int* value) {
    struct Entry0209be28* p = func_0209bd94(table, key);
    if (p != NULL) {
        p->field_4 = *value;
    }
}
