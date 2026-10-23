#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

extern "C" void* func_020d6c00(void);
extern "C" void func_020466e4(unsigned int* arg0, unsigned int arg1);
extern "C" int func_020aad1c(int arg0, int arg1, int arg2, int arg3);
extern "C" void func_ov017_021d6134(void* arg0, int arg1);
struct Struct_02038598_4;
extern "C" void func_020466f4(Struct_02038598_4*, unsigned int);

struct Struct_ov001_021658b8_15 { char unknown_0_[0x4b4]; int unknown_4b4_; int unknown_4b8_; };
extern struct Struct_ov001_021658b8_15 data_ov001_021658b8;

// USA: func_ov001_02163070
extern "C" ARM int func_ov001_02163070(void* arg0) {
    if (data_ov001_021658b8.unknown_4b4_ == 0) {
        return 0;
    }
    unsigned int* var0 = (unsigned int*)func_020d6c00();
    func_020466e4(var0, 0x80);
    int var1 = func_020aad1c(data_ov001_021658b8.unknown_4b4_, data_ov001_021658b8.unknown_4b8_, 0xa, 0);
    int var2 = (var1 != 0);
    func_ov017_021d6134(arg0, var2 == 0);
    if (var2 != 0) {
        func_020466f4((Struct_02038598_4*)var0, 0x80);
    }
    return 1;
}
