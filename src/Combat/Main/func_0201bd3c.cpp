#include <globaldefs.h>

struct Struct_02017a94;
struct Struct_0201b600;
struct Struct_02013380 { unsigned short unknown_0_; unsigned short unknown_2_; };

extern "C" Struct_0201b600* func_0201b600(Struct_02017a94*, int, unsigned short);
extern "C" void func_02013380(Struct_02013380* arg0, int arg1, int arg2);

// USA: func_0201bd3c
extern "C" ARM void func_0201bd3c(Struct_02017a94* arg0, unsigned int arg1, int arg2) {
    Struct_0201b600* var0 = func_0201b600(arg0, arg2, arg1);
    int var1 = 0;
    if (arg2 >= 0) var1 = arg2 & 0xff;
    if (var0 == 0) return;
    func_02013380((Struct_02013380*)var0, var1, 0);
}
