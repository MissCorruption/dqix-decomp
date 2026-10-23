#include <globaldefs.h>
#if defined(jpn)
enum { Enum_0203c2c0_32 = 0x60, Enum_0203c2c0_40 = 0x10 };
#else
enum { Enum_0203c2c0_32 = 0x20, Enum_0203c2c0_40 = 0x28 };
#endif

extern "C" void func_0200ee94(void* arg0, int arg1, int arg2, void* arg3, void* arg4);
extern "C" char* func_0203be64(char* arg0);
extern "C" char* func_0203be78(char* arg0);
extern "C" void func_0203c304(char* arg0);

// USA: func_0203c2c0
extern "C" ARM char* func_0203c2c0(char* arg0) {
    func_0200ee94(arg0 + 4, Enum_0203c2c0_32, Enum_0203c2c0_40, (void*)func_0203be64, (void*)func_0203be78);
    func_0203c304(arg0);
    return arg0;
}
