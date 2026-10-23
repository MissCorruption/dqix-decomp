#include <globaldefs.h>

struct Struct_ov031_02220190 {
    unsigned char unknown_0_[4];
    unsigned char unknown_4_;
    unsigned char unknown_5_;
    unsigned short unknown_6_;
    int unknown_8_;
};
extern "C" int func_ov031_02206f3c();
extern "C" void func_ov031_0220781c(unsigned int arg0, unsigned char* arg1);
extern "C" int func_ov031_02220178(void* arg0, void* arg1, void* arg2, int arg3, int arg4);

// USA: func_ov031_02220190
extern "C" THUMB int func_ov031_02220190(void* arg0, int arg1, int arg2) {
    Struct_ov031_02220190 var0;
    var0.unknown_4_ = 8;
    var0.unknown_5_ = 2;
    var0.unknown_8_ = -1;
    var0.unknown_6_ = 0x1e6;
    func_ov031_0220781c(func_ov031_02206f3c(), var0.unknown_0_);
    return func_ov031_02220178(arg0, &var0.unknown_4_, var0.unknown_0_, arg1, arg2);
}
