#include <globaldefs.h>

extern "C" void func_020d8654(void);
extern "C" void* func_0202ae18(void);
extern "C" int func_0205e218(void** p);
extern "C" void* func_0202c19c(void* base);
extern "C" void func_020d8694(void);

struct Elem0205e488 {
    unsigned char pad[0x10];
    unsigned char field10;
    unsigned char pad2[0x14 - 0x11];
};

// USA: func_0205e488
extern "C" ARM int func_0205e488(void* obj) {
    func_020d8654();
    int result = 0;
    void* base = func_0202ae18();
    if (func_0205e218((void**)((char*)obj + 0x150c))) {
        result = 1;
        struct Elem0205e488* arr = (struct Elem0205e488*)func_0202c19c(base);
        for (int i = 0; i < 5; i++) {
            if (arr[i].field10 != 0xff) {
                result = 0;
                break;
            }
        }
    }
    func_020d8694();
    return result;
}
