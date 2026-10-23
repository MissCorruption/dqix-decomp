#include <globaldefs.h>

extern "C" void func_ov004_0215482c(void*);
extern "C" void* func_ov004_02153944(void*, int);
extern "C" int func_ov023_021f809c(void*, void*);
struct Struct_ov004_02154984 { int unknown_0_[3]; };
struct Struct_ov004_0216fa80 { Struct_ov004_02154984 unknown_0_; };
extern Struct_ov004_0216fa80 data_ov004_0216fa80;

// USA: func_ov004_02154984
extern "C" ARM int func_ov004_02154984(void* arg0) {
    func_ov004_0215482c(arg0);
    Struct_ov004_0216fa80 var0;
    var0.unknown_0_ = data_ov004_0216fa80.unknown_0_;
    int* var1 = var0.unknown_0_.unknown_0_;
    int var2 = 0;
    while (var1[var2] >= 0) {
        void* var3 = func_ov004_02153944(arg0, var1[var2]);
        if (var3) {
            func_ov023_021f809c(var3, arg0);
            var2++;
        }
    }
    return 0;
}
