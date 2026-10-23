#include <globaldefs.h>

struct Struct_ov031_02222f44_2;
extern "C" void func_ov031_0223bd28(Struct_ov031_02222f44_2* arg0, int arg1, unsigned int* arg2, unsigned int* arg3);
extern "C" void func_ov031_0223bbd8(void*, int, int, int);
extern "C" void func_ov031_0223e2b8(void*, int);
extern "C" void func_ov031_02236e38(void*);

struct Struct_ov031_02236d98 { void* unknown_0_[5]; int unknown_14_; };
struct Struct_ov031_02290d04_6 { void* unknown_0_; Struct_ov031_02236d98* unknown_4_; void* unknown_8_; void* unknown_c_; };
extern Struct_ov031_02290d04_6 data_ov031_02290d04;

// USA: func_ov031_02236d98
extern "C" ARM void func_ov031_02236d98(void* arg0) {
    int var0;
    unsigned int var1;
    func_ov031_0223bd28((Struct_ov031_02222f44_2*)data_ov031_02290d04.unknown_4_->unknown_0_[4], 0, (unsigned int*)&var0, &var1);
    var0 += 8;
    if (var0 < 0xb0 || var0 > 0x100) {
        func_ov031_0223bbd8(data_ov031_02290d04.unknown_4_->unknown_0_[4], -1, var0, 0x21);
        return;
    }
    var0 = 0xb0;
    func_ov031_0223bbd8(data_ov031_02290d04.unknown_4_->unknown_0_[4], -1, var0, 0x21);
    func_ov031_0223e2b8(arg0, (int)func_ov031_02236e38);
}
