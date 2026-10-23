#include <globaldefs.h>

extern "C" int func_020420e8(const char* arg0, int arg1);
extern "C" int func_02041a28(char* arg0, int arg1);
extern "C" int func_02042058(char* arg0, const char* arg1);
extern "C" int func_02041acc(char* arg0, int arg1);

struct Struct_ov002_0215b8c8 { char* unknown_0_; };

// USA: func_ov002_0215b8c8
extern "C" ARM void func_ov002_0215b8c8(struct Struct_ov002_0215b8c8* arg0, const char* arg1, int arg2) {
    int var0 = func_020420e8(arg1, arg2 & 0xff);
    int var1 = (((var0 + 0x17) & ~7) - var0) >> 1;
    func_02041a28(arg0->unknown_0_, var1);
    func_02042058(arg0->unknown_0_, arg1);
    func_02041acc(arg0->unknown_0_, var1 - 5);
}
