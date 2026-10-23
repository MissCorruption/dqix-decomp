#include <globaldefs.h>

#if defined(jpn)
#define LOW_REGION(j, u) (j)
#else
#define LOW_REGION(j, u) (u)
#endif

extern "C" void func_ov023_021dd404(void* arg0);
extern "C" void func_ov023_021dd344(void* arg0);
extern "C" void func_ov023_021dcd78(void* arg0);

struct Struct_ov006_021570fc {
    unsigned char unknown_0_[LOW_REGION(0x1054, 0x1258)];
    unsigned short unknown_1258_;
};

// USA: func_ov006_021570fc
extern "C" ARM int func_ov006_021570fc(struct Struct_ov006_021570fc* arg0, int arg1) {
    int var0 = (arg0->unknown_1258_ & 0x800) != 0;
    if (arg1) {
        arg0->unknown_1258_ |= 0x800;
    } else {
        arg0->unknown_1258_ &= ~0x800;
    }
    if (!var0 && arg1) {
        func_ov023_021dd404((char*)arg0 + LOW_REGION(0x164, 0x2e4) + 0x800);
        func_ov023_021dd344((char*)arg0 + LOW_REGION(0x164, 0x2e4) + 0x800);
    }
    if (var0 && !arg1) {
        func_ov023_021dcd78((char*)arg0 + LOW_REGION(0x164, 0x2e4) + 0x800);
    }
    return var0;
}
