#include <globaldefs.h>

#if defined(jpn)
#define func_0206df6c func_0206f0c0
#endif

extern "C" void func_0206df6c(void* unused, unsigned char* array, int bit, int value);

// USA: func_0206eb64
extern "C" ARM void func_0206eb64(unsigned char* obj, int bit, int value) {
    if (bit >= 0x400) {
        func_0206df6c(obj, obj + 0x8c, bit + 0x6fa, value);
        return;
    }
    func_0206df6c(obj, obj + 0x8c, bit, value);
}
