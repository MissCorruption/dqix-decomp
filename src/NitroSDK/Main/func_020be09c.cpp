#include <globaldefs.h>

extern "C" int func_020bd79c(unsigned int index);
extern "C" int func_020bd7c4(unsigned int index, void* buf, int size, int flag);
struct Obj020bda58;
typedef void (*NNSSndHeapDisposeCallback)(void* mem, unsigned int size, unsigned int data1, unsigned int data2);
extern "C" void* func_020bda58(struct Obj020bda58* obj, unsigned int size, NNSSndHeapDisposeCallback callback, int a3, int a4);
void CleanCacheRange(const void* addr, unsigned int size);

// USA: func_020be09c
extern "C" ARM void* func_020be09c(unsigned int index, NNSSndHeapDisposeCallback callback, int a3, int a4, struct Obj020bda58* obj) {
    unsigned int listEntry = func_020bd79c(index);
    if (!listEntry) {
        return 0;
    }
    if (!obj) {
        return 0;
    }
    void* newEntry = func_020bda58(obj, listEntry + 0x20, callback, a3, a4);
    if (!newEntry) {
        return 0;
    }
    if (func_020bd7c4(index, newEntry, listEntry, 0) != (int)listEntry) {
        return 0;
    }
    CleanCacheRange(newEntry, listEntry);
    return newEntry;
}
