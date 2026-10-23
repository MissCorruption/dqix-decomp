#include <globaldefs.h>

struct Struct_ov031_02209b58_3 { unsigned char unknown_0_[0x454]; unsigned char unknown_454_; unsigned char unknown_455_; };
struct Struct_ov031_02209b58 { unsigned char unknown_0_[0xc]; Struct_ov031_02209b58_3* unknown_c_; };
struct Struct_ov031_02209b58_2 { unsigned char unknown_0_; unsigned char unknown_1_; unsigned char unknown_2_; unsigned char unknown_3_; unsigned char unknown_4_; };

extern "C" int func_ov031_02203500(unsigned int*, void*);
extern "C" int func_ov031_02209840(void*, int, void*);
extern "C" void func_ov031_022098ac(void*, int, int);
extern "C" void func_ov031_022035e0(int, Struct_ov031_02209b58*);
extern "C" void func_ov031_02208ab0(Struct_ov031_02209b58_3*, void*);
extern "C" void func_ov031_022098d8(Struct_ov031_02209b58_3*, void*);
extern void* (*data_ov031_0224c994)(unsigned int);
extern void (*data_ov031_0224c9c0)(void*);

// USA: func_ov031_02209b58
extern "C" ARM int func_ov031_02209b58(Struct_ov031_02209b58* arg0) {
    Struct_ov031_02209b58_3* var0 = arg0->unknown_c_;
    unsigned int var1;
    Struct_ov031_02209b58_2* var2;
    while (1) {
        var2 = (Struct_ov031_02209b58_2*)func_ov031_02203500(&var1, arg0);
        if (var1 == 0) { var0->unknown_455_ = 9; return var0->unknown_455_; }
        if (var1 >= 5) break;
    }
    if (var2->unknown_0_ == 0x80) {
        if (var0->unknown_454_ != 0 && var0->unknown_455_ == 0) {
            var1 = var2->unknown_1_;
            func_ov031_022035e0(2, arg0);
            unsigned char* var3 = (unsigned char*)data_ov031_0224c994(var1);
            if (!var3) { var0->unknown_455_ = 9; return var0->unknown_455_; }
            if (func_ov031_02209840(var3, var1, arg0) != 0 || var3[0] != 1) {
                var0->unknown_455_ = 9;
            } else {
                func_ov031_02208ab0(var0, var3 + 1);
            }
            func_ov031_022098ac(var0, (int)var3, var1);
            data_ov031_0224c9c0(var3);
        } else { var0->unknown_455_ = 9; }
    } else {
        var1 = (var2->unknown_3_ << 8) + var2->unknown_4_ + 5;
        if (var1 > 0x4805) { var0->unknown_455_ = 9; return var0->unknown_455_; }
        void* var4 = data_ov031_0224c994(var1);
        if (!var4) { var0->unknown_455_ = 9; return var0->unknown_455_; }
        if (func_ov031_02209840(var4, var1, arg0) != 0) {
            data_ov031_0224c9c0(var4);
            var0->unknown_455_ = 9;
            return var0->unknown_455_;
        }
        func_ov031_022098d8(var0, var4);
    }
    return var0->unknown_455_;
}
