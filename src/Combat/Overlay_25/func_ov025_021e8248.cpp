#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov025_021e8248_12 = 0x4 };
#else
enum { Enum_ov025_021e8248_12 = 0xc };
#endif

struct Struct_ov025_021ef988_34 { char unknown_0_[Enum_ov025_021e8248_12]; char* unknown_c_; };
extern struct Struct_ov025_021ef988_34 data_ov025_021ef988;

// USA: func_ov025_021e8248
extern "C" ARM int func_ov025_021e8248(unsigned char* arg0) {
    char* var0 = data_ov025_021ef988.unknown_c_ + 0x540;
    unsigned short var1 = *(unsigned short*)(var0 + 0x28);
    var1 |= 1;
    *(unsigned short*)(var0 + 0x28) = var1;
    *(unsigned char*)(var0 + 0x34) = arg0[0xc];
    short* var2 = (short*)(var0 + 0x2a);
    short* var3 = (short*)(arg0 + 8);
    unsigned char var4 = 0;
    while (var4 < 2) {
        *var2 = *var3;
        var3++;
        var2++;
        var4++;
    }
    return 1;
}
