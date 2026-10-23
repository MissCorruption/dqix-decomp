#include <globaldefs.h>

struct Struct_0205d0e0_2 {
    char unknown_0_[0x98];
    int unknown_98_;
    void* unknown_9c_;
    char unknown_a0_[0x14];
    unsigned char unknown_b4_;
};
extern "C" void* func_0205d888(struct Struct_0205d0e0_2* arg0);
extern "C" int func_0204c7cc(unsigned char* arg0);
extern "C" void func_0205bc24(void* arg0, int arg1);

// USA: func_ov000_02175440
extern "C" ARM void func_ov000_02175440(void* arg0) {
    void* var0 = func_0205d888((struct Struct_0205d0e0_2*)((char*)arg0 + 0x188));
    if (var0 == 0) return;
    if (!func_0204c7cc((unsigned char*)var0)) return;
    if (((unsigned char*)var0)[0xc5] & 0x2) return;
    func_0205bc24((char*)arg0 + 0x18c, -1);
}
