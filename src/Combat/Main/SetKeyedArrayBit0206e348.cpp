#include <globaldefs.h>

#if defined(jpn)
#define func_0206df6c func_0206f0c0
#endif

short FindShortIndex0206e3e8(int unused, int key);
extern "C" void func_0206df6c(void* unused, unsigned char* array, int bit, int value);

// USA: func_0206e348
ARM void SetKeyedArrayBit0206e348(unsigned char* obj, int index, int value) {
    int idx = FindShortIndex0206e3e8((int)obj, (short)index);
    if (idx - 0x11 < 0) return;
    func_0206df6c(obj, obj + 0x8c, idx + 0xbf1, value);
}
