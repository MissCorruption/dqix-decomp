#include <globaldefs.h>

struct Struct_0202db64;

extern "C" ARM void func_ov031_02239368(int arg0);
extern "C" void func_ov031_02239448(unsigned short* arg0);
extern "C" void func_ov031_022393e4(int arg0);
extern "C" int func_020d507c(int arg0, struct Struct_0202db64* arg1);

struct Struct_ov031_02290d18_5 { void* unknown_0_; struct Struct_0202db64* unknown_4_; };
extern struct Struct_ov031_02290d18_5 data_ov031_02290d18;

// USA: func_ov031_02239404
extern "C" ARM int func_ov031_02239404(void) {
    func_ov031_02239368(3);
    int var0 = func_020d507c((int)func_ov031_02239448, data_ov031_02290d18.unknown_4_);
    if (var0 == 2) {
        return 1;
    }
    func_ov031_022393e4(var0);
    func_ov031_02239368(9);
    return 0;
}
