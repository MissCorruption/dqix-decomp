#include <globaldefs.h>

extern "C" void func_ov031_02238694(void* arg0);
extern "C" void func_ov031_0223b07c(void);
extern "C" int func_ov031_0221aff8(int arg0);
extern "C" int func_ov031_02236474(void);
unsigned long long GetCurrentTimestamp(void);
extern unsigned char* data_ov031_02290d20;

struct Struct_ov031_0223a4cc { int unknown_0_; int unknown_4_; int unknown_8_; int unknown_c_; int unknown_10_; int unknown_14_; unsigned char unknown_18_; };

// USA: func_ov031_0223a4cc
extern "C" ARM void func_ov031_0223a4cc(void* arg0, struct Struct_ov031_0223a4cc* arg1) {
    data_ov031_02290d20 = (unsigned char*)arg0;
    func_ov031_02238694((char*)arg0 + 0xb00);
    *(unsigned short*)(data_ov031_02290d20 + 0x648) = 0;
    *(unsigned short*)(data_ov031_02290d20 + 0x64a) = 0;
    data_ov031_02290d20[0xa90] = 1;
    data_ov031_02290d20[0xa91] = 1;
    *(int*)(data_ov031_02290d20 + 0xa9c) = 0;
    func_ov031_0223b07c();
    *(int*)(data_ov031_02290d20 + 0xab4) = arg1->unknown_0_;
    *(int*)(data_ov031_02290d20 + 0xab8) = arg1->unknown_4_;
    *(int*)(data_ov031_02290d20 + 0xabc) = arg1->unknown_8_;
    *(int*)(data_ov031_02290d20 + 0xac0) = arg1->unknown_c_;
    *(int*)(data_ov031_02290d20 + 0xac4) = arg1->unknown_10_;
    *(int*)(data_ov031_02290d20 + 0xac8) = arg1->unknown_14_;
    data_ov031_02290d20[0xa92] = arg1->unknown_18_;
    data_ov031_02290d20[0xacc] = 2;
    GetCurrentTimestamp();
    func_ov031_0221aff8((int)(data_ov031_02290d20 + 0x24c + 0x400));
    GetCurrentTimestamp();
    *(int*)(data_ov031_02290d20 + 0xaa4) = func_ov031_02236474();
}
