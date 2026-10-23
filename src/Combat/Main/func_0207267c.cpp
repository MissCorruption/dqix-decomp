#include <globaldefs.h>
#include "std_library_functions.h"
#include "Resource/Script.h"
#include "Memory/SafeAllocator.h"

struct Struct_0207267c { short unknown_0_; int unknown_4_; };
struct Struct_02072a28;
extern "C" void func_02072a28(Struct_02072a28* arg0, Struct_0207267c* arg1);
extern "C" int func_020d2ff0(const char* arg0);
struct Struct_02108db0_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned short unknown_2_;
    char* unknown_4_;
    short* unknown_8_;
    SafeAllocator* unknown_c_;
    Struct_02072a28* unknown_10_;
};
extern Struct_02108db0_2 data_02108db0;
extern char data_020f0cf0[];

// USA: func_0207267c
extern "C" ARM int func_0207267c(Script::Parameter* arg0) {
    Struct_0207267c var0;
    var0.unknown_4_ = 0;
    var0.unknown_0_ = (arg0++)->ToInt();
    int var1 = 1;
    if (data_02108db0.unknown_8_ != NULL && data_02108db0.unknown_2_ != 0) {
        var1 = 0;
        for (unsigned short var2 = 0; var2 < data_02108db0.unknown_2_; var2++) {
            if (var0.unknown_0_ == data_02108db0.unknown_8_[var2]) var1 = 1;
        }
    }
    if (!var1) return 1;
    for (unsigned char var3 = 0; var3 < data_02108db0.unknown_0_; var3++) {
        (arg0++)->ToString();
    }
    int var4;
    const char* var5 = arg0->ToString();
    if (data_02108db0.unknown_4_ != NULL) {
        if (var5 != NULL) strcpy(data_02108db0.unknown_4_, var5);
        return 1;
    }
    var4 = 0;
    if (var5 != NULL) var4 = func_020d2ff0(var5);
    var0.unknown_4_ = (int)data_02108db0.unknown_c_->Allocate(var4 + 1);
    if (var0.unknown_4_ == 0) return 0;
    ((char*)var0.unknown_4_)[var4] = 0;
    if (var0.unknown_4_ != 0) sprintf((char*)var0.unknown_4_, data_020f0cf0, var5);
    func_02072a28(data_02108db0.unknown_10_, &var0);
    return 1;
}
