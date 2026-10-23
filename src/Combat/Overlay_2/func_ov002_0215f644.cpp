#include <globaldefs.h>

#if defined(jpn)
enum { CursorOffset = 0x1ac6, NamesOffset = 0x8 };
#else
enum { CursorOffset = 0x1bfe, NamesOffset = 0x20 };
#endif

struct Container020e0310;
extern "C" int func_020e0434(struct Container020e0310* c, int key);
extern "C" int func_02042058(char* dst, const char* src);
extern "C" void func_ov002_02156080(void* self, short* arr, short* out);

struct StackTmp0215f644 {
    short pad0;
    short arr[9];
};

// USA: func_ov002_0215f644
extern "C" ARM void func_ov002_0215f644(void* self, char* dst, int) {
    if (dst == NULL) {
        return;
    }
    struct StackTmp0215f644 tmp;
    func_ov002_02156080(self, tmp.arr, &tmp.pad0);
    int idx = *(short*)((char*)self + CursorOffset);
    short val = tmp.arr[idx];
    int key = (short)(val + 0xfb4);
    int fmt = func_020e0434((struct Container020e0310*)((char*)self + NamesOffset), key);
    func_02042058(dst, (const char*)fmt);
}
