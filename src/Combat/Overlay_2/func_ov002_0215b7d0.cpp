#include <globaldefs.h>

extern "C" void* func_020e2ff8(void);

struct Container020e34bc;
extern "C" int func_020e34bc(struct Container020e34bc* obj, int key);

struct Entry020e3054;
extern "C" void func_020e3468(struct Entry020e3054* list, int key);

// USA: func_ov002_0215b7d0
extern "C" ARM int func_ov002_0215b7d0(char* base) {
    void* obj = func_020e2ff8();
    int status = func_020e34bc((struct Container020e34bc*)obj, 1);
    if (status == 1) {
        return 1;
    }
    if ((unsigned int)(status - 3) > 2) {
        return 0;
    }
    func_020e3468((struct Entry020e3054*)obj, 1);
    return -1;
}
