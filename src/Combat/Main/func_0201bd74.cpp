#include <globaldefs.h>

struct Struct_02017a94;
struct Struct_0201b600;
struct Struct_02013380 { unsigned short unknown_0_; unsigned short unknown_2_; };

extern "C" Struct_0201b600* func_0201b600(Struct_02017a94*, int, unsigned short);

// USA: func_0201bd74
extern "C" ARM int func_0201bd74(Struct_02017a94* arg0, unsigned int arg1, int arg2) {
    Struct_0201b600* var0 = func_0201b600(arg0, arg2, arg1);
    if (var0 != 0) {
        return (((Struct_02013380*)var0)->unknown_2_ & 4) == 0;
    }
    return 0;
}
