#include <globaldefs.h>

struct Struct_0201099c_3;
extern "C" int func_020e0434(struct Struct_0201099c_3* arg0, int arg1);
extern "C" int func_02041c08(char* arg0, int arg1, int arg2, int arg3, int arg4, int arg5);
extern "C" int func_02041ea4(char* arg0, int arg1);
extern "C" int func_02041b70(char* arg0, int arg1, const char* arg2);
extern "C" int func_02042058(char* arg0, const char* arg1);

// USA: func_ov002_021610c4
extern "C" ARM void func_ov002_021610c4(unsigned char* arg0, char* arg1, int arg2) {
#if defined(jpn)
    enum { Enum_ov002_021610c4_7186 = 0x1ada, Enum_ov002_021610c4_32 = 0x8, Enum_ov002_021610c4_7132 = 0x1aa4 };
#else
    enum { Enum_ov002_021610c4_7186 = 0x1c12, Enum_ov002_021610c4_32 = 0x20, Enum_ov002_021610c4_7132 = 0x1bdc };
#endif
    if (arg1 == NULL) return;

    int var0 = *(short*)(arg0 + Enum_ov002_021610c4_7186);
    short var1 = 0x26ad;

    if (arg2) {
        func_02041c08(arg1, var0, 8, 5, 5, 5);
    }
    func_02041ea4(arg1, var0);

    for (int var2 = 0; var2 < 2; var2++) {
        int var3 = func_020e0434((Struct_0201099c_3*)(arg0 + Enum_ov002_021610c4_32), var1++);
        func_02041b70(arg1, var2, (const char*)var3);
        if (var2 != 1) {
            func_02042058(arg1, *(char**)(arg0 + Enum_ov002_021610c4_7132));
        }
    }
}
