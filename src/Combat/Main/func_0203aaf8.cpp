#include <globaldefs.h>

struct Obj020bdac0;
extern "C" int func_020bdac0(struct Obj020bdac0* obj);
extern "C" void* func_020bd42c(void*);
extern "C" int func_020bdcc4(void*, int, int);
extern "C" int func_020bdc98(void*, int);

// USA: func_0203aaf8
extern "C" ARM int func_0203aaf8(void* obj, void* arg1, int* out) {
    char* p = (char*)obj;
    if (*(void**)p == NULL) return 0;
    func_020bd42c(p + 0x4);
    if (out != NULL) {
        func_020bdcc4(arg1, 3, *(int*)p);
        *out = func_020bdac0(*(struct Obj020bdac0**)p);
        func_020bdcc4(arg1, 4, *(int*)p);
    } else {
        func_020bdc98(arg1, *(int*)p);
    }
    return 1;
}
