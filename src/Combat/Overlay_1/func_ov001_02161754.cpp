#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" int func_ov017_021d60f4(void*);

#include "Combat/EntryGetterTypes.h"
#include "World/Object3D.h"
struct EntryList_203dce4 { char pad[0xc]; struct Entry_203dce4* entries[0x20]; };
extern "C" void* func_0203cf4c(void);
extern "C" struct Entry_203dce4* func_0203dce4(struct EntryList_203dce4* list, int id);
extern "C" int func_02040528(int* obj);
extern "C" void* func_0203d004(void*);
extern const char data_ov001_021657d4[];

struct Container02040404;
extern "C" int func_02040404(struct Container02040404* container, const char* name);
struct Container0204039c;
extern "C" void func_0204039c(struct Container0204039c* obj, int index);

struct State02041244;
extern "C" void func_0204128c(struct State02041244* obj);
extern "C" void func_02040504(int* obj);

struct SlotArray0203dd10;
extern "C" void func_0203dd10(SlotArray0203dd10* obj, unsigned int index, int value);

struct TableEntry_02161754 { int type; int field4; char pad8[8]; };
struct DataOv001_02161754 { char pad0[4]; struct TableEntry_02161754* table; };
extern DataOv001_02161754 data_ov001_02165880;

// USA: func_ov001_02161754
extern "C" ARM int func_ov001_02161754(void* self) {
    int id = func_ov017_021d60f4(self);
    if (id < 0) {
        return 0;
    }
    if (data_ov001_02165880.table[id].type != 6 && data_ov001_02165880.table[id].type != 2) {
        return 0;
    }

    void* ctxRaw = func_0203cf4c();
    struct EntryList_203dce4* list = (struct EntryList_203dce4*)ctxRaw;
    struct Entry_203dce4* entry = func_0203dce4(list, data_ov001_02165880.table[id].field4);
    if (entry == NULL) {
        return 0;
    }

    if (*(int*)((char*)entry + 0x14) != 0) {
        int field = func_02040528(&entry->flags);
        struct Container02040404* c = (struct Container02040404*)func_0203d004(ctxRaw);
        char buf[0x10];
#if defined(jpn)
        sprintf(buf, data_ov001_021657d4, field + 16);
#else
        sprintf(buf, data_ov001_021657d4, field + 4);
#endif
        int idx = func_02040404(c, buf);
        func_0204039c((struct Container0204039c*)c, idx);
    } else {
        if (entry->child18 != 0) {
            ((Object3D*)((unsigned char*)entry->child18))->Destroy();
            func_0204128c((struct State02041244*)entry->child18);
        }
    }

    func_02040504(&entry->flags);
    func_0203dd10((SlotArray0203dd10*)list, data_ov001_02165880.table[id].field4, 0);
    return 1;
}
