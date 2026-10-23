// USA: func_ov003_0217451c
#include <globaldefs.h>
#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif

struct Obj2081;
extern "C" void func_02081ea4(struct Obj2081* obj, int key, int enable);

extern "C" ARM void func_ov003_0217451c(char* obj) {
    short val = *(short*)(obj + 0xf00 + R(0x78, 0xfc));
    if (val < 0) return;
    func_02081ea4(*(struct Obj2081**)(obj + R(0x818, 0x89c)), val, 1);
    *(short*)(obj + 0xf00 + R(0x78, 0xfc)) = -1;
}
