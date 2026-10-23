#include <globaldefs.h>

struct Struct_020bbc68_2;
struct Struct_020bbc78;
struct Struct_020bbc38 { char unknown_0_[0xc]; int unknown_c_; };

extern "C" Struct_020bbc38* func_020bbc68(Struct_020bbc68_2* arg0);
extern "C" int func_020bbc78(Struct_020bbc78* arg0);
extern "C" int func_020bbc38(Struct_020bbc38* arg0);

extern char data_0210cf94[];

// USA: func_020bbcb4
extern "C" ARM void func_020bbcb4(void) {
    char* var0 = data_0210cf94;
    Struct_020bbc38* var1 = func_020bbc68((Struct_020bbc68_2*)var0);
    if (!func_020bbc78((Struct_020bbc78*)var0)) return;
    do {
        func_020bbc38(var1);
        *(int*)(var0 + 0x10) -= var1->unknown_c_;
        var1 = func_020bbc68((Struct_020bbc68_2*)var0);
    } while (func_020bbc78((Struct_020bbc78*)var0));
}
