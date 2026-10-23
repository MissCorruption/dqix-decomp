#include <globaldefs.h>

struct Struct_02043600_2 {
    char unknown_0_[0xae];
    short unknown_ae_;
};

struct Struct_02043600 {
    short unknown_0_, unknown_2_, unknown_4_, unknown_6_;
};

extern "C" void func_020435a8(int, void*, void*, int);

inline short inline_02043600(const Struct_02043600* arg0) { return arg0->unknown_0_; }

#if defined(jpn)
#define func_02043600 func_02043de0
#endif

// JPN: func_02043de0
// USA: func_02043600
extern "C" ARM void func_02043600(Struct_02043600_2* arg0, const Struct_02043600* arg1) {
    if (arg0 == NULL || arg1 == NULL) return;
    short var0 = inline_02043600(arg1);
    short var1 = arg1->unknown_2_;
    short var2 = var0 + arg1->unknown_4_;
    short var3 = var1 + arg1->unknown_6_;
    var1 -= arg0->unknown_ae_ * 8;
    var3 -= arg0->unknown_ae_ * 8;
    var2 -= 8;
    var3 -= 8;
#if !defined(jpn)
    if (var0 < 0 || var1 < 0 || var3 < 0 || var2 < 0) return;
#endif
    for (short var4 = var0 + 8; var4 < var2; var4 += 8)
        func_020435a8((int)arg0, (void*)var4, (void*)var1, 1);
    for (short var5 = var0 + 8; var5 < var2; var5 += 8)
        func_020435a8((int)arg0, (void*)var5, (void*)var3, 6);
    for (short var6 = var1 + 8; var6 < var3; var6 += 8)
        func_020435a8((int)arg0, (void*)var0, (void*)var6, 3);
    for (short var7 = var1 + 8; var7 < var3; var7 += 8)
        func_020435a8((int)arg0, (void*)var2, (void*)var7, 4);
    func_020435a8((int)arg0, (void*)var0, (void*)var1, 0);
    func_020435a8((int)arg0, (void*)var2, (void*)var1, 2);
    func_020435a8((int)arg0, (void*)var0, (void*)var3, 5);
    func_020435a8((int)arg0, (void*)var2, (void*)var3, 7);
}

#if defined(jpn)
#undef func_02043600
#endif
