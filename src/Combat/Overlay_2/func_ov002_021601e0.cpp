#include <globaldefs.h>

struct Struct_0201099c_3;

extern "C" int func_02041a28(char* arg0, int arg1);
extern "C" int func_020e0434(struct Struct_0201099c_3* arg0, int arg1);
extern "C" int func_02042084(char* arg0, char* arg1, int arg2, int arg3);
#if defined(jpn)
#define func_02041cc0 func_0204234c
extern "C" int func_0204234c(char* arg0, int arg1);
extern "C" int func_02042058(char* arg0, const char* arg1);
#else
extern "C" int func_02041cc0(char* arg0, int arg1);
#endif
extern "C" int func_02041a90(char* arg0, int arg1, int arg2);

// USA: func_ov002_021601e0
#if defined(jpn)
extern "C" ARM void func_ov002_021601e0(char* arg0, char* arg1, int) {
    struct Struct_0201099c_3* var0;
    int var1;

    if (arg1 == NULL) return;

    var0 = (struct Struct_0201099c_3*)(arg0 + 0x8);
    var1 = func_020e0434(var0, 0x1130);
    func_02042058(arg1, (const char*)var1);

    func_02041cc0(arg1, 0x10);
    func_02041a90(arg1, 0, 0x3a);

    var1 = func_020e0434(var0, (short)(*(short*)(arg0 + 0x1a00 + 0xce) + 0x31 + 0x1100));
    func_02042084(arg1, (char*)var1, 0x48, 0xa);
}
#else
extern "C" ARM void func_ov002_021601e0(char* arg0, char* arg1, int) {
    struct Struct_0201099c_3* var2;
    int var3;

    if (arg1 == NULL) return;

    func_02041a28(arg1, 0);

    var2 = (struct Struct_0201099c_3*)(arg0 + 0x20);
    var3 = func_020e0434(var2, 0x1130);
    func_02042084(arg1, (char*)var3, 0x48, 0);

    func_02041cc0(arg1, 0x10);
    func_02041a90(arg1, 0, 0x3a);

    var3 = func_020e0434(var2, (short)(*(short*)(arg0 + 0x1c00 + 0x6) + 0x31 + 0x1100));
    func_02042084(arg1, (char*)var3, 0x48, 0);
}
#endif
