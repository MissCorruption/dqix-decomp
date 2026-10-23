#include <globaldefs.h>

struct Struct_0207f0ac;
struct Struct_0207f0ac_2;
extern "C" Struct_0207f0ac_2* func_0207f0ac(Struct_0207f0ac* arg0, int arg1);

struct Struct_0207f524;
struct Struct_0207f6ac;
extern "C" Struct_0207f6ac* func_0207f6ac(Struct_0207f524* arg0, int arg1);

struct Struct_02080468 {
    short* unknown_0_;
    char unknown_4_[0x13 - 4];
    unsigned char unknown_13_;
};

struct Struct_02080468_2 {
    char unknown_0_[4];
    short unknown_4_;
    char unknown_6_[0x18 - 6];
    int unknown_18_;
    int unknown_1c_;
    int unknown_20_;
    int unknown_24_;
    char unknown_28_[0x2a - 0x28];
    unsigned char unknown_2a_;
};

// USA: func_02080468
extern "C" ARM short func_02080468(void* arg0, int arg1) {
    short var0 = -1;
    Struct_02080468* var1 = (Struct_02080468*)func_0207f0ac((Struct_0207f0ac*)((char*)arg0 + 0xc), arg1);
    if (var1 != NULL) {
        unsigned char var2;
        for (var2 = 0; var2 < var1->unknown_13_; var2++) {
            var0 = var1->unknown_0_[var2];
            Struct_02080468_2* var3 = (Struct_02080468_2*)func_0207f6ac((Struct_0207f524*)((char*)arg0 + 4), var0);
            if (var3 == NULL) continue;
            if (var3->unknown_2a_ & 2) continue;
            if (var3->unknown_18_ == 0 && var3->unknown_1c_ == 0 && var3->unknown_20_ == 0 && var3->unknown_24_ == 0) continue;
            var0 = var3->unknown_4_;
            break;
        }
    }
    return var0;
}
