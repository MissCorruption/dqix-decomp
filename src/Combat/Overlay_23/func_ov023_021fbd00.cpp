#include <globaldefs.h>

extern "C" void func_ov023_021f6ed8(void*);
extern "C" void* func_ov011_021845f8(void*, int);
extern "C" void func_ov023_021dc134(void*, int, int);
extern "C" void func_ov023_021dbfd0(void*, void*);

struct Struct_ov023_021fbd00 {
    char unknown_0_[4];
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned short unknown_8_;
    char unknown_a_[0x16];
    char unknown_20_[0x48];
    int unknown_68_;
#if defined(jpn)
    char unknown_6c_[0x6a4];
#else
    char unknown1_6c_[0x728];
#endif
    unsigned short unknown_794_;
    char unknown_796_[2];
    unsigned char unknown_798_;
};

// USA: func_ov023_021fbd00
extern "C" ARM int func_ov023_021fbd00(Struct_ov023_021fbd00* arg0, void* arg1, unsigned short arg2, unsigned short arg3, int arg4, int arg5, unsigned char arg6) {
    func_ov023_021f6ed8(arg0);
    arg0->unknown_4_ = 0x10;
    arg0->unknown_6_ = arg2;
    arg0->unknown_8_ = arg3;
    void* var0 = func_ov011_021845f8(arg1, arg0->unknown_8_);
    if (var0 == NULL) return 0;
    func_ov023_021dc134(arg0->unknown_20_, -1, 0);
    arg0->unknown_794_ = arg0->unknown_794_ | (unsigned short)(arg4 | 0x4000);
    func_ov023_021dbfd0(arg0->unknown_20_, (char*)var0 + 4);
    arg0->unknown_68_ = arg5;
    arg0->unknown_798_ = arg6;
    return 1;
}
