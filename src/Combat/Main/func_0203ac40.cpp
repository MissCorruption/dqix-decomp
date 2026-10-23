#include <globaldefs.h>

extern "C" int func_020d84ec(void);
extern "C" void* func_020bd42c(void* value);
extern "C" int func_020be7a8(void* obj, int id, int index);

// USA: func_0203ac40
extern "C" ARM int func_0203ac40(void* obj, int a, int b, void* c) {
    char* p = (char*)obj;
    if (func_020d84ec()) {
        *(unsigned short*)(p + 0xac) = (unsigned short)a;
        *(unsigned short*)(p + 0xae) = (unsigned short)b;
        return 1;
    }
    int result = 0;
    if (*(int*)p != 0) {
        func_020bd42c(p + 0x4);
        if (c != 0) {
            if (func_020be7a8(c, a, b) != 0) result = 1;
        } else {
            if (func_020be7a8(p + 0x98, a, b) != 0) result = 1;
        }
    }
    return result;
}
