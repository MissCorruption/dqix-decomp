#include <globaldefs.h>

struct Pair020deb08;
extern "C" short func_020deb08(struct Pair020deb08* obj);

struct EntryList020deb24 {
    unsigned short a;
    unsigned short pad2;
    unsigned short b;
    unsigned short pad6;
    int pad8;
    void* entries;
};

// USA: func_020deb24
extern "C" ARM void* func_020deb24(struct EntryList020deb24* list, int index) {
    int count = func_020deb08((struct Pair020deb08*)list);
    if (index < 0 || index >= count) {
        return NULL;
    }
    return (char*)list->entries + index * 0x20;
}
