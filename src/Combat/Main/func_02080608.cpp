#include <globaldefs.h>

struct Struct_0207f0ac;
struct Struct_0207f524;

struct Struct_02080608 {
    short* unknown_0_;
    char unknown_4_[0x13 - 0x4];
    unsigned char unknown_13_;
};

extern "C" struct Struct_02080608* func_0207f0ac(struct Struct_0207f0ac* arg0, int arg1);
extern "C" void func_0207f7ac(struct Struct_0207f524* arg0, int arg1, int arg2);

// USA: func_02080608
extern "C" ARM void func_02080608(void* arg0, int arg1) {
    struct Struct_02080608* var0;
    unsigned char var1;
    var0 = func_0207f0ac((struct Struct_0207f0ac*)((char*)arg0 + 0xc), arg1);
    if (var0 == NULL) return;
    for (var1 = 0; var1 < var0->unknown_13_; var1++) {
        func_0207f7ac((struct Struct_0207f524*)((char*)arg0 + 4), var0->unknown_0_[var1], 2);
    }
}
