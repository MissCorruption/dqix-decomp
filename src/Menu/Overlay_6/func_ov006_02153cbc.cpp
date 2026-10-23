#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "Filesystem/FileIO.h"

struct AlchemyEntryUpdateView {
    short item;
    unsigned short selected : 1;
    unsigned short updated : 1;
    unsigned short unknownFlags : 14;
};
struct AlchemyCatalogFlagsView {
    char unknown00[0x10];
    unsigned int flags;
};
struct AlchemyUpdateWorkView {
    char unknown00[0x68];
    char updateData[0x48];
};
extern "C" {
void func_ov006_02153e54(AlchemyEntryUpdateView*);
void func_ov006_02153e8c(void*, AlchemyEntryUpdateView*);
int func_ov006_02154138(void*);
bool func_020ac2d4(int, short*, AlchemyEntryUpdateView*, int);
void func_020ac104(void*, AlchemyEntryUpdateView*, int);
AlchemyCatalogFlagsView* func_02071d60(void*, short);
bool func_020ac0b4(unsigned int*);
void func_020ac08c(unsigned int*);
int func_020ac4c0(void*);
void func_020a0228(void*, int);
int func_020ac494(void*);
}
extern "C" ARM void func_ov006_02153cbc(void* state, short selectedItem, short addedItem, void* catalog)
{
    BackgroundLoader::AddLockGlobal();
    BackgroundLoader::FreeAllocationsGlobal();
    AlchemyEntryUpdateView entry;
    func_ov006_02153e54(&entry);
    if (func_020ac2d4(0, &selectedItem, &entry, 1)) {
        entry.selected = 1;
        entry.updated = 1;
        func_020ac104(data_0211e33c, &entry, 1);
        func_ov006_02153e8c(state, &entry);
        if (catalog) {
            AlchemyCatalogFlagsView* record = func_02071d60(catalog, selectedItem);
            if (record) record->flags |= 0x400000;
        }
    }
    if (addedItem > 0) {
        func_ov006_02153e54(&entry);
        if (func_020ac2d4(0, &addedItem, &entry, 1)) {
            entry.item = addedItem;
            entry.updated = 1;
            func_020ac104(data_0211e33c, &entry, 1);
            func_ov006_02153e8c(state, &entry);
            if (catalog) {
                AlchemyCatalogFlagsView* record = func_02071d60(catalog, addedItem);
                if (record) record->flags |= 0x400000;
            }
            func_ov006_02154138(state);
        }
    }
    unsigned int count = 0;
    if (func_020ac0b4(&count)) {
        count++;
        if (count > 99999) count = 99999;
        func_020ac08c(&count);
        AlchemyUpdateWorkView work;
        func_020ac4c0(&work);
        func_020a0228(work.updateData, 1);
        func_020ac494(&work);
    }
    BackgroundLoader::RemoveLockGlobal();
}
