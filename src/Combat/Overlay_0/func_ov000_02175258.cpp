#include <globaldefs.h>

extern "C" void func_ov000_02174b14(void* arg0);

struct Struct_ov000_02175258 {
    char unknown_0_[0x18];
    signed char unknown_18_;
    char unknown_19_[0x24 - 0x19];
    unsigned char unknown_24_;
    char unknown_25_[0x4c - 0x25];
    int unknown_4c_;
#if defined(jpn)
    char unknown_50_[0x488 - 0x50];
#else
    char unknown1_50_[0x448 - 0x50];
#endif
};

static inline int inline_ov000_02175258(Struct_ov000_02175258* arg0) { return (arg0->unknown_24_ & 4) != 0; }

// USA: func_ov000_02175258
extern "C" ARM void func_ov000_02175258(char* arg0) {
    for (int var0 = 0; var0 < 4; var0++) {
        struct Struct_ov000_02175258* var1 = (struct Struct_ov000_02175258*)(arg0 + 0x958);
        signed char var2 = *(signed char*)(arg0 + var0 + 0x6c);
        struct Struct_ov000_02175258* var3 = var1 + var2;
        var3->unknown_24_ = var3->unknown_24_ & ~4;
        func_ov000_02174b14(arg0);
    }

    struct Struct_ov000_02175258* var4 = (struct Struct_ov000_02175258*)(arg0 + 0x958);
    for (int var5 = 0; var5 < 4; var5++) {
        signed char var6 = *(signed char*)(arg0 + var5 + 0x6c);
        struct Struct_ov000_02175258* var7 = var4 + var6;
        if (*(int*)(arg0 + 0x17c) != var7->unknown_4c_) continue;

        int var8 = inline_ov000_02175258(var7);
        signed char var9 = var7->unknown_18_;
        signed char var10 = *(signed char*)((char*)var7 + var9 + 0x10);
        if (var10 >= 0x64) {
            if (var8 == 0) return;
            var7->unknown_24_ &= ~4;
            func_ov000_02174b14(arg0);
            return;
        } else {
            if (var8 != 0) return;
            var7->unknown_24_ |= 4;
            func_ov000_02174b14(arg0);
            return;
        }
    }
}
