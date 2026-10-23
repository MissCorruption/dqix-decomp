#include <globaldefs.h>

extern "C" void* func_0202ae18(void);
extern "C" int func_0202b7d8(int* obj);

struct Entry020e3054 {
    unsigned char f0;
    unsigned char f1;
    unsigned char f2;
    unsigned char f3;
};
extern "C" Entry020e3054* func_020e3054(Entry020e3054* list, int key);

struct SearchStruct0202c1a4 {
    char pad[0x1038];
    signed char arr[16];
};
extern "C" signed char func_0202c1a4(SearchStruct0202c1a4* obj);

struct Bytes020e303c {
    unsigned char f0;
    unsigned char f1;
    unsigned char f2;
    unsigned char f3;
};
extern "C" void func_020e303c(Bytes020e303c* s);

// USA: func_020e3468
extern "C" ARM void func_020e3468(Entry020e3054* list, int key) {
    void* searchObj = func_0202ae18();
    if (!func_0202b7d8((int*)searchObj)) return;
    Entry020e3054* entry = func_020e3054(list, key);
    if (entry == NULL) return;
    signed char cur = func_0202c1a4((SearchStruct0202c1a4*)searchObj);
    if (entry->f0 != cur) return;
    func_020e303c((Bytes020e303c*)entry);
}
