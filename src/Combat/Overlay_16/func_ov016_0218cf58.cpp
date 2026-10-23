#include <globaldefs.h>

extern "C" unsigned int _u32_div_f(unsigned int arg0, unsigned int arg1);
void CleanCacheRange(const void* addr, unsigned int size);
extern "C" int func_020d1fb0(int arg0, int arg1);
extern "C" void func_020d2038(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8, int arg9);
extern "C" int func_020d1f70(int arg0, int arg1, int arg2, int arg3, int arg4);
extern "C" int func_020d1ee4(int arg0, int arg1, int arg2, int arg3);
extern "C" void func_020d24c4(int);
extern "C" void func_ov016_0218cf34(void);

struct Struct_ov016_0219d144_4 {
    #if defined(jpn)
    unsigned char unknown_0_[0x20];
#else
    unsigned char unknown1_0_[0x24];
#endif
    int unknown_24_;
    unsigned char unknown_28_[4];
    void* unknown_2c_;
};
extern Struct_ov016_0219d144_4 data_ov016_0219d144;

// USA: func_ov016_0218cf58
extern "C" ARM void func_ov016_0218cf58(unsigned int arg0, unsigned int arg1) {
    unsigned int var0 = _u32_div_f(0x00ffb0ff, arg0);
    Struct_ov016_0219d144_4* var1 = &data_ov016_0219d144;

    unsigned int var2 = (var1->unknown_24_ * arg1) << 1;
    unsigned int var3 = (arg1 >> 6) * (var0 << 1);

    CleanCacheRange(var1->unknown_2c_, var2);
    func_020d1fb0(1, 0);

    func_020d2038(0, 1, (int)var1->unknown_2c_, 1,
        0, (var1->unknown_24_ * arg1) >> 1, 0x7f, 0, var0, 0x40);

    func_020d1f70(0, var3, var3, (int)func_ov016_0218cf34, 0);
    func_020d1ee4(1, 0, 1, 0);
    func_020d24c4(1);
}
