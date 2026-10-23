#include <globaldefs.h>

struct Struct_0207f524 {
    void* unknown_0_;
    short unknown_4_;
};

struct Struct_0207f72c;

union Struct_0207f72c_2 {
    short unknown_0_;
    struct Struct_0207f72c* unknown1_0_;
};

struct Struct_0207f72c {
    char unknown_0_[0x18];
    union Struct_0207f72c_2 unknown_18_[4];
};

extern "C" void* func_0207f700(unsigned char* arg0, short arg1);
extern "C" struct Struct_0207f72c* func_0207f6ac(struct Struct_0207f524* arg0, int arg1);

// USA: func_0207f72c
extern "C" ARM void func_0207f72c(struct Struct_0207f524* arg0) {
    short var0 = arg0->unknown_4_;
    short var1;
    for (var1 = 0; var1 < var0; var1++) {
        struct Struct_0207f72c* var2 = (struct Struct_0207f72c*)func_0207f700((unsigned char*)arg0, var1);
        if (var2 != NULL) {
            var2->unknown_18_[0].unknown1_0_ = func_0207f6ac(arg0, var2->unknown_18_[0].unknown_0_);
            var2->unknown_18_[1].unknown1_0_ = func_0207f6ac(arg0, var2->unknown_18_[1].unknown_0_);
            var2->unknown_18_[2].unknown1_0_ = func_0207f6ac(arg0, var2->unknown_18_[2].unknown_0_);
            var2->unknown_18_[3].unknown1_0_ = func_0207f6ac(arg0, var2->unknown_18_[3].unknown_0_);
        }
    }
}
