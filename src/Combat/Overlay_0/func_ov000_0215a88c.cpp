#include <globaldefs.h>

extern "C" void* func_ov000_0215e9b8(void* p);

struct Obj0215fe00;
struct Node0215fe00;
extern "C" void func_ov000_0215fe00(struct Obj0215fe00* obj, struct Node0215fe00* newNode);

struct Entry0215a88c { short a; int b; };

// USA: func_ov000_0215a88c
extern "C" ARM void func_ov000_0215a88c(void* objRaw, void* listRaw, int c) {
    void* entryRaw = func_ov000_0215e9b8(objRaw);
    struct Entry0215a88c* entry = (struct Entry0215a88c*)entryRaw;
    if (entry == 0) {
        return;
    }
    entry->a = 0;
    entry->b = 0;
    entry->a = (short)c;
    func_ov000_0215fe00((struct Obj0215fe00*)listRaw, (struct Node0215fe00*)entryRaw);
    unsigned char* obj = (unsigned char*)objRaw;
    obj[0x8000 + 0xe03] = obj[0x8000 + 0xe03] + 1;
}
