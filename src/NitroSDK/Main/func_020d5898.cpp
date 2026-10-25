#include <globaldefs.h>


extern "C" void func_020ca3ec(int arg0, void* arg1, int arg2);

struct Struct_020d5898 {
    int unknown_0_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    int unknown_8_;
    int unknown_c_;
};

extern "C" void func_020d5684(int, int, int, int, unsigned short, struct Struct_020d5898*);

// USA: func_020d5898
extern "C" ARM void func_020d5898(int arg0, int arg1, int arg2, int arg3, unsigned short arg4, unsigned short arg5) {
    struct Struct_020d5898 var0;
    func_020ca3ec(0, &var0, 0x10);
    var0.unknown_0_ = 3;
    var0.unknown_4_ = arg5;
    var0.unknown_6_ = arg5;
    func_020d5684(arg0, arg1, arg2, arg3, arg4, &var0);
}
