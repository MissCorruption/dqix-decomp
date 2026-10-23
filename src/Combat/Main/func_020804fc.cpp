#include <globaldefs.h>

struct Struct_0207f0ac;
struct Struct_0207f524;

struct Struct_020804fc_2 {
    short* unknown_0_;
    char unknown_4_[0x13 - 0x4];
    unsigned char unknown_13_;
};

struct Struct_020804fc {
    char unknown_0_[0x2a];
    unsigned char unknown_2a_;
};

extern "C" struct Struct_020804fc_2* func_0207f0ac(struct Struct_0207f0ac* arg0, int arg1);
extern "C" struct Struct_020804fc* func_0207f6ac(struct Struct_0207f524* arg0, int arg1);

// USA: func_020804fc
extern "C" ARM void func_020804fc(void* arg0, int arg1) {
    struct Struct_020804fc_2* var0;
    unsigned char var1;
    var0 = func_0207f0ac((struct Struct_0207f0ac*)((char*)arg0 + 0xc), arg1);
    if (var0 == NULL) return;
    for (var1 = 0; var1 < var0->unknown_13_; var1++) {
        struct Struct_020804fc* var2 = func_0207f6ac((struct Struct_0207f524*)((char*)arg0 + 4), var0->unknown_0_[var1]);
        if (var2 != NULL) {
            var2->unknown_2a_ &= ~4;
        }
    }
}
