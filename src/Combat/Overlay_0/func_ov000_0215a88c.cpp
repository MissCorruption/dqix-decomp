#include <globaldefs.h>

extern "C" void* func_ov000_0215e9b8(void* arg0);

struct Struct_ov000_0215a88c_3;
struct Struct_ov000_0215a88c;
extern "C" void func_ov000_0215fe00(struct Struct_ov000_0215a88c_3* arg0, struct Struct_ov000_0215a88c* arg1);

struct Struct_ov000_0215a88c_2 { short unknown_0_; int unknown_4_; };

// USA: func_ov000_0215a88c
extern "C" ARM void func_ov000_0215a88c(void* arg0, void* arg1, int arg2) {
    void* var0 = func_ov000_0215e9b8(arg0);
    struct Struct_ov000_0215a88c_2* var1 = (struct Struct_ov000_0215a88c_2*)var0;
    if (var1 == 0) {
        return;
    }
    var1->unknown_0_ = 0;
    var1->unknown_4_ = 0;
    var1->unknown_0_ = (short)arg2;
    func_ov000_0215fe00((struct Struct_ov000_0215a88c_3*)arg1, (struct Struct_ov000_0215a88c*)var0);
    unsigned char* var2 = (unsigned char*)arg0;
    var2[0x8000 + 0xe03] = var2[0x8000 + 0xe03] + 1;
}
