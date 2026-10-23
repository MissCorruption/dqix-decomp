#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov002_02160190_7174 = 0x1ace };
#else
enum { Enum_ov002_02160190_7174 = 0x1c06 };
#endif

extern "C" int func_02041c08(char* arg0, int arg1, int arg2, int arg3, int arg4, int arg5);
extern "C" int func_02041ea4(char* arg0, int arg1);

// USA: func_ov002_02160190
extern "C" ARM void func_ov002_02160190(char* arg0, char* arg1, int arg2) {
    if (arg2) {
        int var0 = *(short*)(arg0 + Enum_ov002_02160190_7174);
        func_02041c08(arg1, var0, 8, 5, 5, 5);
    }
    int var1 = *(short*)(arg0 + Enum_ov002_02160190_7174);
    func_02041ea4(arg1, var1);
}
