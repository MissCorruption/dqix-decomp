#include <globaldefs.h>
#include "std_library_functions.h"
extern "C" int func_020421a0(void);
extern "C" void func_02046608(int, int, void*, int, int, int, int);
// USA: func_02098f70
extern "C" void func_02098f70(int* cursor, void* data, int size, int advance) {
    char** cur = (char**)cursor;
    int base = func_020421a0();
    memcpy(*cur, (void*)size, advance);
    *cur += advance;
    func_02046608(base, 0xc, data, *(int*)cur, 0xe3, 0, 1);
    *cur += strlen(*cur);
}
