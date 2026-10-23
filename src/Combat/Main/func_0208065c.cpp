#include <globaldefs.h>

struct Struct_0207f0ac_2 {
    short* unknown_0_;
    char unknown_4_[4];
    short unknown_8_;
    short unknown_a_;
    short unknown_c_;
    char unknown_e_[5];
    unsigned char unknown_13_;
    char unknown_14_[4];
};
struct Struct_0207f6ac;
struct Struct_0207f0ac { Struct_0207f0ac_2* unknown_0_; short unknown_4_; };
struct Struct_0207f524 { Struct_0207f6ac* unknown_0_; short unknown_4_; };
struct Struct_0208065c {
    void* unknown_0_;
    Struct_0207f524 unknown_4_;
    Struct_0207f0ac unknown_c_;
};

extern "C" Struct_0207f0ac_2* func_0207f0ac(Struct_0207f0ac* arg0, int arg1);
extern "C" void func_0207f7cc(struct Struct_0207f524* arg0, int arg1, int arg2);

// USA: func_0208065c
extern "C" ARM void func_0208065c(void* arg0, int arg1) {
    Struct_0208065c* var0 = (Struct_0208065c*)arg0;
    Struct_0207f0ac_2* var1 = func_0207f0ac(&var0->unknown_c_, arg1);
    if (var1 == NULL) return;
    for (unsigned char var2 = 0; var2 < var1->unknown_13_; var2++) {
        func_0207f7cc(&var0->unknown_4_, var1->unknown_0_[var2], 2);
    }
}
