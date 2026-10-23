#include <globaldefs.h>

struct Struct_0205a254;
struct Struct_0205a330;
struct Struct_020e2604;

extern "C" void func_020e269c(void* arg0);
extern "C" void func_0205a370(struct Struct_0205a254* arg0, int arg1);
extern "C" void func_0205a330(struct Struct_0205a330* arg0, int arg1);
extern "C" void func_020e2604(struct Struct_020e2604* arg0);

struct Struct_020e263c {
    char unknown_0_[0x15];
    unsigned char unknown_15_;
};
extern "C" struct Struct_020e263c* func_0205a3d0(struct Struct_0205a254* arg0, int arg1);

struct Struct_020e263c_2 {
    char unknown_0_[0x1c];
    unsigned short unknown_1c_;
    unsigned char unknown_1e_;
    char unknown_1f_;
    struct Struct_0205a254* unknown_20_;
};

// USA: func_020e263c
extern "C" ARM void func_020e263c(struct Struct_020e263c_2* arg0, int arg1) {
    if (arg0->unknown_20_ == NULL) {
        return;
    }
    func_020e269c(arg0);
    func_0205a370(arg0->unknown_20_, arg0->unknown_1c_);
    unsigned char var0 = arg0->unknown_1e_;
    struct Struct_020e263c* var1 = func_0205a3d0(arg0->unknown_20_, arg0->unknown_1c_);
    if (var1 != NULL) {
        var1->unknown_15_ |= var0;
    }
    func_0205a330((struct Struct_0205a330*)arg0->unknown_20_, arg1);
    func_020e2604((struct Struct_020e2604*)arg0);
}
