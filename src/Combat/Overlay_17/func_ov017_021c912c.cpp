#include <globaldefs.h>

extern int data_ov017_021d8498;
extern "C" void func_ov017_021d451c(void* arg0, void* arg1);
extern "C" void func_ov017_021d45e0(void* arg0, void* arg1);

struct Struct_ov017_021c912c { unsigned char unknown_0_0_ : 2; unsigned char unknown_0_2_ : 6; };
struct Struct_ov017_021c912c_2 { unsigned char unknown_0_[4]; Struct_ov017_021c912c unknown_4_; };

// USA: func_ov017_021c912c
extern "C" ARM void func_ov017_021c912c(void* arg0, Struct_ov017_021c912c_2* arg1) {
    void* var0 = &data_ov017_021d8498;
    unsigned int var1 = arg1->unknown_4_.unknown_0_0_;
    if (var1 == 0) {
        func_ov017_021d451c(var0, (char*)arg1 + 6);
        return;
    }
    if (var1 != 1) return;
    func_ov017_021d45e0(var0, (char*)arg1 + 6);
}
