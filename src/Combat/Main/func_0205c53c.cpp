#include <globaldefs.h>

struct Struct_0205bbcc;
extern "C" void func_0205bbcc(struct Struct_0205bbcc*);
struct Struct_0205bef8;
extern "C" void func_0205bef8(struct Struct_0205bef8*);

struct Struct_0205c53c {
    char unknown_0_[0x94];
    unsigned char unknown_94_;
    unsigned char unknown_95_;
};

// USA: func_0205c53c
extern "C" ARM void func_0205c53c(struct Struct_0205c53c* arg0) {
    func_0205bbcc((struct Struct_0205bbcc*)((char*)arg0 + 0x4));
    func_0205bef8((struct Struct_0205bef8*)((char*)arg0 + 0x54));
    arg0->unknown_94_ = 0;
    arg0->unknown_95_ = 0;
}
