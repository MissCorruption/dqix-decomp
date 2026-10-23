#include <globaldefs.h>

struct SlotRange {
    void* field_0;
    void* field_4;
    void* begin;
    void* field_c;
};
struct SlotStorage {
    unsigned char data[0x200];
    SlotRange first;
    SlotRange second;
    char* node;
    void* array;
};
extern SlotStorage* data_ov031_02290d28;
extern "C" void* func_ov031_0223cf4c(int, int);
extern "C" void func_ov031_0223beec(int, int, int);
extern "C" char* func_ov031_0223d858(void);
extern "C" void* func_ov031_0223daa4(int, int);
extern "C" int func_ov031_0223d918(char*);
extern "C" int func_ov031_0223d908(char*);
typedef int (*TailCallWithRange)(char*, void*);
typedef void* (*SlotArrayWithResult)(int, int, int);
static inline SlotStorage* GetSlot(int offset) {
    return (SlotStorage*)((char*)data_ov031_02290d28 + offset);
}

// USA: func_ov031_0223b79c
extern "C" ARM void func_ov031_0223b79c(void) {
    data_ov031_02290d28 = (SlotStorage*)func_ov031_0223cf4c(0x450, 4);
    int index = 0;
    int offset = 0;
    do {
        void* array = reinterpret_cast<SlotArrayWithResult>(func_ov031_0223beec)(32, (int)GetSlot(offset)->data, 16);
        GetSlot(offset)->array = array;
        char* node = func_ov031_0223d858();
        GetSlot(offset)->node = node;
        void* first = func_ov031_0223daa4(index, 64);
        GetSlot(offset)->first.begin = first;
        char* second = (char*)func_ov031_0223daa4(index, 127) + 8;
        GetSlot(offset)->second.begin = second;
        reinterpret_cast<TailCallWithRange>(func_ov031_0223d918)(GetSlot(offset)->node, &GetSlot(offset)->first);
        reinterpret_cast<TailCallWithRange>(func_ov031_0223d908)(GetSlot(offset)->node, &GetSlot(offset)->second);
        offset += sizeof(SlotStorage);
        index++;
    } while (index < 2);
}
