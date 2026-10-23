#include <globaldefs.h>
#include "GameState/GameState.h"

struct GetElementByIndex0209bd80Element;
struct GetElementByIndex0209bd80Container;
extern "C" struct GetElementByIndex0209bd80Element* func_0209bd80(struct GetElementByIndex0209bd80Container* c, int index);

extern "C" int func_0209bd38(char* obj);


extern "C" int func_02032370(int n);

struct EntryTable0209bd94;
struct Entry0209bd94;
extern "C" struct Entry0209bd94* func_0209bd94(struct EntryTable0209bd94* table, int key);

struct Entry02073ec4 {
    unsigned short field0;
    unsigned short pad2;
    unsigned int type : 3;
    unsigned int rsvd1 : 10;
    unsigned int flags8 : 8;
    unsigned int rsvd2 : 11;
    unsigned char pad8[0x20 - 8];
};

// USA: func_02073ec4
extern "C" ARM struct Entry0209bd94* func_02073ec4(int mask, void* list) {
    GameState* battleStruct = GameState::GetInstance();
    int arr2[6];
    int arr1[6];
    int count2 = 0;
    int count1 = 0;
    int i;

    for (i = 0; i < func_0209bd38((char*)list); i++) {
        struct Entry02073ec4* entry = (struct Entry02073ec4*)func_0209bd80((struct GetElementByIndex0209bd80Container*)list, i);
        if (!entry) continue;

        if (entry->type == 0 && battleStruct->GetTimeOfDay() == 0) continue;
        if (entry->type == 1 && battleStruct->GetTimeOfDay() != 0) continue;

        {
            int flags8 = entry->flags8;
            int field0 = entry->field0;
            arr1[count1++] = field0;
            if (flags8 != 0 && (flags8 & mask) == 0) continue;
            arr2[count2++] = field0;
        }
    }

    if (count2 == 0) {
        int key;
        if (count1 == 0) return NULL;
        key = arr1[func_02032370(count1)];
        return func_0209bd94((struct EntryTable0209bd94*)list, key);
    } else {
        int key = arr2[func_02032370(count2)];
        return func_0209bd94((struct EntryTable0209bd94*)list, key);
    }
}
