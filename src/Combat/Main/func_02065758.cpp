#include <globaldefs.h>

struct EntryList_203dce4;
struct Entry_203dce4;
extern "C" void* func_0203cf4c(void);
extern "C" Entry_203dce4* func_0203dce4(EntryList_203dce4* list, int id);

struct Struct02065758 {
    #if defined(jpn)
    unsigned char pad0[0x1708];
#else
    unsigned char pad0[0x1838];
#endif
    int id;
    #if defined(jpn)
    unsigned char pad1[0x1787 - 0x1708 - 4];
#else
    unsigned char pad1[0x1959 - 0x1838 - 4];
#endif
    unsigned char counter;
    #if defined(jpn)
    unsigned char pad2[0x17e7 - 0x1787 - 1];
#else
    unsigned char pad2[0x19b7 - 0x1959 - 1];
#endif
    unsigned char flagByte;
};

// USA: func_02065758
extern "C" ARM int func_02065758(Struct02065758* a, int b) {
    Entry_203dce4* entry;
    int result;
    unsigned char amt;

    entry = func_0203dce4((EntryList_203dce4*)func_0203cf4c(), a->id);
    if (entry == NULL) {
        return 0;
    }
    if (a->flagByte == 0) {
        return 0;
    }
    amt = (unsigned char)b;
    result = 1;
    if (a->counter < amt) {
        a->counter = 0;
    } else {
        a->counter = a->counter - amt;
    }
    if (a->counter == 0) {
        result = 0;
        a->flagByte = 0;
    }
    return result;
}
