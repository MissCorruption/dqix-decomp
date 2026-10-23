#include <globaldefs.h>

extern "C" void func_ov023_021f65b4(void*, void*, short, short);
extern char* data_ov004_0217101c;

#if defined(jpn)
enum { Enum_ov004_02165ef4_0 = 1 };
#else
enum { Enum_ov004_02165ef4_0 = 0 };
#endif

// USA: func_ov004_02165ef4
extern "C" ARM void func_ov004_02165ef4(void* arg0) {
    short var0 = *(short*)((&data_ov004_0217101c)[Enum_ov004_02165ef4_0] + 0x4c);
    short var1 = (var0 + 7) / 8;
    func_ov023_021f65b4(arg0, (void*)0x5b, 0, var1);
}
