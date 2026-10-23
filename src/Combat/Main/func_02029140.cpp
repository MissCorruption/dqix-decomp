#include <globaldefs.h>

#if defined(jpn)
#define func_02029140 func_02028a20
#endif

extern "C" void func_0204c684(void*);
extern "C" int func_0204f41c(void* arg0, int arg1, int arg2, void* arg3, int arg4, int arg5, void* arg6, void* arg7, int arg8);

#if defined(jpn)

extern void* data_020fe9a4;
#else
#include "Graphics/GlyphBitmapContext.h"
#endif
extern unsigned char data_020e7380;

struct Struct_02029140 {
    char unknown_0_[0x8];
    void* unknown_8_;
    char unknown_c_[0xa8 - 0xc];
    unsigned short unknown_a8_;
    unsigned short unknown_aa_;
    char unknown_ac_[0xc5 - 0xac];
    unsigned char unknown_c5_;
    char unknown_c6_[0xe0 - 0xc6];
};

// USA: func_02029140
extern "C" ARM void func_02029140(int arg0, int arg1, void* arg2) {
#if defined(jpn)
    if (data_020fe9a4 == 0) return;
#else
    if (glyphBitmapContext.unknown_0_ == NULL) return;
#endif
    if (arg0 >= 0x100 || arg1 >= 0xc0) return;
    if (arg2 == 0) return;

    Struct_02029140 var0;
    func_0204c684(&var0);

    unsigned char var1 = var0.unknown_c5_;
    var0.unknown_a8_ = 0x20;
    var0.unknown_aa_ = 0x18;
    unsigned char var2 = var1 & ~4;
#if defined(jpn)
    var0.unknown_8_ = data_020fe9a4;
#else
    var0.unknown_8_ = glyphBitmapContext.unknown_0_;
#endif
    var0.unknown_c5_ = var2 & ~0x10;

#if defined(jpn)
    int var3 = *(((int*)&data_020fe9a4) + 1);
#else
    int var3 = glyphBitmapContext.unknown_4_;
#endif
    unsigned char var4 = (&data_020e7380)[var3];

    short var5;
    short var6;
    func_0204f41c(&var0, (short)arg0, (short)arg1, arg2, 8, var4, &var5, &var6, 1);
}
