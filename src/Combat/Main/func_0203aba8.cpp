#include <globaldefs.h>

extern "C" void* func_020bd42c(void* arg0);
extern "C" int func_020be760(void* arg0, void* arg1);

struct Struct_0203aba8 {
    void* unknown_0_;
};

// USA: func_0203aba8
extern "C" ARM int func_0203aba8(struct Struct_0203aba8* arg0, void* arg1, void* arg2) {
    int var0;
    if (arg0->unknown_0_ == 0) {
        return 0;
    }
    func_020bd42c((char*)arg0 + 4);
    var0 = 1;
    if (arg2 != 0) {
        if (func_020be760(arg2, arg1) == 0) {
            var0 = 0;
        }
    } else {
        if (func_020be760((char*)arg0 + 0x98, arg1) == 0) {
            var0 = 0;
        }
    }
    return var0 != 0;
}
