#include <globaldefs.h>

struct Struct_0209aa54_2 { unsigned short unknown_0_; unsigned short unknown_2_; };
struct Struct_0209aa54_5 {
    unsigned char unknown_0_[0xc];
    struct Struct_0209aa54_2 unknown_c_[17];
};
struct Struct_0209aa54 {
    unsigned char unknown_0_[0x100];
    struct Struct_0209aa54_5 unknown_100_[13];
    unsigned char unknown_510_[0xc];
    int unknown_51c_[16];
};
struct Struct_0209aa54_3 {
    struct Struct_0209aa54* unknown_0_;
};
struct Struct_0209aa54_4 {
#if defined(jpn)
    unsigned char unknown_0_[0x8b8];
#else
    unsigned char unknown1_0_[0x950];
#endif
    int unknown_950_;
};

extern "C" int func_02053c6c(unsigned char* arg0);
extern "C" void func_02083b60(unsigned char* arg0, int arg1);

// USA: func_0209aa54
extern "C" ARM int func_0209aa54(struct Struct_0209aa54_3* arg0, unsigned char* arg1, unsigned char* arg2,
                                int arg3) {
    if (&arg0->unknown_0_->unknown_100_[0].unknown_c_[0] == NULL) return 0;
    if (&arg0->unknown_0_->unknown_51c_[0] == NULL) return 0;
    struct Struct_0209aa54_4* var0 = (struct Struct_0209aa54_4*)func_02053c6c(arg1);
    if (var0 == 0) return 0;
    int var1 = var0->unknown_950_;
    int var2;
    unsigned short var3;
    int var4 = 0;
    for (var2 = 0; var2 < arg0->unknown_0_->unknown_51c_[var1]; var2++) {
        int var5 = arg0->unknown_0_->unknown_100_[var1].unknown_c_[var2].unknown_2_;
        int var6 = *(unsigned short*)((unsigned char*)var0 + var0->unknown_950_ * 2 + 0x100 + 0x6c);
        var3 = arg0->unknown_0_->unknown_100_[var1].unknown_c_[var2].unknown_0_;
        if (var6 >= var5 && var5 > arg3) {
            func_02083b60((unsigned char*)var0, var3);
            arg2[var4] = (unsigned char)var3;
            var4++;
        }
    }
    return var4;
}
