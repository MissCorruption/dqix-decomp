#include <globaldefs.h>

extern "C" int func_ov000_0215ffa0(void* arg0);

#if defined(jpn)
enum { Enum_ov000_02162908_668 = 0x218 };
#else
enum { Enum_ov000_02162908_668 = 0x29c };
#endif

static inline void* inline_ov000_02162908(void* arg0, int arg1) {
    void* var0 = *(void**)((char*)arg0 + Enum_ov000_02162908_668);
    return (char*)var0 + 0x21c + 0x8000 + arg1 * 0x28;
}

// USA: func_ov000_02162908
extern "C" ARM int func_ov000_02162908(void* arg0, int arg1, int* arg2) {
    void* var0 = inline_ov000_02162908(arg0, arg1);
    void* var1 = *(void**)((char*)var0 + 0x14);
    int var2 = 0;
    while (var1) {
        arg2[var2++] = func_ov000_0215ffa0(var1);
        var1 = *(void**)((char*)var1 + 0x20);
    }
    return var2;
}
