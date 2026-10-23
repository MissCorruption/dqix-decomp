#include <globaldefs.h>

extern int data_0210782c[];

struct Struct_020425e4 { unsigned short unknown_0_; signed char unknown_2_; unsigned char unknown_3_; };

// USA: func_020425e4
extern "C" ARM int func_020425e4(int arg0, int arg1, int arg2) {
    char* var0 = (char*)data_0210782c[arg2];
    unsigned short var1 = (arg0 & 0xff) | ((arg1 & 0xff) << 8);
    unsigned int var2 = *(unsigned int*)(var0 + 0x8);
    struct Struct_020425e4* var3 = *(struct Struct_020425e4**)(var0 + 0xc);
    unsigned int var4;
    for (var4 = 0; var4 < var2; var4++) {
        if (var3->unknown_0_ == var1) return var3->unknown_2_;
        var3++;
    }
    return 0;
}
