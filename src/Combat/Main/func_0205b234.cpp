#include <globaldefs.h>
#include "Resource/MessageGlyphSlot.h"

struct Struct_020424e4;
struct Struct_0205b234_2 { unsigned char* unknown_0_; Struct_020424e4* unknown_4_; unsigned char unknown_8_; };

#if defined(jpn)
extern "C" FontCharacter* func_02042a50(unsigned char arg0, const char* arg1);
extern "C" void func_0205b36c(Struct_0205b234_2* arg0, FontCharacter* arg1, short arg2, short arg3, int arg4, int arg5);

// JPN: func_0205b234 (fixed-width Shift-JIS text)
extern "C" ARM void func_0205b234(Struct_0205b234_2* arg0, short arg1, short arg2, const char* arg3, unsigned char arg4, int arg5) {
    if (arg0->unknown_0_ == 0 || arg0->unknown_4_ == 0 || arg0->unknown_8_ == 0 || arg3 == 0) return;
    unsigned char var0 = arg4;
    while (*arg3 != 0) {
        FontCharacter* var1 = func_02042a50(var0, arg3);
        if (var1 != 0) func_0205b36c(arg0, var1, arg1, arg2, var0 & 0xff, arg5);
        unsigned char var2 = *arg3;
        if ((var2 >= 0x81 && var2 <= 0x9f) || (var2 >= 0xe0 && var2 <= 0xea)) arg3++;
        arg3++;
        arg1 += var0;
    }
}
#else
extern "C" int func_02042648(int);
extern "C" int func_020424e4(int, int);
extern "C" int func_020425e4(int, int, int);
extern "C" FontCharacter* func_020425b4(int arg0, int arg1);
extern "C" void func_0205b36c(Struct_0205b234_2* arg0, FontCharacter* arg1, short arg2, short arg3, unsigned char arg4, unsigned char arg5);

// USA: func_0205b234
extern "C" ARM int func_0205b234(Struct_0205b234_2* arg0, short arg1, short arg2, const char* arg3, unsigned char arg4, unsigned char arg5) {
    if (arg0->unknown_0_ == 0) return 0;
    if (arg0->unknown_4_ == 0) return 0;
    if (arg0->unknown_8_ == 0) return 0;
    if (arg3 == 0) return 0;
    unsigned char var3 = func_02042648(arg5);
    int var4 = 0xff;
    short var5 = arg1;
    while (*arg3 != 0) {
        int var6;
        signed char var7 = var3 + 1;
        var6 = func_020424e4((int)arg3, arg5) & 0xff;
        var5 += func_020425e4(var4, var6, arg5);
        int var8 = 1;
        if (var6 != 0xff) {
            FontCharacter* var9 = func_020425b4(var6, arg5);
            func_0205b36c(arg0, var9, var5, arg2, arg4, arg5);
            var7 = var9->width + 1;
            var8 = var9->byteLength;
        }
        var4 = var6;
        arg3 += var8;
        var5 += var7;
    }
    return var5 - arg1;
}
#endif
