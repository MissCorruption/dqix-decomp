#include <globaldefs.h>

struct Struct_ov031_0224c980_17 {
    char unknown_0_[0x20];
    unsigned int unknown_20_;
};

extern "C" void func_ov031_0220321c();
extern "C" void func_ov031_02203190();
extern "C" void func_ov031_022031bc(int, unsigned short, unsigned int);
extern "C" unsigned char* func_ov031_02203fdc(void*, int, int);
extern "C" void* func_ov031_02204168(int, unsigned int, void*, unsigned int);
extern "C" void func_ov031_02203a84(void*, unsigned int);
extern "C" void func_ov031_02203250();
extern Struct_ov031_0224c980_17 data_ov031_0224c980;
extern unsigned char data_ov031_0224ced6[0x12c] __attribute__((aligned(2)));

// USA: func_ov031_0220480c
extern "C" ARM void func_ov031_0220480c() {
    func_ov031_0220321c();
    func_ov031_02203190();
    func_ov031_022031bc(0x44, 0x43, data_ov031_0224c980.unknown_20_);
    unsigned char* var0 = data_ov031_0224ced6;
    unsigned char* var1 = func_ov031_02203fdc(var0, 7, 0);
    unsigned char var2 = 0xff;
    unsigned char* var3 = var1 + 1;
    *var1 = var2;
    var1 = var3;
    var1 = (unsigned char*)func_ov031_02204168(0, 0x12c, var1, var1 - var0);
    func_ov031_02203a84(var0, var1 - var0);
    func_ov031_02203250();
}
