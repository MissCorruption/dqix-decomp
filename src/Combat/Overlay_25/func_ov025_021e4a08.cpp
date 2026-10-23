#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov025_021e4a08_12 = 0x4 };
#else
enum { Enum_ov025_021e4a08_12 = 0xc };
#endif

#include "Filesystem/BackgroundLoader.h"

struct Struct_ov025_021ef988_9 { char unknown_0_[Enum_ov025_021e4a08_12]; void* unknown_c_; };
extern struct Struct_ov025_021ef988_9 data_ov025_021ef988;

extern "C" void* func_ov025_021e8a54(char* arg0);
extern "C" void func_ov025_021e278c(int arg0, char* arg1);
extern "C" int func_ov025_021e25a4(char* arg0);
extern "C" void func_ov025_021eb05c(void* arg0, int arg1);

// USA: func_ov025_021e4a08
extern "C" ARM int func_ov025_021e4a08(unsigned char* arg0) {
    char var0[0x50];
    (int)BackgroundLoader::GetInstance();
    func_ov025_021e8a54((char*)data_ov025_021ef988.unknown_c_);
    int var1 = *(int*)(arg0 + 8);
    func_ov025_021e278c(var1, var0);
    int var2 = func_ov025_021e25a4(var0);
    func_ov025_021eb05c(data_ov025_021ef988.unknown_c_, var2);
    return 1;
}
