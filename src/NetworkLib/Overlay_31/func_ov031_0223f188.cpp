#include <globaldefs.h>

extern int data_ov031_02290dc4;
extern int data_ov031_02290dbc;
extern "C" void* func_ov031_0223fa0c(void);
extern "C" void func_ov031_0223fa20(void);
struct Struct_ov031_0223edb4;
extern "C" void func_ov031_0223edb4(void* arg0, struct Struct_ov031_0223edb4* arg1);
extern "C" int func_ov031_02240ee8(struct Struct_ov031_0223edb4* arg0);

struct Struct_ov031_0223f188 { int unknown_0_; };

// USA: func_ov031_0223f188
extern "C" ARM int func_ov031_0223f188(Struct_ov031_0223f188* arg0, struct Struct_ov031_0223edb4* arg1) {
    func_ov031_0223fa0c();
    int var0 = func_ov031_02240ee8(arg1);
    arg0->unknown_0_ = var0;
    data_ov031_02290dc4 = var0;
    func_ov031_0223fa20();
    if (arg0->unknown_0_ >= 0) {
        return 1;
    }
    func_ov031_0223edb4(arg0, arg1);
    data_ov031_02290dbc = 3;
    return 0;
}
