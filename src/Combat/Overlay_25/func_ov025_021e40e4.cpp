#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov025_021e40e4_12 = 0x4 };
#else
enum { Enum_ov025_021e40e4_12 = 0xc };
#endif

#include "Filesystem/BackgroundLoader.h"
#include "std_library_functions.h"

struct Struct_ov025_021ef988_9 { char unknown_0_[Enum_ov025_021e40e4_12]; void* unknown_c_; };
extern struct Struct_ov025_021ef988_9 data_ov025_021ef988;
extern char data_ov025_021ef7ef;

extern "C" void* func_ov025_021e8a54(char* arg0);
extern "C" int func_ov025_021e25a4(char* arg0);
extern "C" void func_ov025_021eb05c(void* arg0, int arg1);

// USA: func_ov025_021e40e4
extern "C" ARM int func_ov025_021e40e4(unsigned char* arg0) {
    char var0[0x50];
    (int)BackgroundLoader::GetInstance();
    func_ov025_021e8a54((char*)data_ov025_021ef988.unknown_c_);
    int var1 = *(int*)(arg0 + 8);
    sprintf(var0, &data_ov025_021ef7ef, var1);
    int var2 = func_ov025_021e25a4(var0);
    func_ov025_021eb05c(data_ov025_021ef988.unknown_c_, var2);
    return 1;
}
