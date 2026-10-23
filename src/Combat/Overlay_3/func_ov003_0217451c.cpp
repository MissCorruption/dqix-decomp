// USA: func_ov003_0217451c
#include <globaldefs.h>
#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif

struct Struct_0207fdcc_2;
extern "C" void func_02081ea4(struct Struct_0207fdcc_2* arg0, int arg1, int arg2);

extern "C" ARM void func_ov003_0217451c(char* arg0) {
    short var0 = *(short*)(arg0 + 0xf00 + R(0x78, 0xfc));
    if (var0 < 0) return;
    func_02081ea4(*(struct Struct_0207fdcc_2**)(arg0 + R(0x818, 0x89c)), var0, 1);
    *(short*)(arg0 + 0xf00 + R(0x78, 0xfc)) = -1;
}
