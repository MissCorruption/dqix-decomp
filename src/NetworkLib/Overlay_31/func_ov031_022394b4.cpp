#include <globaldefs.h>

extern "C" void func_ov031_022393e4(int arg0);
extern "C" ARM void func_ov031_02239368(int arg0);
extern "C" ARM void func_ov031_02239518(void* arg0);
extern "C" int func_020d68dc(int arg0, unsigned int arg1, void* arg2);

struct Struct_ov031_022394b4 {
    unsigned char unknown_0_[0x13ac];
    int (*unknown_13ac_)(void*, void*);
    unsigned char unknown_13b0_[0x10];
    void* unknown_13c0_;
};
struct Struct_ov031_02290d18_8 { void* unknown_0_; Struct_ov031_022394b4* unknown_4_; };
extern struct Struct_ov031_02290d18_8 data_ov031_02290d18;

// USA: func_ov031_022394b4
extern "C" ARM int func_ov031_022394b4(void) {
    func_ov031_02239368(3);
    Struct_ov031_022394b4* var0 = data_ov031_02290d18.unknown_4_;
    unsigned int var1 = var0->unknown_13ac_((void*)((char*)var0 + 0x13c0), var0);
    int var2 = func_020d68dc((int)func_ov031_02239518, var1,
                                          (void*)((char*)data_ov031_02290d18.unknown_4_ + 0x13c0));
    if (var2 == 2) {
        return 1;
    }
    func_ov031_022393e4(var2);
    func_ov031_02239368(9);
    return 0;
}
