#include <globaldefs.h>

struct Struct_0205d81c;
struct Struct_0205d0e0;
extern "C" struct Struct_0205d0e0* func_0205d81c(struct Struct_0205d81c*, int);
struct Struct_0205d5b8;
extern "C" void func_0205d5b8(struct Struct_0205d5b8*, int);

struct Struct_0205def8 {
    char unknown_0_[0x98];
    int unknown_98_;
    int unknown_9c_;
};

// USA: func_0205def8
extern "C" ARM void func_0205def8(struct Struct_0205def8* arg0, int arg1, int arg2) {
    struct Struct_0205d0e0* var0;
    if (arg0->unknown_98_ == 0 || arg0->unknown_9c_ == 0) return;
    var0 = func_0205d81c((struct Struct_0205d81c*)arg0, arg2);
    if (var0 == 0) return;
    func_0205d5b8((struct Struct_0205d5b8*)var0, arg1 == 0);
}
