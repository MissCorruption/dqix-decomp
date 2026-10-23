#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

void DrainWriteBuffer();
extern "C" int func_ov027_021dcf44(int arg0, int arg1, int arg2);
void CleanInvalidateCacheRange(const void* where, unsigned int len);

// USA: func_ov027_021dab00
extern "C" ARM int func_ov027_021dab00(int arg0, int arg1, void* arg2) {
    CleanInvalidateCacheRange(arg2, (arg0 + 0x1f) & ~0x1f);
    DrainWriteBuffer();
    return func_ov027_021dcf44((int)arg2, arg0, arg1);
}
