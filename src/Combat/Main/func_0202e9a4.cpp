#include <globaldefs.h>

short fix32sin(int x);
short fix32cos(int x);

struct Struct_0202df68;

// USA: func_0202e9a4
extern "C" ARM void func_0202e9a4(struct Struct_0202df68* arg0, int arg1) {
    *(int*)((char*)arg0 + 0x58) = arg1;
    *(int*)((char*)arg0 + 0x5c) = fix32sin((int)(((long long)arg1 * 0x47 + 0x800) >> 12));
    *(int*)((char*)arg0 + 0x60) = fix32cos((int)(((long long)arg1 * 0x47 + 0x800) >> 12));
}
